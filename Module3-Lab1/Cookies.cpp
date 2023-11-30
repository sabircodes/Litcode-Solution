#include<bits/stdc++.h>
using namespace std;

int min_steps_to_target_sweetness(vector<int>& candies, int target_sweetness) {
    
    make_heap(candies.begin(), candies.end(), greater<int>());

    int steps = 0;

    while (candies.front() < target_sweetness) {
        
        pop_heap(candies.begin(), candies.end(), greater<int>());
        int least_sweet = candies.back();
        candies.pop_back();

        pop_heap(candies.begin(), candies.end(), greater<int>());
        int second_least_sweet = candies.back();
        candies.pop_back();

        
        int combined_sweetness = least_sweet + 2 * second_least_sweet;

        
        candies.push_back(combined_sweetness);
        push_heap(candies.begin(), candies.end(), greater<int>());

        
        steps += 1;
    }

    return steps;
}

int main() {
    // Input reading
    int target_sweetness;
    cin >> target_sweetness;

    vector<int> candies;
    int candy;
    while (cin >> candy) {
        candies.push_back(candy);
    }

    // Output the result
    int result = min_steps_to_target_sweetness(candies, target_sweetness);
    cout << result << endl;

    return 0;
}
                                                                                                                            