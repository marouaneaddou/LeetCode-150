# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if ( nums.size() == 1 ) return nums[0];
        sort( nums.begin(), nums.end());
        int m = nums.size() / 2;
        int count = 0;
        for ( int i = 0; i < nums.size(); i++ ) {
            while( i + 1 != nums.size() &&  nums[i] == nums[i + 1]) {
                count++;
                i++;
            }
            if ( count >= m ) return nums[i - 1];
            count = 0;
        }
        return 0;
    }
};