#include "student.h"

int main() {
    
    student madison("madison", 456);

    student ryan("ryan", 876);
    std::cout << ryan.get_name() << std::endl;

    ryan.set_name("james");
    std::cout << ryan.get_name() << std::endl;

    return 0;
}