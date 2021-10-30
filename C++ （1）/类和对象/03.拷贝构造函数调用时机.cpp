#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person默认函数的调用" << endl;
	}
	~Person()
	{
		cout << "Person析构构造函数调用" << endl;
	}
	Person(int age)
	{
		Person p;
		cout << "Person有参函数的调用" << endl;
		m_age = age;
	}
	Person(const Person & p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		m_age = p.m_age;
	}
	int m_age;
};

//使一个已经创建完毕的对象来初始化一个新的对象
void test01()
{
	//Person p1(); //默认函数调用
	Person p1(10); //有参函数调用
	Person p2(p1); //拷贝函数调用

	cout << "p2的年龄为：" <<  p2.m_age << endl;
}

//2、以值传递的方式给函数传值

void doWork(Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}

//3、值方式返回局部变量

Person doWord2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = doWord2();
	cout << (int*)&p << endl;
}

int main() {

	//test01();

	//test02();

	test03();

	system("pause");

	return 0;
}