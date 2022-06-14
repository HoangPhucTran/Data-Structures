#include<stdio.h>
#include<stdlib.h>
// #include "/home/phuc/phuc_coder/code_test/make_file/test/Include/Linked_List/linkedlist.h"
// #include "/home/phuc/phuc_coder/code_test/make_file/test/Include/Queue/queue.h"
// #include "/home/phuc/phuc_coder/code_test/make_file/test/Include/Stack/stack.h"

// #include "C:\Users\LENOVO\Downloads\test\Include\Linked_List\linkedlist.h"
//#include "C:\Users\LENOVO\Downloads\test\Include\Queue\queue.h"
#include "C:\Users\LENOVO\Downloads\test\Include\Stack\stack.h"


// struct Stack
// {
//     int top;
//     struct Stack *next;
// };
// typedef struct Stack *node;


int main(){
    
    node stack;
    // QUEUE queue;
    printf("Please select data structure you like to work on: \n1. Stack \n2. Queue \n3. Linked List \n4. Exit \n");
    int select;
    scanf("%d", &select);
    system("cls");
    switch (select)
    {
    case 1:
        go_here:
        system("cls");
        printf("Please select item: \n1. init \n2. getsize \n3. removeAtIndex \n4. addAtIndex \n5. SearchValueAndReturnAtIndex \n6. ClearAll \n");                                
        printf("seletc item: ");
        int b;
        scanf("%d", &b);
        system("cls");
        switch (b)
        {
        case 1:
            stack = init_stack();
            printf("\n==Tao 1 stack==");
            stack = Input_stack();
            printf("Stack dang co");
            printf_list_stack(stack);
            printf("Nhan mot phim bat ki de tiep tuc\n");
            getch();
            goto go_here;
            break;
        case 2:
            printf("\nGET SIZE\n");
            int getsize = getsize_stack(stack);
            printf("%d", getsize);
            printf("\nNhan mot phim bat ki de tiep tuc\n");
            getch();
            goto go_here;
            break;
        case 3:
            printf("\n==Nhap vi tri can xoa==  ");
            int removeAtIndex;
            scanf("%d", &removeAtIndex);   
            printf("\n==Da xoa 1 phan tu khoi Stack==  ");
            stack = removeAtIndex_stack(stack, removeAtIndex);
            printf_list_stack(stack);
            printf("\nNhan mot phim bat ki de tiep tuc\n");
            getch();
            goto go_here;
            break;
        case 4:
            printf("\n==Them 1 phan tu vao linked list==");
            int addAtIndex_pos,addAtIndex_val;
            printf("\n==Nhap vi tri can them==  ");
            scanf("%d", &addAtIndex_pos); 
            printf("\n==Nhap gia tri can them==  ");  
            scanf("%d",&addAtIndex_val); 
            stack = addAtIndex_stack(stack, addAtIndex_val, addAtIndex_pos);
            printf_list_stack(stack);
            printf("\nNhan mot phim bat ki de tiep tuc\n");
            getch();
            goto go_here;
            break;
        case 5:
            printf("\n==Nhap so can tim== ");
            int SearchValue;
            scanf("%d",&SearchValue);
            printf("\n==Tim kiem 1 phan tu trong linked list==");
            int index = SearchValueAndReturnAtIndex_stack(stack, SearchValue);
            printf("\nTim thay tai chi so %d", index);
            printf("\nNhan mot phim bat ki de tiep tuc\n");
            getch();
            goto go_here;
            break;
        case 6:
            printf("\n==CLEAR ALL==");
            stack = ClearAll_stack(stack);
            printf_list_stack(stack);
            printf("\nNhan mot phim bat ki de tiep tuc\n");
            getch();
            goto go_here;
            break;
        default:
            printf("\nError");
            printf("\nExit");
            break;
        }
    //     break;
    // case 2:
    //     go_here_2:
    //     system("cls");
    //     printf("Please select item: \n1. init \n2. getsize \n3. removeAtIndex \n4. addAtIndex \n5. SearchValueAndReturnAtIndex \n6. ClearAll \n");                                
    //     printf("seletc item: ");
    //     int c;
    //     scanf("%d", &c);
    //     system("cls");
    //     switch (c)
    //     {
    //     case 1:
    //         queue = init_queue(queue);
    //         printf("\n==Tao 1 queue==");
    //         queue = Input_queue();
    //         printf("Queue dang co");
    //         printf_queue(queue);
    //         printf("Nhan mot phim bat ki de tiep tuc\n");
    //         getch();
    //         goto go_here_2;
    //         break;
    //     case 2:
    //         printf("\nGET SIZE\n");
    //         int getsize = getsize_queue(queue);
    //         printf("%d", getsize);
    //         printf("\nNhan mot phim bat ki de tiep tuc\n");
    //         getch();
    //         goto go_here_2;
    //         break;
    //     case 3:
    //         printf("\n==Nhap vi tri can xoa==  ");
    //         int removeAtIndex;
    //         scanf("%d", &removeAtIndex);   
    //         printf("\n==Da xoa 1 phan tu khoi Queue==  ");
    //         queue = remove_front_queue(queue, removeAtIndex);
    //         printf_queue(queue);
    //         printf("\nNhan mot phim bat ki de tiep tuc\n");
    //         getch();
    //         goto go_here_2;
    //         break;
    //     case 4:
    //         printf("\n==Them 1 phan tu vao Queue==");
    //         int addAtIndex_val;
    //         printf("\n==Nhap gia tri can them==  ");  
    //         scanf("%d",&addAtIndex_val); 
    //         queue = add_rear_queue(queue, addAtIndex_val);
    //         printf_queue(queue);
    //         printf("\nNhan mot phim bat ki de tiep tuc\n");
    //         getch();
    //         goto go_here_2;
    //         break;
    //     case 5:
    //         printf("\n==Nhap so can tim== ");
    //         int SearchValue;
    //         scanf("%d",&SearchValue);
    //         printf("\n==Tim kiem 1 phan tu trong Queue==");
    //         int index = SearchValueAndReturnAtIndex_queue(queue, SearchValue);
    //         printf("\nTim thay tai chi so %d", index);
    //         printf("\nNhan mot phim bat ki de tiep tuc\n");
    //         getch();
    //         goto go_here_2;
    //         break;
    //     case 6:
    //         printf("\n==CLEAR ALL==");
    //         queue = ClearAll_queue(queue);
    //         printf_queue(queue);
    //         printf("\nNhan mot phim bat ki de tiep tuc\n");
    //         getch();
    //         goto go_here_2;
    //         break;
    //     default:
    //         printf("\nError");
    //         printf("\nExit");
    //         break;
    //     }
    //     break;
    case 2:
        printf("Exit");
        break;
    default:
        printf("Error");
        break;
    }
    return 0;    
}
