# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    // First method
    void rotate(vector<int>& nums, int k) {
        if ( k == nums.size() ) return;
        if ( k > nums.size() ) k %= nums.size();

        std::vector<int> arr(nums.size());
        int m = nums.size() - k, i = 0, j = m;

        for ( ; j < nums.size(); i++, j++  ) {
            arr[i] = nums[j];
        }

        for ( j = 0 ; i < nums.size(); j++ ) {
            arr[i++] = nums[j];
        }
        nums = arr;
    }
};