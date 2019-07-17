/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 12:49:01 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 11:52:33 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{	
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
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

#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(6));
	return (0);
}
