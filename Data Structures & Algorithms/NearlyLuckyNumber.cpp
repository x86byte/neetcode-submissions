using namespace std;

#include <algorithm>
#include <iostream>
#include <string>
#include <stdbool.h>
#include <unordered_set>
#include <set>
#include <vector>
#include <cmath>
// // 40047  1000000000000000000 7747774


int main()
{
	cin.sync_with_stdio(false);
	cin.tie();

    string d;
    cin >> d;
    size_t ctr = 0;
    for(int i = 0; i < d.size(); i++)
    {
        if((d[i] == '7' || d[i] == '4')){
            ctr++;
        }
    }
    if((ctr == 4 || ctr == 7))
        cout << "YES";
    else
        cout << "NO";
	return {};
}
