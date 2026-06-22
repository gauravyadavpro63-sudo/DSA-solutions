                            //    swap an array0
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//         int arr[]={1,2,3,4,5};
//         for(int i=0;i<=2;i++){
//             swap(arr[i],arr[5-i-1]);
//         }
//         for(int i=0;i<=4;i++){
//             cout<<arr[i];
//         }
//     }



// #include  <bits/stdc++.h>
// using namespace std;



// void rev(int i,int arr[],int n){
//     if(i>=n/2){
//         return;

//      }
//     swap(arr[i],arr[n-i-1]);
//     rev(i+1,arr,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     rev(0,arr,n );
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

 bool palindrome(int i ,string a){
    if(i>=a.size()/2){
        return true;
    } 
    if(a[i]!=a[a.size()-i-1]){
        return false;
    }
    return palindrome(i+1,a);

 }



int febonaci(int a){
    if(a<=1){
        return a;
    }
    int last=febonaci(a-1);
    int second_last=febonaci(a-2);
    return  last+second_last;
}
int main(){
    // string a="madam";
//    cout<< palindrome(0,a);
cout<<febonaci(3);
}


