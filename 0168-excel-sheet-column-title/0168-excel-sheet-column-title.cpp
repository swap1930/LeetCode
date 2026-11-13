class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result ; 

        while(columnNumber > 0){
            columnNumber = columnNumber - 1 ; 

            int reminder = columnNumber % 26 ; 
            char c = 'A' + reminder ; 
            result.push_back(c);

            columnNumber /= 26 ; 
        }
        
        reverse(result.begin(),result.end());
        return result ; 
    }
};