/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 15:34:48 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 16:00:06 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else 
	{
		if (nb > 9)
		{	
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else 
			ft_putchar(nb + 48);
	}
}

#include <stdio.h>
int 	main()
{
	int n; 
	n = 211320666;
	ft_putnbr(n);
	return (0);	
}

