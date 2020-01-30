#pragma once
#include <string>


class Teacher
{
public:
	Teacher();

	Teacher(std::string firstName,
		std::string lastName,
		std::string address,
		std::string city,
		std::string phone);

	~Teacher();

	void GradeStudent();

	void SitInClass();

	// Setters
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setAddress(std::string address);
	void setCity(std::string city);
	void setPhone(std::string phone);

	// Getters
	std::string getFirstName();
	std::string getLastName();
	std::string getAddress();
	std::string getCity();
	std::string getPhone();

private:
	std::string FirstName;
	std::string LastName;
	std::string Address;
	std::string City;
	std::string Phone;
};
