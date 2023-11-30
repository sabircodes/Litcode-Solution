#include <iostream>
#include <bits/stdc++.h>
#define vv vector<vector<int>>
#define vvc vector<vector<char>>
#define v vector<int>
#define vc vector<char>
#define umps   unordered_map<int,unordered_set<int>>
#define mps  map<pair<int,int>,unordered_set<int>>

using namespace std;

string helpme(vvc & board){
    umps mpr;
    umps mpc;
    mps mpbox;
    
   for(int i = 0  ; i < 9 ; i++){
            for(int j = 0  ; j <  9 ; j++){
                if(board[i][j]!='.'){
                    int num = board[i][j]-'0';
                    
                    if(mpr[i].find(num)!=mpr[i].end() || mpc[j].find(num)!=mpc[j].end() || mpbox[{i/3,j/3}].find(num)!=mpbox[{i/3,j/3}].end()){
                        return "NO";
                    }
                    
                }
                
                mpr[i].insert(board[i][j]-'0');
                mpc[j].insert(board[i][j]-'0');
                mpbox[{i/3,j/3}].insert(board[i][j]-'0');
                
                
                
                }
            
            }
        return "YES";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    int n ;
    cin>>n;
    
    vvc sudoku(n,vc(n));
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            cin>>sudoku[i][j];
        }
    }
    
    string ans = helpme(sudoku);
    cout<<ans;
    
    
    
    
    return 0;
}
                                                                                                                            