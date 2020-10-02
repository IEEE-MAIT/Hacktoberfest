vector<vector<int> > Solution::solve(int a) {
   vector<vector<int>>vec(a);
    if(a==0)
    return vec;
    
     vec[0].push_back(1);
    for(int i=1;i<a;i++)
    {   vec[i].push_back(1);
        for(int j=0;j<i-1;j++)
        {
            vec[i].push_back(vec[i-1][j]+vec[i-1][j+1]);
        }
        vec[i].push_back(1);
    }
    return vec;
}
