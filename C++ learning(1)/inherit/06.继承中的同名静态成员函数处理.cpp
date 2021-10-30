#include<iostream>
using namespace std;

//继承中的同名静态函数处理方式

class Base
{
public:

	static int m_A; 

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base::m_A = 100; //类内声明，类外初始化

class Son :public Base
{
public:

	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200; //类内声明，类外初始化

//同名静态成员属性
void test01()
{
	//1、通过对象访问
	cout << "通过对象来访问数据" << endl;
	Son s;
	cout << "Son 下边的 m_A = " << s.m_A << endl;
	cout << "Base 下边的 m_A = " << s.Base::m_A << endl;

	//2、通过类名来访问
	cout << "通过类名来访问" << endl;
	cout << "Son 下边的 m_A = " << Son::m_A << endl;

	//第一个::代表通过类名的方式来访问  第二个::代表访问父类作用域下
	cout << "Base 下边的 m_A = " << Son::Base::m_A << endl;
}

//同名静态成员函数
void test02()
{
	//1、通过对象访问
	cout << "通过对象访问" << endl;
	Son s;
	s.func();
	s.Base::func();

	//2、通过类名访问
	cout << "通过类名访问" << endl;
	Son::func();
	Son::Base::func();

	//子类出现和父类同名静态成员函数，也会隐藏父类中所有的同名函数
	//如果想访问父类中被隐藏同名函数，也需要加作用域
	Son::Base::func(100);
}

int main()
{

	//test01();

	test02();

	system("pause");

	return 0;
}