#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_up(char c){
    if(c>='A' && c<='Z'){
        return true;
    }
    return false;
}

bool is_lc(char c){
    if(c>='a' && c<='z'){
        return true;
    }
    return false;
}

bool is_digit(char c){
    if(c>='0' && c<='9'){
        return true;
    }
    return false;

}



vector<float>helpme(string s){
    vector<float>ans;
    int to = s.length();
    int uc = 0;
    int lc = 0;
    int dg = 0;
    int sym = 0;
    
    for(auto i : s){
        if(is_up(i))uc++;
        if(is_lc(i))lc++;
        if(is_digit(i))dg++;
        if(!is_up(i) && !is_lc(i) && !is_digit(i)){
            sym++;
        }
    }
        ans.push_back((static_cast<float>(uc) / to) * 100);
        ans.push_back((static_cast<float>(lc) / to) * 100);
        ans.push_back((static_cast<float>(dg) / to) * 100);
        ans.push_back((static_cast<float>(sym) / to) * 100);
    
return ans;
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin>>s;
    
    vector<float>ans = helpme(s);
    vector<string>res;
    for(auto i : ans){
        res.push_back(to_string(i));
    }
    
    for (auto i : res) {
        size_t found = i.find('.');
        if (found != string::npos) {
            cout << i.substr(0, found + 4)<<"%"<< endl;
        } else {
            cout << i << endl;
        }
    }
    
    
    return 0;
}
                                                                                                                            