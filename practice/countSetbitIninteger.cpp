#include<iostream>
using namespace std;
int countSetBits(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

cout<<"Total no of set bits in"<<" "<<n <<" "<<"is"<<" "<<countSetBits(n);
    return 0;
}