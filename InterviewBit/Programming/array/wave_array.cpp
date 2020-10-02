vector<int> Solution::wave(vector<int> &a) {
 int l=a.size();
 vector<int>b;
 if(l==0||l==1)
 return a;
 else
 {
     sort(a.begin(),a.end());
     for(int i=0;i<l-1;i=i+2)
     {
         b.push_back(a[i+1]);
         b.push_back(a[i]);
     }
     if(l%2==1)
     b.push_back(a[l-1]);
     return b;
 }
}
