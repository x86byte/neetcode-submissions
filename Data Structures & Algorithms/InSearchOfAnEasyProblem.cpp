#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

void easyorhard(size_t n, unordered_set<int>& d)
{
        if(d.find(1) != d.end()){
            cout << "HARD";
            exit(0);
        }
        else
            cout << "EASY";
}

int main()
{
    size_t n;
    cin >> n;

    unordered_set<int> v(n);
    size_t ctr = 0;
    for(auto i = 0; i < n; i++){
        cin >> ctr;
        v.insert(ctr);
    }
    easyorhard(n, v);
    return 0;
}
