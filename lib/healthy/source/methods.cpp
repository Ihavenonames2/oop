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
Diares::Diares()
{
	breakfast = 0;
	dinner = 0;
	evening_meal = 0;
	arr = new Food[capacity];
	capacity = 1;
	currentsize = 0;

}
Food::Food() {
	weight_f = 0;
	calories_f = 0;
	name_of_product = " ";
	fats = 0;
	carbohydrates = 0;
	proteins = 0;

}
Food::Food(int weight_f, int calories_f, int fats, string name_of_product, int carbohydrates, int proteins) {
	this->weight_f = weight_f;
	this->calories_f = calories_f;
	this->fats = fats;
	this->name_of_product = name_of_product;
	this->carbohydrates = carbohydrates;
	this->proteins = proteins;
}
int Food::get_calories() { return calories_f; }
int Food::get_carbohydrates() { return carbohydrates; }
int Food::get_fats() { return fats; }
int Food::get_proteins() { return proteins; }
int Food::get_weight() { return weight_f; }
string Food::get_name() { return "Name of product :" + name_of_product; }
void Food::set() {
	weight_f = rand() % 100 + 1;
	calories_f = rand() % 2500 + 1;
	fats = rand() % 50 + 1;
	carbohydrates = rand() % 70 + 1;
	proteins = rand() % 60 + 1;
	string arr_for_name[] = { "Pizza","Hot dog","Salats","Water","Bread" }; //макс помен€й!!!!!!!!!!!!!!!!!!!
	name_of_product = arr_for_name[rand() % 5];
}
void Diares::print_data() {
	cout << "Weight :" << weight_f << endl;
	cout << "Calories for" << weight_f << "gr =" << calories_f << endl;
	cout << "Fats " << weight_f << "gr =" << fats << endl;
	cout << "carbohydrates for  " << weight_f << "gr =" << carbohydrates << endl;
	cout << "proteins for " << weight_f << "gr =" << proteins << endl;
}
void Diares::weight_gain() {



}
void Diares::weight_lose()
{

}
void Diares::weight_support()
{

}
void Diares::menu_for_choose()
{
	cout << "In order to boost yourself in tone, press-1" << endl;
	cout << "In order to gain a lot of weight-2" << endl;
	cout << "In order to lost a lot of weight-3" << endl;
}
