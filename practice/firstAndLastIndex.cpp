#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2,ans=-1;
    while(s<e){
        if(arr[mid]==key){
          ans=mid;
          e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int arr[8]={1,2,3,3,3,3,3,5};
    int n=8,key=3;
    cout<<"First occurance of 3 is at "<<firstOcc(arr,n,key)<<"index"<<endl;
        // cout<<"Last occurance of 3 is at "<<LastOcc(arr,n,key)<<"index"<<endl;

    return 0;
}