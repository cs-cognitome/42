/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rev_print.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 14:39:09 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/20 11:14:48 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		while(--i >= 0)
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}
