programa=p9

$(programa): ./src/main.c ./src/temperaturas.c ./include/temperaturas.h
	gcc -o $(programa) -g ./src/main.c ./src/temperaturas.c -I./include -lm -Wall -Wextra
