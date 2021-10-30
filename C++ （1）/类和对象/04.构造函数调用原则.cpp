#include<iostream>
using namespace std;

//构造函数的调用规则
//1、创造一个类，C++编译器会给每个类添加至少3个函数
//默认函数 （空实现）
//析构函数 （空实现）
//拷贝函数 （值拷贝）

//2、
//如果我们写了有参构造函数，编译器将不再提供默认构造，依然提供有参构造
//如果我们写了拷贝构造函数，编译器就不再提供其它普通构造函数了

class Person
{
public:

	//Person() //默认函数
	//{
	//	cout << "Person默认函数的调用" << endl;
	//}
	//Person(int age) //有参函数
	//{
	//	cout << "Person有参函数的调用" << endl;
	//	m_age = age;
	//}
	//~Person() //析构函数
	//{
	//	cout << "Person析构函数的调用" << endl;
	//}
	Person(const Person& p) //拷贝函数
	{
		m_age = p.m_age;
		cout << "Person拷贝函数的调用" << endl;
	}

	int m_age;
};

//void test01() //参数都有的情况下
//{
//	Person p;
//	p.m_age = 18;
//
//	Person p2(p);
//	
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}

//void test02() //不提供默认函数的情况下
//{
//	Person p(18);
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}

void test03() //只提供拷贝函数的情况下
{
	Person p;
}

int main() {

	//test01();

	//test02();

	test03();

	system("pause");

	return 0;
}