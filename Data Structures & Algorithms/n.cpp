#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

typedef long long ll;

// Helper to calculate GCD for long long
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    // Handling specific file input/output requirements
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll L, v1, v2, t;
    if (!(cin >> L >> v1 >> v2 >> t)) return 0;

    ll A = abs(v1 - v2);
    ll B = v1 + v2;

    // Count for Case 2: (v1 + v2)t = (2j + 1)L
    // (2j + 1) <= (B * t) / L
    ll N2 = (B * t) / L;
    ll count2 = (N2 + 1) / 2;

    ll count1 = 0;
    ll overlap = 0;

    if (A > 0) {
        // Count for Case 1: |v1 - v2|t = (2k + 1)L
        ll N1 = (A * t) / L;
        count1 = (N1 + 1) / 2;

        // Overlap happens if A*x = (2k+1)L and B*x = (2j+1)L
        // This implies B/A = (2j+1)/(2k+1)
        ll g = gcd(A, B);
        ll A_red = A / g;
        ll B_red = B / g;

        // Overlap exists only if both reduced terms are odd
        if ((A_red % 2 != 0) && (B_red % 2 != 0)) {
            // Overlap equation simplifies to: g * t = (odd_multiplier) * L
            ll Nov = (g * t) / L;
            overlap = (Nov + 1) / 2;
        }
    }

    ll total = count1 + count2 - overlap;
    cout << total << endl;

    return 0;
}
