#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap; // Stores next greater elements
        stack<int> st;

        // Process nums2 to find next greater elements
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                ngeMap[st.top()] = num; // Map smaller elements to their next greater element
                st.pop();
            }
            st.push(num);
        }

        // Remaining elements in stack have no greater element
        while (!st.empty()) {
            ngeMap[st.top()] = -1;
            st.pop();
        }

        // Prepare the result for nums1 using the precomputed map
        vector<int> result;
        for (int num : nums1) {
            result.push_back(ngeMap[num]);
        }

        return result;
    }
};