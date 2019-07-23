# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/07/22 13:01:02 by tvoronko     #+#   ##    ##    #+#        #
#    Updated: 2019/07/22 13:51:21 by tvoronko    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRCS	 = main.c 

INCLUDE	 = libft.h

OBJ		 = ${SRCS:.c=.o}

CFLAGS	 =  -Wall -Wextra -Werror

CC		 = cc 

NAME 	 = bsq

RM 		 = rm -f

.c.o: 
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all: 	
		gcc$(CFLAGS) -c $(SRCS)
		gcc$(CFLAGS) -o $(NAME) $(OBJ)

clean:  
		${RM} ${OBJS}

fclean:		
		rm -rf *.o $(NAME)

re: 	
		fclean all


