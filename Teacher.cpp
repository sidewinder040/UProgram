#include "Teacher.h"
#include <iostream>

Teacher::Teacher()
{
}

Teacher::Teacher(std::string firstName, std::string lastName, std::string address, std::string city, std::string phone)
{
	this->FirstName = firstName;
	this->LastName = lastName;
	this->Address = address;
	this->City = city;
	this->Phone = phone;
}

Teacher::~Teacher()
{
}

void Teacher::GradeStudent()
{
	std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass()
{
	std::cout << "Sitting at front of class" << std::endl;
}

// Getters
void Teacher::setFirstName(std::string firstName)
{
	this->FirstName = firstName;
}

void Teacher::setLastName(std::string lastName)
{
	this->LastName = lastName;
}

void Teacher::setAddress(std::string address)
{
	this->Address = address;
}

void Teacher::setCity(std::string city)
{
	this->City = city;
}

void Teacher::setPhone(std::string phone)
{
	this->Phone = phone;
}

// Getters
std::string Teacher::getFirstName()
{
	return this->FirstName;
}

std::string Teacher::getLastName()
{
	return this->LastName;
}

std::string Teacher::getAddress()
{
	return this->Address;
}

std::string Teacher::getCity()
{
	return this->City;
}

std::string Teacher::getPhone()
{
	return this->Phone;
}

