class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        int sum = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (isdigit(operations[i][0]) ||
                operations[i].size() > 1 && operations[i][0] == '-') {
                int num = stoi(operations[i]);
                result.push_back(num);
            } else if (operations[i] == "C") {
                result.pop_back();
            } else if (operations[i] == "D") {
                int val = result.back() * 2;
                result.push_back(val);
            } else if (operations[i] == "+") {
                int last_val = result.back();
                int second_val = result[result.size() - 2];

                int val = last_val + second_val;
                result.push_back(val);
            }
        }

        for (int i = 0; i < result.size(); i++) {
            sum += result[i];
        }
        return sum;
    }
};