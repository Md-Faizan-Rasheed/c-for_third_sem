// #include<iostream>
// #include<fstream>
// #include<string>
// // The usefull classes for working with files in C++ are:
// // 1.fstreambase  -- >> base class
// >// 2.ifstream  -- >> derived from fstreambase
// // 3.ofstream  -- >> derived form fstreambase

// // In working with files in C++ , you will have to open it.
// // Primarily, there are 2 ways to open a file.

// // 1.Using the constructor
// // 2.Using the member function open() of the class 
// using namespace std;
// int main(){
// // opening files using constructor
// string s = "Faizan Rasheed";
// ofstream t("samplefiles.txt");   // write operation
// t<<s;

// t.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     string st = "Harry bhai";
//     // Opening files using constructor and writing it
//     ofstream out("samplefiles.txt"); // Write operation
//     out<<st;

//     return 0;
// }

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string st = "Faizan Rasheed";
    // ofstream cat("samplefiles.txt");
    // cat<<st;

    // string st2;
    // ifstream dog("samplefiles.txt");
    // // dog>>st2;
    // getline(dog,st2);
    // cout<<st2;

//     ofstream hout("samplefiles.txt");
//     cout<<"Enter Yiur name";
//     string name;
//     getline(cin,name);

//     hout<<"My name is " + name;
// hout.close();

ifstream hin("samplefiles.txt");
string cont;
getline(hin,cont);
cout<<"The content of the file is " + cont;
hin.close();
    return 0;
}