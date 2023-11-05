#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int testcase, Case = 1;
    cin >> testcase;

    map <char, int> mm;

    for (int i = 33; i <= 126; i++) {
        mm[char(i)] = i;
    }
    

    while (testcase--) {
        char ch1, ch2;
        cin >> ch1 >> ch2;

        vector <pair <int, int>> ans;
        
        for (int i = 1; i < 94; i++) {
            if ((mm[ch2] - mm[ch1]) % i == 0) {
                ans.push_back({i, ceil(94.0 / i)});
            }
        }

        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i.first << ' ' << i.second << '\n';
        }

        cout << '\n';
    }
    return 0;
}
