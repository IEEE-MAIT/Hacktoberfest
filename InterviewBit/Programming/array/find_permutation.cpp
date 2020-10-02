vector<int> Solution::findPerm(const string a, int b) {
    int l=a.length();
    int beg=1,end=b;
    vector<int>vec;
    for(int i=0;i<l;i++)
    {
        char ch=a[i];
        if(ch=='D')
        vec.push_back(end--);
        else
        vec.push_back(beg++);
    }
    vec.push_back(beg);
    return vec;
}
