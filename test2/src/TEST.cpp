//  always works with ../includes/ (Ubuntu 07-30-2021)
//  occassionally throws an error using #include "FILE.h"

#include "TEST.h"

Test::Test()
{
    testName = "First";
    myName = "Second";
    secondName = "Third";
}
string Test::giveTestName()
{
    return testName;
}

string Test::giveMyName()
{
    return myName;
}

string Test::giveSecondName()
{
    return secondName;
}