#include <iostream>
extern int* matrix_min_max(int **vals,int num_rows, int num_cols);

int main(){
    int num_rows = 4;
    int num_cols = 6;
    int **ptr;

    int array1[] = {1, 2, 3, 4, 5, 6};
    int array2[] = {1, 2, 3, 4, 5, 6};
    int array3[] = {1, 2, 3, 4, 5, 6};
    int array4[] = {-1, 2, 3, 4, 5, 8};

    ptr = new int*[num_rows];

    *(ptr + 0) = array1;
    *(ptr + 1) = array2;
    *(ptr + 2) = array3;
    *(ptr + 3) = array4;


    
    // for (int i = 0; i < 6; i++)
    // {
    //     std::cout << *(ptr22 + i) << " "; 
    // }
    // std::cout << std::endl;
    

    int* result_ptr = matrix_min_max(ptr, num_rows, num_cols);

    // std::cout << "{" << *(result_ptr + 0) << ", " << *(result_ptr + 1) << "}"; 

    delete[] ptr;
    return 0;
}