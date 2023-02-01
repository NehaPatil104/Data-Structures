class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> s1;
        s1.push(s[0]);
        for(int i=1; i < s.length(); i++){
            if(s1.size() == 0)
                s1.push(s[i]);
            else if(s[i] == s1.top())
                s1.pop();
            else
                s1.push(s[i]);
        }
        
        string str="";
        while(!s1.empty()){
            str += s1.top();
            s1.pop();
        }
        
        reverse(str.begin(), str.end());
        return str;
    }
};