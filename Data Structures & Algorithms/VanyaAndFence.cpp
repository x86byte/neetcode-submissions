using namespace std;

#include <algorithm>
#include <iostream>
#include <string>
#include <stdbool.h>
#include <unordered_set>
#include <set>
#include <vector>
#include <cmath>

/*
6
ADAAAA
OutputCopy
Anton
InputCopy
7
DDDAADA
OutputCopy
Danik
InputCopy
6
DADADA
OutputCopy
Friendship

*/


int main()
{
	cin.sync_with_stdio(false);
	cin.tie();

    int  n;
    int m;
    cin >> n;
        cin >> m;
    int ctr = 0;
    int height;
    if(!(n >= 1 && n <= 1000 && (m >= 1 && m <= 1000)))
        return 0;
    for (int i = 0 ; i < n; i++)
    {
        cin >> height;
        if (height > m)
            ctr += 2;
        else
            ctr++;
    }
    cout << ctr;
	return {};
}
