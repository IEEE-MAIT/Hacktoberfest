#include <bits/stdc++.h>
using namespace std;
 struct query {
	long long int start, end;
};
// Returns true if arr1[0..n-1] and arr2[0..m-1]
// contain same elements.
bool areEqual(long long int arr1[], long long int arr2[], long long int n,long long  int m)
{
	// If lengths of arrays are not equal
	if (n != m)
		return false;
	// Store arr1[] elements and their counts in
	// hash map
	/*  for(long long int i=0;i<n;i++)
    {
        cout<<arr1[i]<<' '<<arr2[i]<<endl;
    }*/
	unordered_map<long long int,long long int>mp;
	for (long long int i = 0; i <n; i++)
		mp[arr1[i]]++;

	// Traverse arr2[] elements and check if all
	// elements of arr2[] are present same number
	// of times or not.
	for (long long int i = 0; i < n; i++) {
		// If there is an element in arr2[], but
		// not in arr1[]
		if (mp.find(arr2[i]) == mp.end())
			return false;

		// If an element of arr2[] appears more
		// times than it appears in arr1[]
		if (mp[arr2[i]] == 0)
			return false;

		mp[arr2[i]]--;
	}
	return true;
}
void incrementByD(long long int arr[], struct query q_arr[],
				long long int n, long long int m,long long int d)
{
	long long int sum[n];
	memset(sum, 0, sizeof(sum));
    for (long long int i = 0; i < m; i++)
    {
		sum[q_arr[i].start] += d;
		if ((q_arr[i].end + 1) < n)
			sum[q_arr[i].end + 1] -= d;
	}
    arr[0] += sum[0];
	for (long long int i = 1; i < n; i++) {
		sum[i] += sum[i - 1];
		arr[i] += sum[i];
	}
}
int main()
{
	long long int test;
	cin>>test;
	while(test--)
    {
	long long int n,i,flag=0;
	cin>>n;
	long long int arr[n];
	long long int brr[n];
	long long int crr[n];
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
        arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>crr[i];
    }
    //struct query q_arr[] = { { 0, 3 }};
	//cout << "Original Array:\n";
	//printArray(arr, n);
    long long int a,b,j;
	// modifying the array for multiple queries
	//incrementByD(arr, q_arr, x, m, d);
    struct query q_arr[n];
    for(i=0;i<n;i++)
    {
        //cout<<i<<'*'<<brr[i]<<endl;
        j=i+1;
        a=j-brr[i];
        b=j+brr[i];
        //cout<<b<<endl;
        a=a-1;
        b=b-1;
        if(a<0)
            a=0;
        if(b>n)
        {
            b=n-1;
        //    cout<<"*";
        }
        //cout<<a<<" "<<b<<endl;
    q_arr[i].start=a;
    q_arr[i].end=b;
    a=0;
    b=0;
    /*for(long long int j=0;j<n;j++)
    {
        cout<<arr[j]<<' ';
    }*/
    //cout<<arr[1]
    }
    //arr[0]=arr[n];
    //sort(arr,arr+n,greater<long long int>());
    //crr[0]=crr[n];
    //sort(crr,crr+n,greater<long long int>());
    /*for(i=0;i<n;i++)
    {
        cout<<arr[i]<<' '<<crr[i]<<endl;
    }*/
    //cout<<endl;
    /*for(i=0;i<n;i++)
	{
	    if(arr[i]!=crr[i])
        {
            flag=1;
            break;
        }
	}
	if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }*/
	//cout << "\nModified Array:\n";
	//printArray(arr, n);
	long long int d = 1;
	long long int x = sizeof(arr) / sizeof(arr[0]);
	 long long int m = sizeof(q_arr) / sizeof(q_arr[0]);
	incrementByD(arr, q_arr, x, m, d);
	n = sizeof(arr) / sizeof(long long int);
     m = sizeof(crr) / sizeof(long long int);
    if (areEqual(arr, crr, n, m))
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
}
	return 0;
}
