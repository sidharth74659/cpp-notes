
#include <iostream>

int main()
{

    int arr[2][2] = {1, 1, 2, 2};

    std::cout << "Displaying all elements using for loop" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << arr[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nDisplaying all elements using for each(using int) loop" << std::endl;
    // for (int *x : arr)   // doesn't compile since  => for( : ) won't work with an int*
    for (auto &x : arr)
    {
        for (auto &y : x)
        {
            std::cout << y << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}