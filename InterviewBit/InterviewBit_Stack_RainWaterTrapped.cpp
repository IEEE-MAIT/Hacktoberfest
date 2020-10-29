int Solution::trap(const vector<int> &A) 
{
    int n=A.size();int sum=0;
    int mx[n],mn[n];
    mx[0]=A[0];mn[n-1]=A[n-1];
    for(int i=1;i<n;i++)
        mx[i]=max(mx[i-1],A[i]);
    for(int i=n-2;i>=0;i--)
        mn[i]=max(mn[i+1],A[i]);
    for(int i=0;i<n;i++)
        sum+=min(mn[i],mx[i])-A[i];
    
    return sum;
}

