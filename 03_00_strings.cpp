#include <iostream>
using namespace std;

int main()
{
    /*
    STRINGS :

    a set of characters || array of characters 

    a null character is added at the end of the string, which acts as a deimiter, such that compiler knows it is the end of string

    Ways to declare :
        - char x = 'A';              -> its a character
        - char s[10] = "Hello";      -> H, e, l, l, o, \0, , , ,  -> size 10, length 6 
        - char s[] = "Hello";        -> H, e, l, l, o, \0       -> size 6, length 6
        - char s[] = {'H', 'e', 'l', 'l', 'o', '\0' };
        - char s[] = {65, 66, 67, 68, '\0'}; -> A, B, C, D, \0
        - char *s = "Hello";         -> H, e, l, l, o, '\0'

    To store in stack/ code-section we use , char s[10];
    To store in heap we use , char* s;

    However In ISO C++ 11 and above, the compiler doesn't allow conversion from string literal to 'char *'.
        char* s = "Hello";      // throws a warning in ISO C++ 11

    
    Just like in C, in C++ we can use string class :
        string s = "Hello";


    */

    { // NOTICE :

        char s1[] = {'H', 'i', '\0', 'B', 'r', 'o'};
        cout << s1 << endl; //prints HI //cause '\o' or 0 acts as delimeter in string

        char s2[] = {65, 66, 67, 68, 0, 69, 70};
        cout << s2 << endl; //prints ABCD
    }
    /*
    Reading and Printing a String :

    */
    { // Reading :

        { // compiler when reads a space, cuts off the remaining characters instead of reading

            char s[20]; // accepts upto 19 characters plus one character for '\o'
            cout << "Enter your name : " << endl;
            cin >> s; //if i give Dominic Toretto -> it stores only Dominic
            cout << "Your name is : " << s << endl;

            //if you try to read multiple lines like s1, s2, s3, everytime you click 'enter', it is read by next variable and hence skips reading for every alternative variable...

            // To avoid this we use :
            cin.ignore();
        }

        { // To read whole line one of the two following functions

            char s1[20];

            //i. cin.get(string_name, max_size_it_can_accept)
            cout << "Enter your favourite movie : " << endl;
            cin.get(s1, 20); //accepts whole words upto 19 characters
            cout << "your favourite movie is : " << s1 << endl;

            //But there's a catch here, if you use cin.get() function to read multiple lines back to back, it won't read the second cin.get() function cause
            // the first cin.get() accepts the word but when you click 'enter'
            // it is ignored by first function but the next cin.get() reads that and quits reading anything after that

            //To avoid that we use :

            cin.ignore();

            char s2[20];
            cout << "Enter your favourite word : " << endl;
            cin.get(s2, 20); //accepts whole words upto 19 characters
            cout << "your favourite word is : " << s2 << endl;

            cin.ignore();
        }

        { // To avoid all this, you can simply use cin.getline() function

            char s1[20], s2[20];

            cout << "What is your name : " << endl;
            cin.getline(s1, 20);

            cout << "What is your nick name : " << endl;
            cin.getline(s2, 20);

            cout << "so your name is : " << s1 << " aka " << s2 << endl;
        }
    }

    return 0;
}