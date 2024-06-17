# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 00:25:30 by brumigue          #+#    #+#              #
#    Updated: 2024/06/18 00:59:02 by brumigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c
DEST = ft_display_file

all: compile

compile:
	gcc $(CFLAGS) -o $(DEST) $(SOURCES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(DEST)

