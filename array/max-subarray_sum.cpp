#include<iostream>
#include<algorithm>
using namespace std;


void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
// time complexity is o(n^3)
// int max_sum_subarray(int arr[], int n){

//     int ans=INT16_MIN;

//     for(int sub_array_size=1 ; sub_array_size<=n;sub_array_size++){
//         for(int start_index=0; start_index<n;start_index++){
//             if(start_index+sub_array_size>n){
//                 break;
//             }
//             int sum=0;
//             for(int i=start_index; i<start_index+sub_array_size;i++){
//                 sum+=arr[i];
//                 ans=max(ans,sum);
                
//             }
//         }
//     }cout<<ans;
    
//     return ans;
   
// }

//time complesity is O(n^2)

// int max_sum_subarray(int arr[], int n){
//     int ans=INT16_MIN;
//     for(int start_index=0; start_index<n;start_index++){
//         int sum=0;
//         for(int sub_array_size=1;sub_array_size<=n;sub_array_size++){
//             if(start_index+sub_array_size>n)
//             break;
//             sum+=arr[start_index+ sub_array_size-1];
//             ans=max(ans,sum);
//         }
//     }
//     cout<<ans;

//     return ans;
// 


//time complexity O( nlogn)
/**int max_sum_subarray(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    int m=n/2;
    int left_mss=max_sum_subarray(arr,m);
    int right_mss=max_sum_subarray(arr,n-m);
    int leftsum=INT16_MIN;
    int rightsum=INT16_MIN;
    int sum=0;
    for(int i=m;i<n;i++){
        sum+=arr[i];
        rightsum=max(rightsum,sum);
    }
    sum=0;
    for(int i=(m-1);i>=0;i--){

        sum+=arr[i];
        leftsum=max(leftsum,sum);
    }
    int ans= max(left_mss, right_mss);
    return max(ans,leftsum+rightsum);
   cout<<max(ans,leftsum+rightsum);


}*/

int max_sum_subarray(int arr[], int n){
    int ans=0, sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>0){
            sum+=arr[i];
        }

        else
        sum=0;
        ans=max(ans,sum);

    }
    return ans;
}


int main(){

    int arr[]={1,-3,2,-5,7,6,-1,-4,11,23};

    int n=sizeof(arr)/sizeof(arr[0]);
    

   //print(arr,n);
   int sol= max_sum_subarray(arr,n);
    cout<<sol<<endl;
    
}