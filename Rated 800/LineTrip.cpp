#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> diff(n);
        
        for (int i = 0; i < n - 1; i++) {
            diff[i] = a[i + 1] - a[i];
        }

        
        diff[n - 1] = a[0]; 

        
        int maxe = *max_element(diff.begin(), diff.end());


        maxe = max(maxe, 2 * (x - a[n - 1]));

        cout << maxe << "\n";
    }
    return 0;
}