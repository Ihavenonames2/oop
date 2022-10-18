#pragma once
#include <string>

using namespace std;

class User
{
public:
	User() = default;
	~User() = default;

protected:
	string name;
	int high;
	int weight;
	int age;
};
class Exersices
{
public:
	Exersices();
	~Exersices();

private:

protected:
	float weight;
	float calories;
};

class Legs : public Exersices
{
public:
	float Running();

	float Squats();

	float Jumps();

};

class Arms : public Exersices
{
public:
	float Push_ups();

	float Pull_ups();

	float Dumbbell_exercises();

};

class Chest : public Exersices
{
public:
	float Twisting();


};