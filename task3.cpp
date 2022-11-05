// ALI ZAID BABAR
// FA20CS084
#include <iostream>
#include <string.h>
using namespace std;

class dfa
{
public:
	string str;

	void dfa_implementation()
	{
		cout << "enter string" << endl;
		cin >> str;

		int str1, str2;
		for (int i = 0; i < str.length(); i++)
			if (str[0] == 'a' || str[1] == 'b')
			{
				if (str[1] == 'a' || str[1] == 'b' || str[1] == 'c')

					cout << "accepted" << endl;
			}
			else
			{
				cout << "non accetable:" << endl;
			}
		if (str[0] == 'c')
		{

			if (str[1] == 'b' || str[1] == 'c')
			{
				if (str[1] == 'a' || str[1] == 'b' || str[1] == 'c')
				{
				}
				cout << "accepted" << endl;
				;
			}
		}
	}
};
int main()
{
	dfa df;
	df.dfa_implementation();
}