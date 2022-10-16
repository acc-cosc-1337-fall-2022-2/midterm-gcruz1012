#include <iostream>
#include "question3.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    string t;

    cout<<"Enter a DNA string to transcribe: "<<"\n";

    cin>>t;

    string u = transcribe_dna_to_rna(t);

    cout<<"RNA string: "<<u<<"\n";

    return 0;
}