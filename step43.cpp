#include <bits/stdc++.h>
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

node* arrtoLL(vector<int>arr){
    node* head=new node(arr[0]);
    node* temp=head;
    for(int i=1;i<arr.size();i++){
     temp->next=new node(arr[i]);
     temp=temp->next;   
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
// brute force solution tc=O(n+n/2); sc=O(1);
// node* middle_node_address(node* head){
// int count=0;
// node* temp=head;
// while(temp){
//     count++;
//     temp=temp->next;
// }
// int middle_node=((count)/2+1);
// temp=head;
// while(temp){
//     middle_node-=1;
//     if(middle_node==0){
//       return temp;
//     }
//     temp=temp->next;
// }
// optimal solution tc=O(n/2) sc=O(1);  rabbit and turtole solution
node* middle_node_address(node* head){
node* slow=head;
node* fast=head;
while(fast!=NULL&&fast->next!=NULL){
  fast=fast->next->next;
  slow=slow->next;
}
return slow;
}
node* reverse_linked_list_itterative_and_recursive(node* head){
    // brute force tc=O(2n) sc=n
    // node* temp=head;
    // stack<int>st;
    // while(temp){
    //  st.push(temp->data);
    //  temp=temp->next;
    // }
    // temp=head;
    // while(temp){
    //     temp->data=st.top();
    //     st.pop();
    //     temp=temp->next;
    // }
    // return head;

//    optimal solution
//    tc-O(1) sc=O(1)
    // node* temp=head;
    // node* previousbox =nullptr;
    // while(temp){
    //     node* nextbox=temp->next;
    //     temp->next=previousbox;
    //     previousbox=temp;
    //     temp=nextbox;

    // }
    // return previousbox;
    // recursive solution   tc=O(n)  sc=O(n) {recursive call space}
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=reverse_linked_list_itterative_and_recursive(head->next);
    node* present=head->next;
    present->next=head;
    head->next=nullptr;
    return newhead;
}

bool detect_loop_in_linked_list(node* head){
    // brute force solution tc=O(n) sc=O(n)
//     unordered_map<node*,int>hashmap;
//     node* temp=head;
//     while(temp!=NULL){
//         if(hashmap.find(temp)!=hashmap.end()) return true;
//         hashmap[temp]++;
//         temp=temp->next;
//     }
//     return false;
// optimal solution tc=o(n) sc=O(1);  rabbit and turtole
node* temp=head;
node* fast=temp;
node* slow=temp;
while(fast!=NULL&&fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
     if(fast==slow) return true;
}
return false;
}
node* starting_point_of_loop_in_ll(node* head){
    // brute force  tc=O(n) sc=O(1);
    // unordered_map<node*,int>hashmap;
    // node* temp=head;
    // while(temp!=NULL){
    //     if(hashmap.find(temp)!=hashmap.end()) return temp;
    //     hashmap[temp]++;
    //     temp=temp->next;
    // }
    // return NULL;
    // optimal solution tc=O(n) sc=O(1);
    node* temp=head;
    node* fast=temp;
    node* slow=temp;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            slow=head;
            while(slow!=fast){
          
          slow=slow->next;
          fast=fast->next;
        }
        return slow;
    }
}
    return NULL;
}
int length_of_loop_in_ll(node* head){
    // brute force tc=O(n) sc=(n);
    // node* temp=head;

    // unordered_map<node*,int>mpp;
    // int count=1;
    // while(temp!=NULL){
    //     if(mpp.find(temp)!=mpp.end()){
    //       int value=mpp[temp];
    //       return count-value;
    //     }
    //     mpp[temp]=count;
    //     count++;
    //     temp=temp->next;
        
    // }
    // return 0;
    // optimal solution tc=O(2n) sc=O(1);
    node* temp=head;
    node* fast=temp;
    node* slow=temp;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            int count=1;
            fast=fast->next;
            while(fast!=slow){
               
               fast=fast->next;
               count++;
            }
            return count;
        }
    }
    return 0;


}

