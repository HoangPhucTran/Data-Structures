//  linkedlist.h

// tao linker list dung struct

struct Linker_list
{
    int data;
    struct Linker_list *next;
};
typedef struct Linker_list *linker;

linker Create_node_linkerlist();

linker init_linker_list();

int getsize_linker_list();

linker remove_head_linker_list();
linker remove_tail_linker_list();
linker removeAtIndex_linker_list();

linker add_head_linker_list();
linker add_tail_linker_list();
linker addAtIndex_linker_list();

int SearchValueAndReturnAtIndex_linker_list();
linker ClearAll_linker_list();
linker Input_linker_list();
void printf_linker_list();



