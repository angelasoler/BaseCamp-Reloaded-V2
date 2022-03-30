/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:42:39 by asoler            #+#    #+#             */
/*   Updated: 2022/03/30 14:39:34 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	long	result;

	result = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_factorial(0));
}
