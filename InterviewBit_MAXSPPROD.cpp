#define mod 1000000007
#define LL long long
int Solution::maxSpecialProduct(vector<int> &A) {
    int n=A.size();
    vector<int> vl(n,0),vr(n,0);
    stack<int> s;
    s.push(0);
    for(int i=1;i<A.size();i++){
        while(!s.empty() && A[s.top()]<=A[i]){
            s.pop();
        }  
        if(s.empty()) vl[i]=0;
        else vl[i]=s.top();
        s.push(i);
    } 
    // part();
    while(!s.empty()) s.pop();
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && A[s.top()]<=A[i]){
            s.pop();
        }  
        if(s.empty()) vr[i]=0;
        else vr[i]=s.top();
        s.push(i);
    } 
    // part();
    LL maxz=0;
    for(int i=0;i<n;i++){
        maxz=max((vl[i]*1LL*vr[i]),maxz);
    }
    return maxz%mod;
}
