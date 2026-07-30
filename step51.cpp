//     //  stack and queue theory and basics

//     A data structure is simply a way of organizing and storing data so that it can be used efficiently.

//     The clothes are the data, and the cupboard's organization is the data structure.

// Data Structure	        Think of it as	            Best for
// Array	               Books on a shelf	         Fast access by index
// Linked List	          Train compartments	        Easy insertion/deletion
// Stack	              Stack of plates	           Undo, recursion
// Queue	              People waiting in line	        Scheduling, BFS
// Tree	             Family tree	                Hierarchical data
// Graph	            Cities connected by roads	      Networks, maps
// Hash Map	            Dictionary	            Fast searching by key

#include <bits/stdc++.h>
using namespace std;
// class stackk{
//     int arr[100];
//     int topp=-1;

//     public:
//      void push(int x){
//         if(topp>=99) return;   //or throw overflow_error("stack is full")
//         topp=topp+1;
//         arr[topp]=x;
//      }
//      void pop(){
//         if(topp==-1) return;     //or throw runtime_error("stack is empty")
//         topp=topp-1;

//      }
//      int  top(){
//         if(topp==-1) return -1;
//         return arr[topp];
//      }
//      int size(){
//         return topp+1;
//      }

// };

// class queuee{
//    static const int size=4;
//     int arr[size];
//     int start=-1;
//     int end=-1;
//     int currentsize=0;
//     public:
//     void push(int x){
//         if(currentsize==size) return;
//         if(currentsize==0){
//             start=0;
//             end=0;
//         }
//         else{
//             end=(end+1)%size;
//         }
//         arr[end]=x;
//         currentsize=currentsize+1;
//     }
//     void pop(){
//         if(currentsize==0) return;
//         int element=arr[start];
//         if(currentsize==1){
//             start=-1;
//             end=-1;
//         }
//         else{
//             start=(start+1)%size;
//         }
//         currentsize=currentsize-1;
//     }

//     int front(){
//         if(currentsize==0) return -1;
//         return arr[start];
//     }
//     int sizee(){
//         return currentsize;
//     }

// };

// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=nullptr;
//     }
// };

// class stackk{
// public:
// node* top;
// int size=0 ;
// stackk(){
//     top=nullptr;
// }
// void push(int x){
//     node* temp=new node(x);
//     temp->next=top;
//     top=temp;
//     size=size+1;
// }
// void pop(){
//     if(top==0) return;
//     node* temp=top;
//     top=top->next;
//     delete temp;
//     size=size-1;
// }
// int peek(){
//     if(top==nullptr){
//         return -1;
//     }
//     return top->data;
// }
// int sizeoff(){
//     return size;
// }
// };
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=nullptr;
//     }
// };
// class queuee{
//  public:
//  node* start;
//  node* end;
//  int size;
//     queuee(){
//          start=nullptr;
//          end=nullptr;
//          size=0;
//     }
//     void push(int x){
//         node* temp=new node( x);
//         if(end==nullptr){
//             start=temp;
//             end=temp;
//         }
//          else{
//         end->next=temp;
//         end=temp;
//               }
//               size=size+1;
//             }
//     void pop(){
//       if(start==nullptr) return;
//       node* newnode=start;
//       start=start->next;
//       delete newnode;
//       if(start==nullptr) end=nullptr;
//       size=size-1;
//     }

//     int peek(){
//         if(start==nullptr) return -1;
//         return start->data;
//     }
//     int sizeoff(){
//         return size;
//     }
// };

// implement stack using queue

// class stackk
// {

// public:
//     queue<int> qu;

//     void pushh(int x)
//     {
//         qu.push(x);
//         int size = qu.size();
//         for (int i = 1; i < size; i++)
//         {

//             qu.push(qu.front());
//             qu.pop();
//         }
//     }

//     void popp()
//     {
//         if (qu.empty()) return ;
//          qu.pop();
//     }
//     int topp()
//     {
//         if (qu.empty())
//             return -1;
//         return qu.front();
//     }
// };

// implement queue using stack
// approach 1

// class queuee{
//     public:

//     stack<int>st1;
//     stack<int>st2;

//     void pushh(int x){
//         while(!st1.empty()){
//             st2.push(st1.top());
//             st1.pop();
// //         }
//         st1.push(x);
//         while(!st2.empty()){
//             st1.push(st2.top());
//             st2.pop();
//         }
      
//     }
//     void pop(){
//         if(st1.empty()) return ;
//         st1.pop();
//     }

//     int top(){
//         if(st1.empty()) return -1;
//         return st1.top();
//     }

// };


// approach 2


//  class queuee{
//     public:
//     stack<int> st1;
//     stack<int>st2;
//     void push(int x){
//         st1.push(x);
//     }
//     void pop(){
//         if(st1.empty()&&st2.empty()){
//          return;
//         }
//         if(!st2.empty()){
//             st2.pop();
//         }
//         else{
//         while(!st1.empty()){
//              st2.push(st1.top());
//              st1.pop();
//         }
//         st2.pop();
//     }
        
//     }
//     int top(){
//         if(st1.empty()&&st2.empty()) return -1;
//         if(!st2.empty()) return st2.top();
//         while(!st1.empty()){
//             st2.push(st1.top());
//             st1.pop();
//         }
//         return st2.top();
//     }
// };


// bool balanced_paranthesis(string s){
//     stack<char>st;
//     int n=s.size();
//     for(int i=0;i<n;i++){
//         if(s[i]=='('||s[i]=='['||s[i]=='{'){
//             st.push(s[i]);
//         }
//         else{
//             if(st.empty()) return false;
//             char c=st.top();
//             if((c=='('&&s[i]==')')||(c=='{'&&s[i]=='}')||(c=='['&&s[i]==']')) {
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
  
// }

//   if(st.empty()) return true;
//     else return false;
    
// }


int main()
{

    // stackk st;
    // st.push(4);
    // st.push(10);
    // st.push(11);
    // // cout<<st.top();
    // st.pop();
    // cout<<st.top();

    // queuee qu;
    // qu.push(2);
    // qu.push(5);
    // cout<<qu.front();

    // stackk st;
    // st.push(2);
    // st.push(5);
    // cout<<st.peek();

    // queuee qu;
    // qu.push(4);
    // qu.push(7);
    // cout<<qu.peek();

    // stackk st;
    // st.pushh(4);
    // st.pushh(18);
    // cout << st.topp();


//     queuee qu;
//     qu.pushh(3);
//     qu.pushh(4);
//     cout<<qu.top();


// queuee qe;
// qe.push(2);
// qe.push(3);
// cout<<qe.top();
// string  s="(){[]}";
// cout<< balanced_paranthesis(s);

}