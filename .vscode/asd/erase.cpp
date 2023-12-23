#include<iostream>
#include<string.h>
using namespace std ;
string removeOccurance(string s[], string part[]){

    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.lenght());
    }
    return s;
}
int main(){
 string s[100]="daabcbaabcbc";
 string part[100]="abc";
 cout<<removeOccurance(s,part);

    return 0;
}