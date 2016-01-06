#ifndef STUDENT_H
#define STUDENT_H

#include <string>


class student
{
public:

    private:
        std::string name;
        unsigned int age;

    public:
        student(); //constructor

        void set_name(std::string s);
        void set_age(int a);

        std::string get_name();
        unsigned int get_age();

        void print();


};

#endif // STUDENT_H
