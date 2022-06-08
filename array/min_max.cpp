#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<"-"<<arr[i];
    }
    cout<<endl;


}

int main(){

    int arr[]={10,1,20,11,29,49};
    int n=sizeof(arr)/sizeof(arr[0]);

  
   
 cout<<*max_element(arr,arr+n);
 cout<<endl;
 
 cout<<*min_element(arr,arr+n);


    


}