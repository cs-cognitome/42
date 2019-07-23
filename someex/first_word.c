/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   first_word.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 14:00:05 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 22:49:27 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc >= 2)
	{	
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
