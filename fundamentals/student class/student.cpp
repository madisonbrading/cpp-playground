#include "student.h"

//class implementation file

student::student(std::string name, int id) {
//set private variables of instance to equal parameters from line 5
    this->student_name = name;
    this->student_id = id;
}

student::~student() {
    //nothing to delete bc no variables are declared on the heap
}

std::string student::get_name() {
    return this->student_name;
}

int student::get_id() {
    return this->student_id;
}

void student::set_name(std::string name) {
    this->student_name = name;
}

void student::set_id(int id) {
    // the "this->" is dereferencing a particular instance's private data member
    this->student_id = id;
}