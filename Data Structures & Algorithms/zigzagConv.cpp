#include <bits/stdc++.h>
using namespace std;

string sol(string ss, size_t nr)
{
        if(nr == 1)
            return ss;
        size_t row = 0;
        size_t gd = 0;
        vector<string> str(nr);
        for(const char c : ss){
            str[row] += c;
            if (row == 0 || row == nr - 1)
                gd = !gd; 
            if(gd)
                row += 1;
            else
                row += -1;
        }
        (string)ss = "";
        for(auto r : str)
           (string)ss+=r;
        return (const string)ss;
}

int main()
{
    cout << sol("PAYPALISHIRING", 3) << endl;
}

