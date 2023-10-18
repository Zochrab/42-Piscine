# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zblume <zblume@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 13:31:59 by zblume            #+#    #+#              #
#    Updated: 2023/10/14 14:13:49 by zblume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c
HEADERS = *.h 
OBJ = *.o
TARGET = rush02

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(TARGET)
