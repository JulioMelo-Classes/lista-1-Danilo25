/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int x=0,
        val[6]={0,0,0,0,0,0};

    float por[5];

    while (true)
    {
        cin>>x;
        
        if(cin.eof())break;

        if(x>=0 && x<25){
            val[0]++;
        }else if(x>=25 && x<50){
            val[1]++;
        }else if(x>=50 && x<75){
            val[2]++;
        }else if(x>=75 && x<100){
            val[3]++;
        }else{
            val[4]++;
        }
        val[5]++;
    }
    for(int i=0;i<5;i++){
        por[i]=(float(val[i])*100)/val[5];
    }
    for(int i=0;i<5;i++){
        cout<<std::setprecision(4)<<por[i]<<endl;
    }
    return 0;
}
