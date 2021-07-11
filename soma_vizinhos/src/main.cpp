/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using namespace std;

/*
ok
*/
int main( void )
{
    /*essa indentação aqui ficou meio esquisita mas blz*/
    int n=0,
        m=0,
        v=0,
        rep=0;

    /*boa solução*/
    while (true)
    {
        cin>>m>>n;

        if(cin.eof()){
            break;
        }

        rep = n;
        if(n<0){rep = n * -1;}

        if(n==0){
            v=m;
        }
        for(int i=0; i<rep ; i++){
            if(n>0){
                v+=m;
                m++;
            }else if(n<0){
                v+=m;
                m--;
            }
        }

        cout<<v<<endl;
        n=0;
        m=0;
        v=0;
        rep=0;
    }

    return 0;
}
