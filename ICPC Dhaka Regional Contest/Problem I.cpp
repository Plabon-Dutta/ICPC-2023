#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int testcase, Case = 1;
    cin >> testcase;

    while (testcase--) {
        int n;
        cin >> n;

        int a[2 * n];
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        if (is_sorted(a, a + (2 * n))) {
            cout << 0 << '\n';
            continue;
        }

        if (n % 2) {
            cout << 9 << '\n';
            int m = (n + 1) / 2;
            cout << 1 << ' ' << n << '\n';
            cout << n + 1 << ' ' << 2 * n << '\n';
            cout << m << ' ' << (n + m - 1) << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << n + 1 << ' ' << 2 * n << '\n';
            cout << m << ' ' << (n + m - 1) << '\n';
            cout << m + 1 << ' ' << (n + m) << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << n + 1 << ' ' << 2 * n << '\n';
        }
        else {
            cout << 8 << '\n';
            int m = (n / 2) + 1;
            cout << 1 << ' ' << n << '\n';
            cout << n + 1 << ' ' << 2 * n << '\n';
            cout << m << ' ' << (n + m) - 1 << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << n + 1 << ' ' << 2 * n << '\n';
            cout << m << ' ' << (n + m) - 1 << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << n + 1 << ' ' << 2 * n << '\n';
        }   
    
    }
        
    return 0;
}
