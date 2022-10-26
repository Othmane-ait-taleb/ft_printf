/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_flags_helper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:09:53 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 14:33:58 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*put_char(char *s, va_list args, s_flags *flag)
{
	char	ch;

	ch = va_arg(args, int);
	if (flag->wdth && !flag->minus)
	{
		print_spaces(flag->wdth - 1, flag);
		ft_putchar(ch, flag);
	}
	else if (flag->wdth && flag->minus)
	{
		ft_putchar(ch, flag);
		print_spaces(flag->wdth - 1, flag);
	}
	else
		ft_putchar(ch, flag);
	s++;
	return (s);
}

void	print_spaces(int n, s_flags *flag)
{
	while (n > 0)
	{
		if (flag->zero)
			ft_putchar('0', flag);
		else
			ft_putchar(' ', flag);
		n--;
	}
}
