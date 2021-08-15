#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    /* From Tutorial :
    
    string email = "john123@gmail.com";

    int i = (int)email.find('@');

    string username = email.substr(0, i);

    cout << "username : " << username << endl;   
   
   */

    /*

    char str[30] = "john123@gmail.com";
    string username;

    int i = 0;
    while ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 122))
    {
        username += str[i];
        i++;
    }

    cout << "username : " << username << endl;

    */

    /*

    char str[30] = "john123@gmail.com";
    string username;

    char *token = strtok(str, "@"); //need to import <cstring>
    for (int i = 0; token[i] != '\0'; i++)
    {
        if (!((token[i] > 64 && token[i] < 91) || (token[i] > 96 && token[i] < 122)))
        {
            break;
        }
        username += token[i];
    }

    cout << "username : " << username << endl;

    */

    //    while(token!=NULL) {
    //        cout << token << endl;
    //        token = strtok(NULL, "@");
    //    }
    return 0;
}