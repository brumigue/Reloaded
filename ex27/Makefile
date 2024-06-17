# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 00:25:30 by brumigue          #+#    #+#              #
#    Updated: 2024/06/18 01:18:24 by brumigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_display_file.c
DEST = ft_display_file

all: compile

compile:
	gcc $(CFLAGS) -o $(DEST) $(SOURCES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(DEST)
