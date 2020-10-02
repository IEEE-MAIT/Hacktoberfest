/* There is a big staircase with N steps (numbered 1 through N) in ChefLand. Let's denote the height of the top of step i by hi. Chef Ada is currently under the staircase at height 0 and she wants to reach the top of the staircase (the top of the last step). However, she can only jump from height hi to the top of a step at height hf if hf−hi≤K. To help Ada, we are going to construct some intermediate steps; each of them may be constructed between any two steps, or before the first step, and have any height. What is the minimum number of steps that need to be added to the staircase so that Ada could reach the top?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-seperated integers h1,h2,…,hN.
Output
For each test case, print a single line containing one integer — the minimum required number of steps.

Constraints
1≤T≤64
1≤N≤128
1≤K≤1,024
1≤hi≤1,024 for each valid i
hi<hi+1 for each valid i
Example Input
1
4 3
2 4 8 16
Example Output
3 */





#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long ll;
typedef double db;

const ll mod = 1e9+7;
const db eps = 1e-9;

#define MAX 1000000000
#define MIN 100000
#define mp make_pair
#define pb push_back
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif


    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int cnt=0;
        for(int i=0 ; i<n ; i++)cin>>arr[i];
        if((arr[0]>k) && (arr[0]%k != 0))cnt+=(arr[0]/k);
        if((arr[0]>k) && (arr[0]%k == 0))cnt+=((arr[0]/k)-1);
        for(int i=0 ; i<n-1 ; i++){
            if((arr[i+1]-arr[i])%k == 0){
                cnt+=(((arr[i+1]-arr[i])/k)-1);
            }
            else{
                cnt+=((arr[i+1]-arr[i])/k);
            }
        }
        cout<<cnt<<endl;
    }


return 0;
}
