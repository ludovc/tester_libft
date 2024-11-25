CFLAGS = -Wall -Wextra -Werror -g

strchr:
			cc $(CFLAGS) strchr.c ../ft_strchr.c

all:
			@echo "function name?"

strlcat:
			cc $(CFLAGS) strlcat.c ../ft_strlcat.c ../ft_strlen.c -lbsd

strlcpy:
			cc $(CFLAGS) strlcpy.c ../ft_strlcpy.c ../ft_strlen.c -lbsd

isalpha:
			cc $(CFLAGS) isalpha.c ../ft_isalpha.c

strlen:
			cc $(CFLAGS) strlen.c ../ft_strlen.c

memset:
			cc $(CFLAGS) memset.c ../ft_memset.c printbytes.c

memcpy:
			cc $(CFLAGS) memcpy.c ../ft_memcpy.c

bzero:
			cc $(CFLAGS) bzero.c ../ft_bzero.c ../ft_memset.c printbytes.c

memmove:
			cc $(CFLAGS) memmove.c ../ft_memmove.c ../ft_memcpy.c
