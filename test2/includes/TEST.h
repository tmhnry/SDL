#ifndef TEST_H_
#define SCREEN_H_
#include <iostream>
using namespace std;

class Test
{
private:
    string testName;
    string myName;
    string secondName;

public:
    Test();
    string giveTestName();
    string giveMyName();
    string giveSecondName();
};

#endif