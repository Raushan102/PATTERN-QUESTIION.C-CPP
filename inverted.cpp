#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
           
          
        }
        cout<<'\n';
    }
    return 0;
}/*


1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/