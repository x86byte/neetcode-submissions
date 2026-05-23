
using namespace std;


#include <string>
#include <iostream>
#include<stdlib.h>

int main()
{

    std::string str;
    getline(cin, str);
    int limak = atoi(&str[0]);
    int bob = atoi(&str[2]);
    int ctr = 0;
    if (limak >= 1 && limak <= bob && bob <= 10)
    {
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        ctr++;
    }
    cout << ctr;
    }
}
