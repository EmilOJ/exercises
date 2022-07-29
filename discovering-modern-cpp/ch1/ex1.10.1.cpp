#include <iostream>
#include <fstream>

int main(void)
{
    int age;
    std::ofstream age_file;
    age_file.open("age.txt");
    std::cout << "What's your age? ";
    std::cin >> age; 

    std::cout << "Age: " << age << std::endl;
    age_file << age << std::endl;

    age_file.close();
}
