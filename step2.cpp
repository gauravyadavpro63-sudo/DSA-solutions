                                     //patteren problems//

//for the outer loop count the no of lines
//for the inner loop , focus on the columns and connect them somewhere in rows
//print them inside the inner loop
//observe symetry (optional)


#include <bits/stdc++.h>
using namespace std;                                
int pattern1(int b){                                       
    for(int i=1;i<=b;i++){
        
        for(int j=1;j<=b;j++){
            cout<<"* ";
        }
        cout<<endl;
   }
    
}
int pattern2(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}   
int pattern3(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++)   {
        cout<<"* ";
        } 
        cout<<endl;
    }
} 
    int pattern4(int b){
        for(int i=1;i<=b;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
}
int pattern5(int b){
   for(int i=1;i<=b;i++){
    for(int j=1;j<=b-i+1;j++){
        cout<<"* ";
    }
        cout<<endl;
    }
}
int pattern6(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int pattern7(int b){
    for(int i=1;i<=b;i++){
        for(int j=i;j<=b-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=b-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int pattern8(int b){
    for(int i=1;i<=b;i++){
       for(int j=1;j<=i-1;j++){
       cout<<" ";
    }
    for(int j=1;j<=2*(b-i+1)-1;j++){
        cout<<"*";
    }
    for(int j=1;j<=i-1;j++){
        cout<<" ";
    }
    cout<<endl;
}
}
int pattern10(int b){
    for(int i=1;i<=2*b-1;i++){
        int star=i;
        if(i>5){
            star=2*b-i;
        }
        for(int j=1;j<=star;j++){
            cout<<" *";
        }
        cout<<endl;
    }
   
}
int pattern11(int b){
    int start=1;
    for(int i=0;i<=b;i++){
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<" "<<start;
            start=1-start;
        }
        cout<<endl;

    }
}
int pattern12(int b){
    int space=2*(b-1);
    for(int i=1;i<=b;i++){
        
        for(int j=1;j<=i;j++){
            cout<<" "<<j;  
        }
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j;
        }
        space=space-2;
        cout<<endl;
    }
}
int pattern13(int b){
     int num =1;
   
    for(int i=1;i<=b;i++){
       
        for(int j=1;j<=i;j++){
            cout<<num;
            num=num+1;
        }
    
        cout<<endl;
    }
}
int pattern14( int b){
    for(int i=1;i<=b;i++){
        for(char j='A';j<='A'+i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int pattern15(int b){
    for(int i=1;i<=b;i++){
        for(char j='A';j<='A'+b-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
   int pattern16(int b){
    
    for(int i=0;i<b;i++){
        char a='A'+i;
        for(int j=0;j<=i;j++){
            cout<<a;
        }
        cout<<endl;
        a++;
    }
   }
   int pattern17(int b){
   
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b-i;j++){
             cout<<" ";
        }
         char ch='A';
    int breakpoint=(2*i)/2;
        
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<=breakpoint){
               ch++;
            }
            else{
                ch--;
            }
         
        }
        for(int j=1;j<=b-i;j++){
        cout<<" ";
        }
        cout<<endl;
    }
   }
   int pattern18(int b){
    char a=b-'A'+1;;
    for(int i=1;i<=b;i++){
        for(char f='E'-i+1;f<='E';f++){
            cout<<f;
        }
        cout<<endl;
    }
   }
   int pattern19(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b-i+1;j++){
          cout<<"*";
        }
        for(int j=1;j<=2*(i-1);j++){
           cout<<" ";
        }
        for(int j=1;j<=b-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(b-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern20(int b){
 for(int i=1;i<=2*b-1;i++){
    int space=2*(b-i);
    int star=i;
    if(i>b){
    star=2*b-i;
    space=2*(i-5);
    }
    for(int j=1;j<=star;j++){
        cout<<"*";
    }for(int j=1;j<=space;j++){
      cout<<" ";
    }
    for(int j=1;j<=star;j++){
       cout<<"*";
    }
    cout<<endl;

 } 

}
int pattern21(int b){
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b;j++){
        if(i==1||i==b||j==1||j==b){
            cout<<"*";
        }
    else{
        cout<<" ";
    }
   
}
cout<<endl;
}
}

int pattern22(int b){
    for(int i=1;i<=2*b-1;i++){
        for(int j=1;j<=2*b-1;j++){
                int top=i-1;
                int left=j-1;
                int right=(2*b-1)-j;
                int down=(2*b-1)-i;
                cout<<(b-min(min(left,right),min(top,down)));
            }
            cout<<endl;
        }
    }


int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        int b;
        cin>>b;
        // pattern1(b);
        // pattern2(b);
        // pattern3(b);
        // pattern4(b);
        // pattern5(b);
        // pattern6(b);
        // pattern7(b);
        // pattern8(b);
        //combine pattern7 and pattern8 for pattern 9
        // pattern10(b);
        // pattern11(b);
        // pattern12(b);
        // pattern13(b);
        // pattern14(b);
        // pattern15(b);
        // pattern16(b);
        // pattern17(b);
        // pattern18(b);
        // pattern19(b);
        // pattern20(b);
        // pattern21(b);
        pattern22(b);
        

    }
    
}
                                            