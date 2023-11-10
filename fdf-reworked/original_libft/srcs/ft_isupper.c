/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 22:05:20 by myoung            #+#    #+#             */
/*   Updated: 2016/10/19 15:32:26 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_isupper(int c)
{
	if (c >= 0101 && c <= 0132)
		return (1);
	return (0);
}
