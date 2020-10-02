/*

Given an absolute path for a file (Unix-style), simplify it. Or in other words, convert it to the canonical path.

In a UNIX-style file system, a period . refers to the current directory.
Furthermore, a double period .. moves the directory up a level.

Note that the returned canonical path must always begin with a slash /,
and there must be only a single slash / between two directory names. 
The last directory name (if it exists) must not end with a trailing /.
Also, the canonical path must be the shortest string representing the absolute path.

Example 1:

Input: "/home/"
Output: "/home"
Explanation: Note that there is no trailing slash after the last directory name.
Example 2:

Input: "/../"
Output: "/"
Explanation: Going one level up from the root directory is a no-op, as the root level is the highest level you can go.
Example 3:

Input: "/home//foo/"
Output: "/home/foo"
Explanation: In the canonical path, multiple consecutive slashes are replaced by a single one.
Example 4:

Input: "/a/./b/../../c/"
Output: "/c"
Example 5:

Input: "/a/../../b/../c//.//"
Output: "/c"
Example 6:

Input: "/a//b////c/d//././/.."
Output: "/a/b/c"

*/

class Solution {
public:
    vector<string> split(string str){
        vector<string> v;string temp="";
        for(int i=0;i<str.length();i++){
            if(str[i]=='/' and temp!=""){
                v.push_back(temp);
                temp="";
            }else if(str[i]!='/') {
                temp+=str[i];
            }
        }
        if(temp!="") v.push_back(temp);
        return v;
    }

    vector<string> filter(vector<string> v){
        vector<string> filterd_v;int count=0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==".") continue;
            else if (v[i]==".."){
                count--;
            }else{
                if(count<0){
                    count++;continue;
                }else{
                    filterd_v.push_back(v[i]);
                }
            }
        }
        return filterd_v;
    }

    string join(vector<string> v){
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            ans+="/";
            ans+=v[i];
        }
        return ans;
    }

    string answer(string str){
        vector<string> v1 = split(str);
        vector<string> v = filter(v1);
        string ans = join(v);
        if(ans=="") ans="/";
        return ans;
    }
    string simplifyPath(string path) {
        return answer(path);
    }
};