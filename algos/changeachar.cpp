#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


bool check(char c, string pat)
{
    size_t sz = pat.size();
    size_t ctr = 0;
    while(sz--)
    {
        if(ctr == pat.size())
            break;
        if(c == pat[ctr])
            return 1;
        ctr++;
    }
    
    return 0;
}

vector<char> elim(string str, string pat)
{
    size_t s_sz = str.size();
    size_t p_sz = pat.size();
    if(!s_sz || !p_sz)
        return {};
    int valider[300] = {};
    size_t ctr = 0;
    while(ctr < p_sz)
        valider[pat[ctr++]]++;
    
    vector<char> chars;
    ctr = 0;

    while(true)
    {
        if(ctr == s_sz)
            break;
        if(valider[str[ctr]]){
            if(check(str[ctr], pat))
                chars.push_back(str[ctr]);
        }
        ctr++;
    }
    return (chars);
}

// bool check(char c, string pat)
size_t strc(vector<char> &str, string pat)
{
    size_t ctr= 0;
    size_t i = 1;
    size_t res = 0;
    
    size_t endd = str.size();
    size_t l = 0;
    while(l < endd)
    {
        while(1)
        {
            if(ctr == str.size())
                return 0;
            if(str[ctr] == pat[0])
                break;
            ctr++;
            l = ctr;
        }
        ctr++;
        while(ctr <= str.size())
        {
            if(ctr == str.size())
                break;
            if(str[ctr] == pat[i])
            {
                if((i+1) == pat.size())
                {
                    res +=1;
                    i = 0;
                }
                else
                    i++;
            }
            ctr++;
            l = ctr;
        }
    }
    
    return res;
}

bool validinp(size_t i1, size_t i2, size_t i3, string i4, string i5)
{
        if(!i1 || !i2 || !i3)
            return 0;
        vector<char> validonce = elim(i4, i5);
        
        if(validonce.size() >= i5.size())
            cout << strc(validonce, i5) << endl;
        return 1;
}

int main()
{
    size_t i1 = 0, i2 = 0, i3 = 0;
    string i4, i5;
    cin >> i1;
    size_t i1pb = i1;
    while(i1pb--){
        cin >> i2 >> i3 >> i4 >> i5;
        validinp(i1, i2, i3, i4, i5);
        i2 = 0;
        i3 = 0;
    }
}
