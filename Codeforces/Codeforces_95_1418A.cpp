#include <iostream>

using namespace std;
long long  x,y, k;


int main()
{
	int T;
	cin>>T;
	for (int i = 0; i < T; i++)
	{
		cin>>x>>y>>k;

		long long n = (k + y*k -1)/(x-1);
		if ((k + y*k -1)% (x-1)) n++;


		cout<< n +k<<endl;

	}

	return 0;
}
