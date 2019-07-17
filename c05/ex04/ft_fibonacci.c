/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fibonacci.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 19:39:41 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/16 10:22:19 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{ 
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else 
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
int main ()
{
	printf("%d", ft_fibonacci(12));
	return (0);
}
