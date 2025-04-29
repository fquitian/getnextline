/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:45:03 by frbarbos          #+#    #+#             */
/*   Updated: 2025/02/19 14:05:58 by frbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *line, char *buff);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*new_line(char *line);
char	*ft_get_line(int fd, char *line);
char	*ft_get_next_line(char	*line);

#endif
