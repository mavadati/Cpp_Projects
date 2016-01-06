#include <iostream>
#include <string>

#include "student.h"


int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "my name is robert" << std::endl;


    std::cout << "I initialze a class 'Student': " << std::endl;
    student s1;
    s1.print();
    //display(s1.get_age());

    return 0;
}

template<typename T>
void display(T x){
    std::cout << x << std::endl;

}
