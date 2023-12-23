// #include<iostream>
// #include<string.h>
// using namespace std;
// bool reverse(string str,int i,int j){
//     // cout<<"call "<<str<<endl;
//     // string namesp=str;
//     if(i>j)
//     return  true;

//     // swap(str[i],str[j]);
//     if(str[i]==str[j]){
//     i++;
//     j--;
//     }
//     else{
//         return false;
//     }
//     reverse(str,i,j);
// // if(str==namesp){
// //     return true;
// // }
// // else{
// //     return false;
// // }
// }
// int main(){
//     string name="adcda";
//  bool check=reverse(name,0,name.length()-1); 
// // cout<<check;
// if(check){
//     cout<<"Its a palindrome";
// }
// else{
//     cout<<"Its not a palindrome";
// }
//     return 0;
// }

// Finding power
// #include<iostream>
// using namespace std;
// int calc(int b,int p){
//     int ans=1;
//     // base case
//     if(p<=0){
//         return ans;
//     }
//  ans=b*calc(b,p-1);
//     return ans;
// }
// int main(){
//     int base,power;
//     cout<<"Enter the base"<<endl;
//     cin>>base;
//     cout<<"Enter the power"<<endl;
//     cin>>power;
//      int ans=calc(base,power);
//      cout<<base<<"to the power"<<power<<"is equals to"<<ans;

//     return 0;
// }
// ---------------bubbleSort_U_Recursion----------------
// #include<iostream>
// using namespace std;
// void bubble_Sort(int *arr,int n ){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     if(n<=0){
//       return;
//     }

//     for(int j=0;j<n;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
//     bubble_Sort(arr,n-1);
// }
// int main(){
//     int arr[]={2,1,3,4,1,5};
//     int n=6;
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<n;j++){
//     //         if(arr[j]>arr[j+1]){
//     //             swap(arr[j],arr[j+1]);
//     //         }
//     //     }
//     // }
// bubble_Sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// ---------------bubbleSort_U_Recursion----------------//



// -------------------selectionSort_U_Recursion------------------
// #include<iostream>
// #include<limits.h>
// using namespace std;
// void selection_Sort(int *arr,int n){
// //     for(int i=0;i<n;i++){
// //     cout<<arr[i]<<" ";
// // }cout<<endl;
//     if(n<=0)
//     return;

//     int max=INT_MIN;
//     int maxidx=-1;
//     int i;
//     for( i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             maxidx=i;
//         }
//     }
//     swap(arr[n-1],arr[maxidx]);

//     selection_Sort(arr,n-1);
// }
// int main(){
//     int arr[]={2,1,3,4,1,5};
//    int n=6;
// // for(int i=0;i<n-1;i++){
// // int min=INT_MAX;
// // int minidx=-1;
// // for(int j=i;j<n;j++){
// //     if(arr[j]<min){
// //         min=arr[j];
// //         minidx=j;
// //     }
// // }
// // swap(arr[i],arr[minidx]);
// // }
// selection_Sort(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }cout<<endl;
//     return 0;
// }
// -------------------selectionSort_U_Recursion------------------


// -----------Insertion_sort------------
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={6,5,4,3,2,1};
//     int n=6;

//     for(int i=1;i<n;i++){
// int key=arr[i];
// int j=i-1;

// while(key<arr[j] && j>=0){
//     arr[j+1]=arr[j];
//     j--;
// }
// arr[j+1]=key;
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

// --------------Merging_TO_Sorted_Arrays--------------------
// #include<iostream>
// using namespace std;

// int main(){
// int arr1[5]={1,3,5,7,9};
// int f=5;
// int arr2[3]={2,4,6};
// int s=3;
// // int k=f+s;
// // int *arr3=new int[k];
// int arr3[8];
// int i=0,j=0;
// int k=0;
// while( i<f &&  j<s){
//     if(arr1[i]<arr2[j]){
//         arr3[k++]=arr1[i++];
//     }
//     else{
//         arr3[k++]=arr2[j++];
//     }
// }
// while(i<f){
//     arr3[k++]=arr1[i++];
// }
// while(j<s){
//     arr3[k++]=arr2[j++];
// }
// // cout<<arr3[1];
// for( i=0;i<k;i++){
//     cout<<arr3[i]<<" ";
// }

//     return 0;
// }

#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
int mid=(s+e)/2;

int len1=mid-s+1;
int len2=e-mid;

int *first=new int[len1];
int *second=new int[len2];

// copy values
int mainidx=s;
for(int i=0;i<len1;i++){
    first[i]=arr[mainidx++];
}
 mainidx=mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[mainidx++];
}

// merge 2 sorted array
int index1=0;
int index2=0;
  mainidx=s;

while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[mainidx++]=first[index1++];
    }
    else{
                arr[mainidx++]=second[index2++];

    }
}

while(index1<len1){
    arr[mainidx++]=first[index1++];
}
while(index2<len2){
    arr[mainidx++]=second[index2++];
}

delete[]first;
delete[]second;

}


void mergeSort(int *arr,int s,int e){
    if(s>=e)
    return;

int mid=(s+e)/2;

// left part sort karna hai
    mergeSort(arr,s,mid);

    // right part sort karna hai
    mergeSort(arr,mid+1,e);

// for(int i=0;i<e;i++){
//     cout<<arr[i]<<" ";
// }cout<<endl;
    // merge
    merge(arr,s,e);
}
int main(){
    int arr[15]={22,221,1,2,3,4,44,432,30,66,2,5,1,6,9};
    int n=15;

    mergeSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}