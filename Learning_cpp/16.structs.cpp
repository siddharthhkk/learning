#include <iostream>

struct Student {
    std::string name;
    int age;
    float gpa;
    bool isEnrolled = true; // you can set default values which will be used if not specified
};

void print(const Student &student);
int updateGPA(Student &student, int updatedgpa);

int main() {
// a struct can be used to create a custom data type where one can group different data types together.
// variables in a struct are called members, and they can be accessed using the dot operator.
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.gpa = 3.5;
    std::cout << &student1 << std::endl;
    updateGPA(student1, 121);
    print(student1);
    
    Student student2;
    student2.name = "Jane Smith";
    student2.age = 22;
    student2.gpa = 3.8;
    std::cout << &student2 << std::endl;
    updateGPA(student2, 125);
    print(student2);
    return 0;
}

void print(const Student &student) { // this will pass the struct by value not by reference, 
    std::cout << &student << std::endl; // but by passing the address it will not create a copy of the struct, it will just use the address of the struct.
    std::cout << "Student Name: " << student.name << std::endl;
    std::cout << "Student Age: " << student.age << std::endl;
    std::cout << "Student GPA: " << student.gpa << std::endl;
    std::cout << "Is Student Enrolled: " << (student.isEnrolled ? "Yes" : "No") << std::endl;
}

int updateGPA(Student &student, int updatedgpa) {
    return student.gpa = updatedgpa;
}