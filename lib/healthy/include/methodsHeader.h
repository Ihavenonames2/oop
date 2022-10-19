#pragma once
#include <string>

using namespace std;

class User
{
public:
	User();
	User(string name, int age, int height, int weight);
	//~User();

protected:
	string name;
	int height;
	int weight;
	int age;

public:
	void Show_user_stat();
};


class Exersices
{
public:
	Exersices();
	//~Exersices();

protected:
	int burned_calories;
	//float Lose_calories( int average_b_cal);

};

class Legs : public Exersices
{
public:
	Legs();
	//~Legs();
private:
	int ab_run;
	int ab_squat;
	int ab_jump;

public:
	int Running(int run_time);

	int Squats(int time);

	int Jumps(int times);
};

class Arms : public Exersices
{
public:
	Arms();
	//~Arms();
private:
	int ab_pups;
	int ab_plups;
	int ab_ex;
public:
	int Push_ups(int time);

	int Pull_ups(int time);

	int Dumbbell_exercises(int times);

};

class Chest : public Exersices
{
public:
	Chest();
private:
	int ab_twist;
public:
	int Twisting(int times);

};
