/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:37:36 by crtoefin          #+#    #+#             */
/*   Updated: 2021/12/26 17:21:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *ptr_j)
{
	write(1, &c, 1);
	*ptr_j += 1;
	return (1);
}

void	ft_putnbr(int n, int *ptr_j)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", ptr_j);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', ptr_j);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, ptr_j);
		ft_putnbr(n % 10, ptr_j);
	}
	else
		ft_putchar(n + '0', ptr_j);
}

void	ft_putptr(void *ptr, int *ptr_j)
{
	unsigned long long int	n;

	n = (unsigned long long int) ptr;
	ft_putchar('0', ptr_j);
	ft_putchar('x', ptr_j);
	ft_puthexptr(n, ptr_j);
}

void	ft_putstr(char *s, int *ptr_j)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		ft_putchar(s[i], ptr_j);
		i++;
	}
}

void	ft_putunsignednbr(unsigned int n, int *ptr_j)
{
	if (n >= 10)
	{
		ft_putunsignednbr(n / 10, ptr_j);
		ft_putunsignednbr(n % 10, ptr_j);
	}
	else
		ft_putchar(n + '0', ptr_j);
}
