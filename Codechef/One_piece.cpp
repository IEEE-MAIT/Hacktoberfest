/* L and Light are playing a game. They take a N×N board. There are K pieces on the board whose positions are specified in terms of their X and Y coordinate (coordinates start from (1,1),i.e, 1≤X≤N and 1≤Y≤N). Two pieces cannot be on same position. First it is L’s turn. L specifies Q numbers Z1,Z2…ZQ. For each Zi Light has to find the number of rectangular regions on the board which contain number of pieces less than or equal to Zi. A rectangular region is the rectangle with two arbitrarily chose positions of board as the top-left and the bottom-right corner. Note that the rectangular region can be the entire board itself. Light has to give the sum of his answers over all Zi which is the number A. As Light is busy thinking about how to kill L, he is not interested to play the game. But, if he doesn't play, he might be under suspicion again. So, he has requested you to solve this and give him the answer. Can you help Light solve this game?
Input
The first line of input has three space-separated integers N, K and Q.
This is followed by K lines each containing two space separated integers X and Y denoting the coordinates for each of the K pieces.
This is followed by a single line containing Q space separated integers Z1,Z2…ZQ as mentioned in the question.
Output
Print a single integer A as mentioned in the question.
Constraints
1≤N≤150
1≤Q≤10000
1≤K≤N2
0≤Zi≤150∗150
Sample Input
2 1 1
1 1
1
Sample Output
9*/




#include<iostream>
using namespace std;
#define ll long long
int main()
{

    ll n,k,q;
    cin>>n>>k>>q;
    ll a[n+1][n+1]={0};

    for(ll i=0;i<k;i++)
    {
        ll x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    for(int j=1;j<=n;j++)
    for(ll i=1;i<=n;i++)
        a[i][j]+=a[i-1][j];
        for(int i=1;i<=n;i++)
    for(ll j=1;j<=n;j++)
        a[i][j]+=a[i][j-1];

        ll b[200005]={0};
    for(ll i=1;i<=n;i++)
    {

        for(ll j=1;j<=n;j++)
        {

            for(ll u=i+1;u<=n+1;u++)
            {

                for(ll v=j+1;v<=n+1;v++)
                {

                    b[a[u-1][v-1]+a[i-1][j-1]-a[u-1][j-1]-a[i-1][v-1]]++;

                }
            }
        }
    }

    for(ll i=1;i<=200004;i++)
        b[i]+=b[i-1];
        ll ans=0;
    for(ll i=0;i<q;i++)
    {
        ll p;
        cin>>p;
        ans+=b[p];

    }
    cout<<ans<<endl;
}

