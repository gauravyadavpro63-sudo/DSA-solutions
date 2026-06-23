//double linked list



#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node* previous;
    
    public:
    node(int value1){
        value=value1;
        next=nullptr;
        previous=nullptr;
    }
     public:
    node(int value1,node* next1,node* previous1){
        value=value1;
        next=next1;
        previous=previous1;
    }
    
};

node* arrtodoubleLL(vector<int>arr){
    node* head=new node(arr[0]);
    node* prev =head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        temp->previous=prev;
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}
void print(node* head){
node* temp=head;
while(temp){
cout<<temp->value<<" ";
temp=temp->next;
}
}
node* delete_head(node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* temp=head;
    head=head->next;
    head->previous=nullptr;
     temp->next=nullptr;
     delete temp;
     return head;
}
node* delete_tail(node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node* mover=head;
    while(mover->next!=nullptr){
        mover=mover->next;
    }
    node* prev=mover->previous;
    mover->previous=nullptr;
    prev->next=nullptr;
    delete mover;
    return head;

}
node* delete_any_k_element(node* head,int k ){
    node* temp=head;
    int count=0;
    while(temp){
         count++;
        if(count==k) break;
        
         temp=temp->next;
    }
    node* prevbox= temp->previous;
    node* nextbox=temp->next;
    if(temp->next==NULL&&temp->previous==NULL){
        delete temp;
        return NULL;
    }
    else if(temp->previous==NULL){
       return  delete_head(head);
    }
    else if(temp->next==NULL){
           return delete_tail(head);
    }
    else{
         prevbox->next=nextbox;
         nextbox->previous=prevbox;
         temp->next=nullptr;
         temp->previous=nullptr;
         delete temp;
         return head;
    }
}

void delete_node(node* box){
    node* temp=box;
    node* prevbox=temp->previous;
    node* nextbox=temp->next;
    if(temp->next==NULL){
        prevbox->next=nullptr;
        temp->previous=nullptr;
        delete temp;
    }
    else{
        prevbox->next=nextbox;
        nextbox->previous=prevbox;
        temp->next=nullptr;
        temp->previous=nullptr;
        delete temp;

    }

}
node* insert_before_head(node* head,int data){
    if(head==nullptr) return NULL;
    node* box=new node(data);
    box->next=head;
    head->previous=box;
    head=box;
    return head;
}

node* insert_befor_tail(node* head,int data){
    if(head==NULL) return head;
    if(head->next==NULL){
        return insert_before_head(head,data);
    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* previousbox=tail->previous;
    node* box=new node(data,tail,previousbox);
    previousbox->next=box;
    tail->previous=box;
    return head;
}
node* insert_before_k_element(node* head,int data,int k){
     if(k==1){
        return insert_before_head(head,data);
     }
     else{
        int count=0;
        node* temp=head;
        while(temp->next!=NULL){
            count++;
            if(count==k) break;
            temp=temp->next;
        }
        node* previousbox=temp->previous;
        node* box=new node(data,temp,previousbox);
        previousbox->next=box;
        temp->previous=box;
        return head;
     }
}

void insert_before_node(node*  box,int data){
node* previousbox=box->previous;
node* newbox=new node(data,box,previousbox);
previousbox->next=newbox;
box->previous=newbox;
}
int main(){
    vector<int>arr={2,3,4,12};
    // converting arr into double linked list
    node* head=arrtodoubleLL(arr);
    // print(head);
    // delete head
     
    // head=delete_head(head);
    // print(head);

    //delete tail
    // head=delete_tail(head);
    // print(head);
//   int k=3;
    // head=delete_any_k_element(head,k);
    // print(head);
  //special questin of deleting node in which head will be not given
    // delete_node(head->next);
    // print(head);



                                                   //insertion in double linked list

    int data=1;
    // head=insert_before_head(head,data);
    // print(head);

    // head=insert_befor_tail(head,data);
    // print(head);
    int k=3;

    // head=insert_before_k_element(head,data,k);
    // print(head);
     int node=12;
    // insert_before_node(head->next,data);
    // print(head);

    
}