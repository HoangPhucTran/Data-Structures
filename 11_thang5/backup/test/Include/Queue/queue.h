// queue using struct

struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue *QUEUE;


QUEUE Create_node_queue();

QUEUE init_queue();

int getsize_queue();

QUEUE remove_front_queue();

QUEUE add_rear_queue();

int SearchValueAndReturnAtIndex_queue();

QUEUE ClearAll_queue();

QUEUE Input_queue();

void printf_queue();
