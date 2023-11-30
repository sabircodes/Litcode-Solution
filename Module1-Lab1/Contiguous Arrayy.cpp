#include<bits/stdc++.h>
#define vv vector<vector<int>>
#define v vector<int>
#define ump unordered_map<int,int>
using namespace std;


int helpme(v &a){
    ump mp{{0,-1}};
    int n = a.size();
    int sum = 0 ;
    int maxi = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum+=a[i]==1?1:-1;
        if(mp.count(sum)) {
            maxi = max(maxi,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
        
    }
    return maxi;
    
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   
   int n;
   cin>>n;
   v a(n);
   for(int i = 0 ; i < n ;i++){
            cin>>a[i];
   }
   
   
   int ans = helpme(a) ;
   cout<<ans;
   
    
    return 0;
}
                                                                                                                            