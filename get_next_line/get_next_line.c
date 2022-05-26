/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmateus <lmateus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:32:17 by lmateus           #+#    #+#             */
/*   Updated: 2022/05/26 14:46:12 by lmateus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)ft_calloc(len1 + len2 + 1, sizeof(*str));
	if (str == 0)
		return (0);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		str[len1] = s2[i];
		len1++;
	}
	str[len1] = '\0';
	if (s1)
		free(s1);
	return (str);
}

char	*get_next_line(int fd)
{
	char	*buf;
	int		nbr;
	char	*str;

	str = NULL;
	buf = ft_calloc((BUFFER_SIZE / BUFFER_SIZE) + 1, sizeof(char));
	nbr = read(fd, buf, (BUFFER_SIZE / BUFFER_SIZE));
	if (nbr >= 1)
		str = ft_calloc(2, sizeof(char));
	while (nbr > 0 && buf[0] != '\n' && buf[0])
	{
		str = ft_strjoin (str, buf);
		nbr = read(fd, buf, (BUFFER_SIZE / BUFFER_SIZE));
	}
	if (buf[0] == '\n')
		str = ft_strjoin (str, buf);
	free (buf);
	return (str);
}
