#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int testcase, Case = 1;
    cin >> testcase;

    while (testcase--) {
        cout << "Case " << Case++ << ": ";
        int a, b, c;
        cin >> a >> b >> c;

        bool flag = false;
        if (a == 0) {
            if ((b == 4 && c == 4) || (b == 6 && c == 3) || (b == 3 && c == 6)) {
                flag = true;
            }
        }
        else if (a == 1) {
            if ((b == 4 && c == 3) || (b == 6 && c == 1) || (b == 1 && c == 6) || (b == 3 && c == 4) || (b == 2 && c == 4) || (b == 4 && c == 2)) {
                flag = true;
            }
        }
        else if (a == 2) {
            if ((b == 2 && c == 2) || (b == 4 && c == 1) || (b == 1 && c == 4)) {
                flag = true;
            }
        }
        else if (a == 3) {
            if ((b == 4 && c == 1) || (b == 1 && c == 4) || (b == 6 && c == 0) || (b == 0 && c == 6) || (b == 3 && c == 3)) {
                flag = true;
            }
        }
        else if (a == 4) {
            if ((b == 2 && c == 1) || (b == 1 && c == 2) || (b == 4 && c == 0) || (b == 0 && c == 4) || (b == 3 && c == 1) || (b == 1 && c == 3)) {
                flag = true;
            }
        }
        else if (a == 6) {
            if ((b == 1 && c == 1) || (b == 3 && c == 0) || (b == 0 && c == 3)) {
                flag = true;
            }
        }

        cout << (flag ? "perfectus" : "invalidum") << '\n';
    }
    return 0;
}
