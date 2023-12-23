// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// void merge(int *arr,int s,int e){
//     int mid =(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
    
//     int *first=new int[len1];
//     int *second=new int[len2];
    
//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }
    
//      k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }
    
//     // merge2 sorted array
//     int index1=0,index2=0;
//     k=s;
//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2])
//         arr[k++]=first[index1++];
        
//         else
//         arr[k++]=second[index2++];
//     }
    
//     while(index1<len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2<len2){
//         arr[k++]=second[index2++];
//     }
// delete [] first;
// delete [] second;

// }
// void mergeSort(int *arr,int s,int e){
//     if(s>=e)
//     return;
    
//     int mid=(s+e)/2;
//     // left part 
//     mergeSort(arr,s,mid);  
        
//         // right part
//     mergeSort(arr,mid+1,e); 

//         // merge
//     merge(arr,s,e);     
    
// }
// int main() {
//     // Write C++ code here
// int arr[8]={2,3,4,5,6,7,8,9};
// int n=8;
// int s=0;
// int e=n-1;
// mergeSort(arr,s,e);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//     return 0;
// }


// // -----------Quick_Sort-----------------
// // #include <iostream>
// // #include<vector>
// // using namespace std;
// // int partition(vector<int>&arr,int s,int e){
// //     int pivot=arr[s];
// //     int count=0;
// //     for(int i=s+1;i<e;i++){
// //         if(arr[i]<pivot){
// //             count++;
// //         }
// //     }
// // int pindx=s+count;
// // swap(arr[s],arr[pindx]);
// // int i=s,j=e;
// // while(i < pindx && j>pindx){
// //      while(arr[i]<pivot){
// //         i++;
// //      }
// //      while(arr[j]>pivot){
// //         j++;
// //      }

// //      if(i<pindx && j>pindx){
// //         swap(arr[i],arr[j]);
// //      }
// // }
// // return pindx;
// // }
// // void mergeSort(vector<int>&arr,int s,int e){
// //     if(s>=e)
// //     return;

// //    int p= partition(arr,s,e);

// //     mergeSort(arr,s,p-1);

// //     mergeSort(arr,p+1,e);

// // }

// // int main() {
// // int size;
// // cout<<"Enter the Size of array:";
// // cin>>size;

// // vector<int>arr(size);
// // cout<<"Enter the Elements of array";
// // for(int i=0;i<size;i++){
// //     cin>>arr[i];
// // }
// // cout<<"Elments before sorting"<<endl;
// // for(int i=0;i<size;i++){
// //     cout<<arr[i]<<" ";
// // }cout<<endl;
// // mergeSort(arr,0,size-1);
// // cout<<"Elments after sorting"<<endl;
// // for(int i=0;i<size;i++){
// //     cout<<arr[i]<<" ";
// // }

// //     return 0;
// // }














// merge sort
#include<iostream>
using namespace std;
void merge(int arr,int s,int e){
    int mid=(s+e)/2;

int l1=mid-s+1;
int l2=e-mid-1;
int *first=new int[l1];
int *second=new int[l2];
int k=e;
for(int i=0;i<l1;i++){
    first[i]=arr[k++];
}
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }
    
//      k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }
    k=mid+1;
for(int j=0;j<l2;j++){
    second[j]=arr[k++];
}


// merging
k=s;
int index1=0;
int index2=0;
while(index1<l1 && index2<l2){
    if(first[index1]>second[index2]){
        arr[k++]=first[index1++];
    }
    else{
        arr[k++]=second[index2++];
    }
}

while(index1<l1){
    arr[k++]=first[index1++];
}
while(index2<l2){
    arr[k++]=second[index2++];
}



}
void sort(int arr[],int s,int e){
    if(s>e){
        return;
    }
    int mid=(s+e)/2;

//   left part
    sort(arr,s,mid-1);
  
  // right part
    sort(arr,mid,e);

    merge(arr,s,e);
}
int main(){
    int arr[]={3,2,1,5,6,4};
   int  n=6;
   sort(arr,0,n);

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}