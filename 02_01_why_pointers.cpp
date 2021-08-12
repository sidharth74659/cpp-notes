#include <iostream>
using namespace std;

int main()
{

    /*
        When we create an array, the size we give is fixed.
            We can neither increase or decrease the size of the array

        We either give it :
            int arr[10];    //explicitly
        Or :
            int size;
            cin >> size >> endl;
            int arr[size];  //during compile time

        And now, there is no we can expand the array,
        
        However there is a way, 
            i.e by creating an array with required size and copy all the elements from existing array into the new array we just created
            But this costs extra memory

        
        Here comes the concept of stack and heap
    
        General arrays that are created  like this :  int arr[10], are stored in stack
        But arrays created using the 'new' operator : new int[10], are stored in heap

        The great thing about heap is you can increase and decrease the size of a datastructure,
        and the memory is reserved through out the program

        And we cannot access heap directly, but by using 'POINTERS'
            So when we do : int *p = new int[10];
            later we can expand it to : p = new int[20];

        But, the memory needs to be freed(deallocate), case it will run out of memory when not freed, so when it is no longer used, we de-allocate that memory by using: delete[] p; ([] cause its an array)
        and then we can use p = nullptr; (or p = NULL || null, but nullptr is to be prefered)

        the order needs to be delete and then point it to NULL, but not otherway around
    */

    //explicitly
    int arr1[5] = {1, 3, 5, 7, 9};

    //asking user
    int size;
    cout << "Enter size of arr2 : " << endl;
    cin >> size;

    int arr2[size];
    cout << "size of arr2 is : " << sizeof(arr2) << endl;

    //using pointers
    int *p = new int[5];
    // cout << "size of array p is : " << p[7] << endl;

    delete[] p;

    p = new int[10];
    // cout << "size of array p is : " << p[7] << endl;

    return 0;
}