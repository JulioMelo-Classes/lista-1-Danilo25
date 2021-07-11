#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    int min=V[0],
        max=V[0],
        posMin=0,
        posMax=0;

    if(n<1){
        posMin=-1;
        posMax=-1;
    }
    else{
        for(int i=0;i<n;i++){
            if(V[i]<min){
                posMin = i;
                min = V[i];
            }
            if(V[i]>max){
                posMax = i;
                max = V[i];
            }else if(V[i]==max){
                posMax = i;
            }
        }
    }
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { posMin, posMax };
}
