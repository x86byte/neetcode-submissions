#include <iostream>
#include  <stdio.h>
#include <string>
#include <cstring>

using namespace std;

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int main()
{
        string buff;
        string buff2;
	int	i = 0;
        cin >> buff;
        cin >> buff2;

	int	size = ft_strlen(buff2.c_str());
	int	size2 = ft_strlen(buff.c_str());
	if (size != size2)
	{
		cout << "NO";
		return 0;
	}
	while (buff[i])
	{
		if (buff[i] != buff2[size - 1]){
			cout << "NO";
			return 0;
		}
		i++;
		size--;
	}
	cout << "YES";
}
