/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 17:13:25 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 20:23:47 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (power <= 0 || nb == 0)
		return (0);
	if (power == 0 || (power == 0 && nb < 0))
		return (1);
	else 
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	return (result);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(3, 2));
	return (0);
}

