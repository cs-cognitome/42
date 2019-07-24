/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_map.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 19:04:41 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 19:31:58 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check_char(char c, s_map map)
{
	if (c != map.wall && c != map.sqr && c != map.empty)
	{
		write(2, "map error\n", 10);
		return (1);
	}
	return (0);
}


int	ft_check_map(char *str, s_map map)
{
	int i;
	int n;
	int length; 
	
	i = 0;
	length = 0;
	while (str[i++] != '\n')
		;
	if (str[i] == '\0')
	{
		write(2, "map error\n", 10);
		return (1);
	}
	while (str[i] != '\n')
	{
		if (ft_check_char(str[i], map))
				return (1);
		i++;
		length++;
	}
	i++;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] != '\n')
		{
			if (ft_check_char(str[i], map))
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
	if (ft_strlen(map.map) % map.nline != 0)
	{
		write(2, "map error\n", 10);
		return (1);
	}
	return (0);
}

int  main()
{
 	char map[78] = "...o....\n........\n..o.....\n........\n.o......\n.....o..\n........\n..oo....\n\0";
	int nline;
	char empty = ".";
	char wall = "o";
	char sqr = "x";

 return(ft_check_map(map));
}

