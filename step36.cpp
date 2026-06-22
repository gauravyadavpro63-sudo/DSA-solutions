    #include <bits/stdc++.h>
    using namespace std;

    int gasstationcount(vector<int>arr,double dist){\
        //risky
      int n=arr.size();
      int cnt=0;
      for(int i=0;i<n-1;i++){
        int  numberinbetween=(arr[i+1]-arr[i])/dist;
        if(arr[i+1]-arr[i]==numberinbetween*dist){            
                                                                
            numberinbetween--;
        }
        cnt+=numberinbetween;
      }
   return cnt;

   //safe
    //  for(int i = 0; i < n - 1; i++){
    //     double gap = arr[i+1] - arr[i];
    //     int needed = (int)ceil(gap / distance) - 1;
    //     count += needed;
    // }
    }

    double min_max_distanceto_gasstation(vector<int>arr,int gstation){

            // optimal 2
       
    int n=arr.size();
    double low=0;
    double high=0;
    double ans=-1;
    for(int i=0;i<n-1;i++){
        high=max(high,double(arr[i+1]-arr[i]));
    }
    double diff=1e-6;
    while(high-low>diff){
        double mid=low+(high-low)/2;
        if(gasstationcount(arr,mid)>gstation){
            low=mid;
        }
        else{
            high=mid;
            ans=mid;
        }
    }
    return ans;
    }
 
    //     // brute force  tc=O(k*n+n)
    //     int n=arr.size();
        
    //     vector<int>stationcounter(n-1,0);
    //     for(int k=0;k<gstation;k++){
    //        int sectionIndex=-1;
    //        double maxlength=-1;
    //         for(int i=0;i<n-1;i++){
    //          double gap=arr[i+1]-arr[i];
    //          double sectionlength=gap/(stationcounter[i]+1);
    //          if(sectionlength>maxlength){
    //             maxlength=sectionlength;
    //             sectionIndex=i;
    //          }
             
    //         }
    //       stationcounter[sectionIndex]++;
    //     }


    //    double maxans=-1;
    //     for(int i=0;i<n-1;i++){
    //       double gap=arr[i+1]-arr[i];
    //       double sectionlength=gap/(stationcounter[i]+1);
    //       maxans=max(maxans,sectionlength);
    //     }
    //     return maxans;
    // }

    // optimal 1  tc=O(nlogn+klogn);
    // int n=arr.size();
    // vector<int>gascounter(n-1,0);
    // priority_queue<pair<double ,int>>pq;
    // for(int i=0;i<n-1;i++){
    //     double diff=arr[i+1]-arr[i];
    //     int index=i;
    //     pq.push({diff,index});
    // }
    // for(int i=0;i<gstation;i++){
    //    auto tp=pq.top();
    //    pq.pop();
    //    int sectionIndex=tp.second;
    //    gascounter[sectionIndex]++;
    //    double intialdiff=arr[sectionIndex+1]-arr[sectionIndex];
    //    double newsection=intialdiff/(gascounter[sectionIndex]+1);
    //    pq.push({newsection,sectionIndex});
    // }
    // return pq.top().first;



    double median_of_two_sorted_array(vector<int>arr1,vector<int>arr2){
        // // brute force  tc=O(n+m) sc=O(n+m)
        // int n=arr1.size();
        // int m=arr2.size();
        // int left=0;
        // int right=0;
        // vector<int>merged;
        // while(left<n&&right<m){
        //     if(arr1[left]<=arr2[right]){
        //     merged.push_back(arr1[left]);
        //     left++;
        //     }
        //     else{
        //         merged.push_back(arr2[right]);
        //         right++;
        //     }
        // }
        // while(left<n){
        //   merged.push_back(arr1[left]);
        //   left++;
        // }
        // while(right<m){
        //     merged.push_back(arr2[right]);
        //     right++;
        // }
        // int size=merged.size();
        // if(size%2==0){
        //     return (merged[(size/2)-1]+merged[(size/2)])/2.0;
        // }
        // else  return merged[size/2];

        // better solution sc=O(1) tc=O(n+m)
//         int n=arr1.size();
//         int m=arr2.size();
//         int left=0;
//         int right=0;
//         int first=0;
//         int second=0;
//         int counter=0;
//         int total=n+m;
//        while(left<n&&right<m){
//         first=second;
//         if(arr1[left]<=arr2[right]){
//            second=arr1[left];
//            left++; 
//         }
//         else{
//             second=arr2[right];
//             right++;  
//         }
//         counter++;
//         if(counter>total/2) break;
        
//        }
//        while(left<n&&counter<total/2){
//         first=second;
//         second=arr1[left];
    
//          counter++;
//           left++;
//     if(counter>total/2) break;
        
//        }
    
//    while(right<m&&counter<total/2){
//         first=second;
//     second=arr2[right];
         
//          counter++;
//          right++;
//          if(counter>total/2) break;
         
//         }
//         if(total%2==0){
//          return (first+second)/2.0;
//         }
//        else return second;
//      }
    // optimal solution tc=log(min(n1,n2))
    
//     if(arr2.size()<arr1.size()) return median_of_two_sorted_array(arr2,arr1);
//     int n=arr1.size();
//     int m=arr2.size();
//     int low=0;
//     int high=n;
//     int l1,l2,r1,r2;
//     while(low<=high){
//         int cut1=(low+high)/2;
//         int cut2=(n+m+1)/2-cut1;

//         if(cut1==0)    l1=INT_MIN;
//         else  l1=arr1[cut1-1];

//        if(cut2==0)  l2=INT_MIN;
//        else  l2=arr2[cut2-1];




//        if(cut1==n)  r1=INT_MAX;
//        else  r1=arr1[cut1];

//        if(cut2==m)  r2=INT_MAX;
//        else  r2=arr2[cut2];
          
//      if( l1<=r2&&l2<=r1){
//        if((n+m)%2==0) return (max(l1,l2)+min(r1,r2))/2.0;
//        else return max(l1,l2);
//      }
//      else if(l1>r2){
//        high=cut1-1;
//      }
//      else {
//         low=cut1+1;
//      }
//     }
//     return -1;



// int kth_element_of_two_sorted_array(vector<int>arr1,vector<int>arr2,int k){
//     if(arr2.size()<arr1.size()) return kth_element_of_two_sorted_array(arr2,arr1,k);
//     int n=arr1.size();
//     int m=arr2.size();
//     int left=k;
//     int high=min(k,n);
//     int low=max(0,k-m);
//     int l1,r1,l2,r2;
//     while(low<=high){
//         int cut1=(low+high)/2;
//         int cut2=left-cut1;
//         if(cut1==0) l1= INT_MIN;
//         else l1=arr1[cut1-1];

//         if(cut2==0) l2=INT_MIN;
//         else l2=arr2[cut2-1];



//         if(cut1==n) r1=INT_MAX;
//         else r1=arr1[cut1];

//         if(cut2==m) r2=INT_MAX;
//         else r2=arr2[cut2];

//         if(l1<r2&&l2<r1){
//             return max(l1,l2);
//         }
//         else if(l1>r2){
//             high=cut1-1;
//         }
//         else{ 
//             low=cut1+1;
//         }
//     }
//     return -1;
}
    int main(){
        vector<int>arr={1,13,17,23};
        int gstation=5;
        // cout<<min_max_distanceto_gasstation(arr,gstation);
        
        vector<int>arr1={1,3,4,7,10,12};
        vector<int>arr2={2,3,6,15};
        int k=2;
        // cout<<median_of_two_sorted_array(arr1,arr2);
        // cout<<kth_element_of_two_sorted_array(arr1,arr2,k);

        
    }