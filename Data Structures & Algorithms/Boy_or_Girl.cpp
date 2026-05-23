//https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;
auto& _cout = cout;

int main()
{
    string buff;
    cin >> buff;
    vector<char> l_new;
    char t[256] = {0};
    for (char i : buff)
    {
        if (!t[i])
            l_new.push_back(i);
        t[i] = 1;
     }
    (l_new.size() %2 == 0) ? _cout << "CHAT WITH HER!" : _cout << "IGNORE HIM!";
    return 0;
}

