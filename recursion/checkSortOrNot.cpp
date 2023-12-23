#include<iostream>
#include<vector>
using namespace std;
bool checkSorted( vector<int> &arr,int& n,int i){
    if(i==n-1)
    return true;

    if(arr[i]>arr[i+1])
    return false;

     return checkSorted(arr,n,++i);
}
int main(){
    vector<int>arr{2,6,9,12,11,3};
    int n=arr.size();
    int i=0;
   bool isSorted= checkSorted(arr,n,i);
   if(isSorted)
   cout<<"Array is Sorted"<<endl;

   else
   cout<<"Array is not Sorted"<<endl;
    return 0;
}