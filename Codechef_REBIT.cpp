//Problem Link:https://www.codechef.com/APRIL20B/problems/REBIT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=998244353;
string infixToPostfix(string s);
ll prec(char c);
ll modInverse(ll a,ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        ll q = a / m; 
        ll t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 
ll prec(char c) 
{ 
    if(c == '|' || c == '^' || c=='&') 
    return 1; 
    else
    return -1; 
} 
  
// The main function to convert infix expression 
//to postfix expression 
string infixToPostfix(string s) 
{ 
    std::stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        // If the scanned character is an operand, add it to output string. 
        if(s[i]=='#') 
        ns+=s[i]; 
  
        // If the scanned character is an ‘(‘, push it to the stack. 
        else if(s[i] == '(') 
          
        st.push('('); 
          
        // If the scanned character is an ‘)’, pop and to output string from the stack 
        // until an ‘(‘ is encountered. 
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        //If an operator is scanned 
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    //Pop all the remaining elements from the stack 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    //cout << ns << endl; 
    return ns;
  
} 
int main()
{
 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /* freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
  */ 
  ll t;
  cin>>t;
  while(t--)
  {
     string str;
     cin>>str;
     str=infixToPostfix(str);//cout<<str;
     ll n=str.length(),z,z1,z2,k=0,i,j;
     if(n==1)
     {
        ll q=modInverse(4,mod);
        cout<<q<<" "<<q<<" "<<q<<" "<<q<<'\n';
        continue;
     }
     ll arr[n][4],count0,count1,counta,countA,a1,a2,a3,a4;
     for(i=0;i<n;i++)
     {
        for(j=0;j<4;j++)
        {
           arr[i][j]=1;
        }
     }
     stack <long long int> s;
     ll a,b;
     s.push(-1);
     for(i=0;i<n;i++)
     {
        if(str[i]=='#')
        {
           s.push(i);
           k++;
        }
        else if(str[i]=='&' || str[i]=='^' || str[i]=='|')
        {
           z1=0+s.top();
           s.pop();
           z2=0+s.top();
           s.pop();
           if(str[i]=='&')
           {
              
                 a2=(arr[z1][1]%mod*arr[z2][1]%mod)%mod;
                 a1=((arr[z1][0]*arr[z2][0])%mod+(arr[z1][0]*arr[z2][1])%mod+(arr[z1][0]*arr[z2][2])%mod+(arr[z1][0]*arr[z2][3])%mod+(arr[z1][1]*arr[z2][0])%mod+(arr[z1][2]*arr[z2][0])%mod+(arr[z1][2]*arr[z2][3])%mod+(arr[z1][3]*arr[z2][0])%mod+(arr[z1][3]*arr[z2][2])%mod)%mod;
                 a3=((arr[z1][1]*arr[z2][2])%mod+(arr[z1][2]*arr[z2][1])%mod+(arr[z1][2]*arr[z2][2])%mod)%mod;
                 a4=((arr[z1][1]*arr[z2][3])%mod+(arr[z1][3]*arr[z2][3])%mod+(arr[z1][3]*arr[z2][1])%mod)%mod;
                 //cout<<a1<<a2<<a3<<a4<<'\n';
                 arr[z1][0]=a1;
                 arr[z1][1]=a2;
                 arr[z1][2]=a3;
                 arr[z1][3]=a4;
                 //cout<<"z1="<<z1<<'\n';
                 s.push(z1);
           }
           if(str[i]=='|')
           {
              
                 a1=((arr[z1][0]*arr[z2][0])%mod)%mod;
                 a2=((arr[z1][0]*arr[z2][1])%mod+(arr[z1][1]*arr[z2][0])%mod+(arr[z1][1]*arr[z2][1])%mod+(arr[z1][1]*arr[z2][2])%mod+(arr[z1][1]*arr[z2][3])%mod+(arr[z1][2]*arr[z2][1])%mod+(arr[z1][2]*arr[z2][3])%mod+(arr[z1][3]*arr[z2][1])%mod+(arr[z1][3]*arr[z2][2])%mod)%mod;
                 a3=((arr[z1][0]*arr[z2][2])%mod+(arr[z1][2]*arr[z2][0])%mod+(arr[z1][2]*arr[z2][2])%mod)%mod;
                 a4=((arr[z1][0]*arr[z2][3])%mod+(arr[z1][3]*arr[z2][0])%mod+(arr[z1][3]*arr[z2][3])%mod)%mod;
                 arr[z1][0]=a1;
                 arr[z1][1]=a2;
                 arr[z1][2]=a3;
                 arr[z1][3]=a4;
                 s.push(z1);
              
           }
           if(str[i]=='^')
           {
              
              
                 a1=((arr[z1][0]*arr[z2][0])%mod+(arr[z1][1]*arr[z2][1])%mod+(arr[z1][2]*arr[z2][2])%mod+(arr[z1][3]*arr[z2][3])%mod)%mod;
                 a2=((arr[z1][0]*arr[z2][1])%mod+(arr[z1][1]*arr[z2][0])%mod+(arr[z1][2]*arr[z2][3])%mod+(arr[z1][3]*arr[z2][2])%mod)%mod;
                 a3=((arr[z1][0]*arr[z2][2])%mod+(arr[z1][1]*arr[z2][3])%mod+(arr[z1][2]*arr[z2][0])%mod+(arr[z1][3]*arr[z2][1])%mod)%mod;
                 a4=((arr[z1][0]*arr[z2][3])%mod+(arr[z1][1]*arr[z2][2])%mod+(arr[z1][2]*arr[z2][1])%mod+(arr[z1][3]*arr[z2][0])%mod)%mod;
                 arr[z1][0]=a1;
                 arr[z1][1]=a2;
                 arr[z1][2]=a3;
                 arr[z1][3]=a4;
                 s.push(z1);
           }
           
        }
        
     }
     ll q=1;
     z=s.top();
     //cout<<z<<'\n';
     count0=arr[z][0];
     count1=arr[z][1];
     counta=arr[z][2];
     countA=arr[z][3];
     //cout<<count0<<" "<<count1<<" "<<counta<<" "<<countA<<'\n';
     for(i=0;i<2*k;i++)
     {
        q=(q%mod*499122177%mod)%mod;
     }
     //cout<<q<<'\n';
     cout<<((count0%mod)*(q%mod))%mod<<" "<<((count1%mod)*(q%mod))%mod<<" "<<((counta%mod)*(q%mod))%mod<<" "<<((countA%mod)*(q%mod))%mod<<'\n';
     
     
  }
  return 0;
}
