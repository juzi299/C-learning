#include<iostream>
using namespace std;

//�������Ϊ��Ա

//�ֻ���
class Phone
{
public:

	
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯���ĵ���" << endl;
		m_PName = pName;
	}
	
	~Phone()
	{
		cout << "Phone������������" << endl;
	}
	//�ֻ�Ʒ�Ƶ�����
	string m_PName;
};




//����
class Person
{
public:

	//Phone m_PName = panme ��ʽת����
	Person(string name, string pname) : m_Name(name), m_Phone(pname)
	{
		cout << "Person�Ĺ��캯���ĵ���" << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};


//��������Ķ�����Ϊ�����Ա������ʱ���ȹ�������ڹ�������������˳���빹���෴
void test01()
{
	Person p("����","ƻ��MAX");

	cout << p.m_Name << "���ţ�" <<  p.m_Phone.m_PName << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}