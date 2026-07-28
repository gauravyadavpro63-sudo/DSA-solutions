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
class stackk{
    int arr[100];
    int topp=-1;

    public:
     void push(int x){
        if(topp>=99) return;   //or throw overflow_error("stack is full")
        topp=topp+1;
        arr[topp]=x;
     }
     void pop(){
        if(topp==-1) return;     //or throw runtime_error("stack is empty")
        topp=topp-1;

     }
     int  top(){
        if(topp==-1) return -1;
        return arr[topp];
     }
     int size(){
        return topp+1;
     }

};



class queuee{
   static const int size=4;
    int arr[size];
    int start=-1;
    int end=-1;
    int currentsize=0;
    public:
    void push(int x){
        if(currentsize==size) return;
        if(currentsize==0){
            start=0;
            end=0;
        }
        else{
            end=(end+1)%size;
        }
        arr[end]=x;
        currentsize=currentsize+1;
    }
    void pop(){
        if(currentsize==0) return;
        int element=arr[start];
        if(currentsize==1){
            start=-1;
            end=-1;
        }
        else{
            start=(start+1)%size;
        }
        currentsize=currentsize-1;
    }
    
    int front(){
        if(currentsize==0) return -1;
        return arr[start];
    }
    int sizee(){
        return currentsize;
    }


};
int main(){
 
// stackk st;
// st.push(4);
// st.push(10);
// st.push(11);
// // cout<<st.top();
// st.pop();
// cout<<st.top();

queuee qu;
qu.push(2);
qu.push(5);
cout<<qu.front();



}