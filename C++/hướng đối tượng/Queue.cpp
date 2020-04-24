#include <iostream>
using namespace std;

struct Queue{
    float data;
    Queue *next;
};
Queue *push(Queue *s,float x){
    Queue *temp;
    temp = new Queue;
    temp->next = s;
    temp->data = x;
    return temp;
}
Queue *pop(Queue *s,float &x){
    if(s == NULL){
        cout<<"Khong co gia tri"<<endl;
        return s;
    }
    Queue *temp1 = NULL,*temp2 = s;
    while(temp2->next !=NULL){
        temp1 = temp2;
        temp2 = temp2->next;
    }
    if(temp1 == NULL){
        x = s->data;
        delete temp2;
        return NULL;
    }
    x = temp2->data;
    temp1->next = NULL;
    delete temp2;
    return s;
}
void display(Queue *s){
    Queue *temp = s;
    if(s==NULL){
        cout<<"Khong co gia tri hien thi"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Queue *s=NULL;
    float x;
    s = push(s,9);
    s = push(s,12);
    s = push(s,30);
    s = pop(s,x);
    display(s);
}
