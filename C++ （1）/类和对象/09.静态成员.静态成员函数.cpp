#include<iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
// :: �������ʾ�̬��Ա����

class Person
{
public:

	//��̬��Ա����
	static void func()
	{
		m_A = 100; //��̬��Ա�������Է��� ��̬��Ա����
		//m_B = 100; //��̬��Ա���� �����Է��� �Ǿ�̬��Ա�������޷����ֵ������ĸ������m_B����
		cout << "static void func����" << endl;
	}

	static int m_A;
	int m_B;

private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}

};

int Person::m_A; //��̬��Ա����
int m_B; //�Ǿ�̬��Ա����

void test01()
{
	//1��ͨ���������
	Person p;
	p.func();

	//2��ͨ����������
	Person::func();

	//Person::func2(); ������ʲ���˽�еľ�̬��Ա����
}

int main() {

	test01();

	system("pause");

	return 0;
}