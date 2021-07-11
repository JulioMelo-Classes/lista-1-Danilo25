#include <iostream>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::string aux;
    int t = SIZE/2,
        j=SIZE-1;
    for(int i=0; i<t ; i++){
        aux=arr[i];
        arr[i]=arr[j];
        arr[j]=aux;
        j-=1;
    }
}
