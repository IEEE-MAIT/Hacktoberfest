#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin>>T;
for(int i=0 ; i< T ; i++){
  string str1 , str2;
  cin>>str1>>str2;
  int mincount=0 ;
  int maxcount=0;
  int reqcount=0;
  for(unsigned int i=0 ; i<str1.length() ; i++){
      if(str1.at(i)!='?'&&str2.at(i)!='?'){
          if(str1.at(i)!=str2.at(i)){
              mincount++;
          }
        }
        else if(str1.at(i)!='?'){
          reqcount++;
        }
        else if(str2.at(i)!='?'){
            reqcount++;
        }
        else{
          reqcount++;
        }
	}
	maxcount=mincount+reqcount;
	cout<<mincount<<" "<<maxcount<<endl;
}
	return 0;
}
