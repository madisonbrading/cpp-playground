#include <iostream>
#include <string>

// class definition file

class student {

    public:
        //put functions for the class
        student(std::string, int); //the constructor
        ~student(); //the destructor

        //getters and they return either string or int
        std::string get_name();
        int get_id();

        //setters
        void set_name(std::string);
        void set_id(int);

    private:
        std::string student_name;
        int student_id;
};