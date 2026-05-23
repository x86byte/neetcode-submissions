using namespace std;

#include <algorithm>
#include <iostream>
#include <string>
#include <stdbool.h>
#include <unordered_set>
#include <set>
#include <vector>
#include <cmath>

int main()
{
	cin.sync_with_stdio(false);
	cin.tie();

    size_t d{};
    size_t sd = 0;
    cin >> d;
    cin >> sd;
    for(int i = 0; i < sd; i++)
    {
        if((d % 10) != 0)
            d--;
        else
            d /= 10;
    }
    
    cout << d;
	return {};
}
