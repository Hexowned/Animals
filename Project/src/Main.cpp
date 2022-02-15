#include <iostream>

#define string std::string

class Animal
{
public:
	int			age;
	string		sex;
	string		name;
	string		birthday;
	string		breed;
	string		visiting_reason;

public:
	Animal() :
		age(0),
		sex(""),
		name(""),
		birthday(""),
		breed(""),
		visiting_reason("")
	{
		printf("Animal Constructor constructed\n");
	}
	
	virtual ~Animal()
	{
		printf("Animal Destructor destructed\n");
	}

	virtual void PrintInfo()
	{
		std::cout
			<< "Name: " << name << std::endl
			<< "Age: " << age << std::endl
			<< "Sex: " << sex << std::endl
			<< "Birthday: " << birthday << std::endl
			<< "Breed: " << breed << std::endl
			<< "Visiting: " << visiting_reason << std::endl;
	}

	virtual void Speak() = 0;
};

class Dog : public Animal
{
public:
	Dog()
	{
		printf("Dog Constructor constructed\n\n");
		this->age = 1;
		this->sex = "M";
		this->name = "Quigley";
		this->birthday = "November 11th";
		this->breed = "Pitbull/Rottweiler";
		this->visiting_reason = "Vaccine";
	}

	~Dog()
	{
		printf("Dog Destructor destructed\n");
	}

public:
	void Speak()
	{
		printf("I'm a dog and I Bark\n\n");
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		printf("Cat Constructor constructed\n\n");
		this->age = 6;
		this->sex = "M";
		this->name = "Sirius";
		this->birthday = "July 5th";
		this->breed = "Stray Tabby";
		this->visiting_reason = "Vaccine";
	}
	
	~Cat()
	{
		printf("Cat Destructor destructed\n");
	}

public:
	void Speak()
	{
		printf("I'm a cat and I Meow\n\n");
	}
};

int main()
{
	Dog dog;
	dog.Speak();
	dog.PrintInfo();

	printf("=======================================================\n");

	Cat cat;
	cat.Speak();
	cat.PrintInfo();

	std::cin.get();
}
