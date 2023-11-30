#include <bits/stdc++.h>
#define v vector<int>
#define vs vector<string>
#define vv vector<vector<int>>

using namespace std;

string isGoodPassword(vs& passwords) {
    sort(passwords.begin(), passwords.end());
    for (int i = 0; i < passwords.size() - 1; i++) {
        if (passwords[i + 1].find(passwords[i]) == 0) {
            return "BAD PASSWORD";
        }
    }
    return "GOOD PASSWORD";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string input;
    getline(cin, input);
    vs passwords;
    size_t pos = 0;
    string token;
    while ((pos = input.find(" ")) != string::npos) {
        token = input.substr(0, pos);
        passwords.push_back(token);
        input.erase(0, pos + 1);
    }
    passwords.push_back(input);
    string result = isGoodPassword(passwords);
    cout << result << endl;
    return 0;
}
                                                                                                                            