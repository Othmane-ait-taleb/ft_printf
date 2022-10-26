/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:39:49 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 12:02:48 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_norm_char(char *s, size_t size, s_flags *flag)
{
	size_t	i;

	i = 0;
	while (s[i] && i < size)
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%')
			{
				myft_putchar('%', flag);
				i++;
			}
		}
		else
			myft_putchar(s[i], flag);
		i++;
	}
	return (0);
}
