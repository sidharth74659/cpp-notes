#include <iostream>
using namespace std;

int main()
{
    /*
    Only 5 Operations are possible using pointers :

    int arr[5] = {1,3,5,7,9};
    int *p = arr;

    i. incrementing : p++;

        By default array acts as a pointer to its first element
         when you use p++ -> the pointer now points to the next element (i.e second element) and so on

    ii. decrementing : p--;

        Similar to above, the pointer now points to the previous element (i.e first element) and so on

    iii. incrementing with constant : p = p+2;

        This is possible and the pointer points to two elements forward from current (i.e third element) and so on

    iv. decrementing with constant : p = p+2;

        Similar to above, the pointer points to two elements backwards from current (i.e first element) and so on

    v. subtracting pointers : pointer - pointer

        Lets say we have two pointers p and q that points to arr[1] and arr[4], with addresses 200/1 and 206/7 respectively and datatype size is 2

        now d = q - p; results in a number that tells how far/ behind an element is

        For given example it would be like
                -> q = 206, p = 200
                -> q-p = 6
                -> 6/2 = 3 // divide it by size of the dataType(i.e., 2)

        if the output is +ve, it means q is 3 elements far from p
        
        if we do d = p-q, we get -3

        if the output is -ve, it means q is 3 elements behind from p





    thinking we could do anything more than this will hurt your head baaaadddly

    */

    // int arr[5] = {1, 3, 5, 7, 9};
    int arr[5]{1, 3, 5, 7, 9}; //yes, its valid

    cout << "arr : " << arr << endl;
    cout << "&arr[0] : " << &arr[0] << endl;
    cout << "arr[0] : " << arr[0] << endl;
    cout << "*arr : " << *arr << endl;

    int *p = arr;

    cout << "Before p++ : " << *p << endl;
    p++;

    cout << "After p++ : " << *p << endl;

    p--;
    cout << "After p-- : " << *p << endl;

    p--;
    cout << "After p-- twice : " << *p << endl; //garbage value

    p++; //

    cout << "Address of p : " << p << endl;
    cout << "address of p adding 2 : " << p + 2 << endl;

    cout << "incrementing  p by 2 : " << *(p + 2) << endl;

    p = p + 2; //

    cout << "Address of p : " << p << endl;
    cout << "address of p subtracting 2 : " << p - 2 << endl;
    cout << "decrementing p by 2 : " << *(p - 2) << endl;

    p = p - 2; //
    cout << "Address of p : " << p << endl;

    int *q = &arr[4];

    cout << "q - p : " << q - p << endl;
    cout << "p - q : " << p - q << endl;

    /*
    NOTE : 
    In a for loop to access array elements you can do arr[i] || i[arr] 

    */
    return 0;
}