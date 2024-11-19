CFLAGS = -Wall -Wextra -Werror

all:
			@echo "function name?"

isalpha:
			cc $(CFLAGS) isalpha.c ../ft_isalpha.c

strlen:
			cc $(CFLAGS) strlen.c ../ft_strlen.c

memset:
			cc $(CFLAGS) memset.c ../ft_memset.c

memmove:
			cc $(CFLAGS) memmove.c

strchr:
			cc $(CFLAGS) strchr.c
