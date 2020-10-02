int Solution::repeatedNumber(const vector<int> &a) {
    bool b[a.size()+1]={false};
    for(int i=0;i<a.size();i++)
    {
        if(b[a[i]])
        return a[i];
        else
        b[a[i]]=true;
    }
    return -1;
}
