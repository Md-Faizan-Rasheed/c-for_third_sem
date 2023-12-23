// Inline Function
// --- prevent  Function Call OverHead
// use when function is Small
#include<iostream>
using namespace std;
   void numberShow(int num){
    cout<<num<<endl;
}
int main(){

    // cout<<10<<endl;
    //     cout<<10<<endl;
    // cout<<10<<endl;
    // cout<<10<<endl;
    // cout<<10<<endl;   //internally after making
    // cout<<10<<endl;   // A Function inline
    // cout<<10<<endl;   // These code works

    numberShow(10);
        numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);

    return 0;
}