# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    void print( vector<int>& nums1 ) {
        for ( int i = 0; i < nums1.size(); i++ ) {
            std::cout << nums1[i] << " ";
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::vector<int> arr( n + m);
        int k = 0, i = 0, j = 0;
        for (; i < m && j < n; ) {
            if ( nums1[i] < nums2[j] ) {
                arr[k] = nums1[i];
                i++;
            }
            else if ( nums1[i] > nums2[j] ) {
                arr[k] = nums2[j];
                j++;
            }
            else {
                arr[k++] = nums2[j++];
                arr[k] = nums1[i++];
            }
            k++;
        }
        if ( i < m ) {
            for ( ;i < m; i++) {
                arr[k++] = nums1[i]; 

            }
        }
        else if ( j < n ) {
            for ( ;j < n; j++) {
                arr[k++] = nums2[j]; 
            }
        }
        nums1 = arr;
    }
};

int main() {
    std::vector<int> a1= {1,2,3,0,0,0};
    std::vector<int> a2= {2,5,6};
    int n = 3, m = 3;
    Solution a;
    a.merge(a1, m, a2, n);
    a.print( a1 );
}