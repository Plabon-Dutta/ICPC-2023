#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int a[N];
int res;
bool pchk[N];
int ran[N];
int factor_count[N];
int SparseTable[20][N];
vector <int> prime_factors[N];

void sieve() {
    prime_factors[2].push_back(2);

    pchk[0] = pchk[1] = true;

    for(int i = 4; i < N; i += 2) {
        pchk[i] = true;
        prime_factors[i].push_back(2);
    }

    for(int i = 3; i < N; i += 2) {
        if(!pchk[i]) {
            prime_factors[i].push_back(i);
            for(int j = i + i; j < N; j += i) {
                pchk[j] =  true;
                prime_factors[j].push_back(i);
            }
        }
    }
}
 
void buildSparseTable(int n) {
    for (int i = 1; i <= n; i++) {
        SparseTable[0][i] = a[i];
    }

    for (int j = 1; j <= 19; j++) {
        for (int i = 1; i <= n; i++) {
            if (i + (1 << (j - 1)) <= n) {
                SparseTable[j][i] = __gcd(SparseTable[j - 1][i], SparseTable[j - 1][i + (1 << (j - 1))]);
            }
            else {
                SparseTable[j][i] = SparseTable[j - 1][i];
            }
        }
    }
}

int queryForGCD(int L, int R) {
    int j = ran[R - L + 1];
     
    return __gcd(SparseTable[j][L], SparseTable[j][R - (1 << j) + 1]);
}

void add (int i) {
    if (i == -1) {
        res += 10000000;
    }

    for (auto j : prime_factors[i]) {
        if (!factor_count[j]) res++;
        factor_count[j]++;
    }
}

void remove (int i) {
    if (i == -1) {
        res -= 10000000;
    }

    for (auto j : prime_factors[i]) {
        factor_count[j]--;
        if (!factor_count[j]) res--;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    
    sieve();

    for(int i = 2; i < N; i++) {
        ran[i] = ran[i / 2] + 1;
    }

    int testcase, Case = 1;
    cin >> testcase;
    
    while(testcase--) {
        cout << "Case " << Case++ << ": ";

        res = 0;

        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];

            for (auto j : prime_factors[a[i]]) {
                factor_count[j] = 0;
            }
        }

        a[n + 1] = -1;

        buildSparseTable(n);

        int ans = 0, j = 0;
        for (int i = 1; i <= n; i++) {
            while (res <= k) {
                add(a[++j]);
            }

            if (j == i) {
                remove(a[i]);
                continue;
            }

            remove(a[j--]);

            if (res == k && queryForGCD(i, j) == 1) {
                ans = max(ans, (j - i + 1));
            }

            remove(a[i]);
        }

        cout << ans << '\n';
    } 
    
    return 0;
}