bool cheak_pallindrome(node* head){
    // brute force tc=O(2n) sc=O(n);
    // stack<int>st;
    // node* temp=head;
    // while(temp!=NULL){
    //     st.push(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL){
    //     if(temp->data!=st.top()) return false;
    //     temp=temp->next;
    //     st.pop();
    // }
    // return true;

    // optimal solution tc=O(2n) sc=O(1);
    node* temp=head;
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    node* secondhalf=reverse_linked_list_itterative_and_recursive(slow->next);
    node* newhead=secondhalf;
    while(newhead!=NULL){
        
    if(newhead->data!=temp->data){
        reverse_linked_list_itterative_and_recursive(secondhalf);
        return false;
    }
    temp=temp->next;
    newhead=newhead->next;
    

    }
    reverse_linked_list_itterative_and_recursive(secondhalf);
    return true;

}
node* segrigate_odd_and_even_nodes(node* head){
    // brute force sc=O(n) tc=O(n)
    // if(head==NULL||head->next==NULL) return head;
    // node* temp=head;
    // vector<int>arr;
    // while(temp!=NULL&&temp->next!=NULL){
    //     arr.push_back(temp->data);
    //
    //     temp=temp->next->next;
    // }
    // if(temp){
    //     arr.push_back(temp->data);
    // }
    // temp=head->next;
    // while(temp!=NULL&&temp->next!=NULL){
    //        arr.push_back(temp->data);
    //        temp=temp->next->next;
    // }
    // if(temp){
    //     arr.push_back(temp->data);
       
    // }
    // temp=head;
    // int i=0;
    // while(temp){
    //     temp->data=arr[i];
    //     temp=temp->next;
    //     i++;
    // }
    // return head;
    // optimal solution tc=O(n) sc=O(1);
    if(head==NULL||head->next==NULL) return head;
    node* temp=head;
    node* odd=head;
    node* even=head->next;
    node* evencopy=even;
    while(even!=NULL&&even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;


        odd=odd->next;
        even=even->next;
    }
    odd->next=evencopy;
    return head;
    
}

