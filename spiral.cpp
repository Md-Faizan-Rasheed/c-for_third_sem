#include <iostream>
using namespace std;
// #include<vector>
 vector<int> spiralOrder(vector<vector<int>>&matrix){
    vector<int>ans;
    int row=martix.size();
    int col=martix[0].size();
    int count=0;
    int total=row*col;

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;;
    int startingCol=col-1             ;

    while(count<total){
   //print starting row
   for(int index=startingCol;cout<total && index<=endingCol;index++){
    ans.push_back(matrix[staringRow][index]);
    count++;
   }
   startingRow++;

   for(int index=startinRow;count<total && index<=endingRow;index++){
    ans.push_back(matrix[index][endingCol]);
    count++;
   }

   endingCol--;
   for(int index=endingCol;count<total && index<=startingCol;index++){
    ans.push_back(matrix[endingRow][index]);
    count++;
   }
   endingRow--;
   for(int index=endingRow;count<total && index<=startingRow;index++){
    ans.push_back(matrix[index][startinCol]);
    count++;
   }
   startingRow--;
    }
    return ans;
}
int main(){
    int arr[3][4]={1,6,7,10,2,5,8,11,3,4,9,12};
    int brr[12]=spiralArray(arr,3,4);
    for(int i=0;i<12;i++){
cout<<brr[i];
    }
    return 0;
}