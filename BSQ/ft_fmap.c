/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fmap.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 16:49:24 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 17:44:55 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_fmap(char *map, int linelen)
{
	int i;
	int n;
	char *mapf;

	i = 0;
	if (!(mapf = malloc((sizeof(char)) * (ft_strlen(map)))))
		return (NULL);
	while (map[i] != '\0')
	{
		while (i < linelen)
		{
			if (map[i] == '0' || map[i] == '\n')
				mapf[i] = map[i];
			else
				mapf[i] = '1';
			i++;
		}
		if (map[i] == '0' || map[i] == '\n')
			mapf[i] = map[i];
		else
		{
			mapf[i] = '1';
			if (map[i - 1] != '\n')
			{
				n = mapf[i - 1];
				if (mapf[i - linelen] < n)
					n = mapf[i - linelen];
				if (mapf[i - linelen - 1] < n)
					n = mapf[i - linelen - 1];
				n++;
				mapf[i] = n;
			}
		}
		i++;
	}
	return (mapf);
}

int		main()
{
	char map[73] = "...0....\n........\n..0.....\n........\n.0......\n.....0..\n........\n..00....\n\0";
	printf("%s\n", ft_fmap(map, 9));
	return (0);
}
