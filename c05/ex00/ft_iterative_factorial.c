/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 15:08:18 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 20:03:38 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	i = 1;
	factorial = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
} 

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(10));
	return (0);
}
