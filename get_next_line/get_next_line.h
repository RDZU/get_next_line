/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:11:55 by razamora          #+#    #+#             */
/*   Updated: 2024/04/27 17:20:07 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500
# endif

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s1, int ch);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
