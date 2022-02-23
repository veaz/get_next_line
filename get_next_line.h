/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:19:20 by vaguilar          #+#    #+#             */
/*   Updated: 2022/02/23 14:19:22 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "fcntl.h"
# include "unistd.h" //read
# include "stdio.h" //printf, DELETE plis sr
# include <stdlib.h> //malloc

char	*get_next_line(int fd);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_substr(char *s, size_t start, size_t len);

int		ft_strlen(const char *s);

#endif