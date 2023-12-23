#include<iostream>
#include <string>
using namespace std;
void print(string arr ,int n){
    if(n==0)
    return ;

    int r=n%10;
    n=n/10;
    // cout<<arr[r];

    print(arr,n);
        cout<<arr[r];

}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n=647654;
//     int r,i=0;
//     for( int i=0;i<n;i++){
//    r=n%10;
//    n=n/10;
//    cout<<arr[r];
//     }
print(arr,n);
    
    return 0;
}