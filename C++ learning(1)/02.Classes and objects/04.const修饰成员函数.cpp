#include<iostream>
using namespace std;

class Person
{
public:

	//thisָ��ı��� ��ָ�볣��  ָ���ָ�򲻿����޸ĵ�
	//const Person * const this;
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�����޸�
	void showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//thisָ�벻�����޸�ָ���ָ���
	}

	void func()
	{
		m_A = 100;
		m_B = 100;
	}

	int m_A;
	mutable int m_B; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};

void test01()
{
	Person p;

	p.showPerson();
}

//������
void test02()
{
	const Person p;
	//p.m_A = 100;
	p.m_B = 100;

	p.showPerson(); 
	//p.func(); //������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա��ͨ��Ա���������޸�����
}

int main() {

	test01();

	system("pause");

	return 0;
}