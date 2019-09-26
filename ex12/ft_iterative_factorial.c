/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:42:40 by apalaz            #+#    #+#             */
/*   Updated: 2018/10/04 15:05:06 by apalaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	if (nb >= 0 && nb < 13)
	{
		result = 1;
		while (nb > 0)
		{
			result = result * nb;
			nb = nb - 1;
		}
	}
	else
		result = 0;
	return (result);
}
