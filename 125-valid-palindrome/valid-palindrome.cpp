class Solution {
public:
    bool isPalindrome(string s) {

        string ans;

        for(char &c : s){
        if(isalnum(c)){
            ans+=tolower(c);
           }
 
        }
        s = ans;
        int n = s.length();
        int left =0;
        int right =n-1;


        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;


    }
};