node* delete_nth_node_from_back(node* head,int n){
    // brute force solution tc=O(2n) sc=O(1);
    // node* temp=head;
    // int count=0;
    // while(temp){
    //     count++;
    //     temp=temp->next;
    // } 
    // temp=head;
    // int stopat=count-n;
    // if(stopat==0){
    //     node* headfinal=head->next;
    //     delete head;
    //     return headfinal;
    // }
    // while(temp){
    //     stopat--;
    //     if(stopat==0){
    //         break;
    //     }
    //     temp=temp->next;
    // }
    // node* deletenode=temp->next;
    // temp->next=temp->next->next;
    // delete deletenode;
    // return head;
    // optimal solution
    // tc=O(n) sc=O(1);
    node* temp=head;
    node* slow=head;
    node* fast=head;
  
    while(n!=0){
        fast=fast->next;
        n--;
    }
    if(fast==NULL){
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    
    node* deletenode=slow->next;
    slow->next=slow->next->next;
    delete deletenode;
    return head;
}

node* delete_middle_node_in_ll(node* head){
    // brute force tc=n+n/2 sc=1
    //  if(head==NULL) return NULL;
    //  if(head->next==NULL) {
    //     delete head;
    //     return NULL;
    //  }
    // node* temp=head;
    // int count=0;
    // while(temp){
    //     count++;
    //     temp=temp->next;
    // }
    // int middle=count/2;
    // temp=head;
    // while(temp){
    //     middle--;
    //     if(middle==0){
    //         node* deletenode=temp->next;
    //         temp->next=temp->next->next;
    //         delete deletenode;
    //         return head;
    //     }
    //     temp=temp->next;
    // }
    // return head;
    // optimal solution tc=n/2 sc=1
    if(head==NULL) return NULL;
    if(head->next==NULL) {
        delete head;
        return NULL;
    }
    node*  temp=head;
    node* fast=head;
    node* slow=head;
    fast=fast->next->next;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    node* deletenode=slow->next;
    slow->next=slow->next->next;
    delete deletenode;
    return head;
    
}
node* middle_for_sort_a_ll(node* head){
    node* temp=head;
    node* fast=head;
    node* slow=head;
    fast=fast->next;
    while(fast!=NULL&&fast->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
    }
    return slow;
}
node* merge_a_ll(node* list1,node* list2){
    node* dumy=new node(-1,nullptr);
    node* temp=dumy;
    while(list1!=NULL&&list2!=NULL){
        if(list1->data<=list2->data){
            temp->next=list1;
            temp=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            temp=list2;
            list2=list2->next;
        }
    }
    if(list1) temp->next=list1;
    else temp->next=list2;
    return dumy->next;
}
node* sort_a_ll(node* head){
    // brute force solution tc=O(nlogn+n+n) sc=O(n)
    //  vector<int>arr;
    //  node* temp=head;
    //  while(temp){
    //     arr.push_back(temp->data);
    //     temp=temp->next;
    //  }
    //  sort(arr.begin(),arr.end());
    //  temp=head;
    //  int i=0;
    //  while(temp){
    //   temp->data=arr[i];
    //   temp=temp->next;
    //   i++;      
    //  }
    //  return head;
    // optimal solution tc=O(logn*(n+n/2)) sc=(logn) recursive stack space otherwise O(1);
    if(head==NULL||head->next==NULL) return head;
    node* middle=middle_for_sort_a_ll(head);
    node* left=head;
    node* right=middle->next;
    middle->next=NULL;
    left=sort_a_ll(left);
    right=sort_a_ll(right);
    return merge_a_ll(left,right);

}
node* sort_a_ll_with_zero_one_two(node* head){
    // brute force solutin tc=O(2n) sc=(1)
    // node* temp=head;
    // int count0=0;
    // int count1=0;
    // int count2=0;
    // while(temp){
    //      if(temp->data==0) count0++;
    //      else if(temp->data==1) count1++;
    //      else count2++;
    //            temp=temp->next;
    // }
    // temp=head;
    // while(temp){
    //     if(count0){
    //         temp->data=0;
    //         count0--;
    //     }
    //     else if(count1){
    //         temp->data=1;
    //         count1--;
    //     }
    //     else{
    //         temp->data=2;
    //         count2--;
    //     }
    //     temp=temp->next;
    // }
    // return head;
    // optimal solution sc=O(1) tc=O(1);
    if(head==NULL||head->next==NULL) return head;
    node* zero=new node(-1,nullptr);
    node* one=new node(-1,nullptr);
    node* two=new node(-1,nullptr);

    node* zerotemp=zero;
    node* onetemp=one;
    node* twotemp=two;
    node* temp=head;
    while(temp){
    
      if(temp->data==0){
        zero->next=temp;
        zero=zero->next;
      }
      else if(temp->data==1){
        one->next=temp;
        one=one->next;
      }
      else{
        two->next=temp;
        two=two->next;
      }
      temp=temp->next;
    }
    if(onetemp->next){
        zero->next=onetemp->next;
    }
    else{
        zero->next=twotemp->next;
        
    }

    one->next=twotemp->next;
    two->next=NULL;
    node* newhead=zerotemp->next;
    delete zerotemp;
    delete onetemp;
    delete twotemp;
    return newhead;
}
node* intersection_is(node* t1,node* t2,int n){
    while(n){
        t1=t1->next;
        n--;
    }
    while(t1){
        if(t1==t2) return t1;
        t1=t1->next;
        t2=t2->next;
    }
}
node* intersection_point_of_y_ll(node* head1,node* head2){
    // brute force1 tc=O(n1)+O(n2) sc=O(n1)
    // if(head1==NULL||head2==NULL) return NULL;
    // node* temp=head1;
    // unordered_map<node*,int>mpp;
    //  while(temp){
    //     mpp[temp]++;
    //     temp=temp->next;
    //  }
    //   temp=head2;
    //  while(temp){
    //     if(mpp.find(temp)!=mpp.end()){
    //         return temp;
    //     }
    //     temp=temp->next;
    //  }
    //  return NULL;
//    better  solution tc=O(n1+2n2) sc=O(1);
    // if(head1==NULL||head2==NULL) return NULL;
    // int n1=0;
    // int n2=0;
    // node* temp=head1;
    // while(temp){
    //     n1++;
    //     temp=temp->next;
    // }
    // temp=head2;
    // while(temp){
    //     n2++;
    //     temp=temp->next;
    // }
      
    // if(n1>n2){
    //     return intersection_is(head1,head2,n1-n2);
    // }
    // else{
    //     return intersection_is(head2,head1,n2-n1);
    // }
    // optimal solution tc=O(n1+n2) sc=O(1);
    // dont changed the original ll please otherwise wrong ans on leetcode
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA==NULL||headB==NULL) return NULL;
//         ListNode* tempa=headA;
//         ListNode* tempb=headB;
//         while(tempa!=tempb){
//             tempa=tempa->next;
//             tempb=tempb->next;

//             if(tempa==tempb) return tempa;
//             if(tempa==NULL) tempa=headB;
//             if(tempb==NULL) tempb=headA;

//         }
//         return tempa;

}
node* reverse(node* head){
    if(head==NULL||head->next==NULL) return head;
    node* temp=head;
    node* back=NULL;
    while(temp){
        node* next=temp->next;
        temp->next=back;
        back=temp;
        temp=next;

    }
    return back;
}
int carry(node* head){
 if(head==NULL) return 1;
 int cary=carry(head->next);
head->data=head->data+cary;
if(head->data<10){
    return 0;
}
else{
    head->data=0;
    return 1;

}
}

