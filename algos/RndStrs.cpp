#include <bits/stdc++.h>
#include <random>
#include <string>
using namespace std;

namespace RndStr {
  const string tkhrbi9 = "0123456789ABCDEFGHIJKLMNOPQRSTXYWabcwyskdjolcdekqkz";
  random_device rnd;
  mt19937 rd(rnd());
  
  char *randomStrgen(const size_t l)
  {
      char *RndmSTR = new char[l];
      for(auto i = 0; i < l; i++)
          RndmSTR[i] = tkhrbi9[rd() % (size_t)(tkhrbi9.size() - 1)];
      return (RndmSTR);
  }
}

using namespace RndStr;

int main()
{
    cout << randomStrgen(5);
    return 0;
}
