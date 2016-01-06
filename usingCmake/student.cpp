#include "student.h"
#include <iostream>



student::student()
{
  std::cout << "this is the constructor  of student"   << std::endl;
  name = "ND";
  age = 0;
};

student::set_name(std::string s){
    this->name = s;
}

student::set_age(int a){
    this->age = a;
}

student::get_name(){
    return this->name;
}

student::get_age(){
    return this->age;
}

student::print(){
    std::cout << "Student Name: " << this->name << std::endl;
    std::cout << "Student Age: "  << this->age << std:: endl;
}
