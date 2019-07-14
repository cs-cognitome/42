/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/14 13:13:38 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 16:55:26 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

int		ft_is_numeric(char c)
{
	int i;

	i = 0;
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0' && str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && ft_is_numeric(str[i]) == 1)
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	return (res * sign);
}
