#include <stdlib.h>
#include <stdbool.h>
 
struct St
{
    float Data;
    struct St* Next;
    struct St* Previous;
};
 
void printForward(struct St* list)
{
    printf("=== printForward ===\n");
    while (list != NULL)
    {
        printf("Data: %.2f\n", list->Data);
        list = list->Next;
    }
}
 
struct St* printBackward(struct St* list)
{
    printf("=== printBackward ===\n");
    struct St* head = NULL;
    while (list != NULL)
    {
        printf("Data: %.2f\n", list->Data);
       
        if (list->Previous != NULL)
        {
            head = list->Previous;
        }
        list = list->Previous;
    }
    return head;
}
 
struct St* allocItem(float data, struct St* previous)
{
    struct St* item = malloc(sizeof(struct St));
    item->Data = data;
    item->Next = NULL;
    item->Previous = previous;
   
    if (previous != NULL)
    {
        previous->Next = item;
    }
 
    return item;
}
 
struct St* addToQueue(struct St* last, struct St* newItem)
{
    last->Next = newItem;
    return last->Next;
}
 
void main()
{
    struct St* last = allocItem(444.44,
        allocItem(333.33,
            allocItem(222.22,
                allocItem(111.11, NULL))));
 
    struct St* first = printBackward(last);
 
    last = addToQueue(last, allocItem(555.55, NULL));
    last = addToQueue(last, allocItem(666.66, NULL));
    last = addToQueue(last, allocItem(777.77, NULL));
    last = addToQueue(last, allocItem(888.88, NULL));
    last = addToQueue(last, allocItem(999.99, NULL));
 
    printForward(first);
}
