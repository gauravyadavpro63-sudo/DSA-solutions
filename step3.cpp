

                                    //C++STL//
                    
//pairs

    // pair<int,int> p={1,3};

    // cout<<p.first<<" "<<p.second;

    // pair<int,pair<int,int>> p={1,{3,4}};

    // cout<<p.first<<" "p.second.second<<" "<<p.second.first;

    // pair<int,int> arr[]={ {1,2}, {2,5}, {5,1}};
    
    // cout<<arr[1].second;
    

//Vectors

// vectors<int> v;       ---creates a empty vector---

// v.push_back(1);   ---we  can always increse the size of vector its dynamic in nature---

// v.emplace_back(2);     ---emplace back and push back are same but emplace back is faster---

// vector<pair<int,int>> v;

// v.push_back({1,2});

// v.emplace_back(1,2);

// vector<int> v(5,100);   ---{100,100,100,100,100}---

// vector<int>v(5);       ---0 or garbage value---

// vector<int> v1(5,20);
// vector<int> v2(v1);


//vector<int>::iterator it=v.begin();  ---location point karega---
//it++;
//cout<<*(it)<<" ";

//it=it+2;
//cout<<*(it)<<" ";

// vector<int>::iterator it=v.end();  ---{10,20,30,40} it will not point location next to location of 40---


// cout<<v[0];   ---10---
// cout<<v.back();  ---40---



// for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
//     cout<<*(it);
// }

// for(auto it=v.begin();it!=v.end(); it++){
//     cout<<*(it);
// }

// for(auto it:v){
//     cout<<it;
// }


// {10,20,12,23,35}
// v.erase(v.begin()+1);   ---{10,12,23,35}---

// v.erase(v.begin()+2,v.begin()+4);   ---{10,20,35}[start,end)---



//     vector<int>v(2,100;)   ---{100,100}---

//     v.insert(v.begin(),300);  ---{300,100,100}---

//     v.insert(v.begin()+1,2,10);  ---{300,10,10,100,100}

//     vector<int> copy(2,50);
//     v.insert(v.begin(),copy.begin(),copy.end());  ---{50,50,300,10,10,100,100}---



//    ---{10,20}---

//    cout<<v.size();   ---2---

//    v.pop_back();   ---{10}---

//    v1->{10,20};
//    v2->{30,40};

//    v1.swap(v2);  ---v1->{30,40} v2->{10,20}---

//    v.clear();   ---erasethe entire vector---
//    cout<<v.empty();   ---true---


 
  //list

//   list<int>ls;---list is same as vector but it also gave push_front and emplace_front that is not in vector ,in vector if use insert thats very costly
  
//   ls.push_back(2);---{2}---
  
//   ls.emplace_back(4);---{2,4}---

//   ls.emplace_front(5);---{5,2,4}---

//   ls.emplace_front();---{2,4}---

//rest function same as vector
//begin,end,rbegin,rend,clear,insert,size,swap



//Deque

// deque<int>dq;---same as vector & list---

// dq.push_back(1);---{1}---
// dq.emplace_back(2);---{1,2}---
// dq.push_front(4);---{4,1,2}---
// dq.emplace_front(3);---{3,4,1,2}---
// dq.pop_back();---{3,4,1}---
// dq.pop_front();---{4,1}---
// dq.back();
// dq.front();

//rest function same as vector


  //stack

// stack<int>st;
// st.push(1);---{1}---
// st.push(2);---{2,1}---
// st.push(3);---{3,2,1}---
// st.push(3)l;--{3,3,2,1}---
// st.emplace(5);---{5,3,3,2,1}---

// cout<<st.top();---5---**st[2] is invalid here 

// st.pop();---{3,3,2,1}

// cout<<st.top();---3---

// cout<<st.size();---4---

// cout<<st.empty();---false---

// stack<int>st1,st2;
// st1.swap(st2);


  //queue

//   queue<int>q;
//   q.push(1);---{1}---
//   q.push(2);---{1,2}---
//   q.emplace(4);---{1,2,4}---

//   q.back += 5

//   cout<<q.back();---9---
//   cout<<q.front();---1---
//   q.pop();---{2,9}---
//   cout<<q.front();---2---

//   size swap empty same as stack


   //priority_queue (maximum heap)

//    priority_queue<int>pq;

//    pq.push(5);---{5}---
//    pq.push(2);---{5,2}---
//    pq.push(8);---{8,5,2}---
//    pq.emplace(10);---{10,8,5,2}---

