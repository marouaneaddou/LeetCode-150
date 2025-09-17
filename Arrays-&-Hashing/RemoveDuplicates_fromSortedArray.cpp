# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        int k = 0;
        for ( int i = 0; i < nums.size(); i++ ) {
            nums[k++] = nums[i];
            while( i + 1 != nums.size() && nums[i] == nums[i + 1]) i++;
        }
        return k;
    }
};