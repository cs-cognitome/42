/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   repeat_alpha.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 21:28:44 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 16:40:54 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 0;
			tmp = str[i] - 64;
			while (j < tmp)
			{
				ft_putchar(str[i]);
				j++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;
			tmp = str[i] - 96;
			while (j < tmp)
			{
				ft_putchar(str[i]);
				j++;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
