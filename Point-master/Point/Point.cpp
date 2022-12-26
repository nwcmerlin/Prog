#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point Point::operator+(const Point& obj) const 
{
	
	Point rez(this->x + obj.x, this->y + obj.y);
	return rez;
}

Point Point::operator+(int a) const
{
	////this 
	Point rez(x + a, y + a);
	return rez;
}

Point Point::operator+=(int rs)
{

	x += rs;
	y += rs;
	return *this;
}

bool Point::operator==(const Point& obj)
{
	if (x == obj.x)
		if (y == obj.y)
			return true;


	return false;
}

bool Point::operator>(const Point& obj)
{
	if (x > obj.x)
		if (y >obj.y)
			return true;


	return false;
}

void Point::Show() const
{
	cout <<"X: "<< x << " Y: " << y << endl;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

Point::operator int()
{

	return x + y;

}


Point operator+(int number, const Point& obj)
{

	Point rez(number + obj.GetX(), number + obj.GetY());

	return rez;
}
Point operator+( const Point& obj, int number)
{

	Point rez(number + obj.GetX(), number + obj.GetY());

	return rez;
}




