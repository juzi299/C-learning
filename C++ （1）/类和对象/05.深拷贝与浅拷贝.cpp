#include<iostream>
using namespace std;

class Person
{
public:

	Person()
	{
		cout << "Ĭ�Ϻ����ĵ���" << endl;
	}
	Person(int age , int higeth)
	{
		cout << "�вκ����ĵ���" << endl;
		m_age = age;
		m_Higeth = new int(higeth);
	}

	

	~Person()
	{
		//�������룬����ȥ�����������ͷŲ���
		if (m_Higeth != NULL)
		{
			delete m_Higeth;
			m_Higeth = NULL;
		}
		cout << "���������ĵ���" << endl;
	}

	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person(const Person& p)
	{
		m_age = p.m_age;
		// m_Higeth = p.m_Higeth; ������Ĭ��ʵ�־������д���
		//�������

		m_Higeth = new int(*p.m_Higeth);
		cout << "���������ĵ���" << endl;
	}
	int m_age; //����
	int* m_Higeth; //���
};

void test01()
{
	Person p1(18,170); //�������вκ���

	cout << "p1������Ϊ��" << p1.m_age << "���Ϊ��" << *p1.m_Higeth << endl;

	Person p2(p1);

	cout << "p2������Ϊ��" << p2.m_age << "���Ϊ��" << *p2.m_Higeth << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}