#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};

//���ÿ�����Ա��ʾ���߲鿴����ģ��
//��ת�̷� D:
//��ת�ļ�·�� cd ����·����
//�鿴����
// cl /d1 reportSingleClassLayout(Son������)Son 03.�̳��еĶ���ģ��.cpp���ļ�����

void test01()
{
	// 16
	// ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	// �����е�˽�г�Ա���� �Ǳ��������������ˣ���˷��ʲ���������ȷʵ���̳���ȥ��
	cout << "size of Son =" << sizeof(Son) << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}