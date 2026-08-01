class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int s=x;
        int a;
        long int n=0;
        while(x>0){
            a=x%10;
            n=n*10+a;
            x=x/10;
        }
        if(n==s){
            return true;
        }else{
            return false;
        }
        
    }
};