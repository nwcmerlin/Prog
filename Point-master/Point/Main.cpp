#include <iostream>
#include "Point.h"

using namespace std;


int main()
{



	 Point a(2,3);
	 
	 cout << int(a) << endl;


	 Point b(3, 7);
	 a.Show();/////  y this передається обьект  a 
	 b.Show();/////  y this передається обьект b  
	//Point rez = a + b;////// operator Point a+  const Point& b           визивається у об'єкта a, тому а передається у метод перегрузки оператора неявно у параметрі this, а об'єкт b це вже вхідний параметр, тобто ми візначили Point+Point
	////rez.Show();


	Point rez2 = a + 5;/////  Point a+ int ,  тобто + був оператором обєкту класу а, можемо перегрузити методом класу

	//Point rez3 = 5 + a;/////   int+     тут не можемо перевантажити оператор + для стандартного типу int  , потрібна перегрузка ТІЛЬКИ глобальною функцією


	//int number;
	//cout << char(number) << endl;/////приклад явного перетворення типу
	//Point non_const(1, 2);
	//non_const += 8;
	////non_const.Show();
	//non_const = a;
	//non_const.Show();


	/////Логічні оператори   ==   !=        >, <,>=,<=  


	  



	/////За аналогією операторів для простих типів
	//const int c = 6;
	//const int d = 8;

	//c + d;
	//cout << c + d << endl;/////для простих типів є визначення оператору +

	//int i=0;
	//i += 9;
	//i = d;

}