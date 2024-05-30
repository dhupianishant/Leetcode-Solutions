#include <bits/stdc++.h>
using namespace std;

bool find(int x, int y) {
    if (x>y)
        return 1;
    
    int ans = pow(A[x], find(x+1, y));
    
    if(ans % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}

int main{
    vector<int> arr = {3, 2, 7};
    vector<vector<int>> queries = {{1, 2}, {2, 3}};
    vector<string> result;

    for (auto k: queries) {
        int x = k[0];
        int y = k[1];
    
        if (find(x, y))
            result.push_back("Even");
        else
            result.push_bacl("Odd");
    }
    
    for (auto x: result) {
        cout << x << endl;
    }
    return 0;
}