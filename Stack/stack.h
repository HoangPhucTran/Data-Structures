// stack.h

//tao cau truc stack duung struct

struct Stack
{
    int top;
    struct Stack *next;
};

typedef struct Stack *node;

node Create_stack();
node init();
int getsize();
node remove_top();
node remove_tail();
node removeAtIndex();
node add_head();
node add_tail();
node addAtIndex();
int SearchValueAndReturnAtIndex();
node ClearAll();
node Input();
void printf_list();







