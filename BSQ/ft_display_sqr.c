/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_sqr.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 14:45:24 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 14:52:21 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_getsquare(char *map)
{
	int i;
	int maxval;
	int maxpos;

	i = 0;
	maxpos = 0;
	maxval = 1;
	while (map[i])
	{
		if (maxval < map[i] - '0')
		{
			maxval = map[i] - '0';
			maxpos = i;
		}
		i++;
	}
	return (maxpos);
}
char	*ft_printsquare(char *map, int pos, int linelen)
{
	int	countline;
	int countclmn;
	int	max;

	max = map[pos] - '0';
	countline = max;
	countclmn = max;
	while (countline >= 1)
	{
		while (countclmn >= 1)
		{
			map[pos] = 'X';
			pos--;
			countclmn--;
		}
		pos = pos - linelen + max;
		countline--;
		countclmn = max;
	}
	return (map);
}
char	*ft_print_map(char *map)
{
	int i;

	i = 0;
	while (map[i])
	{
		if (map[i] != 'X' && map[i] != '0' && map[i] != '\n')
			map[i] = '.';
		i++;
	}
	return (map);
}
int	main()
{
	char t[] = "11101111\n12211222\n12012233\n12112334\n10122344\n11123012\n12223112\n12001222";
	printf("%s", ft_print_map(ft_printsquare(t, ft_getsquare(t), 9)));
}
