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