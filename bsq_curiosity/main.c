/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lfourage <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 19:52:32 by lfourage     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 23:07:45 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int i;
	t_map smap;

	i = 1;
	while (argc >= 2)
	{
		smap = get_param(argv[i]);
		if (ft_check_map(smap)== 1)
			return (0);
		smap.map = ft_fill_map((smap), (ft_strlen(smap.map) / smap.nline));
		smap.map = ft_printsquare(smap, ft_getsquare(smap), (ft_strlen(smap.map) / smap.nline));
		ft_print_map(smap);
		i++;
		argc--;
	}
	return (0);
}
