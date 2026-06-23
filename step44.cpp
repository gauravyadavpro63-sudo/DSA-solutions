#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* previous;
    public:
    node(int data1,node* next1,node* previous1)
    {
        data=data1;
        next=next1;
        previous=previous1;
    }
};

node* convert_arr_to_double_ll(vector<int>arr){
    node* head=new node(arr[0],nullptr,nullptr);
    node* previousnode=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,nullptr);
        temp->previous=previousnode;
        previousnode->next=temp;
        previousnode=temp;
    }
    return head;
}
void print(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* delete_all_occurance_of_key(node* head,int key){
    node* temp=head;
    while(temp){
    if(temp->data==key){
         
        if(temp==head){
            head=head->next;
        }
        node* nextnode=temp->next;
        node* previousnode=temp->previous;
        if(nextnode!=NULL) nextnode->previous=previousnode;
        if(previousnode!=NULL) previousnode->next=nextnode;
        delete temp;
        temp=nextnode;
    }
    else{
        temp=temp->next;
    }
}
    return head;
}
node* tail(node* head){
  node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  return  temp;
}
vector<pair<int,int>> find_pairs_with_given_sum_in_doublylinkedlist(node* head,int target){
//    brute force solution tc=O(n) sc=extra space 0;
// vector<pair<int,int>> box;
//      node* temp=head;
//      node* temp2=head->next;
//      while(temp){
//         temp2=temp->next;
//         while(temp2){
//             if(temp->data+temp2->data==target){
//                 box.push_back({temp->data,temp2->data});
//             }
//             temp2=temp2->next;
//         }
//         temp=temp->next;
//      }
//      return box;
        // optimal solution tc=O(2n) sc=O(1);
        vector<pair<int,int>> box;
        node* left=head;
        node* right=tail(head);
        while(left!=right&&left->previous!=right){
           if((left->data+right->data)<target){
             left=left->next;
           }
           else if(left->data+right->data>target){
            right=right->previous;
           }
           else{
            box.push_back({left->data,right->data});
            left=left->next;
            right=right->previous;
           }

        }
        return box ;
        
}
int main(){
 vector<int>arr={2,4,5,1,2,55};
 node* head=convert_arr_to_double_ll(arr);
//  head=delete_all_occurance_of_key(head,2);
 find_pairs_with_given_sum_in_doublylinkedlist(head,6);
 print(head);
    
}