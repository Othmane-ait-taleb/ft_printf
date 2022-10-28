/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:40:15 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 12:50:43 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct s_control
{
    int printed;
} s_control;
char        *putchar_count(char *s, char c, s_control *control);
s_control   *initialize_controls();
char        *put_str(char *s, char *arg, s_control *control);
char        *put_pointer(char *s, unsigned long pointer, s_control *control);
char        *put_dicimal(char *s, long long nbr, s_control *control);
char        *put_unsigned(char *s, unsigned int nbr, s_control *control);
char        *put_hexa(char *s, long long nbr, s_control *control);


#endif