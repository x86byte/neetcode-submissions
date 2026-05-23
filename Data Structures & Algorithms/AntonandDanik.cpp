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

    int n = 0;
    cin >> n;
    string str;
    cin >> str;
    int a = 0;
    int d = 0;
    for(char i : str)
    {
        if (i == 'D')
            d++;
        if (i == 'A')
            a++;
    }
    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
	return {};
}
