#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= 2*n - 2*i-1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}
/*

       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1 
*/
