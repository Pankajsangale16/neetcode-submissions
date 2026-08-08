class Solution {
public:
    bool isPalindrome(string s) {
     string newS;
     for (auto& c : s) {
        if (isalnum(c)) {
            newS += tolower(c);
        }
       
     }
     string rev=newS;
     reverse(rev.begin(), rev.end());
     if (rev == newS) {
        return true;  
     }  
     else
     {
        return false;
     } 
    }
};
