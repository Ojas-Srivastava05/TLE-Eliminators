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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>ans(n);
        ans=a;
        sort(ans.begin(),ans.end());
        bool flag=false;

        if((k==1 && ans==a) || k==n)
        flag=true;

        if(k>=2)
        flag=true;

        if(flag)
        cout<<"YES"<<endl;

        else
        cout<<"NO"<<endl;

    }
    return 0;
}