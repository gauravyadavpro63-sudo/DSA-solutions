
class queuee{
   const int size=4;
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