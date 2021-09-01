#include <iostream>
using namespace std;

int main()
{
    /*
    A class contains numerous objects, same way class is what all the objects comes under

    Hence you can say :
        - Class is a definition and
        - Object is an instance of it

    if we take a class Shape, objects would be circle, rectangle, polygon...
    if we take a class Rectangle, objects would be area, perimeter, diagonal...

    A class contains 
        - data (a.k.a  property)
        - function (a.k.a behaviour)
    
    If we take Rectangle Class as example :
        - data (a.k.a  property)        : length, height
        - function (a.k.a behaviour)    : area(), perimeter(), diagonal()


    To create a class : Syntax :
        Class Rectangle {
            float length;
            float height;

            float area();
            float perimeterer();
            float diagonal();
        };              //we close a class using semi-colon(;)


    To use a class, we have to create an object/ objects Ex :className obj_name;
        void main() {
            Rectangle r1;   // here r1 is an object
            r1.method();    // To access functions of a class we use dot operator between obj_name and the method

        }

    now that we have a class Rectangle, we can create many objects, each with different values

    --------------          ----------
    |            |          |        |
    |     r1     |          |   r2   |
    |            |          |        |
    --------------          ----------

    */

    return 0;
}