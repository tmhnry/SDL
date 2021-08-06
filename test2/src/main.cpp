#include <iostream>
//  works with ../includes/
#include "TEST.h"

int main()
{
    Test test;
    cout << test.giveTestName() << endl;
    cout << test.giveMyName() << endl;
    cout << test.giveSecondName() << endl;
}
