#pragma once
#include <iostream>


using namespace std;



class Point {

	int x;
	int y;
	
public:

	Point();
	Point(int x, int y);

	Point operator +(const Point& obj) const;////�� ��������������/���������� ��������� � ����� �����   obj1+obj2 Point+Point
	Point operator+ (int numb)const;//////  obj+5  Point+int  � �����    !!!!!!!!!!!!!!!!!!!!!!!!!!

	Point operator +=(int rs);////�� ��������������/���������� ��������� � ����� �����
	////Point&  operator =(const Point& obj);   ///�� ����'������ ������������� , ��� �������� �� �������������, ������� ���������

	///////����� ���������   ==  !=        >, <,>=,<=  

	bool operator ==(const Point& obj);
	bool operator >(const Point& obj);


	//////�� ���� ����� ���������  �� ��

	//Point operator -(const Point& obj);   ////////DZ!!!!!
	//Point operator /(const Point& obj);	////////DZ!!!!!
	//Point operator *(const Point& obj);	////////DZ!!!!!


	/*Point operator -=(int rs);     ////////DZ!!!!!
	Point operator /=(int rs);       ////////DZ!!!!!
	Point operator *=(int rs);*/     ////////DZ!!!!!
	void Show()  const;

	int GetX()  const;
	int GetY()  const;


	////���������� ��������� ������������(�����������) ����

	 operator int();



};



Point operator+(int number, const Point& obj);/////  int+Point ����� ������� ����� ���������� ��������  **********
/////Point operator+(const Point& obj, int number);////��������� �������   Point+int!!!!!!!!!!!!!!!!!!!!!



/////ҳ���� �������� ����������: ������������ ����, =,[],(),-> 


