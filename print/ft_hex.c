/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:37:36 by crtoefin          #+#    #+#             */
/*   Updated: 2021/12/26 17:21:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexptr(unsigned long long int n, int *ptr_j)
{
	char	c;

	if (n >= 16)
	{
		ft_puthexptr(n / 16, ptr_j);
		ft_puthexptr(n % 16, ptr_j);
	}
	else
	{
		c = "0123456789abcdef"[n];
		ft_putchar(c, ptr_j);
	}
}

void	ft_putlowhexnbr(unsigned int n, int *ptr_j)
{
	char	c;

	if (n >= 16)
	{
		ft_putlowhexnbr(n / 16, ptr_j);
		ft_putlowhexnbr(n % 16, ptr_j);
	}
	else
	{
		c = "0123456789abcdef"[n];
		ft_putchar(c, ptr_j);
	}
}

void	ft_putuphexnbr(unsigned int n, int *ptr_j)
{
	char	c;

	if (n >= 16)
	{
		ft_putuphexnbr(n / 16, ptr_j);
		ft_putuphexnbr(n % 16, ptr_j);
	}
	else
	{
		c = "0123456789ABCDEF"[n];
		ft_putchar(c, ptr_j);
	}
}