//    cout<<pq.top();---10---
//    pq.pop();---{8,5,2}---
//    cout<<pq.top();---8---


   //minimum heap

//    priority_queue<int,vector<int>greater<int>> pq;
//    pq.push(5); ---{5}---
//    pq.push(2);---{2,5}---
//    pq.push(8);---{2,5,8}---
//    pq.emplace(10);---{2,5,8,10}---
//    cout<<pq.top();---2---

   //push and pop happen in logn while top happen O(1)


   //set               logn time

  //  set<int>st;
  //  st.insert(1);---{1}---
  //  st.emplace(2);---{1,2}---
  //  st.insert(2);---{1,2}---
  //  st.insert(4);---{1,2,4}---
  //  st.insert(3);---{1,2,3,4}---

  //  ---begin() end() rbegin(), rend(),size(),empty(),swap() all same here too---

  //  ---{1,2,3,4,5}---
  //  auto it=st.find(3);   ---return iterator that points 3---

  //  auto it=st.find(6);  ---return itterator that pont next after 5---

  //  st.erase(5);---erase 5, takes lograthmic time---

  //  int cnt=st.count(1); ---1 , if 1 not present then 0---

  //  auto it=st.find(3);
  //  st.erase(it);---takes constant time---

  //  ---{1,2,3,4,}---
  //  auto it1=st.find(2);
  //  auto it2=st.find(4);
  //  st.erase(it1,it2);---after erase {1,4,5}[fiest,last)---

    //lower_bound upper_bound() function work in the same wayas in vector \\

    // auto it=st.lower_bound(2);---points 1 if not present then next gratest no---
    // auto it=st.upper_bound(3);---points 4 if not present then next greatest no---



//multiset  ---everyting same as set ,store duplicate element also

// multiset<int>ms;
// ms.insert(1);---{1}---
// ms.insert(1);---{1,1}---
// ms.insert(1);---{1,1,1}---
// ms.erase(1); ---all 1 erased---

// int cnt=ms.count(1);---3---
// ms.erase(ms.find(1));---only a single one is erased---

// ms.erase(ms.find(1),ms.find(1)+2);---{1}---


//unordered_set

// unordered_set<int> st;    o(1)

// lowerbound and upper bound function does not work here, rest all function are same 
// it does not store in particular order ,it has better complexity then set in most cases 



//map  ---shorted orderd key---  logn

// map<int,int>mpp;     ---(key,value)---
// map<int,pair<int,int>>mpp;
// map<pair<int,int>,int>mpp;


// mpp[1]=2;
// mpp.emplace({3,1});
// mpp.insert({2,4});   [{1,2} {2,4} {3,1}]
// mpp[{2,3}]=10;

// for(auto it:mpp){
//   cout<<it.first<<" "<<it.second<<endl;     
// }                                           
// ---1 2  
  //  2 4
  //  3 1---

  //  cout<<mpp[1];---2---
  //  cout<<mpp[5];---0 or null---

  //  auto it=mpp.find(3);
  //  cout<<*(it).second;---1---

  //  auto it=mpp.find(5);---ponts mpp.end() **after the third itteration---

  //  auto it=mpp.lower_bound(2);
  //  auto it=mpp.upper_bound(3);

  //  erase,swap,size,empty are same as above


  // multimap    ---duplicate and shorted {(1,3) (1,4)}
  
  // everything same as map but it can store multiple keys
  // map[key] cnanot be used 


  //unordered_map   O(1)
  // same as map but unique but random not in shorted
  





                                          //ALGORATHIMS//


// sort(a,a+n);
// sort(v.begin(),v.end());

// sort(a+2,a+4)

// sort(a,a+n,greater<int>);  ---sort in descending order---

// pair<int,int>a[]={{1,2},{2,1},{4,1}};

//sort it according to increasing second element and if same then decreasing first element

// sort(a,a+n,comp);

// bool comp(Ipair<int,int>p1,pair<int,int>p2){
//   if(p1.second<p2.second)return true;
//   if(p1.second>p2.second)return false;
//   if(p1.first>p2.first)return true;
//   return false;
// }

  //  int num=7;
  //  int cnt=__builtin_popcount();---counts the number of 1bit in bibnary form
   
  //  long long num=83457238455;
  //  int cnt=__builtin_popcountll();

  //  string s="123";

  //  do{
  //   cout<<s<<endl;
  //  }while(next_permutation(s.begin(),s.end()));

  //  int maxi=*max_element(a,a+n);

  