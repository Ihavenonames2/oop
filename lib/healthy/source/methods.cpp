#include <iostream>
#include <string>
#include "methodsHeader.h"

using namespace std;

User::User()
{
	string arr_names[] = { "A", "B", "C", "D" ,"E" };
	name = arr_names[rand() % 4];
	int arr_height[] = { 150 , 160, 170 , 180, 190 };
	height = arr_height[rand() % 4];
	int arr_weight[] = { 50, 60, 70, 80, 90 };
	weight = arr_weight[rand() % 4];
	int arr_age[] = { 20,25,30,35,40 };
	age = arr_age[rand() % 4];

}
User::User(string name, int age, int height, int weight)
{
	this->name = name;
	this->height = height;
	this->weight = weight;
	this->age = age;
}
void User::Show_user_stat()
{
	cout << "Name: " << name << "\tAge: " << age << "\tHeight: " << height << "\tWeight:" << weight << endl;
}

/*
User :: ~User()
{

}
*/

Exersices::Exersices()
{
	burned_calories = 0;
}

/*
float Exersices :: Lose_calories( int average_b_cal)
{
	float bcal = average_b_cal;
	return bcal;
}
*/
Legs::Legs()
{
	ab_run = 12000;
	ab_squat = 13500;
	ab_jump = 14000;
}
int Legs::Running(int run_time)
{
	burned_calories = run_time * ab_run;
	return burned_calories;
}

int Legs::Squats(int time)
{
	burned_calories = time * ab_squat;
	return burned_calories;
}
int Legs::Jumps(int time)
{
	burned_calories = time * ab_jump;
	return burned_calories;
}

Arms::Arms()
{
	ab_pups = 30;
	ab_plups = 500;
	ab_ex = 6000;
}
int Arms::Push_ups(int time)
{
	burned_calories = time * ab_pups;
	return burned_calories;

}
int Arms::Pull_ups(int time)
{
	burned_calories = time * ab_plups;
	return burned_calories;
}
int Arms::Dumbbell_exercises(int time)
{
	burned_calories = time * ab_ex;
	return burned_calories;
}

Chest::Chest()
{
	ab_twist = 8600;
}

int Chest::Twisting(int time)
{
	burned_calories = time * ab_twist;
	return burned_calories;
}
