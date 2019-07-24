/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fill_map.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lfourage <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 18:41:01 by lfourage     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 22:19:50 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_first_line(t_map map, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (map.map[i] == map.wall)
		{
			map.map[i] = '0';
			i++;
		}
		if (map.map[i] == '\n')
			i++;
		map.map[i] = '1';
		i++;
	}
	return (i);
}

void	ft_end_map(t_map map, int len, int i)
{
	int n;

	n = 0;
	while (i < ft_strlen(map.map) - 1)
	{
		if (map.map[i] == map.wall)
		{
			map.map[i] = '0';
			i++;
		}
		if (map.map[i] == '\n')
			i++;
		map.map[i] = '1';
		if (map.map[i - 1] != '\n')
		{
			n = map.map[i - 1];
			if (map.map[i - len] < n)
				n = map.map[i - len];
			if (map.map[i - len - 1] < n)
				n = map.map[i - len - 1];
			n++;
			map.map[i] = n;
		}
		i++;
	}
}

char	*ft_fill_map(t_map map, int len)
{
	int i;

	i = ft_first_line(map, len);
	ft_end_map(map, len, i);
	return (map.map);
}
