/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:12:05 by razamora          #+#    #+#             */
/*   Updated: 2024/04/27 17:16:37 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s1, int ch)
{
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] == (char)ch)
			return ((char *)&s1[i]);
		i++;
	}
	if ((char)ch == '\0')
		return ((char *)&s1[i]);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s1 & !s2)
		return (NULL);
	i = 0;
	j = 0;
	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	if (s1)
	{
		while (s1[j] != '\0')
			new[i++] = s1[j++];
	}
	j = 0;
	if (s2)
	{
		while (s2[j] != '\0')
			new[i++] = s2[j++];
	}
	new[i] = '\0';
	free(s1);
	return (new);
}
