#include<iostream>
using namespace std;

//�̳��еĹ��������˳��

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
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
	Son()
	{
		cout << "Son���캯���ĵ���" << endl;
	}

	~Son()
	{
		cout << "Son���������ĵ���" << endl;
	}
};

void test01()
{

	//Base b;

	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�࣬�ڹ������࣬������˳��������˳���෴
	Son s;
}

int main() {

	test01();

	system("pause");

	return 0;
}