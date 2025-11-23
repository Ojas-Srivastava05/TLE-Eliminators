#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool has3 = false;
        for (int i = 0; i + 2 < n; ++i) {
            if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') {
                has3 = true;
                break;
            }
        }
        if (has3) {
            cout << 2 << '\n';
            continue;
        }

        
        int count = 0;
        for (char c : s) if (c == '.') ++count;
        cout << count << '\n';
    }
    return 0;
}
