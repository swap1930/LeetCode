class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> result;
        int low = 0;
        int high = s.length();
        int n = s.length() + 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                result.push_back(low);
                low++;
            } else if (s[i] == 'D') {
                result.push_back(high);
                high--;
            }
        }

        result.push_back(low);
        return result;
    }
};