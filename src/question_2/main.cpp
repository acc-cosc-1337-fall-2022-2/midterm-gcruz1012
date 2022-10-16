#include "question2.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int num1;
    int num2;
    int user_result;

    cout<<"This program will check the product of two numbers."<<"\n";

    cout<<"Enter your first number: ";
    cin>>num1;

    cout<<"\n"<<"Enter your second number: ";
    cin>>num2;

    cout<<"\n"<<"Enter your product: ";
    cin>>user_result;

    int result = user_result;

    check_math(num1, num2, result);

    if (result != user_result)
    {
        cout<<"Your product "<<user_result<<" is incorrect!"<<"\n";
        cout<<"The correct product is "<<result<<"\n";
    }
    else
    {
    cout<<"Your product "<<user_result<<" is correct!"<<"\n";
    }

    return 0;
}