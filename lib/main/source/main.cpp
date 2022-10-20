#include <iostream>
#include "methodsHeader.h"
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	// рабочий ввод и вывод пользователя 
	User u;
	cout << "Random user : " << endl;
	u.Show_user_stat();

	User i("Adun", 2, 100, 200);
	cout << "My user : " << endl;
	i.Show_user_stat();

	Legs leg;

	int a = leg.Running(30);
	int b = leg.Jumps(5);
	int c = leg.Squats(5);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << endl;

	Arms arm;
	int q = arm.Push_ups(5);
	int w = arm.Pull_ups(5);
	int e = arm.Dumbbell_exercises(30);
	cout << q << endl;
	cout << w << endl;
	cout << e << endl;
	cout << endl;

	Chest chest;
	int r = chest.Twisting(5);
	cout << r << endl;

	Food banana(200, 300, 100, "banana", 140, 150);
	cout << banana.get_weight() << " " << banana.get_calories() << " " << banana.get_fats() << " " << banana.get_name() << " " << banana.get_carbohydrates();


}
