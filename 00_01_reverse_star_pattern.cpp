#include <iostream>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > j)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}