#include<iostream>
#include<limits.h>
using namespace std;
int main(){
//-------------- BUBBLE_SORT-----------
// int arr[10]={2,41,42,1,34,54,32,23,65,10};
// int n=10;
// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n;j++){               
//         if(arr[j]>arr[j+1]){                
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
// }
// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" "<<endl;
// }

//------------SELECTION_SORT----------------
// int arr[10]={2,41,42,1,34,54,32,23,65,10};
//  int n=10;
// for(int i=0;i<n;i++){
//     int min=INT_MAX;
//  int minindex=-1;
//     for(int j=i;j<n;j++){
//  if(min>arr[j]){
//     min=arr[j];
//     minindex=j;
//  }
//  }

//  int temp=arr[minindex];
//  arr[minindex]=arr[i];
//  arr[i]=temp;
// }

// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" "<<endl;
// }

//-------CYCLIC SORT-----------
int arr[]={4,0,3,2};
int n=4;

int i=0;
while(i<n){
    int correct=arr[];
   if(arr[i]<n && arr[i]!=arr[correct]){
    int temp=arr[i];
    arr[i]=arr[correct];
    arr[correct]=temp;
   }
   else{
    i++;
   }
    
    
}

for(int i=0;i<4;i++){
    if(arr[i]!=i){
        cout<<i;
    }
}

    return 0;
}