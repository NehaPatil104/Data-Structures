class Solution {
public:
    
    bool valid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return true;
        }
        return false;
    }
    
    char tolower(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            return ch - 'A' + 'a';
        }
    }
    
    bool isPalindrome(string s) {
        // check if valid
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        //convert to lowercase
        for(int i = 0; i < temp.length(); i++){
            temp[i] = tolower(temp[i]);
        }
        
        //check palindrome
        int start = 0, end = temp.length() - 1;
        while(start < end){
            if(temp[start++] != temp[end--]){
                return false;
            }
        }
        return true;
    }
};