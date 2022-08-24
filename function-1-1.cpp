#include <iostream>

void print_ascending(int *vals, int len){
    for (int i = 0; i < len; i++)
    {
        if (i > 0){
            if (*(vals + i) < *(vals + i - 1)){
                std::cout << std::endl;
                break;
            }
            else{
                std::cout << *(vals + i) << " ";
            }
        }
        else{
            std::cout << *(vals + i) << " ";
        }
    }
}