#include <iostream>
using namespace std;

int main()
{

    /* * Two types of variables :
        i.  One that stores data -> Data Variable -> int  x = 10;
        ii. Other that stores adrress -> Address Variable -> int  *p = x; || int  *p; p = &x;

        # Pointer is a variable which is used for storing the address of data

            int x = 10;
    */

    int x = 10;
    int *p; //declaration       // here, * refers to reference operator
    p = &x; //initialization    // here, & refers to address-of operator

    cout << x  << endl;  // 10               // displays value   of variable 'x'
    cout << &x << endl;  // 0x7fffd89663fc   // displays address of variable 'x'
    cout << p  << endl;  // 0x7fffd89663fc   // displays address of variable 'p' points to i.e., 'x'
    cout << &p << endl;  // 0x7fffd8966400   // displays address of variable 'p'
    cout << *p << endl;  // 10               // displays value   of variable 'p' points to i.e., 'x'

    /*
    Terms : 
        int *p; //declaration       // here, * refers to reference operator
        p = &x; //initialization    // here, & refers to address-of operator

        cout << *p << endl;         // here, * refers to de-reference operator        
    */

    return 0;
}
