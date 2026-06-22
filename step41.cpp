#include <bits/stdc++.h>
using namespace std;
 class node{
    public:
    int data;
    node* next;

    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
    node(int data1,node* next1){
      data=data1;
      next=next1;
    }
    
 };
 node* converarrtoLL(vector<int>arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
 }
 node* removedhead(node* head){
    if(head==NULL) return head;
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
 }

 node* removetail(node* head){
    if(head==NULL||head->next==NULL) return head;
    node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
 }
 void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
 }
 node* delete_any_position(node* head,int k){
   if(head==NULL) return head;
   if(k==1){
     node* temp=head;
     head=head->next;
     delete temp;
     return head;
   }
   int count=0;
   node* temp=head;
   node* previous=NULL;
   while(temp!=NULL){
      count++;
    if(count==k){
      previous->next=previous->next->next;
      delete temp;
      break;
   }
   previous=temp;
   temp=temp->next;
   
 }
 return head;
}
node* delete_node_with_value(node* head,int value){
   if(head==NULL) return head;
   if(value==head->data){
      node* temp=head;
      head=head->next;
      delete temp;
      return head;
   }
   node* temp=head;
   node* previous=NULL;
   while(temp!=NULL){
      if(temp->data==value){
           previous->next=previous->next->next;
           delete temp;
           break;
      }
      previous=temp;
      temp=temp->next;
   }
   return head;


   
}
   node* inserting_in_head(node* head,int value){
         node* temp=new node(value,head);
         return temp;
   }
   node* inserting_in_tail(node* head,int value){
      if(head==NULL){
         node* temp=new node(value);
      }
      node* temp=head;
      while(temp->next!=NULL){
         temp=temp->next;
      }
      temp->next=new node(value);
      return head;
   }
   node* inserting_in_k_position(node* head,int k){
      if(head==NULL){
         if(k==1){
         node* temp=new node(32);
         return temp;
         }
         else return NULL;
      }
      if(k==1){
         node* temp=new node(32,head);
         return temp;

      }
      int count=0;
      node* temp=head;
      while(temp!=NULL){
          
         count++;
         if(count==(k-1)){
           node* box=new node(32);
           box->next=temp->next;
           temp->next=box;
           break;

         }
         temp=temp->next;
      }
      return head;


   }
   node* inserting_before_value(node* head,int value){
   if(head==NULL){
      return NULL;
   }
   if(value==head->data){
      node* temp=new node(32,head);
      return temp;
   }
   node* temp=head;
   while(temp->next!=NULL){
      if(temp->next->data==value){
         node* box=new node(32);
         box->next=temp->next;
         temp->next=box;
         break;
      }
      temp=temp->next;
   }
   return head;
   }
int main(){
vector<int>arr={23,4,221,44};
node* head =converarrtoLL(arr);

//deletion of head
// head=removedhead(head);
// cout<<head->data;

//deletion of tail
// head=removetail(head);
// print(head);

//delete any kth position of linked list
// int k=3;
//  head=delete_any_position(head,k);
//  print(head);

//delete the node with the given value

// int value=4;
// head=delete_node_with_value(head,value);
// print(head);


                                                            
                                                            //   insetion in linked list

   
   // int value=32;
   // head=inserting_in_head(head,value);
   // print(head);
   // head=inserting_in_tail(head,value);
   // print(head);
   // int k=3;
   // head=inserting_in_k_position(head,k);
   // print(head);
   int value=221;
   head=inserting_before_value(head,value);
   print(head);
}