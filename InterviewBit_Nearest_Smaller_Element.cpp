// https://www.interviewbit.com/problems/nearest-smaller-element/
vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> v;
    if(A.size()<1) return v;
    v.push_back(-1);
    stack<int> s;
    s.push(0);
    for(int i=1;i<A.size();i++){
        while(!s.empty() && A[s.top()]>=A[i]){
            s.pop();
        }
        if(s.empty()) v.push_back(-1);
        else v.push_back(A[s.top()]);
        s.push(i);
    }
    return v;
}
