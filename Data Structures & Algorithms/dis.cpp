#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

#define MAXX 1337133
#define OFF  500000


int main()
{
	size_t n{};
	cin >> n;
	vector<int> se(n);

    size_t dist{};
    for(size_t i = 0; i < n; i++)
    {
	cin >> dist;
        se.push_back(dist);
    }

	sort(se.begin(), se.end());
    se.erase(unique(se.begin(), se.end()), se.end());
    cout << se.size() - 1;
    return 0;
}
