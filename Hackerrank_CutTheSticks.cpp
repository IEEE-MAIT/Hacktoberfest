/* Ques: You are given a number of sticks of varying lengths. You will
/* iteratively cut the sticks into smaller sticks, discarding the
/* shortest pieces until there are none left. At each iteration you
/* will determine the length of the shortest stick remaining, cut that
/* length from each of the longer sticks and then discard all the
/* pieces of that shortest length. When all the remaining sticks are
/* the same length, they cannot be shortened so discard them. */

/* logic: 1. find the smallest element in the vector. 
    2. Reduce all the elements by that value. remove the zeroes. 
    3. Call the function again recursively.
 */

// author: @akshatgarg12


// Time Complexity: O(n*n);


#include <bits/stdc++.h>

using namespace std;

void ans(int n, vector<int>A){
    // base condition when there is only one stick
    if(n==1){
        cout<<1; return;
     } 
    else{
        // first cut
        cout<<A.size()<<endl;
        int i;
        int min=A[0];
        // finding the minimum to cut.
        for(i=0;i<n;i++){
            if(A[i]<=min) min= A[i];
        }
        for(i=0;i<n;i++){
            A[i]=A[i]-min;
        }
        // a vector which to pass again to function, removing all zeroes.
        vector<int> pass;
        for(i=0;i<n;i++){
            if(A[i]!=0) pass.push_back(A[i]); 
        }
        // recursively calling the function again.
        if(pass.size()!=0){
            return ans((int)pass.size(), pass);
        }
        else return;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> A;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        A.push_back(a);
    }
   
    ans(n,A);
     return 0;
    
}
