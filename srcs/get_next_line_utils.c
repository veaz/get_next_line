/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:20:19 by vaguilar          #+#    #+#             */
/*   Updated: 2023/09/14 20:19:28 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

int	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = lendst;
	i = 0;
	if (lendst < dstsize - 1 && dstsize > 0)
	{
		while (src[i] != '\0' && lendst + i < dstsize - 1)
		{
		dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (lendst > dstsize)
		lendst = dstsize;
	return (lendst + lensrc);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	pos;

	i = 0;
	pos = 0;
	while (src[i] != '\0')
		i++;
	if (dstsize != 0)
	{
		while (src[pos] != '\0' && pos < (dstsize - 1))
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		len;
	int		lens1;
	int		lens2;	

	if (!s1)
		s1 = "\0";
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = lens1 + lens2;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	ft_strlcat(ptr, s2, len + 1);
	return (ptr);
}

char	*ft_substr(char *s, size_t start, size_t len)
{
	char	*ptr;
	size_t	lens;
	size_t	x;

	lens = ft_strlen(s);
	x = 0;
	if (!s)
		return (NULL);
	if (len > lens)
		len = lens;
	ptr = malloc(len + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (start < lens && x < len && s[start])
	{
		ptr[x] = s[start];
		x++;
		start++;
	}
	ptr[x] = '\0';
	return (ptr);
}
