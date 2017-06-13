#include "DynArray.h"
 
#include <iostream>
 
int main()
{
    DynArray<int> d = {200, 300, 100};
 
    DynArray<int> d1 = d * 5;
    std::cout << d1.GetCount() << "\n";
 
    /*int arr[] = { 5, 6, 7, 8 };
    for (int el : arr)
    {
        std::cout << el << " ";
    } */
 
    DynArray<int> const d2(d1);
    std::cout << d2[0] << "\n";
    d1[0] = -5;
    std::cout << d1[0] << "\n";
 
    return 0;
}
