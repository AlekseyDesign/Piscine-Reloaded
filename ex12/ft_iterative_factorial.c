/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:57:00 by jsprigga          #+#    #+#             */
/*   Updated: 2018/11/22 07:20:32 by jsprigga        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int rs;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 2;
	rs = 1;
	while (i <= nb)
	{
		rs *= i;
		i++;
	}
	return (rs);
}
