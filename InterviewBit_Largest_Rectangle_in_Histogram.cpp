//https://www.interviewbit.com/problems/largest-rectangle-in-histogram/
int Solution::largestRectangleArea(vector<int> &A) {
    vector<int> nex(A.size(),0),pre(A.size(),0);
    stack<int> s;
    pre[0]=0;
    s.push(0);
    for(int i=0;i<A.size();i++){
        while(!s.empty() && A[s.top()]>=A[i]) s.pop();
        if(s.empty()) pre[i]=-1; 
        else pre[i]=s.top();
        s.push(i);
    }
    while(!s.empty()) s.pop();
    nex[A.size()-1]=A.size();
    s.push(A.size()-1);
    for(int i=A.size()-2;i>=0;i--){
        while(!s.empty() && A[s.top()]>=A[i]) s.pop();
        if(s.empty()) nex[i]=A.size(); 
        else nex[i]=s.top();
        s.push(i);
    }
    int ans=0;
    for(int i=0;i<A.size();i++){
        int curr=A[i]*(nex[i]-pre[i]-1);
        // cout<<curr<<" ";
        ans=max(ans,curr);
    }
    // cout<<"\n";
    return ans;
}
