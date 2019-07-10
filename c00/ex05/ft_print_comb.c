/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/05 00:19:45 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 04:44:18 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int h;
	int d;
	int u;

	h = '0';
	while (h <= '7')
	{
		d = h + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(h);
				ft_putchar(d);
				ft_putchar(u);
				if (!(h == '7' && d == '8' && u == '9'))
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		h++;
	}
}
