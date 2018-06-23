compile_lib: libmlpic.c libmlpic.h
	gcc -m32 -g -c -Wall -Werror -fpic libmlpic.c -o libmlpic.o

link_lib: libmlpic.c libmlpic.h libmlpic.o
	gcc -m32 -g -shared -o libmlpic.so libmlpic.o

build_lib: compile_lib link_lib

build_main:
	gcc -m32 -g -L. -Wl,-rpath=. -o main main.c -lmlpic
	
all: build_lib build_main
