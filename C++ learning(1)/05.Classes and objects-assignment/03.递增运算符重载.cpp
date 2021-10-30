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

	//����ǰ��++�����
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	//���غ���++�����
	MyInteger& operator++(int)
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼����
		return temp;
	}

private:
	int m_Num;
};

/*
* ��ostream���ʹ���
*/
ostream &operator<<(ostream &cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout; //����cout ostream����ֵ
}

//ǰ��++���������
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//}

//����++���������
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