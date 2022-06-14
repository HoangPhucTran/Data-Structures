// queue using struct

struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue *node;

node Create_node();
node init();
int getsize();
node remove_front();
node add_rear();
int SearchValueAndReturnAtIndex();
node ClearAll();
node Input();
void printf_stack();
