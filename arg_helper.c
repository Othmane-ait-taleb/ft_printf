/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:22 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 14:05:53 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*first_arg(char *str)
{
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '%')
		{
			str++;
			return (str);
		}
		if (*str == '%')
			str++;
		str++;
	}
	return (str);
}

char	*print_d_arg(char *s, va_list arg, s_flags *flag)
{
	if (*s == 'c')
		return (print_char(s, arg, flag));
	else if (*s == 's')
		return (print_str(s, va_arg(arg, char *), flag));
	else if (*s == 'd' || *s == 'i')
		return (print_integer(s, va_arg(arg, int), flag));
	else if (*s == 'u')
		return (print_unsigned(s, arg, flag));
	else if (*s == 'p')
		return (print_pointer(s, arg, flag));
	else if (*s == 'x' || *s == 'X')
		return (print_hex(s, arg, flag));
	else if (*s == '%')
		return (print_str(s, "%", flag));
	return (s);
}
