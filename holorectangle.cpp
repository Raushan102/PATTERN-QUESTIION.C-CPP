#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int i, j;
    cout << "enter size of holo rectangle";
    cin >> a >> b;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            if (i == 1 || i == a || j == 1 || j == b)

            {
                cout <<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout <<'\n';
    }
    return 0;
}
/*

******
*    *
*    *
*    *
******

*/