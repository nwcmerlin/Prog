#include <iostream>
#include "Point.h"

using namespace std;


int main()
{



	 Point a(2,3);
	 
	 cout << int(a) << endl;


	 Point b(3, 7);
	 a.Show();/////  y this ���������� ������  a 
	 b.Show();/////  y this ���������� ������ b  
	//Point rez = a + b;////// operator Point a+  const Point& b           ���������� � ��'���� a, ���� � ���������� � ����� ���������� ��������� ������ � �������� this, � ��'��� b �� ��� ������� ��������, ����� �� �������� Point+Point
	////rez.Show();


	Point rez2 = a + 5;/////  Point a+ int ,  ����� + ��� ���������� ����� ����� �, ������ ����������� ������� �����

	//Point rez3 = 5 + a;/////   int+     ��� �� ������ ������������� �������� + ��� ������������ ���� int  , ������� ���������� Ҳ���� ���������� ��������


	//int number;
	//cout << char(number) << endl;/////������� ������ ������������ ����
	//Point non_const(1, 2);
	//non_const += 8;
	////non_const.Show();
	//non_const = a;
	//non_const.Show();


	/////����� ���������   ==   !=        >, <,>=,<=  


	  



	/////�� �����㳺� ��������� ��� ������� ����
	//const int c = 6;
	//const int d = 8;

	//c + d;
	//cout << c + d << endl;/////��� ������� ���� � ���������� ��������� +

	//int i=0;
	//i += 9;
	//i = d;

}