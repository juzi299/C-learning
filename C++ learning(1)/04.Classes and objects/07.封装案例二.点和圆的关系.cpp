#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//���Բ�Ĺ�ϵ����

////����
//class Point
//{
//public:
//	//����X
//	void CircleX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡX
//	int Circlex()
//	{
//		return m_X;
//	}
//	//����Y
//	void CircleY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡY
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
//԰��
//class Circle
//{
//public:
//	//���ð뾶
//	void CircleR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int Circler()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	//����
//	int m_R; //�뾶
//
//	//�����п�������һ���� ��Ϊ�����еĳ�Ա
//	Point m_Center; //Բ��
//};

//�жϵ��԰�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮��ľ��� ƽ��
	int distance =
	    (c.getCenter().Circlex() - p.Circlex())* (c.getCenter().Circlex() - p.Circlex()) +
	    (c.getCenter().Circley() - p.Circley()) * (c.getCenter().Circley() - p.Circley());

	//����뾶��ƽ��
	int rDistance = c.Circler() * c.Circler();

	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if(distance < rDistance)
	{
		cout << "����԰��" << endl;
	}
	else
	{
		cout << "����԰��" << endl;
	}
}

int main() {

	//����԰  ͨ�������п�������һ���� ��Ϊ�����еĳ�Ա
	Circle c;
	c.CircleR(10);
	Point center;
	center.CircleX(10);
	center.CircleY(0);
	c.setCenter(center);

	//������
	Point p;
	p.CircleX(10);
	p.CircleY(10);

	//�жϹ�ϵ

	isInCircle(c, p);

	system("pause");

	return 0;
}