/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtoefin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:37:36 by crtoefin          #+#    #+#             */
/*   Updated: 2021/12/24 18:21:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_index
{
	size_t	i;
	int		j;
	int		*ptr_j;
}	t_index;

int		ft_printf(const char *c, ...);
int		ft_putchar(char c, int *ptr_j);
void	ft_putstr(char *s, int *ptr_j);
void	ft_puthexptr(unsigned long long int n, int *ptr_j);
void	ft_putlowhexnbr(unsigned int n, int *ptr_j);
void	ft_putuphexnbr(unsigned int n, int *ptr_j);
void	ft_putptr(void *ptr, int *ptr_j);
void	ft_putnbr(int n, int *ptr_j);
void	ft_putunsignednbr(unsigned int n, int *ptr_j);

#endif