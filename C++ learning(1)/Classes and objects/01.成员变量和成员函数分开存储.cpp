#include<iostream>
using namespace std;

class Person
{
public:

	int m_A; //非静的成员态变量 属于类对象上

	static int m_B; //静态成员变量 不属于类对象上

	void func() {} //非静态成员函数 不属于类对象上

	static void func2() {}  //静态成员函数 不属于类对象上
};
int Person::m_B = 0;

void test01()
{
	Person p;
	//空对象占用内存空间为 ：1
	//C++编译器会给每个空对象也配一个字节空间，是为了区分空对象占内存的位置
	
	cout << "size of = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of = " << sizeof(p) << endl;
}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}