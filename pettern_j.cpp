#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}
/*
1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4

*/