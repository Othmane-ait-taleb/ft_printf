/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:20:00 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/26 13:15:58 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

s_flags	*mall_flags(void)
{
	s_flags	*flag;

	flag = malloc(sizeof(s_flags));
	if (NULL == flag)
		return (NULL);
	flag->type = '\0';
	flag->count = 0;
	flag->hassh = 0;
	flag->minus = 0;
	flag->plus = 0;
	flag->dote = 0;
	flag->maxstr = 0;
	flag->espace = 0;
	flag->upcase = 0;
	flag->wdth = 0;
	flag->zero = 0;
	return (flag);
}

char	*get_flag(char *s, s_flags *flag)
{
	while (!ft_strchr("cspdiuxX%", *s))
	{
		analize_flags(s, flag);
        // if its number and dote in struct we count it as the maxmm value of char
		if (ft_isdigit(*s) && flag->dote)
			flag->maxstr = ft_atoi(s);
		// TODO : ?? 
		else if (ft_isdigit(*s))
			flag->wdth = ft_atoi(s);
		while (ft_isdigit(*s) && ft_isdigit(*(s + 1)))
			s++;
		s++;
	}
	if (flag->minus || flag->dote)
		flag->zero = 0;
	flag->type = *s;
	return (s);
}

void	analize_flags(char *s, s_flags *flag)
{
	if (*s == '-')
		flag->minus = 1;
	else if (*s == '.')
		flag->dote = 1;
	else if (*s == '#')
		flag->hassh = 1;
	else if (*s == ' ')
		flag->espace = 1;
	else if (*s == '+')
		flag->plus = 1;
	else if (*s == '0')
		flag->zero = 1;
}