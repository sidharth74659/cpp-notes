#include <iostream>

int main()
{

    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; //or
    // int arr[2][3] = {1, 2, 3, 4, 5, 6}; // both work

    int arr1[2][3] = {1,2,3,4,5,6};
    int arr2[2][3] = {1,2,3,4,5,6};

    int arr3[2][3];

// addition of two matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display arr3

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr3[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}