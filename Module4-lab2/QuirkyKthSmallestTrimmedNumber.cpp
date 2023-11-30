#include<bits/stdc++.h>

#define  vs  vector<string>
#define vv  vector<vector<int>>
#define v vector<int>

using namespace std;


v helpme(vs& nums, vv& queries) {
    int n = nums.size();
    int m = nums[0].size();

    v res(queries.size());
    unordered_map<int, vector<pair<int, int>>> query_lookup;
    for (int i = 0; i < queries.size(); ++i) {
        query_lookup[queries[i][1]].emplace_back(queries[i][0], i);
    }

    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    for (int k = m - 1; k > -1; --k) {
        stable_sort(idx.begin(), idx.end(),
            [&nums, &k](size_t i1, size_t i2) {
                return nums[i1][k] < nums[i2][k];
            });
        if (auto matched_qs = query_lookup.find(m - k);
            matched_qs != query_lookup.end()) {
            for (auto& q : matched_qs->second) {
                res[q.second] = idx[q.first - 1];
            }
        }
    }
    return res;
}

int main() {
    int n, m;

    
    cin >> n;

   
   vs nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }


    cin >> m;

    
    vv queries(m, vector<int>(2));
    
    for (int i = 0; i < m; ++i) {
        cin >> queries[i][0] >> queries[i][1];
    }

    v result = helpme(nums, queries);

   
    
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
                                                                                                                            