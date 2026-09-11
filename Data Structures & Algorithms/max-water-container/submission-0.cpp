class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int maxVal = INT_MIN;
        int i = 0, j = n-1;
        while(i < j) {
          int  minval = min(arr[i], arr[j]);
            maxVal = max(maxVal, minval * (j-i));
            if(arr[i] < arr[j]) {
                i++;
            }else {
                j--;
            }
        }
        return maxVal;
    }
};