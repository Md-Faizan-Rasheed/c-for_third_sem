#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int arr1[]={2,5};
    int arr2[]={2,905};
 if  ( memcmp(arr1,arr2,2*sizeof(int) )==0){
    cout<<"Arrays are same "<<endl;
 }
 else{
    cout<<"ArrAys are not same"<<endl;
 }

//  char str[]="FeeksforFeeks";
//  memset(str,'z',sizeof(str));
//  cout<<str<<endl;

//  memcpy(arr1,arr2,2*sizeof(int));
//  cout<<arr1[0],arr1[1];

 memset(arr1,0,2*sizeof(int));
 cout<<arr1;
    return 0;
}