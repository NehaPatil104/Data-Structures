class Solution {
public:
    bool checkEqual(int count1[26], int count2[26]){
        for(int i = 0; i < 26; i++){
            if(count1[i] != count2[i])
                return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
        // Store the s1 string count
        int count1[26] = {0};
        for(int i = 0; i < s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        
        //For traversing the window
        int count2[26] = {0};
        int windowSize = s1.length();
        int i = 0;
        while(i < windowSize && i < s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        
        //Check if both the array are equal
        if(checkEqual(count1, count2))
            return true;
        
        //For sliding the window
        while(i <s2.length()){
            int newChar = s2[i] - 'a';
            count2[newChar]++;
            
            int oldChar = s2[i-windowSize] - 'a';
            count2[oldChar]--;
            
            i++;
            if(checkEqual(count1, count2))
            return true;
        }
        return false;
    }
};