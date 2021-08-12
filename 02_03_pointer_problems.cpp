#include <iostream>
using namespace std;

int main()
{
    /*
    Pointers don't throw compile time errors, but run-time errors which cause problems in real-time application usage.

    Problems with pointers : 

        i.   Uninitialized Pointer
            
            CAUSE : Let's say we have declared a pointer like : int *p; //without initialising
            and went ahead to use it without it pointing to an address 

            SOLUTION : 
                a. we create a variable and assign it to the pointer
                    int x = 10;
                    int *p = x; || int *p; p = &x;
                b. we assign an address (hexadecimal code) that is typecasted as 'integer pointer'
                    int *p;
                    p = (int *)0x5638; //a valid address that belongs to the current program
                c. dynamically allocate some memory and assign to it
                    int *p;
                    p = new int[5]; //if not mentioned the size, it assigns one integer


        ii.  Memory Leak

            CAUSE : when you don't free/ deallocate memory in HEAP, it will eventually run out of memory, which causes memory leak.
                This happens either when you don't free/ deallocate memory or when you point the pointer to null || NULL || nullptr before deleting

            
        iii. Dangling Pointer
    
    
    */

    return 0;
}