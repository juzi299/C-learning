#include<iostream>
using namespace std;

//继承中的构造和析构顺序

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son构造函数的调用" << endl;
	}

	~Son()
	{
		cout << "Son析构函数的调用" << endl;
	}
};

void test01()
{

	//Base b;

	//继承中的构造和析构顺序如下：
	//先构造父类，在构造子类，析构的顺序与改造的顺序相反
	Son s;
}

int main() {

	test01();

	system("pause");

	return 0;
}