#include <iostream>
using namespace std;

struct node
{
  int data;
  struct node* next; //check struct node* head=NULL
};


void printList(struct node* list)
{
  int i=0;
  while(list!=NULL)
    {
      i++;
      cout<<"Node:"<<i<<"  |  "<<"List->Data:"<<list->data<<"  List(Node Address):"<<list<<"    List->Next:"<<list->next<<"\n";
      list=list->next;
    }
}


struct node* insertAtFrirst(struct node* head,int data)
{ // function return pointer of the new head node
  struct node* ptr=(struct node*)malloc(sizeof(struct node)); 
  ptr->data=data;
  
  ptr->next=head;// fill next of ptr with pointer of previous head
  return ptr;//ptr is the new head  
}

struct node* insertAtEnd(struct node* head,int data)
{
  struct node* ptr=(struct node *)malloc(sizeof(struct node));

  struct node* p=head;
  while(p->next!=NULL)
    {
      p=p->next;
    }
  p->next=ptr;
  ptr->next=NULL;
  return head;
}

/* insertAtIndex function dosen't work with index 0 use insertAtFirst forthat purpose */
struct node* insertAtIndex(struct node* head,int data,int index)
{
  struct node* ptr=(struct node *)malloc(sizeof(struct node));// new node creation
  ptr->data=data;
  
  struct node* p=head; //pointer variable to store head pointer
  
  int i=0;
  while(i!=index-1)
    {
      p=p->next;// travesing to required location //updating 
      i++;
    }

  ptr->next=p->next;// assigning original next to Ptr(new node)->next
  p->next=ptr; // storing address of newely created node at previous node

  return head;  
}


int main() {
  //struct node* head=NULL; //check struct node* next;  //node created
  //struct node* second=NULL; //check struct node* next;  //node created
  //struct node* third=NULL; //check struct node* next; //node created
  //struct node* fourth=NULL;

  struct node *head=(struct node*)malloc(sizeof(struct node)); //pointer of node creation
  struct node *second=(struct node*)malloc(sizeof(struct node)); //pointer of node creation
  struct node *third=(struct node*)malloc(sizeof(struct node)); //pointer of node creation
  struct node *fourth=(struct node*)malloc(sizeof(struct node));

  head->data=1;
  head->next=second;

  second->data=2;
  second->next=third;

  third->data=3;
  third->next=fourth;

  fourth->data=4;
  fourth->next=NULL;

  printList(head); //do not use &head

  head=insertAtFrirst(head,69); //strore new head poineter to head

  cout<<"\n\nUpdated list:\n";
  printList(head);


  head=insertAtFrirst(head,72); //strore new head poineter to head

  cout<<"\n\nUpdated list:\n";
  printList(head);

  head=insertAtIndex(head,101,3); //strore new head poineter to head

  cout<<"\n\nUpdated list:\n";
  printList(head);

  head=insertAtEnd(head,999); //strore new head poineter to head

  cout<<"\n\nUpdated list:\n";
  printList(head);

  
}
