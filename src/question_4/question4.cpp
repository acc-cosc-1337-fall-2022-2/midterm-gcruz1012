#include "question4.h"

using std::string;

bool test_config()
{
    return true;
}

string decimal_to_binary(int num)
{
    string binary;
    int num1 = num;
    do 
    {
        if (num%2 == 1 && num1!=1)
        {
            binary.push_back('1');
        }
        else if(num1 != 1)
        {
            binary.push_back('0');
        }

        if (num1!=1)
        {
            num/=2;
        }

    }while((num!=1));

    binary.push_back('1');

    int  check = 8 - binary.length();

    for(int i = 0; i<check;i++)
    {
        binary.push_back('0');
    }
    reverse(binary.begin(),binary.end());

    return binary;
}