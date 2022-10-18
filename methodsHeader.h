#pragma once
#include <string>

using namespace std;

class User
{
public:
	User() {}
	~User() {}

protected:
	string name;
	int high;
	int weight;
	int age;
};