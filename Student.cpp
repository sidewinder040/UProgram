#include "Student.h"
#include <iostream>

Student::Student(std::string firstName, std::string lastName, std::string address, std::string city, std::string phone)
{
	this->FirstName = firstName;
	this->LastName = lastName;
	this->Address = address;
	this->City = city;
	this->Phone = phone;
}

Student::~Student()
{
}

void Student::SitInClass()
{
	std::cout << "Sitting in main theatre" << std::endl;
}

// Getters
void Student::setFirstName(std::string firstName)
{
	this->FirstName = firstName;
}

void Student::setLastName(std::string lastName)
{
	this->LastName = lastName;
}

void Student::setAddress(std::string address)
{
	this->Address = address;
}

void Student::setCity(std::string city)
{
	this->City = city;
}

void Student::setPhone(std::string phone)
{
	this->Phone = phone;
}

// Getters
std::string Student::getFirstName()
{
	return this->FirstName;
}

std::string Student::getLastName()
{
	return this->LastName;
}

std::string Student::getAddress()
{
	return this->Address;
}

std::string Student::getCity()
{
	return this->City;
}

std::string Student::getPhone()
{
	return this->Phone;
}

