#pragma once
#include "Student.h"
#include "Teacher.h"


class Course
{
public:
	Course(std::string courseName);

	~Course();
	
	std::string CourseName;

	Student Students[3];
	Teacher Teacher[1];

private:
	/*Student Students[3];
	Teacher Teacher[1];*/
};
