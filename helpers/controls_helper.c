/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:03:52 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 10:15:51 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

s_control* initialize_controls()
{
    s_control *controls;

    controls = (s_control *)malloc(sizeof(s_control*));
    controls->printed = 0;
    return (controls);
}