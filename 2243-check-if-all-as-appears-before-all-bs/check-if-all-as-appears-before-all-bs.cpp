class Solution {
public:
    bool checkString(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'&& s[i+1]=='a'){
                return false;
            }

            
        }
        return true;
        
    }
};