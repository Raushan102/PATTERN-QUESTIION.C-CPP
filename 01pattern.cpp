#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int c = j + i;
            if (c % 2 == 0)
            {
                cout << "1"
                     << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
/*
        1 
        0 1 
        1 0 1 
        0 1 0 1 
        1 0 1 0 1 
*/