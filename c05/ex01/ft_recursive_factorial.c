/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 16:40:47 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/15 17:11:07 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	 else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(-5));
	return (0);
}

