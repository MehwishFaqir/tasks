
#include <iostream>
#include <string.h>
using namespace std;

class dfa
{
public:
    string st;

    void dfa_implementation()
    {
        cout << "enter string" << endl;
        cin >> st;

        int str1, str2;
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == '1')
            {
                str1++;
            }
            if (st[i] == '1')
            {
                str2++;
            }
        }

        if (str1 % 2 == 0 || str2 % 2 == 0)
        {
            cout << "Accepted:" << endl;
        }
        else
        {
            cout << " rejected:" << endl;
        }
    }
};
int main()
{
    dfa d;
    d.dfa_implementation();
}
