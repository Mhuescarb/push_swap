# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 13:04:29 by mhuescar          #+#    #+#              #
#    Updated: 2025/03/11 17:48:21 by mhuescar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = CC
CFLAGS = -Wall -Werror -Wextra

SRCS =  statics.c swap.c push.c rotate.c reverse_rotate.c



OBJS= $(SRCS:.c=.o)

$(NAME): $(OBJS)
		 $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re