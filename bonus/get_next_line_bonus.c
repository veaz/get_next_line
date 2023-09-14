/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:01:30 by vaguilar          #+#    #+#             */
/*   Updated: 2023/09/14 20:19:09 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line_bonus.h"

int	ft_nl(char *src)
{
	int	x;

	x = 0;
	if (!src)
		return (-1);
	while (src[x] != '\0')
	{
		if (src[x] == '\n')
			return (x);
		x++;
	}
	return (-1);
}

char	*ft_delete_line(char **src, int nl, int lensrc, int use)
{
	char	*new_src;

	new_src = NULL;
	if (use == 1)
		new_src = ft_substr(*src, nl + 1, lensrc - nl + 1);
	free(*src);
	return (new_src);
}

char	*ft_new_line(char **src)
{
	char	*ptr;
	int		lensrc;
	int		nl;

	ptr = NULL;
	lensrc = ft_strlen(*src);
	nl = ft_nl(*src);
	if (nl >= 0)
	{
		ptr = ft_substr(*src, 0, nl + 1);
		*src = ft_delete_line(src, nl, lensrc, 1);
	}
	else if (lensrc == 0)
		*src = ft_delete_line(src, nl, lensrc, 0);
	else if (lensrc > 0)
	{
		ptr = ft_substr(*src, 0, lensrc);
		*src = ft_delete_line(src, nl, lensrc, 0);
	}
	return (ptr);
}

char	*ft_buf_value(char **src, char *buf, int fd)
{
	char	*temp;
	int		count;

	while (ft_nl(*src) < 0)
	{
		count = read(fd, buf, BUFFER_SIZE);
		if (count > 0)
		{
			buf[count] = '\0';
			temp = ft_strjoin(*src, buf);
			free(*src);
			*src = temp;
		}
		else
			break ;
	}
	if (count < 0 || *src == NULL)
		return (NULL);
	return (ft_new_line(src));
}

char	*get_next_line(int fd)
{
	static char	*src[256];
	char		*buf;
	char		*new_line;

	buf = NULL;
	if (fd < 0 || BUFFER_SIZE < 1 || fd > 256)
		return (NULL);
	if (ft_nl(src[fd]) < 0)
	{
		buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf)
			return (NULL);
		new_line = ft_buf_value(&src[fd], buf, fd);
		free(buf);
	}
	else
	{
		new_line = ft_new_line(&src[fd]);
	}
	return (new_line);
}
