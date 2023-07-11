// write a program to drow piramid pattern
#include <iostream>
using namespace std;

int main()
{
    int row;
   cin>>row;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * row- 1; k++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
/*



   *********
   *********
  *********
 *********
*********

*/