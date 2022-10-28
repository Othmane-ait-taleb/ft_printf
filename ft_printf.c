/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:39:22 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 13:56:35 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
// abcd %c adf
int ft_printf(const char *str, ...)
{
    char *s;
    va_list args;
    s_control *controls;

    controls = initialize_controls();
    s = (char *)str;
    va_start(args, str);
    while (*s)
    {
        if (*s == '%')
        {
            s++;
            if (*(s) == 'c')
                s = putchar_count(s,va_arg(args,int),controls);
            else if (*(s) == 's')
                s = put_str(s,va_arg(args,char *),controls);
            else if (*(s) == 'p')
                s = put_pointer(s,(unsigned long)va_arg(args,void *),controls);
            else if (*(s) == 'd' || *(s) == 'i')
                s = put_dicimal(s,va_arg(args,int),controls);
            else if (*(s) == 'u')
                s = put_dicimal(s,va_arg(args,unsigned int),controls);
            else if (*(s) == 'x' || *(s) == 'X')
                s = put_hexa(s,(long long)va_arg(args,unsigned int),controls);
            else if (*(s) == '%')
               s = putchar_count(s,'%',controls);
        }       
        else
           s = putchar_count(s,*s,controls);
    }
return (controls->printed);
}
