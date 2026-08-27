class Solution {
public:
    bool isPalindrome(int x) {
       int number = x ;
       long reversed = 0 ; 

       if (number < 0){
        return false ;
       }

       while(number > 0){
        int lastdigit = number % 10;
        reversed = (reversed*10) + lastdigit;
        number = number / 10 ;
       }

       if(x == reversed){
        return true ;
       }
       else{
        return false; 
       }

        
    }
};