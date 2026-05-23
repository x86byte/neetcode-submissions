using namespace std;

#include <algorithm>
#include <iostream>
#include <string>
#include <stdbool.h>
#include <unordered_set>
#include <set>
#include <vector>

int main()
{
	cin.sync_with_stdio(false);
	cin.tie();
	
	int d  = 0;
	cin >> d;
	if(!(d >= 1 && d <= 50))
	    return 0;
	std::string hjar;
	cin >> hjar;
	int ctr = 0;
	for (int i = 0; i < d; i++)
	{
	    if (hjar[i] == hjar[i + 1])
	        ctr++;
	}
    cout << ctr;
	return {};
}
