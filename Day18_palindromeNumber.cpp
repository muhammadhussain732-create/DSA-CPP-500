class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int original =x;
        long reverse =0;
        while (x>0){
            int rem=x%10;
            x/=10;
           reverse=reverse*10 +rem;
        }   
        if(original== reverse){
            return 1;
        }
        else{
            return 0;
        }
    }
};
