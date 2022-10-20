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
class Food :public User
{
protected:
    double weight_f;
    double calories_f;
    double fats;
    double carbohydrates;
    double proteins;
    string name_of_product;
public:
    int get_weight();
    int get_calories();
    int get_fats();
    int get_carbohydrates();
    int get_proteins();
    string get_name();
    Food();
    Food(int weight_f, int calories_f, int fats, string name_of_product, int carbohydrates, int proteins);
    void set();


};
class Diares :public Food {
public:

    void find_calfcp();
    void print_data();
    void weight_gain();
    void weight_support();
    void weight_lose();
    void add_product(Food temp);
    void menu();
    int get_size();
    void print();
    void menu_for_choose();
    Diares();
protected:
    Food* arr;
    int capacity;
    int currentsize;
    int breakfast;
    int dinner;
    int evening_meal;

};

class breakfasts :public Food
{

};
class dinners :public Food
{

};
class eveningmeals :public Food
{

};