/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmateus <lmateus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:11:28 by lmateus           #+#    #+#             */
/*   Updated: 2022/03/22 18:05:15 by lmateus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str;
	size_t			i;

	str1 = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (!str || !n)
		return (dst);
	i = 0;
	while (i < n && str[i] != '\0')
	{
		str1[i] = str[i];
			i++;
	}
	str1[i] = '\0';
	return (dst);
}
