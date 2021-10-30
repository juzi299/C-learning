#include<iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	//重载后置++运算符
	MyInteger& operator++(int)
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录返回
		return temp;
	}

private:
	int m_Num;
};

/*
* 将ostream类型传入
*/
ostream &operator<<(ostream &cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout; //返回cout ostream类型值
}

//前置++运算符调用
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//}

//后置++运算符调用
void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}