#include<bits/stdc++.h>
#define v vector<int>
#define ll long long

using namespace std;

int helpme(string &S){
    unordered_set<char> set;
    int n=S.size();
    int l=0;
    int r=0;
    int rst=0;
    while(r<n){
        if(set.count(S[r])<1){
            set.insert(S[r++]);
        }
        else{
            set.erase(S[l++]);
        }
        rst=max(rst,r-l);
    }
    return rst;
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin>>s;
    
    int ans = helpme(s);
    cout<<ans;
   
    return 0;
}
                                                                                                                            