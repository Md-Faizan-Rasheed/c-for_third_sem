#include<iostream>
#include<string>
using namespace std;
void solve(vector<string>& num,int index, vector<sting>&output ,vector<vector<string>>&ans){
if(index>=num.size()){
    ans.push_back(output);
    return;
}

solve(num,index+1,output,ans);

int elm=num[i];
ans.push_back(ele);
solve(num,index+1,output,ans);

}
vecot<vector<string>>sub(const vector<sting>& num){
vector <vector<sting > >ans;
vector<string>ouput;

int index=0;

solve(num,index,output,ans);
return ans;
}
int main(){
string str='abc';


 vector<vector<string> > ans=sub(str);
for(const vector<int>& subset : ans)
    {
        cout<<"{";
        for (int num : subset)
        {
            cout << num<<" ";
        }
        cout<<"}";
        cout << endl;
    }
    return 0;
}