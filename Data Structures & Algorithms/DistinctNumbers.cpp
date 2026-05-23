#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	cin.tie();
	int n{};
	cin >> n;

	vector<int> v(n);
	size_t ctr{};
	while(n--)
		cin >> v[ctr++];
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size();
	return {};
}
