//mytest.cpp
#include <iostream>
#include <cppunit/TestCase.h>

class MyTest:public CppUnit::TestCase
{
public:
    MyTest(std::string name): CppUnit::TestCase(name){}

    void runTest()
    {
        CPPUNIT_ASSERT(1 == 1);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(2.19, 2.13, 0.01); 
    }

};

int main()
{
    MyTest test1("Test1_Name");
    
    std::cout << "This is the test: " << test1.getName() << std::endl;
    std::cout << "The test has number:" << test1.countTestCases() << std::endl;
    
    test1.runTest();    
    
    return 0;
}
