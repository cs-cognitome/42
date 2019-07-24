/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: abentoun <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 13:05:11 by abentoun     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 22:36:35 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_map
{
	char		*map;
	int			nline;
	char		empty;
	char		wall;
	char		sqr;
}				t_map;
int				main(int argc, char **argv);
int				ft_check_char(char c, t_map map);
int				ft_check_map(t_map map);
int				ft_first_line(t_map map, int len);
void			ft_end_map(t_map map, int len, int i);
char			*ft_fill_map(t_map map, int len);
void			ft_saveparams(t_map *smap, char *tmp);
t_map			get_param(char *s);
char			*ft_mapcp(char *dest, char *src);
int				ft_getsquare(t_map map);
char			*ft_printsquare(t_map map, int pos, int linelen);
void			ft_print_map(t_map map);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcp(char *dest, char *src);
int				ft_strlen(char *str);
#endif
