
PATCH		:= /home/phuc/phuc_coder/code_test/make_file/test
LINKED_LIST := $(PATCH)/Include/Linked_List/linkedlist.h
QUEUE 		:= $(PATCH)/Include/Queue/queue.h
STACK 		:= $(PATCH)/Include/Stack/stack.h
OUTPUT		:= $(PATCH)/output
SOURCE		:= $(PATCH)/Source


run: main.o	build
	$(OUTPUT)/*
main.o: build
	gcc -Wall -o $(OUTPUT)/main Main.c linker_list.o queue.o stack.o
build:
	gcc -c linker_list.c -o linker_list.o
	gcc -c queue.c -o queue.o
	gcc -c stack.c -o stack.o
	
clean:
	rm $(OUTPUT)/*
	rm $(SOURCE)/*.o





