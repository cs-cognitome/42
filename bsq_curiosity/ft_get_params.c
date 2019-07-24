/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_params.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lfourage <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 17:53:07 by lfourage     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 22:36:41 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_saveparams(t_map *smap, char *tmp)
{
	int c;
	int i;
	int len;

	i = 0;
	len = 0;
	while (tmp[len - 1] != '\n')
	{
		len++;
	}
	smap->nline = 0;
	c = len - 4;
	while (i < c)
	{
		smap->nline = smap->nline * 10 + tmp[i] - '0';
		i++;
	}
	smap->empty = tmp[i];
	i++;
	smap->wall = tmp[i];
	i++;
	smap->sqr = tmp[i];
	return ;
}

t_map get_param(char *s)
{
	int  fd;
	char *buf;
	int  i;
	t_map smap;
	char *tmp;
	int cls;

	fd = open(s, O_RDONLY);
	if (!(buf = malloc(sizeof(char) * 100000)))
		exit(EXIT_FAILURE);
	i = read(fd, buf, 100000);
	buf[i] = 0;
	cls = close(fd);
	if (cls == - 1)
		exit(EXIT_FAILURE);
	tmp = (char *) malloc(sizeof(char) * i + 1);
	tmp = ft_strcp(tmp, buf);
	ft_saveparams(&smap, tmp);
	i = 0;
	while (tmp[i - 1] != '\n')
		i++;
	if (!(smap.map = malloc(sizeof(char) * (ft_strlen(tmp) - i))))
		exit(EXIT_FAILURE);
	smap.map = ft_mapcp(smap.map, tmp);
	return (smap);
}
