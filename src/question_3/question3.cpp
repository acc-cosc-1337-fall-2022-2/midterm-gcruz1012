#include "question3.h"

using std::string;

bool test_config()
{
    return true;
}

string transcribe_dna_to_rna(string t)
{
 
    for (int i = 0; i<t.length(); i++)
    {
        if (t[i]== 'T')
        {
            t[i] = 'U';
        }
    }
    
    return t;
}