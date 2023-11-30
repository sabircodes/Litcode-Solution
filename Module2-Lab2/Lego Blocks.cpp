#include <iostream>
#include <cstdio>
#include<vector>
#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll mod = 1e9+7;
ll v[1005];
ll T[1005],G[1005];

ll mypow(ll a , int b){
    ll res = 1;
    ll x = a;
    for(int i = 1; i <=b ; i<<=1){
        if(i&b) (res*=x)%=mod;
        (x*=x)%=mod;
    }
    
    return res;
}



int main() {
    int n, m;
    cin>>n>>m;
    v[0]=1;
    for(int i = 1 ; i<=m ; i++){
        v[i]=0;
        for(int j = 1; j<=4 ; j++)
            if(i-j>=0){
                v[i]+=v[i-j];
                v[i]%=mod;
            }
            T[i]=G[i]=mypow(v[i],n);
            for(int j = 1; j<i ; j++){
                G[i]-=G[j] * T[i-j]%mod;
                (G[i]+=mod)%=mod;
            }
        }
        cout<<(int)G[m];
    
    
    return 0;
}
                                                                                                                            