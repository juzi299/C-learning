#include<iostream>
using namespace std;

//继承中同名成员处理
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;

	void func()
	{
		cout << "Base - func 调用" << endl;
	}

	void func(int a)
	{
		cout << "Base - func(int a) 调用 " << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func 调用" << endl;
	}

	int m_A;
};

//同名成员属性处理方式
void test01()
{
	Son s;
	cout << "Son 下边的 m_A = " << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "Base 下边的 m_A = " << s.Base::m_A << endl;
}

//同名函数处理方式
void test02()
{
	Son s;
	s.func(); //直接调用 调用是子类中的同名成员

	//如何调用到父类中同名成员函数？
	s.Base::func();

	//如果子类中出现了和父类同名的成员函数  子类的同名成员会隐藏掉父类中所有成员函数
	//如果想访问父类中被隐藏的同名成员函数，需要加作用域
	s.Base::func(100);
}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}