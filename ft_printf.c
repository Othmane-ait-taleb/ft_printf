/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:06:18 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 14:06:51 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*temp;
	char	*s;
	s_flags	*flags;

	flags = mall_flags();
	va_start(args, str);
	s = (char *)str;
	while (*s)
	{
		temp = s;
		// its gives the @ of the  char after the first %
		s = first_arg(s);
		// we print char one by one untl we find a % and we stop
		print_norm_char(temp, s - temp, flags);
		//we store all flags in our stract and we return the adress of the next normal char
		s = get_flag(s, flags);
		// now we are in a arg we get the arg to print the parameter depand on it
		s = print_d_arg(s, args, args);
		

	}
}

int	main(int argc, char const *argv[])
{
	ft_printf("abcd%ssd");
	return (0);
}
