/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:48:41 by sujo              #+#    #+#             */
/*   Updated: 2021/05/11 12:17:39 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int			get_next_line(int fd, char **line);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char *s1, char const *s2);
size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
