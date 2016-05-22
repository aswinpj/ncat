#include <iostream>
#include "util/mybase64.h"

using namespace std;


int main()
{
    const unsigned char * name = (const unsigned char *) "Aswin";
    char * answer = b64enc(name,5);
    cout<<answer;
}

