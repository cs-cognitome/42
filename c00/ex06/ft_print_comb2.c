/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 04:52:37 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 04:47:21 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(int counter);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int counter_one;
	int counter_two;

	counter_one = 0;
	counter_two = 0;
	while (counter_one < 99)
	{
		while (counter_two <= 99)
		{
			ft_printnbr(counter_one);
			ft_putchar(' ');
			ft_printnbr(counter_two);
			if ((counter_one < 98) || (counter_two < 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			counter_two++;
		}
		counter_one++;
		counter_two = counter_one + 1;
	}
}

void	ft_printnbr(int counter)
{
	if (counter > 9)
	{
		ft_putchar((counter / 10) + 48);
		ft_putchar((counter % 10) + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(counter + 48);
	}
}
