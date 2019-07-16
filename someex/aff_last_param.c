/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   aff_last_param.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 15:02:17 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/16 15:36:33 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i; 

	i = 0; 
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int 	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putstr(argv[argc - 1]);
	ft_putchar('\n');
}
