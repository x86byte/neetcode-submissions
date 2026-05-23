//https://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

auto& _cout  = cout;



int main() 
{
    string buff;

    cin >> buff;
    if(buff[0] >= 'a' && buff[0] <= 'z'){
        buff[0] -= 32;
        _cout << buff << endl;
    } else
        _cout << buff << endl;
    return 0;
}
