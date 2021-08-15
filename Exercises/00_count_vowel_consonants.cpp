#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "how Ar3e YOU7724";
    int words = 1, consonants = 0, vowels = 0, numbers = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        // cout << str[i] << endl;
        // cout << (char)90 << endl;
        // cout << (char)122 << endl;
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if (str[i] == ' ')
        {
            words++;

            while (str[i + 1] == ' ')
            {
                i++;
            }
        }
        else if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 122)))
        {
            numbers++;
        }
        else
        {
            consonants++;
        }
    }

    /* Method 2: 
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        // cout << it << endl;  //invalid as it is an iterator (inplicitly a pointer)

        // cout << *it << endl;    // hence you have to de-refernce it

        // cout << (char)(*it - 32) << endl;
        
        string vowel = "aeiou";
        if (vowel.find_first_of(*it) < 5)
        {
            vowels++;
        }
        else if (*it == ' ')
        {
            words++;
        } else {
            consonants++;
        }
    }
*/

    cout << "words : " << words << endl;
    cout << "vowels : " << vowels << endl;
    cout << "consonants : " << consonants << endl;
    cout << "numbers : " << numbers << endl;

    return 0;
}