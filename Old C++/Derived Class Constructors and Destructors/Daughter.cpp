#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

Daughter::Daughter()
{
    cout << "This is the daughter constructor" << endl;
}

Daughter::~Daughter()
{
    cout << "This is the daughter destructor" << endl;
}
