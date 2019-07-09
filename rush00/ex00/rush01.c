/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 17:44:01 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 19:30:34 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_line(int col, char first_char, char mid_char, char last_char)
{
	int col_count;

	col_count = 1;
	while (col_count <= col)
	{
		if (col_count == 1)
			ft_putchar(first_char);
		if ((col_count > 1) && (col_count < col))
			ft_putchar(mid_char);
		if (col_count == col)
			ft_putchar(last_char);
		col_count++;
	}
	ft_putchar('\n');
} 

void	rush_line_special(int col, int line, char first_char, char mid_char, char last_char)
{

}	

void	rush(int x, int y)
{
	int nb_lines;

	nb_lines = 1;
	if ((x > 0) && (y > 0))
	{
		if (x == 1 && y == 1)
			ft_putchar('/');
		if (((x == 1) && (y > 1)) || ((x > 1) && (y == 1)))
			rush_line_special();
		if ((x > 1) && (y > 1))
		{
			rush_line(x, '/', '&', '\\');
			while (nb_lines <= (y - 2))
			{
				rush_line(x, '*', ' ', '*');
				nb_lines++;
			}
			rush_line(x, '\\', '*', '/');
		}
	}
	ft_putchar('\n');
}
