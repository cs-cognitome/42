/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_sqr.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: abentoun <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 20:31:42 by abentoun     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:07:40 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_getsquare(t_map map)
{
	int i;
	int maxval;
	int maxpos;

	i = 0;
	maxpos = 0;
	maxval = 1;
	while (map.map[i])
	{
		if (maxval < map.map[i] - '0')
		{
			maxval = map.map[i] - '0';
			maxpos = i;
		}
		i++;
	}
	return (maxpos);
}

char	*ft_printsquare(t_map map, int pos, int linelen)
{
	int	countline;
	int countclmn;
	int	max;

	max = map.map[pos] - '0';
	countline = max;
	countclmn = max;
	while (countline >= 1)
	{
		while (countclmn >= 1)
		{
			map.map[pos] = map.sqr;
			pos--;
			countclmn--;
		}
		pos = pos - linelen + max;
		countline--;
		countclmn = max;
	}
	return (map.map);
}

void	ft_print_map(t_map map)
{
	int i;

	i = 0;
	while (map.map[i])
	{
		if (map.map[i] != map.sqr &&  map.map[i] != '0' && map.map[i] != '\n')
			map.map[i] = map.empty;
		if (map.map[i] == '0')
			map.map[i] = map.wall;
		i++;
	}
	ft_putstr(map.map);
	return ;
}
