#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϻ����ĵ���" << endl;
	}
	~Person()
	{
		cout << "Person�������캯������" << endl;
	}
	Person(int age)
	{
		Person p;
		cout << "Person�вκ����ĵ���" << endl;
		m_age = age;
	}
	Person(const Person & p)
	{
		cout << "Person�������캯������" << endl;
		m_age = p.m_age;
	}
	int m_age;
};

//ʹһ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
void test01()
{
	//Person p1(); //Ĭ�Ϻ�������
	Person p1(10); //�вκ�������
	Person p2(p1); //������������

	cout << "p2������Ϊ��" <<  p2.m_age << endl;
}

//2����ֵ���ݵķ�ʽ��������ֵ

void doWork(Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}

//3��ֵ��ʽ���ؾֲ�����

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