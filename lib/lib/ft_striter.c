/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemahie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:04:00 by jlemahie          #+#    #+#             */
/*   Updated: 2017/11/22 20:17:58 by jlemahie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;
	int	p;

	p = ft_strlen(s);
	i = 0;
	while (i < p)
	{
		f(s);
		s++;
		i++;
	}
}