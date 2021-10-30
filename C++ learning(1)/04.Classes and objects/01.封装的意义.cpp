#include<iostream>
using namespace std;
#include<string>

const double PI = 3.14;

//设计一个园类，求圆的周长
//圆求周长的公式：2 * PI * 半径

//class 代表设计一个类，类后面紧跟着就是类的名称
class  Circle
{
	//访问权限
	//公共访问
public:

	//属性
	//半径
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

int main() {

	Circle c1;

	c1.m_r = 10;
	cin >> c1.m_r;

	cout << "圆的周长为：" << c1.calculateZC() << endl;

	system("pause");

	return 0;
}