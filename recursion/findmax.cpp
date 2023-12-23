// TO FIND THE MAXIMUM ELEMENT IN AN ARRAY
#include <iostream>
#include <limits.h>
using namespace std;
int max(int arr[], int n, int& maxi, int i)
{

    if (i >= n)
    {
        return;
        
    }

// case Solve krna hai
// current element ko check karo for max
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }


    max(arr, n, maxi, ++i);
}
int main()
{
    int arr[] = {-1, -2, -3, -4, -5};
    int n = 5;
    int i = 0;
    int maxi = INT_MIN;
    int maximum = max(arr, n, maxi, i);
    cout << "MAximum element in the given array is==>> " << maximum << endl;
    return 0;
}