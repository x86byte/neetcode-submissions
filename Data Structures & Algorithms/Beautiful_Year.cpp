#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

/*
bool dis(size_t n)
{
    string d = to_string(n);
    unordered_set<char> seen;
    for (char c : d) {
        if (seen.find(c) != seen.end())
        {
            return true;
        }
        seen.insert(c);
    }
    return false;
}

*/


bool dup(std::string str) {
    std::sort(str.begin(), str.end());
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i+1]) {
            return true;
        }
    }
    return false;
}


int main()
{

    size_t n;
    cin >> n;
    n++;
    string s;
    while(true)
    {
        s = to_string(n);
        if(dup(s))
            n++;
        else {

            cout << s;
            break;
        }
    }
    return 0;
}
