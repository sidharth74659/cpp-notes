#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "MAlayalam";

    /* BEGINNER : 

    string str2 = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] > 64 && str[i] < 91) //a little-cheat
        {
            str[i] = str[i] + 32;
        }

        str2 += str[i];
    }

    if (str == str2)
    {
        cout << "Given word is a palindrome" << endl;
    }
    else
    {
        cout << "Given word is not a palindrome" << endl;
    }
    
    cout << str2 << endl << str << endl;

    */

    /* BIT BETTER :

    int count = 0;
    int len = str.length();

    for (int i = 0; i != len / 2; i++)
    {
        if (str[i] == str[len - 1 - i])
        {
            // cout << str[i] << endl;
            count++;
        }
    }
    if(count == len/2) {
        cout << "Given word is a palindrome" << endl;
    } else {
        cout << "Given word is not a palindrome" << endl;
    }
    
    */

    /* TUTORIAL ANSWER

    string rev_str = "";

    int len = (int)str.length();

    rev_str.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev_str[i] = str[j];
    }
    rev_str[len] = '\0';

    if (str.compare(rev_str) == 0)
    {
        cout << "Given word is a palindrome" << endl;
    }
    else
    {
        cout << "Given word is not a palindrome" << endl;
    }

    cout << rev_str << endl;

    */

    return 0;
}