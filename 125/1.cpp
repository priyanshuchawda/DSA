class Solution {
    public:
        bool isPalindrome(string s) {
            
            s.erase(remove_if(s.begin(),s.end(),[](char c){
                return !isalnum(c);
            }), s.end());
            transform(s.begin(),s.end(),s.begin(),::tolower);
            if (s.empty()) return true;
            for(int i=0;i<=s.size()/2;i++){
                if(s[i]!=s[s.size()-i-1]){
                    return false;
                    
                }
            }
            return true;
        
        }
    };