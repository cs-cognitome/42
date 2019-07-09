/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fminette <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 09:54:03 by fminette     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 13:56:14 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_lign(int h)
{
	int	i;

	i = 1;
	while (i <= h)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == h && i != 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	print_last_lign(int h)
{
	int	i;

	i = 1;
	while (i <= h)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == h && i != 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	print_column(int h, int v)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= v)
	{
		if (i <= v - 2)
		{
			ft_putchar('B');
			while (j <= h - 2)
			{
				ft_putchar(' ');
				j++;
			}
			if (j == h - 1 && j != 1)
				ft_putchar('B');
			ft_putchar('\n');
		}
		j = 1;
		i++;
	}
}

void	rush(int x, int y)
{
	if (x != 0 && y == 1)
		print_first_lign(x);
	else if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (x > 0 && y > 0)
	{
		print_first_lign(x);
		print_column(x, y);
		print_last_lign(x);
	}
	else if (x == 1 && y > 1)
	{
		print_first_lign(x);
		print_column(x, y);
		print_last_lign(x);
	}
}
