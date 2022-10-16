#include "question4.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string; 


int main()
{
    int decimal;
    string user_choice;
    do
    {

    
    cout<<"Enter a number between 1 and 255 to convert to binary: ";
    cin>>decimal;
    
    if (decimal>=1 && decimal<= 255)
    {
        string bin = decimal_to_binary(decimal);
        cout<<"\n"<<"The binary value of "<<decimal<<" is "<< bin<<"\n";
    }

    else
    {
        cout<<"The value is invalid!"<<"\n";
    }

    
    cout<<"Would you like to exit? (Y/N)"<<"\n";
    cin>>user_choice;
    } while(user_choice != "Y" && user_choice != "y");





    return 0;
}