#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1������һ���࣬C++���������ÿ�����������3������
//Ĭ�Ϻ��� ����ʵ�֣�
//�������� ����ʵ�֣�
//�������� ��ֵ������

//2��
//�������д���вι��캯�����������������ṩĬ�Ϲ��죬��Ȼ�ṩ�вι���
//�������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����

class Person
{
public:

	//Person() //Ĭ�Ϻ���
	//{
	//	cout << "PersonĬ�Ϻ����ĵ���" << endl;
	//}
	//Person(int age) //�вκ���
	//{
	//	cout << "Person�вκ����ĵ���" << endl;
	//	m_age = age;
	//}
	//~Person() //��������
	//{
	//	cout << "Person���������ĵ���" << endl;
	//}
	Person(const Person& p) //��������
	{
		m_age = p.m_age;
		cout << "Person���������ĵ���" << endl;
	}

	int m_age;
};

//void test01() //�������е������
//{
//	Person p;
//	p.m_age = 18;
//
//	Person p2(p);
//	
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}

//void test02() //���ṩĬ�Ϻ����������
//{
//	Person p(18);
//
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}

void test03() //ֻ�ṩ���������������
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