/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_map.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 19:04:41 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:04:36 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int ft_check_char(char c, t_map map)
{
	if (c != map.wall && c != map.sqr && c != map.empty)
	{
		write(2, "map error\n", 10);
		return (1);
	}
	return (0);
}


int	ft_check_map(t_map map)
{
	int i;
	int n;
	int length; 
	
	i = 0;
	length = 0;
	if (map.map[i] == '\0')
	{
		write(2, "map error\n", 10);
		return (1);
	}
	while (map.map[i] != '\n')
	{
		if (ft_check_char(map.map[i], map))
				return (1);
		i++;
		length++;
	}
	i++;
	while (map.map[i] != '\0')
	{
		n = 0;
		while (map.map[i] != '\n')
		{
			if (ft_check_char(map.map[i], map))
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
