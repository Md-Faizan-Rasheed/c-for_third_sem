#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string";
    cin>>str;
    cout<<str;

    for(int i=0;i<=str.length();i++){
        for(int j=i+1;j<=str.length();j++){
            if(str[i]==str[j])
            {
               str.erase(str.begin()+str[i],str.begin()+str[j]) ;
            }
            else{
                continue;
            }
        }
    }
    cout<<str;
    return 0;
}