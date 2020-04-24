#include <iostream>
using namespace std;
struct list
{
    float data;
    list *next;
};
list *themQueue(list *ptr,float x)
{
    list *ptr1;
    ptr1 = new list;
    ptr1-> data=x;
    ptr1->next=ptr1;
    return ptr1;
}
list *pop(list *ptr,float &x){
    list *ptr1= ptr;
    list *ptr2 = ptr1->next;
    while (ptr2->next != NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=NULL;
    delete ptr2;  
}