/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   last_word.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 14:00:05 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:06:57 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{	
		int	len = ft_strlen(argv[1]) - 1;
		int	tmp = len;
		while (argv[1][len] == ' ' || argv[1][len] == '\t')
			len--;
		while (argv[1][len] != '\0' && argv[1][len] != ' ' && argv[1][len] != '\t')
		{
			len--;
			i++;
		}
		len++;
		while (len <= tmp && argv[1][len] != ' ' && argv[1][len] != '\t')
			ft_putchar(argv[1][len++]);
	}
	ft_putchar('\n');
	return 0;
}

// made with love by Marousta