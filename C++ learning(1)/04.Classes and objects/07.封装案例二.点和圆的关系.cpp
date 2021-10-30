#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//点和圆的关系案例

////点类
//class Point
//{
//public:
//	//设置X
//	void CircleX(int x)
//	{
//		m_X = x;
//	}
//	//获取X
//	int Circlex()
//	{
//		return m_X;
//	}
//	//设置Y
//	void CircleY(int y)
//	{
//		m_Y = y;
//	}
//	//获取Y
//	int Circley()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//
//};
//园类
//class Circle
//{
//public:
//	//设置半径
//	void CircleR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int Circler()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	//属性
//	int m_R; //半径
//
//	//在类中可以让另一个类 作为本来中的成员
//	Point m_Center; //圆心
//};

//判断点和园的关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间的距离 平方
	int distance =
	    (c.getCenter().Circlex() - p.Circlex())* (c.getCenter().Circlex() - p.Circlex()) +
	    (c.getCenter().Circley() - p.Circley()) * (c.getCenter().Circley() - p.Circley());

	//计算半径的平方
	int rDistance = c.Circler() * c.Circler();

	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if(distance < rDistance)
	{
		cout << "点在园内" << endl;
	}
	else
	{
		cout << "点在园外" << endl;
	}
}

int main() {

	//创建园  通过在类中可以让另一个类 作为本来中的成员
	Circle c;
	c.CircleR(10);
	Point center;
	center.CircleX(10);
	center.CircleY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.CircleX(10);
	p.CircleY(10);

	//判断关系

	isInCircle(c, p);

	system("pause");

	return 0;
}