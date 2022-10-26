/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:48:38 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 12:02:39 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	myft_putchar(char ch, s_flags *flag)
{
	write(1, &ch, 1);
	flag->count++;
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	while ((*s != '\0') && (*s != ch))
	{
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return ((char *) NULL);
}