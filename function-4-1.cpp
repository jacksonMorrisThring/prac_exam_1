#include <iostream>

int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int min = 101;
    int max = -101;



    for (int i = 0; i < num_rows; i++)
    {
        int* ptr_result = *(vals + i);
        for (int j = 0; j < num_cols; j++)
        {
            // std::cout << *(ptr_result + j) << " ";
            if(i == 0){
                if (j == 0){
                    max = *(ptr_result + j);
                    min = *(ptr_result + j);
                    // std::cout << "Reassigning max and minimum at beginning!" << std::endl;
                }
            }

            if (*(ptr_result + j) < min){
                // std::cout << "Reassigning minimum to " << *(ptr_result + j) << std::endl;
                min = *(ptr_result + j);
            }
            if (*(ptr_result + j) > max){
                // std::cout << "Reassigning maximum to " << *(ptr_result + j) << std::endl;
                max = *(ptr_result + j);
            }
        }
        
    }
    int *result = new int[2];
    *(result + 0) = min;
    *(result + 1) = max;

    // std::cout << "Min: " << *(result + 0) << " max: " << *(result + 1) << std::endl;
    return result;
    
}