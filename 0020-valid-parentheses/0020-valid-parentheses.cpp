class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        bool isvalid = true ;
       
        for(int i = 0 ; i < s.length() ;i++){
            char c = s[i]; 

            if(c == '(' || c == '[' || c == '{'){
                st.push(c); 
            }
            else if(c == ')' || c == ']' || c == '}'){
                if(st.empty()){
                    isvalid = false ; 
                    break ; 
                }

                char y = st.top(); 
                st.pop();

                if(c==')' && y !='('
                   || c==']' && y !='[' 
                   || c=='}' && y !='{' ){
                    isvalid = false ; 
                    break; 
                   }
            }
        }

        return isvalid && st.empty() ; 
    }
};