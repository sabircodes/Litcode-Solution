#include <bits/stdc++.h>
using namespace std;
stack<string> s;
void insert()
{
    string appended_string;
    cin >> appended_string;
    string top_string; 
    top_string = s.top();
    s.push(top_string + appended_string);
}

void delete_val()
{
    int k;
    cin >> k;
    string top_string; 
    top_string = s.top();
    string needed_string = top_string.substr(0,top_string.size() - k);
    s.push(needed_string);
}

void get()
{
    int k;
    cin >> k;
    string top_string = s.top();
    cout << top_string[k-1] << endl;
}

void undo()
{
    s.pop();    
}

int main() {
   
    int Q;
    cin >> Q;
    s.push("");
    for(int i=0; i < Q; i++)
    {
        int ops;
        cin >> ops;
        switch (ops) 
        {
            case 1: 
                insert();
                break;
            case 2:
                delete_val();
                break;
            case 3:
                get();
                break;
            case 4: 
                undo();
                break; 
        }
    }
    return 0;
}
                                                                                                                            