#include <iostream>
using namespace std;

int main()
{
    /*
    when 
        int a = 10; //10 is assigned to a, and a is the address here
        int b = a;  // a's value 10 is assigned to b, and a is the data here

    Hence we can conclude that
        when a variable is on left (known as l-value) it contains/ represents data/ content/ value
        when a variable is on right(known as r-value) it contains/ represents address 

    For a declaration :
        int x = 10;
        int &y = x; // it basically means 'y' points to the place where 'x' is pointing to
    such that now 'x', 'y' points to the same address that has the value 10
    Now we can say that 'y' acts/ is just an alias of x

    So when we modify 'x' value like x++, x = x*2, x = x-9 the value also will be same for y

    */

    int a = 10;
    int b = a;

    cout << "a value : " << a << endl;
    cout << "b value : " << b << endl;

    a = a + 2;
    cout << "Ater modification : " << endl;
    cout << "\ta value : " << a << endl;
    cout << "\tb value : " << b << endl;

    int x = 20;
    int &y = x; //means y is alias of x, affect one impacts other too

    cout << "x value : " << x << endl;
    cout << "y value : " << y << endl;

    x = x + 2;
    cout << "Ater modification : " << endl;
    cout << "\tx value : " << x << endl;
    cout << "\ty value : " << y << endl;

    /* RULES :
    
    1. You have to initialize the variable at the declaration itself
        int x;
        int &y;  //invalid
        y = x;  //invalid

        int &y = x; //valid

    2. Once you set a value to an address, you can never re-allcate it with some other value,
    like
        int x, z;
        int &y = x;

        y = z; //invalid
        y =10; //invalid
    
    */

    cout << "---------------------" << endl;
    int l = 30;
    int *m = &l; //m points to address of l
    int *&n = m; //n is an alias/ same as m

    cout << "value of l : " << l << endl;
    cout << "value of m : " << *m << endl;
    cout << "value of n : " << *n << endl;
    cout << "value of m : " << m << endl;
    cout << "value of n : " << n << endl;

    return 0;
}