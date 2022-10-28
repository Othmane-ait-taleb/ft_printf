/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:56:47 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 13:58:29 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char *putchar_count(char *s, char c, s_control *control)
{
    write(1, &c, 1);
    control->printed++;
    s++;
    return (s);
}

char *put_str(char *s, char *arg, s_control *control)
{
    while (*arg)
        arg = putchar_count(arg, *arg, control);
    s++;
    return (s);
}
