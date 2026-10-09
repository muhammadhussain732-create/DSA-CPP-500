class Solution {
public:
       
      /*bool isalnum(char ch){
            
          if((ch<='9' && ch>='0') || (tolower(ch)<= 'z'&& tolower(ch)>='a')){
              
             return true;
          }
          else {return false;}
        }*/

    bool isPalindrome(string s) {
        
        
       int st=0, end=s.length()-1;
       while (st < end){
           
         if(! isalnum(s[st])){
             st++; continue ;
         }
         
         if(! isalnum(s[end])){
             end--; continue ;
         }
         
         if(tolower(s[st]) != tolower(s[end])){
             return 0;
         }
         st++;  end--;
       }
       return 1;
    }
};
