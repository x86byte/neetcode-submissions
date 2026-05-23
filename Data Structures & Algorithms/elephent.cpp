using namespace std;

/*

using namespace std;


#include <string>
#include <iostream>
#include<stdlib.h>

int main()
{
    int sahbo;
    cin >> sahbo;
    int ctr = sahbo / 5;
    if (sahbo % 5)
        ctr++;
    cout << ctr;
}

*/

#include <string>
#include <iostream>
#include<stdlib.h>

int main()
{
    int sahbo;
    cin >> sahbo;
    int ctr = 0;
    while(sahbo - 5 >= 0)
    {
        sahbo -= 5;
        ctr++;
    }
    if (sahbo)
        ctr++;

    cout << ctr;
}
