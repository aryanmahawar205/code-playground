//say we have all the function names as function1
//now when we make this DerivedClass object instance and call for function1, which function1 definition will get executed?
//well when the call for function1 is made from the derived class object, it OVER-WRITES the definition of the other function1 present in the base classes
//hence finally the function1 definition in DerivedClass object instance itself in executed as shown...

#include <iostream>

using namespace std;

class BaseClass1
{
    public:
        void function1()
        {
            cout << "BaseClass1 function1" << endl;
        }
};

class BaseClass2
{
    public:
        void function1()
        {
            cout << "BaseClass2 function1" << endl;
        }
};

//but if we comment out the function1 of the derived class and then try to run the program, we get an error
//this is happening because there are multiple function1 definitions in BaseClasses (1 and 2)
//and thus there is an ambiguity which one to choose

//HENCE, REMEMBER - FUNCTION GETS OVERWRITTEN ONLY WHEN THAT SAME FUNCTION NAME IS PRESENT IN THE DERIVED CLASS WHOSE OBJECT IS BEING MADE

class DerivedClass : public BaseClass1, public BaseClass2
{
    public:
        void function1()
        {
            cout << "DerivedClass function1" << endl;
        }
};

int main()
{
    DerivedClass derived;
    derived.function1();

    return 0;
}
