/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 11:50:58 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/16 12:46:09 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb); 
	else 
	{
		while (result <= nb)
		{
			i++;
			result = i * i;
		}
		return (i - 1);
	}
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(36));
	return (0);
}
