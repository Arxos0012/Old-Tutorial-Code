#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

void Daughter::doSomething(){
    pubV = 1;
    proV = 2;
    /*only the public and protected variables can be
    access*/
}
