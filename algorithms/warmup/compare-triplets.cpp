#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int alice = 0;
    int bob = 0;
    if (a0 != b0) {
        (a0 > b0) ? (alice += 1) : (bob += 1); 
    }
    if (a1 != b1) {
        (a1 > b1) ? (alice += 1) : (bob += 1); 
    }
    if (a2 != b2) {
        (a2 > b2) ? (alice += 1) : (bob += 1); 
    }
    
    vector <int> result;
    result.push_back(alice);
    result.push_back(bob);
    
    return result;
}

int main() {
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}