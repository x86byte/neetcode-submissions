// unknown subject to me

#include <iostream>

using namespace std;

long long getthegcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    long long L, v1, v2, t;
    cin >> L >> v1 >> v2 >> t;

    long long plus = v1 + v2;
    long long minus = (v1 > v2) ? (v1 - v2) : (v2 - v1);

    long long count_plus = (plus * t / L + 1) / 2;
    long long count_minus = 0;
    long long overlap = 0;

    if (minus > 0) {
        count_minus = (minus * t / L + 1) / 2;

        long long g = getthegcd(plus, minus);
        if ((plus / g) % 2 != 0 && (minus / g) % 2 != 0) {
            overlap = (g * t / L + 1) / 2;
        }
    }

    cout << count_plus + count_minus - overlap << endl;

    return 0;
}
