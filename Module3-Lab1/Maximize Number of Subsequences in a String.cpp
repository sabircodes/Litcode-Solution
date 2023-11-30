#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll helpme(string s, string p ){
    ll total = 0 ;
    ll sec = 0 ;
    int n  = s.size();
    for(int i = n-1; i>=0 ; i--){
        bool flag = 0;
        if(s[i]==p[1]){
            flag = 1;
            sec++;
        }
        if(s[i]==p[0]){
         total+=sec;
        }
         if(flag && p[0]==p[1]){
              total--;
         }   
    }
    return total;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s , p;
    cin>>s>>p;
    
    ll ans = max(helpme(p[0]+s,p) , helpme(s+p[1],p));
    cout<<ans<<endl;

}
                                                                                                                            