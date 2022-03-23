/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmateus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:59:28 by lmateus           #+#    #+#             */
/*   Updated: 2022/03/14 17:11:00 by lmateus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
}