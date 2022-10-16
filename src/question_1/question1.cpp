#include "question1.h"


using std::string;
using std::to_string;


bool test_config()
{
    return true;
}

string get_factorial_sequence(int num)
{
    int sum = 1;
    string factorial_sequence;

    while (num>1)
    {
        sum*=num;
        factorial_sequence += to_string(num) + "x";
        num--;
    } 

    factorial_sequence += "1";

    reverse(factorial_sequence.begin(), factorial_sequence.end());

    factorial_sequence += "=" + to_string(sum);

    return factorial_sequence;

}

//string reverse_string(string factorial_sequence)
//{
   // string reverse_sequence;
   // for (int i = factorial_sequence.length(); i > 0;i--)
  //  {
 //       reverse_sequence==
  //  }
//}