/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 11:54:58 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 12:56:06 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		 ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return(0);
	if (nb > 1)
	{
		while (!(nb % i == 0))
			i++;
		if (nb == i)
			return (1);
		else 
			return (0);
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	int next_prime;
	
	next_prime = nb; 
	if (next_prime == 0 || next_prime  == 1)
		return (0);
	if (next_prime > 1)
	{
		while (!(ft_is_prime(next_prime)))
			next_prime++;
	}
	return next_prime;		
}
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(12));
	return (0);
}
