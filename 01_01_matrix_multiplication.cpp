#include <iostream>

int main()
{

    int arr1[50][50], arr2[50][50];

    int arr3[50][50];
    int r1, c1, r2, c2;

    std::cout << "Enter first matrix row and column" << std::endl;
    std::cin >> r1 >> c1;

    std::cout << "Enter second matrix row and column : " << std::endl;
    std::cin >> r2 >> c2;

    if (c1 != r2)
    {
        std::cout << "First matrix column size must be equal to second matrix row size" << std::endl;
    }
    else
    {
        // take array values arr1, arr2;

        // for arr1

        std::cout << "\nEnter arr1 : " << std::endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                std::cin >> arr1[i][j];
            }
        }

        //for arr2
        std::cout << "\nEnter arr2 : " << std::endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                std::cin >> arr2[i][j];
            }
        }

        // display arr1 and arr2

        std::cout << "\narr1 : " << std::endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                std::cout << arr1[i][j] << " ";
            }
            std::cout << "\n";
        }

        std::cout << "\narr2 : " << std::endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                std::cout << arr2[i][j] << " ";
            }
            std::cout << "\n--";
        }

        // multiplication

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < r2; k++)    //or k < c1
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }

        std::cout << "\narr3 : " << std::endl;

        //display arr3
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                std::cout << arr3[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}
