// stack.h

//tao cau truc stack duung struct

struct Stack
{
    int top;
    struct Stack *next;
};
typedef struct Stack *node;

node Create_stack();

node init_stack();

int getsize_stack();

node remove_top_stack();

node remove_tail_stack();

node removeAtIndex_stack();

node add_head_stack();

node add_tail_stack();

node addAtIndex_stack();

int SearchValueAndReturnAtIndex_stack();

node ClearAll_stack();

node Input_stack();

void printf_list_stack();







