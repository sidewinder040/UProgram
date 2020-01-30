// UProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Course.h"
#include "Student.h"

int main()
{
    /*std::cout << "Hello World!\n";*/
    Student student1("David", "Smith",
        "5 Smithy Way", "London", "0555 238 234");

    Student student2("Sue", "Davidson",
        "20 Plinge Way", "Scunthorpe", "0123 345 665");

    Student student3("Francis", "Trout",
        "14 High Street", "Wolverhampton", "01276 568 398");
    
    Course course1("Intermediate C++");

    course1.Students[0] = student1;
    course1.Students[1] = student1;
    course1.Students[2] = student3;

    Teacher teacher("Arthur", "Pewtey",
        "5 Abbotfields", "Manchester", "5565 985 777");

    course1.Teacher[0] = teacher;

    std::cout << "Course Name: " << course1.CourseName << std::endl;
    course1.Teacher->GradeStudent();
}


