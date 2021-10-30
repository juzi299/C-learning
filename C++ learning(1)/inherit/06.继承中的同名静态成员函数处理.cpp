#include<iostream>
using namespace std;

//�̳��е�ͬ����̬��������ʽ

class Base
{
public:

	static int m_A; 

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base::m_A = 100; //���������������ʼ��

class Son :public Base
{
public:

	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200; //���������������ʼ��

//ͬ����̬��Ա����
void test01()
{
	//1��ͨ���������
	cout << "ͨ����������������" << endl;
	Son s;
	cout << "Son �±ߵ� m_A = " << s.m_A << endl;
	cout << "Base �±ߵ� m_A = " << s.Base::m_A << endl;

	//2��ͨ������������
	cout << "ͨ������������" << endl;
	cout << "Son �±ߵ� m_A = " << Son::m_A << endl;

	//��һ��::����ͨ�������ķ�ʽ������  �ڶ���::������ʸ�����������
	cout << "Base �±ߵ� m_A = " << Son::Base::m_A << endl;
}

//ͬ����̬��Ա����
void test02()
{
	//1��ͨ���������
	cout << "ͨ���������" << endl;
	Son s;
	s.func();
	s.Base::func();

	//2��ͨ����������
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base::func();

	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ��������е�ͬ������
	//�������ʸ����б�����ͬ��������Ҳ��Ҫ��������
	Son::Base::func(100);
}

int main()
{

	//test01();

	test02();

	system("pause");

	return 0;
}