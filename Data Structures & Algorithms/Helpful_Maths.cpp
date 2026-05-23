//https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
auto& _cout = cout;

int main()
{
    string buff;
    cin >> buff;
    vector<char> withoutplus;
    for(auto c : buff)
    {
        if(c != '+')
            withoutplus.push_back(c);
    }
    sort(withoutplus.begin(), withoutplus.end());
    int len = withoutplus.size();
    for(auto p : withoutplus){
        _cout << p;
        if(--len)
            _cout << "+";
    }
    return 0;
}


