#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;

        int arr[n] ;
        set <int> check ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
            check.insert(arr[i]) ;
        }

        set<int>::iterator it;

        vector <int> v ;
        
        for(it = check.begin() ; it != check.end() ; it++)
        {
            v.push_back(*it) ;            
        }

        int flag = 0 ;

        for (int i=0 ; i<v.size() ; i++)
        {
            if(v[i] == 0)
            {
                flag = 1;
                cout << v.size() - 1 << endl ;
                break;
            }
        }

        if(flag == 0)
            cout << v.size() << endl ;     

    }

    return 0;


}