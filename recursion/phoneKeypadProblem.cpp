// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void solve(string digit,string output,int index,vector<string>& ans,stirng mapping[]){
//     // base
//     if(index>=digit.length()){
//         ans.push_back(output);
//         return;
//     }

//     int number=digit[index]- '0';
//     string value=mapping[number];
//     for(int i=0;i<value.length();i++){
//         output.push_back(value[i]);
//         solve(digit,output,index+1,ans,mapping);

//         output.pop_back();
//     }
// }
// vector<string>letterComb(string digit){
//     vector<string>ans;
//     if(digit.length()==0){
//         return ans;
//     }
//     string output;
//     int index=0;
//     string mapping[10]={" "," ","abc","def","ghi","jkl","mno",
// "pqrs","tuv","wxyz"};
// solve(digit,output,index,ans,mapping);
// return ans;

// }

// int main(){
//     string digit;
// cout<<"Enter the number";
// cin>>digit;

// vector<string> combinations=letterComb(digit);

// cout<<"Letteer combinations for"<<digit<<"are :"<<endl;
// for(const string& combination:combinations){
//     cout<<combination<<endl;
// }




//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
    // Base case
    if (index >= digit.length()) {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

vector<string> letterComb(string digits) {
    vector<string> ans;
    if (digits.length() == 0) {
        return ans;
    }
    string output;
    int index = 0;
    string mapping[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main() {
    string digit;
    cout << "Enter the number: ";
    cin >> digit;

    vector<string> combinations = letterComb(digit);

    cout << "Letter combinations for " << digit << " are:" << endl;
    for (const string& combination : combinations) {
        cout << combination << endl;
    }

    return 0;
}