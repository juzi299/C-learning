#include<iostream>
using namespace std;
#include<string>

//�ֱ�������ͨд���Ͷ�̬д����ʵ�ּ�����

//��ͨд��
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

//��̬��̬д��
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

//�ӷ�����
class AddCalculator :public AbstraCalculator
{
public:
	int getResut()
	{
		return m_num1 + m_num2;
	}
};

//��������
class SubCalculator :public AbstraCalculator
{
public:
	int getResut()
	{
		return m_num1 - m_num2;
	}
};

//�˷�����
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
	//��̬ʹ������
	//����ָ���������ָ���������

	//�ӷ�����
	AbstraCalculator * abc = new AddCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 20;
	cout << abc->getResut() << endl;

	delete abc;

	//�˷�����
	abc = new MulCalculator;
	abc->m_num1 = 5;
	abc->m_num2 = 5;
	cout << abc->getResut() << endl;

	delete abc;

	//��������
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