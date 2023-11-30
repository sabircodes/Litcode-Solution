#include <bits/stdc++.h>
using namespace std;

int helper(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(x == 2) return 1;
    if(x == 3) return 1;
    return x - (x-1)*(x-2)/(x-3) + helper(x-4);
}

int clumsyFactorial(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(x == 3) return 6;
    return x*(x-1)/(x-2) + helper(x-3);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int x;
    cin>>x;
    int ans = clumsyFactorial(x);
    cout<<ans<<endl;
    
    return 0;
}
                                                                                                                            