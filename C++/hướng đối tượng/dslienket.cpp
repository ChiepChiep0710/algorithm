#include <iostream>
using namespace std;

struct List{
 float data;
 List *next;
};
List *add(List *p1,float x){
 List *p;
 p = new List;
 p->data = x;
 p->next = p1;
 return p;
}

List *del(List *p1,float x){
 List *temp1,*temp2;
 temp2 = p1;temp1 = NULL;
 while((temp2->data != x)&&(temp2->next != NULL)){//14 7 4 1
  temp1 = temp2;
  temp2 = temp2->next;
 }
 if(temp1==NULL){
  p1 = p1->next;
  delete temp2;
  return p1;
 }
 if(temp2->data == x){
  temp1->next = temp2->next;
  delete temp2;
 }
 return p1;
}

void output(List *p){
 List *temp=p;
 while(temp!=NULL){
  cout<<temp->data<<" ";
  temp = temp->next;
 }
 cout<<endl;
}
int main(){
 List *p=NULL;
 List *p1,*p2,*p3;
 
 p = add(p,14);
 p = add(p,7);
 p = add(p,4);
 p = add(p,1);
 output(p);
 p = del(p,4);
 
 /*
 p1 = new List;
 p1->data = 14;
 p2 = new List;
 p2->data = 7;
 p3 = new List;
 p3->data = 29;

 p1->next = p2;
 p2->next = p3;
 p3->next = NULL;
 */
 output(p);
}