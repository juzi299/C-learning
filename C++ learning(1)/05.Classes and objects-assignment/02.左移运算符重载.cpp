#include<iostream>
using namespace std;

//左移运算符重载

class Person
{
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	//成员函数 实现不了 p << cout 不是我们想要的效果
	//void operator<<(Person& p){
	//}
	friend ostream& operator<<(ostream& cout, Person& p);
private:

	int m_B;
	int m_A;
};


//全局函数实现左重载
//ostream对象只能有一个
ostream &operator<<(ostream &cout, Person& p)
{
	cout << p.m_A << p.m_B;
	return cout;
}

void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p << "hello word" << endl; //链式编程
}

int main() {

	test01();

	system("pause");

	return 0;
}