#pragma once
#include <iostream>


using namespace std;



class Point {

	int x;
	int y;
	
public:

	Point();
	Point(int x, int y);

	Point operator +(const Point& obj) const;////це перевантаження/перегрузка оператора у методі класу   obj1+obj2 Point+Point
	Point operator+ (int numb)const;//////  obj+5  Point+int  в методі    !!!!!!!!!!!!!!!!!!!!!!!!!!

	Point operator +=(int rs);////це перевантаження/перегрузка оператора у методі класу
	////Point&  operator =(const Point& obj);   ///не обов'язково перевизначати , нам підходить за замовчуванням, побітове копіювання

	///////Логічні оператори   ==  !=        >, <,>=,<=  

	bool operator ==(const Point& obj);
	bool operator >(const Point& obj);


	//////Всі інші Логічні оператори  на дз

	//Point operator -(const Point& obj);   ////////DZ!!!!!
	//Point operator /(const Point& obj);	////////DZ!!!!!
	//Point operator *(const Point& obj);	////////DZ!!!!!


	/*Point operator -=(int rs);     ////////DZ!!!!!
	Point operator /=(int rs);       ////////DZ!!!!!
	Point operator *=(int rs);*/     ////////DZ!!!!!
	void Show()  const;

	int GetX()  const;
	int GetY()  const;


	////Перегрузка оператору перетворення(Конвертація) типу

	 operator int();



};



Point operator+(int number, const Point& obj);/////  int+Point можна зробити тільки глобальною функцією  **********
/////Point operator+(const Point& obj, int number);////глобальна функція   Point+int!!!!!!!!!!!!!!!!!!!!!



/////Тільки методами перегрузка: перетворення типів, =,[],(),-> 


