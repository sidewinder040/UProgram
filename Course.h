#pragma once
#include "Student.h"
#include "Teacher.h"


class Course
{
public:
	Course()
	{
	}

	~Course()
	{
	}

private:
	Student _Students[3];
	Teacher _Teacher[1];
};
