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
        if (str[0] = '0')
        {

            for (int i= 0; i < str.length(); i++)
            {
                if (str[i] == '0')
                {
                    cout << "acceptable" << endl;
                }
            }
        }

        else
        {
            cout << "rejected" << endl;
        }
    
       if(str[0] = '1')
    {
        cout << "accepted" << endl;
    }

    else
    {
        cout << "rejected" << endl;
    }
}
}
;
int main()
{
    dfa df;
    df.dfa_implementation();
}
