//  linkedlist.h
struct Linker_list
{
    int data;
    struct Linker_list *next;
};
typedef struct Linker_list *node;

node Create_node();

node init();

int getsize();

node remove_head();

node removeAtIndex();

node add_head();
node add_tail();
node addAtIndex();

int SearchValueAndReturnAtIndex();
node ClearAll();
node Input();
void printf_list();



