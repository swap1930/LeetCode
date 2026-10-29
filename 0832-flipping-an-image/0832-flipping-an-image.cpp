class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> result;

        for (int i = 0; i < image.size(); i++) {
            int left = 0;
            int right = image[i].size() - 1;
            while (left < right) {
                swap(image[i][left], image[i][right]);
                left++;
                right--;
            }
            for (int k = 0; k < image[i].size(); k++) {
                image[i][k] = (image[i][k] == 0) ? 1 : 0;
            }

            result.push_back(image[i]);
        }
        return result;
    }
};