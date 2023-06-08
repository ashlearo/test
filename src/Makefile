FLAGS = -Wall -Wextra -Werror -std=c11 -pedantic

all: clean list

list:
	gcc $(FLAGS) test_list.c list.c revers_1.c revers_2.c -o list 

clean:
	rm -rf list 

rebuild: clean list

check:
	clang-format -style=Google -n *.c *.h

clang-format:
	clang-format -style=Google -i *.c *.h

