#include<iostream>
using namespace std;

//�������������

class Person
{
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	//��Ա���� ʵ�ֲ��� p << cout ����������Ҫ��Ч��
	//void operator<<(Person& p){
	//}
	friend ostream& operator<<(ostream& cout, Person& p);
private:

	int m_B;
	int m_A;
};


//ȫ�ֺ���ʵ��������
//ostream����ֻ����һ��
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

	cout << p << "hello word" << endl; //��ʽ���
}

int main() {

	test01();

	system("pause");

	return 0;
}