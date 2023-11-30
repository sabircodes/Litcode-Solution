#include<bits/stdc++.h>
using namespace std;

stack<int> primaryStack, secondaryStack;


void shuffleStack()
{
    int element = 0;
    
    while (!primaryStack.empty())
    {
        element = primaryStack.top();
        secondaryStack.push(element);
        primaryStack.pop();
    }
}

void restoreStack()
{
    int element = 0;
    
    while (!secondaryStack.empty())
    {
        element = secondaryStack.top();
        primaryStack.push(element);
        secondaryStack.pop();
    }
}

void enqueStack(int ele)
{
    if (primaryStack.empty() && !secondaryStack.empty())
        restoreStack();
        
    primaryStack.push(ele);
}


int dequeStack()
{
    if(!primaryStack.empty())
        shuffleStack();
    
    int element = secondaryStack.top();
    secondaryStack.pop();

    return element;
}

int printFront()
{
    if(!primaryStack.empty())
        shuffleStack();

    int element = secondaryStack.top();

    return element;
}
 
int main() {
    int numQueries = 0, queryType = 0, element = 0;
    size_t size;
    std::string str;
    
    /* Read input from STDIN. Print output to STDOUT */
    cin >> numQueries;
    
    for (auto index = 0; index < numQueries; index++)
    {
        cin >> str;
        
        queryType = stoi (str, &size);
        
        switch (queryType)
        {
            case 1:
                    cin >> str;
                    element =stoi (str, &size);
                    enqueStack(element);
                    break;
            
            case 2:
                    element = dequeStack();
                    break;
            case 3 :
                    element = printFront();
                    cout << element << endl; 
                    break; 
            
            default:
                    cout << "Invalid Query Type"<< endl;
                    continue;
        }
    }
    return 0;
}
                                                                                                                            