//REVERSED LINK LIST
#include <iostream.h>
 
  int main()
 {
     struct Node
     {
         int data;
         Node* link;
     };
 
     char ch;
     Node* a;
     Node* nptr;
     Node* temp;
     a = NULL;
 
     nptr = new Node;
 
     cout<<"Enter data for first node :";
     cin>>nptr->data;
     nptr->link = NULL;
     a=nptr;
     ch = 'y';
 
     while(ch=='y')
     {
 
     cout<<"Do you want to add more element in the list (y/n) :";
     cin>>ch;
 
     if(ch=='y')
     {
     nptr = new Node;
     cout << "Enter data for new node :";
     cin>>nptr->data;
     nptr->link = NULL;
 
     temp = a;
     while(temp->link!=NULL)
     {
         temp=temp->link;
     }
     temp->link = nptr;
     }
 
     }
 
     
 
     cout<<endl<<"The elements of the linked list are :"<<endl;
     temp = a;
     while(temp!=NULL)
     {
         cout<<temp->data<<endl;
         temp=temp->link;
     }
 
     //REVERSING 
 
     Node* current;
     Node* prev;
     Node* next;
     current = a;
     prev = NULL;
     while(current!=NULL)
     {
         next = current->link;
         current->link = prev;
         prev = current;
         current = next;
     }
     a = prev;
 
 
     cout<<endl<<"The elements of the reversed linked list are :"<<endl;
     temp = a;
     while(temp!=NULL)
     {
         cout<<temp->data<<endl;
         temp=temp->link;
     }
 
 
     return 0;
 }