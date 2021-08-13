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
                This happens either when you don't free/ deallocate memory or when you point the pointer to null || NULL || 0 || nullptr (suggested, it is a reserved word(keyword), it's a zero but not a integer value but address value); before deleting

            SOLUTION :
                a. delete the pointer(de-allocate) when no longer in use :
                    delete []ptr;
                b. and assign it to null ONLY when you already deleted using above syntax
                    p = null || NULL || 0 || nullptr (suggested);
            
        iii. Dangling Pointer

            CAUSE : when you have two pointers sharing same memory and you deleted one pointer, the other pointer is left to pointed something that doesn't exist, this causes error.
                In simple words, accessing the memory that is already deallocated

                void fun(int *q) {
                    .........
                    delete []q; 
                }

                void main () {
                    int *p = new int[5];
                    .......
                    fun(p); //deletes the pointer p is pointing to
                    cout << *p; //causes error as now 'p' points to something that doesn't exist
                }

            
            SOLUTION : 
                a. write code carefully
                b. concentrate on possible errors while running


    Cause of this such errors, JAVA and DOTNET removed pointers however they handle all this (like de-allocating..) inside JVM (another reason why java is easier)
    
    */

    return 0;
}