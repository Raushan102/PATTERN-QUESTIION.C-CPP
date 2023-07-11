#include<iostream>
using namespace std;

int main() {
    int row,coloum;
    cout <<"enter raw";
    cin>>row;
    cout<<"entyerb coloum";
    cin>>coloum;



    for(int i=1;i<=row;i++){

        for(int j=1;j<=coloum;j++){

            int raushan=i+j;

            if(raushan%3==0){

                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
101
011
110
101
011


*/