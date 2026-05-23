#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;


int getmin(unsigned long long int s, unsigned long long int k)
{
    if(s < k)
        return s;
    return k;
}


int getmax(unsigned long long int s, unsigned long long int k)
{
    if(s > k)
        return s;
    return k;
}




int main() {
    int t;
    cin >> t;

    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long flip = m / k;
        int el = m % k;
        
        long long sand = 0;
        
        if(flip % 2 == 0)
            sand = s;
        else
            sand= getmin(s, k);
        if(!el){
            cout << sand << endl;
            
            continue;
        }
        else
            sand = getmax(0LL, sand - el);
        
        if(sand <= 0)
            cout << 0 << endl;
        else
            cout << sand << endl;
    }

    return 0;
}
