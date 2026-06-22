                                                //  linked list

// #include <bits/stdc++.h>
// using namespace std;
// class node{    
//    public:
//    int data;
//    node*next;      

//    public:
//    node(int data1, node*next1){
//     data=data1;
//     next=next1;
//    }
// };
// int main(){
// vector<int>arr={2,5,8,7};
// node*y=new node(arr[0],nullptr);
// cout<<y<<endl;
// cout<<y->data<<endl;
// cout<<y->next;
// }


#include<bits/stdc++.h>
using namespace std;
class node{
   public:
   int data;
   node* next;
   public:
   node(int data1,node* next1){
      data=data1;
      next=next1;
   }
   node(int data1){
      data=data1;
      next=nullptr;
   }
};
node* convertarrtoLL(vector<int>&arr){
   node* head=new node(arr[0]);
   node* mover=head;
   for(int i=1;i<arr.size();i++){
      node* temp=new node(arr[i]);
      mover->next=temp;
      mover=temp;
   }
   return head;
}


int length_of_linked_list(node* head){
   int count=0;
   node* temp=head;
   while(temp){
      // cout<<temp->data<<" ";
      temp=temp->next;
      count++;
   }
   return count;
}

bool search(node* head,int n){
node* temp=head;
while(temp){
   if(temp->data==n) return true;
   temp=head->next;
}
return false;
}
int main(){
   vector<int>arr={3,4,223,};
   node* head=convertarrtoLL(arr);
   // cout<<head->data;
   // tranversing in linked list   //O(n)
   node*temp=head;
   // while(temp){
   //    cout<<temp->data<<" ";
   //    temp=temp->next;

   // }
   //  length of the linked list   //o(n)
   //  cout<<length_of_linked_list(head);

   // search in linked list
   int n=4;
   cout<<search(head,n);

}