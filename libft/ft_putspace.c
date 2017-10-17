/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putspace.c                                        :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:37:57 by mmeziyan          #+#    #+#             */
/*   Updated: 2017/01/15 18:24:31 by mmeziyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putspace(int n)
{
	while (n-- > 0)
	{
		ft_putchar(' ');
	}
}