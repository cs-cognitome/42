/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_boolean.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 15:21:28 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 12:04:37 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H 

# include <unistd.h>

typedef int		t_bool;
# define SUCCESS  0

# define 	TRUE  1
# define 	FALSE 0
# define 	EVEN(i) ((i % 2) == 0 ? TRUE : FALSE)

# define 	EVEN_MSG "I have an even number of arguments."
# define 	ODD_MSG  "I have an odd number of arguments."

#endif
