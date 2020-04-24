#include <iostream>
using namespace std;

struct Stack{
    float data;
    Stack *next;
};
Stack *push(Stack *s,float x){
    Stack *temp;
    temp = new Stack;
    temp->next = s;
    temp->data = x;
    return temp;
}
Stack *pop(Stack *s,float &x){
    if(s==NULL){
        cout<<"Khong co gia tri"<<endl;
        return s;
    }
    x = s->data;
    Stack *temp = s->next;
    delete s;
    return temp;
}
void display(Stack *s){
    Stack *temp = s;
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
    Stack *s=NULL;
    float x;
    s = push(s,9);
    s = push(s,12);
    s = push(s,30);
    s = pop(s,x);
    display(s);
}
