#include <iostream>
using namespace std;
int fact(int num);
int main()
{

    int n;
    cout << "enter number";
    cin >> n;
    int ans;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";
        }
        cout << '\n';
    }
    return 0;
}

int fact(int num)
{
    int facturial = 1;

    for (int i = 1; i <= num; i++)
    {
        facturial = facturial * i;
    }
    return facturial;
}
/*

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

*/
