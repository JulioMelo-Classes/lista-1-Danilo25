#include <iostream>
using namespace std;

const int SIZE = 5; // input size.

/*
blz
*/
int main(void)
{
    int val=0,
        qnt=0,
        rep=0;

    while (rep<5)
    {
        cin>>val;
        if(val<0){
            qnt++;
        }
        rep++;
    }
    cout<<qnt<<endl;
    return 0;
}
