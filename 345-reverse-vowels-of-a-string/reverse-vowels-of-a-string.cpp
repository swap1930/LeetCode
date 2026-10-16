class Solution {
public:
    string reverseVowels(string s) {
        int left = 0 ; 
        int right = s.length()-1; 
        
        string Vowels = "aeiouAEIOU" ;
       
       while(left<right){
            if(Vowels.find_first_of(s[left]) != string::npos && Vowels.find_first_of(s[right])!= string::npos) 
            {
                swap(s[left] , s[right]);
                left++ ;
                right-- ;
            }
            else if(Vowels.find_first_of(s[left]) == string::npos) 
            {
                left++ ;
            }
            else{
                right--; 
            }
        }
        return s ;
    }
};