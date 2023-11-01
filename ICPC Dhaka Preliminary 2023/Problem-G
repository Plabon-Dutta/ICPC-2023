#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    
    int testcase;
    cin >> testcase;
    
    while(testcase--) {
        string s;
        cin >> s;

        int wicket = 0, run = 0, ball = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'W') {
                wicket++;
            }
            else if (s[i] == '1') {
                run += 1;
            }
            else if (s[i] == '2') {
                run += 2;
            }
            else if (s[i] == '3') {
                run += 3;
            }
            else if (s[i] == '4') {
                run += 4;
            }
            else if (s[i] == '5') {
                run += 5;
            }
            else if (s[i] == '6') {
                run += 6;
            }

            ball++;
        }

        int over = ball / 6;
        ball %= 6;

        if (over == 0) {
            cout << "0." << ball << " Over ";
        }
        else if (over == 1 && ball == 0) {
            cout << "1.0" << " Over ";
        }
        else {
            cout << over << '.' << ball << " Overs ";
        }

        if (run <= 1) {
            cout << run << " Run ";
        }
        else {
            cout << run << " Runs ";
        }

        if (wicket <= 1) {
            cout << wicket << " Wicket.";
        }
        else {
            cout << wicket << " Wickets.";
        }
        cout << '\n';
    }
    
    return 0;
}
