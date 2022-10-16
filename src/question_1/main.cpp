#include <iostream>
#include <string>
#include "question1.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    int num;
    string choice;

    do
    {
        cout<<"Please enter a number between 1 and 10:"<<"\n";
        cin>>num;

        if (num < 1 || num > 10 )
        {
           cout<<"ERROR:Number not in range 1-10"<<"\n";
        }
        else 
        {
            string factorial = get_factorial_sequence(num);
            cout<<"Factorial sequence of "<<num<<" is "<<factorial<<"\n";
        }

        cout<<"Would you like to input a new number? (Y/N)"<<"\n";
        cin>>choice;

        //if (choice != "Y" && choice != "y" && choice != "N" && choice!="n")
        //{
        //    cout<<"Input is invalid: "<< choice <<"\n";
        //}
    
    } while(choice!= "N" && choice!="n");


    return 0;
}