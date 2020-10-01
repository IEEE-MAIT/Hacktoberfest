// Problem:-
// Given a square matrix, calculate the absolute difference between the sums of its diagonals.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int sumofP=0, sumofQ=0;
    int arr[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n; i++){
        sumofP+=arr[i][i];
    }
    for(i=0;i<n;i++){
        sumofQ+=arr[i][n-1-i];
    }
    cout<<abs(sumofP-sumofQ)<<endl;
    return 0;
}
