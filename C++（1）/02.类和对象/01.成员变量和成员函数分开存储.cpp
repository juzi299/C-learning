#include<iostream>
using namespace std;

class Person
{
public:

	int m_A; //�Ǿ��ĳ�Ա̬���� �����������

	static int m_B; //��̬��Ա���� �������������

	void func() {} //�Ǿ�̬��Ա���� �������������

	static void func2() {}  //��̬��Ա���� �������������
};
int Person::m_B = 0;

void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ ��1
	//C++���������ÿ���ն���Ҳ��һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	
	cout << "size of = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of = " << sizeof(p) << endl;
}

int main() {

	//test01();

	test02();

	system("pause");

	return 0;
}