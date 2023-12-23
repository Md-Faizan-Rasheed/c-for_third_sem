// #include <iostream>
// #include <vector>
// #include<string.h>
// using namespace std;
// void solve(  const vector<int>& nums, vector<int>& output, int index, vector <vector<int> >& ans)
// {
//     // base
//     if (index >= nums.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     // exclude
//     solve(nums, output, index + 1, ans);

//     // include
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums, output, index + 1, ans);


// .// recursive call do by using backtracking so we use pop
//         output.pop_back();

// }
// vector<vector<int>> subsets( const vector<int> &nums)
// {
//     vector <vector<int>> ans;
//     vector<int> output;  //for output array storing ans
//     int index = 0;
//     solve(nums, output, index, ans);
//     return ans;
// }
// int main()
// {
//     vector<int> num = {1, 2, 3};

//     vector<vector<int>> ans = subsets(num);  /// ans is the name of this vector. 
//                                             /// You can think of ans as a container 
//                                             // that will hold multiple vectors of integers.
//     for  (const vector<int>& subset : ans)
//     {
//         cout<<"{";
//         for (int num : subset)
//         {
//             cout << num<<" ";
//         }
//         cout<<"}";
//         cout << endl;
//     }
//     // for(int i=0;i<num.size();i++){
        
//     //     for(int j=0;j<.num.size();j++){
//     //         cout<<num<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     return 0;
// }

#include <iostream>
#include <vector>
#include<string.h>
using namespace std;
void solve( string str,string output, int index, vector <vector<string> >& ans)
{
    // base
    if (index >= str.len())
    {
        if(output.length()>=0){
        ans.push_back(output);}
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);


.// recursive call do by using backtracking so we use pop
        output.pop_back();

}
vector<string> subsets( const vector<string> &nums)
{
    vector <vector<string>> ans;
string output=" ";  //for output array storing ans
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}
int main()
{

strin str="bac";
<vector<string> ans = subsets(str);  /// ans is the name of this vector. 
                                            /// You can think of ans as a container 
                                            // that will hold multiple vectors of integers.
    for  (const vector<string>& subset : ans)
    {
        cout<<"{";
        for (string num : subset)
        {
            cout << num<<" ";
        }
        cout<<"}";
        cout << endl;
    }
    // for(int i=0;i<num.size();i++){
        
    //     for(int j=0;j<.num.size();j++){
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}