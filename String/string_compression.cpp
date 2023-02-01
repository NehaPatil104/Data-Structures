class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, j;
        int ansIndex = 0;
        while(i < chars.size()){
            j = i+1;
            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }
            
            chars[ansIndex++] = chars[i];
            int count = j - i;
            
            if(count > 1){
                string str = to_string(count);
                for(char ch: str){
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};