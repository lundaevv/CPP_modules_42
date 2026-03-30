#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";

    /*
    PONTER:
    A pointer is a variable that stores an address.
    stringPTR   - the address stored in the pointer
    *stringPTR  - the object found at that address
    */
    std::string *stringPTR = nullptr;

    std::cout << "The memory address of the string variable:    " << &string << std::endl;
    std::cout << "The memory address held by stringPTR:         " << stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable:             " << string << std::endl;
    //std::cout << "The value pointed to by stringPTR:            " << *stringPTR << std::endl;
    
    stringPTR = &string;

    /*
    REFERENCE:
    A reference is an alias for an existing object.

    It is not a new object.
    It is not usually treated as a separate memory-holding variable like a pointer.
    It is just another name for str.

    So reference theory is:
        - a reference must be initialized immediately
        - a reference cannot be null
        - a reference cannot be rebound to another object later
        - using the reference is the same as using the original object
    */
    std::string &stringREF = string;

    std::cout << "The memory address of the string variable:    " << &string << std::endl;
    std::cout << "The memory address held by stringPTR:         " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:         " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable:             " << string << std::endl;
    std::cout << "The value pointed to by stringPTR:            " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:            " << stringREF << std::endl;

    std::cout << std::endl;
    stringREF = "MEOW";

    std::cout << "The memory address of the string variable:    " << &string << std::endl;
    std::cout << "The memory address held by stringPTR:         " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:         " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable:             " << string << std::endl;
    std::cout << "The value pointed to by stringPTR:            " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:            " << stringREF << std::endl;

    std::cout << std::endl;
    *stringPTR = "WOOF";

    std::cout << "The memory address of the string variable:    " << &string << std::endl;
    std::cout << "The memory address held by stringPTR:         " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:         " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable:             " << string << std::endl;
    std::cout << "The value pointed to by stringPTR:            " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:            " << stringREF << std::endl;

    std::cout << std::endl;
    std::string new_string = "BLAH BLAH";
    stringPTR = &new_string;

    std::cout << "The memory address of the string variable:    " << &string << std::endl;
    std::cout << "The memory address held by stringPTR:         " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:         " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable:             " << string << std::endl;
    std::cout << "The value pointed to by stringPTR:            " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:            " << stringREF << std::endl;
}