// recursion: when a function calls itself untill a specific condition is met

// stack overflow: when numerous function is waiting for call due to recursion 

// recursin tree: f()->f()->f()->f()
            //    f()<-f()<-f()<-
               


            #include <bits/stdc++.h>
            using namespace std;
            int cnt=0;
            void f(){
                if(cnt==3){
                    return;
                }
                cout<<cnt<<endl;
                cnt++; 
                f();                
            }


            void name(int i,int n){
                if(i>n){
                    return;
                }
                cout<<"kaneki"<<endl;
                name(i+1,n);
            }


            void numbers(int n,int i){
             if(n<i)
             return;
             cout<<n<<endl;
             numbers(n-1,i);

            }

            void backtrack(int n,int i){
                if(i<1) 
                return;
                backtrack(n,i-1);
                cout<<i<<endl;
            }


            void backtrack2(int i,int n){
                if(n==i)
                return;
                backtrack2(i+1,n);
                cout<<i<<endl;
            }



            void sum(int i,int k){
                if(i<1){
                cout<<k;
                return;
                }
                sum(i-1,k+i);
            }


            int sum2(int n){
                if(n==0){
                    return 0;
                }
                return n+sum2(n-1);
            }


            int factorial(int n){
                if(n==0){
                    return 1;
                }
                return n*factorial(n-1);
            }
            int main(){
                // f(); 
                int n;
                cin>>n;
                // name(1,n);
                // numbers(n,1);
                // backtrack(n,n);
                // backtrack2(1,n);
                // sum(n,0);
                // cout<<sum2(n);
                // cout<<factorial(n);
                

            }


