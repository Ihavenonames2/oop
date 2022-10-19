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

}