node* add_one_to_number_represented_by_ll(node* head){
    // brute force solution tc=O(3n) sc=O(1);
    // head=reverse(head);
    // node* temp=head;
    // while(temp){
    //     temp->data=temp->data+1;
    //     if(temp->data==10){
    //         temp->data=0;
    //         temp=temp->next;
    //     }
    //     else{
    //        head=  reverse(head);
    //        return head;

    //     }
    // }
    // node* box= new node(1,nullptr);
    // head=reverse(head);
    //  box->next=head;
    //  return box;
   //striver standard solution for brute force
    //    node* temp = head;
    // int carry = 1;

    // while(temp){
    //     temp->data = temp->data + carry;

    //     if(temp->data < 10){
    //         carry = 0;
    //         break;
    //     }

    //     temp->data = 0;
    //     carry = 1;
    //     temp = temp->next;
    // }

    // head = reverse(head);

    // if(carry){
    //     node* box = new node(1, nullptr);
    //     box->next = head;
    //     return box;
    // }

    // return head;

    // optimal solution tc=O(1) sc=O(n) {recursive stack space};
    int cary= carry(head);
    if(cary==0) return head;
    else{
        node* box=new node(1,nullptr);
        box->next=head;
        return box;
    }
}
node* add_two_no_represented_by_ll(node* head1,node*head2){
    node* dummy=new node(-1,nullptr);
    node* temp=dummy;
    int carry=0;
    while(head1!=NULL||head2!=NULL||carry!=0){
        int sum=0;
        if(head1){
        sum+=head1->data;
        head1=head1->next;
        }
        if(head2){
            sum+=head2->data;
            head2=head2->next;
        }
        sum+=carry;
        int sumvalue=sum%10;
         carry=sum/10;
        node* box=new node(sumvalue,nullptr);
        temp->next=box;
        temp=temp->next;
    }
    return dummy->next;

}
int main(){
    vector<int>arr={1,2,3,4,5};
    node* head=arrtoLL(arr);
    // node* middle_node=middle_node_address(head);
    // cout<<middle_node->data;
    // print(head);

    // head=reverse_linked_list_itterative_and_recursive(head);
    // print(head);
    // cout<<detect_loop_in_linked_list(head);
    // cout<<starting_point_of_loop_in_ll(head);
    // cout<<length_of_loop_in_ll(head);
    // cout<<cheak_pallindrome(head);
    // segrigate_odd_and_even_nodes(head);
    // print(head);
    // int n=2;
    // delete_nth_node_from_back(head,n);
    // delete_middle_node_in_ll(head);
    // sort_a_ll(head);
//    head= sort_a_ll_with_zero_one_two(head);
//    cout<<intersectin_point_of_y_ll(head1,head2);
    //  cout<<add_one_to_number_represented_by_ll(head);
    cout<<add_two_no_represented_by_ll(head1,head2);
    print(head);
}