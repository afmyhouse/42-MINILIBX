/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:45:25 by myoung            #+#    #+#             */
/*   Updated: 2016/10/19 15:32:35 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_swapchar(char *p1, char *p2)
{
	*p1 ^= *p2;
	*p2 ^= *p1;
	*p1 ^= *p2;
}
