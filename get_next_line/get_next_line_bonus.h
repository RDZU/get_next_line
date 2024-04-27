/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:08:25 by razamora          #+#    #+#             */
/*   Updated: 2024/04/27 17:09:49 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500
# endif
# ifndef FD_MAX
#  define FD_MAX 1024
# endif

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s1, int ch);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
