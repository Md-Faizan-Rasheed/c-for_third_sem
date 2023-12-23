// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int arr[]={2,3,1,4,5};
int n=5;
int i=1;
while(i<=n){
    int correct=arr[i];
    if(arr[i]!=arr[correct]){
        int temp=arr[i];
        arr[i]=arr[correct];
        arr[correct]=temp;
    
    }
    else{
        i++;
    }
}

for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}