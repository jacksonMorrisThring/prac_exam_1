#include <iostream>

int next_match_count(int vals[], int length){
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (*(vals + i) == *(vals + i + 1)){
            counter ++;
        }
    }
    return counter;
}