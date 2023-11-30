#include<bits/stdc++.h>
#define v vector<int>
#define vv vector<vector<int>>

using namespace std;

v getSubarrayBeauty(v& nums, int k, int x) {
    int len = nums.size();
    v ans;
    for (int i = 0; i < len - k + 1; i++) {
        priority_queue<int, v, greater<int>> pq;
        for (int j = i; j < i + k; j++) {
            pq.push(nums[j]);
        }
        int mini;
        int h = x;
        while (h > 0) {
            mini = pq.top();
            pq.pop();
            h--;
        }
        ans.push_back(mini);
        // else ans.push_back(0);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    
    cin >> n;

    v nums;
    
    for (int i = 0; i < n; i++) {
        int xx;
        cin >> xx;
        nums.push_back(xx);
    }

    int k;
    
    cin >> k;

    int x;
    
    cin >> x;

    v result = getSubarrayBeauty(nums, k, x);

    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
                                                                                                                            