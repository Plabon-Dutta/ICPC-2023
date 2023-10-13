#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    
    int testcase, Case = 1;
    cin >> testcase;
    
    while(testcase--) {
        cout << "Case " << Case++ << ": ";

        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector <int> v;

        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                cnt++;
            }
            else {
                if (cnt > 1) v.push_back(cnt);
                cnt = 1;
            }
        }
        if (cnt > 1) {
            v.push_back(cnt);
        }

        long long int res = n;
        for (int i = 0; i < (int)v.size(); i++) {
            res += ((1LL * v[i] * (v[i] - 1)) / 2);
        }

        long long int ans = (1LL * n * (n + 1)) / 2;
        ans -= res;
        
        cout << ans << '\n';
    }
    
    return 0;
}
