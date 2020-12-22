#include"point.h"


Point::Point():m_x(0),m_y(0)
{
}
Point::Point(int x, int y):m_x(x), m_y(y)
{
}
Point::Point(const Point &ref): m_x(ref.m_x), m_y(ref.m_y)
{
}



bool Point::isOrigin() const{
	if(m_x==0 && m_y==0)
		return true;
	return false;
}

bool Point::isOnXAxis() const{
	if(m_x>m_y)
		return true;
	return false;
}

bool Point::isOnYAxis() const{ 
	if(m_y>m_x)
		return true;
	return false;
	
}

