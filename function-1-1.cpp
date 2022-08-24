#include <iostream>

void print_ascending(int *vals, int len){
    for (int i = 0; i < len; i++)
    {
        if (i > 0){
            if (*(vals + i - 1) < *(vals + i)){
            std::cout << *(vals + i) << " ";
            }
            else{
                break;
            }
        }
        else{
            std::cout << *(vals + i) << " ";
        }
    }
}