class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s ; 

        for(int i = 0 ; i < operations.size(); i++){
            string c = operations[i]; 
            
            if (c == "+"){
                int b = s.top(); 
                s.pop(); 

                int a = s.top(); 
                s.push(b); 
                s.push(b+a); 
            }
            else if(c == "D"){
                int val = s.top(); 
            
                int newval = 2 * val ;  
                s.push(newval); 
            }
            else if(c== "C"){
                s.pop(); 
            }
            else{
                int num = stoi(c);
                s.push(num); 
            }
        }
        int total = 0 ; 
        while(!s.empty()){
            total += s.top(); 
            s.pop(); 
        }
        return total ; 
    }
};