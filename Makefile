CFLAGS = -Wall -Wextra -Werror -g

list:
			cc $(CFLAGS) list.c ../libft.a
			./a.out

all:
			@echo "function name?"

%:
			cc $(CFLAGS) $@.c ../ft_$@.c printbytes.c -lbsd ../libft.a

deps:
			sudo apt install libbsd-dev
