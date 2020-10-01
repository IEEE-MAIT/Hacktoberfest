// Given a time in -hour AM/PM format, convert it to military (24-hour) time.

// Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
// - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[10];
    cin>>s;
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    else
    {
        if(s[0]=='0' || s[1]!='2')
        {
        s[0]+=1;
        s[1]+=2;
        }   
    }
    s[8]='\0' ;
    cout<<s;
    return 0;
}
