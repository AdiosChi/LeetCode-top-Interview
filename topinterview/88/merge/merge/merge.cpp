﻿
#include <iostream>
#include <vector>
using namespace std;
class Solution {

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--, i--;
            }
            else
            {
                nums1[k] = nums2[j];
                k--, j--;
            }
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            k--, j--;
        }
    }

};
int main() {
    int m, n;
    cin >> m >> n;
    vector<int>nums1(m + n);
    vector<int>nums2(n);
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];

    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    Solution merge;
    merge.merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
}

