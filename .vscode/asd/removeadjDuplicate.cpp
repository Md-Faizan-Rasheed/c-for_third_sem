#include <iostream>
#include<vector>
using namespace std;
#include<stack>
string removeDuplicate(string s){
    vector<char>st;

s.push_back(s[0]);

for(int i=1;i<s.size();i++){

    if(s.empty() && s.back()==s[i]){
        s.pop_back();
    }
    else{
        s.push_back(s[i]);
    }
  
//   string ans(st.beign())
    // return ans;
}
string ans(s.begin(),s.end());

    return ans;

}
int main(){
string str;
cin>>str;
cout<<removeDuplicate(str);
    return 0;
}