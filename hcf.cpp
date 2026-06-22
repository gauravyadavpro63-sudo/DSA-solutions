#include <bits./stdc++.h>
using namespace std;

// int hcf(int a,int b){
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0&&b%i==0){
//             cout<<i;
//             break;
//         }
//     }
// }



                        //eucolodian algorathim//




  





int hcf(int a,int b){
    while(a>0&&b>0){
        if(a>b){ a= a%b; }
        else{  b= b%a; }
    }
    if(a==0){cout<<b; }
    else  { cout<<a; }
}


int main(){
    int a,b;
    cout<<"enter the two number";
    cin>>a>>b;
    hcf(a,b);
}




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;

//     while(b != 0){
//         int r = a % b;
//         a = b;
//         b = r;
//     }

//     cout<<a;
// }