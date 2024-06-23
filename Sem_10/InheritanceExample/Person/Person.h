#pragma once
#pragma warning (disable : 4996)
#include <iostream>

class Person
{
public:
	Person(const char* name, unsigned int age);
	Person() = default;
	Person(const Person& other);
	Person( Person&& other) noexcept;

	Person& operator=(const Person& other);
	Person& operator=( Person&& other) noexcept;

	~Person();

	void setName(const char* name);
	void setAge(unsigned int age);

	const char* getName() const;
	unsigned int getAge() const;

	void print() const;
private:
	char* name = nullptr;
	unsigned int age;

	void copyFrom(const Person& other);
	void moveFrom( Person&& other);

	void free();

};


