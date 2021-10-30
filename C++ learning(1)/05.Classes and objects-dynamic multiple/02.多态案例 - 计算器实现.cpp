#include<iostream>
using namespace std;
#include<string>

//分别利用普通写法和多态写技术实现计算器

//普通写法
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return num1 + num2;
		}
		else if (oper == "-")
		{
			return num1 - num2;
		}
		else if (oper == "*")
		{
			return num1 * num2;
		}
	}
	int num1;
	int num2;
};

void test01()
{
	Calculator c;
	c.num1 = 10; 
	c.num2 = 10;

	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
}

//动态多态写法
class AbstraCalculator
{
public:

	virtual int getResut()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

//加法运算
class AddCalculator :public AbstraCalculator
{
public:
	int getResut()
	{
		return m_num1 + m_num2;
	}
};

//减法运算
class SubCalculator :public AbstraCalculator
{
public:
	int getResut()
	{
		return m_num1 - m_num2;
	}
};

//乘法运算
class MulCalculator :public AbstraCalculator
{
public:
	int getResut()
	{
		return m_num1 * m_num2;
	}
};

void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象

	//加法运算
	AbstraCalculator * abc = new AddCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 20;
	cout << abc->getResut() << endl;

	delete abc;

	//乘法运算
	abc = new MulCalculator;
	abc->m_num1 = 5;
	abc->m_num2 = 5;
	cout << abc->getResut() << endl;

	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->m_num1 = 30;
	abc->m_num2 = 10;
	cout << abc->getResut() << endl;

	delete abc;
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}