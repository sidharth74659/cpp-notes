#include <iostream>
using namespace std;

int main()
{
    /*
    Just like civil Engineers.mechanics come up with a blueprint on what they gonna workout, while using OOP, we follow its orinciples for using it effectively

    The principles are

        i. Abstraction :
            - Hide internal details
            - Don't need to show internal details of functions to work with it
            - Written a code once, one should not worry about dealing/knowing its internal details, but only about using it

            Ex : printf() : we use this many times, but don't know its internal details(as it is out of scope for your usage)    
    
        ii. Encapsualtion : 
            - Data Hiding
            - One should not be able to access data directly, but only through a process(function)
            - Not for security reasons, but to deal with mishandling it
             
            Ex: we make data as private, but functions as public, such that you can't access data unless you go through a process(function)

            Syntax :
                class ClassName {
                    private :
                        data1;
                        data2;
                    public :
                        setValueForData1(value){
                            data1 = value;
                        }
                        getValueOfData1() {
                            return data1;
                        }
                }


        iii. inheritance : 
            - acquiring common properties from Parent class
            - avoids redundancy, less-code and many more

            For example, a class Car contains :
                - data      : color, hasAirbag, isElectric
                - functions : slowSpeed(), stopCar(), turnDirection()
            
            However the above properties are also for every type of car like BMW, Toyota, Ford along with their very own unique properties 

            Therefore, inheritance lets you achieve to share the properties/data/ methods of a parent class and add yours too

            Syntax :
                class Car {
                    color;
                    hasAirbag;
                    isElectric;
                    slowSpeed(); 
                    stopCar(); 
                    turnDirection();
                }
                
                class Tesla extends Car {                 class Ford extends Car {
                    'extends' allows to acquire all the properties from Car class and 
                    you can add your owns

                    isAutopilot();                              autoPark();
                    navigateToDestination();                    
                    
                }                                         }

        iv. polymorphism :

            - The work is same but the implementation is a bit different
            
            - If you know to use a browser, you can automatically use any type of browser,
                same with a car, if you know to drive a car, you can also drive BMW, Toyota....



    */

    return 0;
}