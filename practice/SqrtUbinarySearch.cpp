#include<iostream>
#include<math.h>
using namespace std;
int squareRootUsing_binarySearch(int n){
    int s=0;
    int e=n-1;
    long int mid=(s+e)/2;
    while(s<=e){
        long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
}

int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;
 cout<<"Square root of "<<n<<"is equal to "<<squareRootUsing_binarySearch(n);

    return 0;
}