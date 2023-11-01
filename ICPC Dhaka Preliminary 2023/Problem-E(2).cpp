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

        int c = 1;
        long long int ans = (1LL * n * (n - 1)) / 2;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                c++;
            }
            else {
                if (c > 1) {
                    ans -= (1LL * c * (c - 1)) / 2;
                }
                c = 1;
            }
        }

        if (c > 1) {
            ans -= (1LL * c * (c - 1)) / 2;
        }

        cout << ans << '\n';
    } 
    
    return 0;
}
