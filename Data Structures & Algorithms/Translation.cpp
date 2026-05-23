
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string buff;
	string buff2;
	cin >> buff;
	cin >> buff2;

	size_t sz = 0;
	for(auto i : buff)
		sz++;
	size_t sz1 = 0;
	for(auto ii : buff2)
		sz1++;
	if(sz1 != sz)
	{
		cout << "NO";
		return 0;
	}
/*	if(buff[0] != buff2[sz - 1] && buff[sz - 1] != buff2[0])
	{
		cout << "NO1";
		return 0;
	}*/

	size_t ctr = 0;
	size_t ctr2 = sz - 1;
	while(buff[ctr])
	{
		if(buff[ctr] == buff2[sz1 - 1])
		{
			sz1--;
			ctr++;
		} else {
			cout << "NO";
			return 0;
		}
		/*
		if(!(sz1 - 1) && ctr == sz - 1){
			cout << "YES";
			return 0;
		}*/
	}
	cout << "YES";
	return 0;
}

using namespace std;

#include <algorithm>
#include <iostream>
#include <string>
#include <stdbool.h>

bool checker(char c, char cc)
{
    return (c == cc);
}


int main()
{
        string buff, buff2;
        cin >> buff;
        cin >> buff2;
        reverse(buff2.begin(), buff2.end());
        if(equal(buff.begin(), buff.end(), buff2.begin(), checker))
            cout << "YES";
        else
            cout << "NO";
        return 0;
}
