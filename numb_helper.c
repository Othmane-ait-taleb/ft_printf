/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numb_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:50:00 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 14:00:57 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	rtr;

	i = 0;
	rtr = 0;
	while (ft_isdigit(str[i]))
	{
		rtr = rtr * 10;
		rtr = rtr + str[i] - 48;
		i++;
	}
	return (rtr);
}