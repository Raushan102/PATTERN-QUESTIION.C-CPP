#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
      for (i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
   *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *