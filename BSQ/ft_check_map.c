/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_map.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 19:04:41 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 19:54:27 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check_char(char c)
{
	if (c != 'o' && c != 'x' && c != '.')
	{
		write(2, "map error\n", 10);
		return (1);
	}
	return (0);
}


int	ft_check_map(char *str)
{
	int i;
	int n;	
	int length; 
	
	i = 0;
	n = 0;
	while (str[i++] != '\n')
		;
	if (str[i] == '\0')
	{
		write(2, "map error\n", 10);
		return (1);
	}
	while (str[i] != '\n')
	{
		if (ft_check_char(str[i]))
				return (1);
		i++;
		n++;
	}
	i++;
	length = n;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] != '\n')
		{
			if (ft_check_char(str[i]))
					return (1);
			i++;
			n++;
		}
		i++;
		if (n != length)
		{
		 	write(2, "map error\n", 10);
			return (1);
		}
	}
	
	return (0);
}

int  main()
{
 	char map[78] = "8.ox\n...o....\n........\n..o.....\n........\n.o......\n.....o..\n........\n..oo....\n\0";

 return(ft_check_map(map));
}

