#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//Java
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(��������)" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Python
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(��������)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//
//};
//
////CPP
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(��������)" << endl;
//	}
//	void content()
//	{
//		cout << "CPPѧ����Ƶ" << endl;
//	}
//
//};
//

//�̳�ʵ��ҳ��

//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ....(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++....(��������)" << endl;
	}
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};



//�̳еĺô�
//�﷨��class ���� �� �̳з�ʽ ����
//����  Ҳ��Ϊ  ������
//����  Ҳ��Ϊ  ����


//Javaҳ��
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//CPPҳ��
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPPѧ����Ƶ" << endl;
	}
};

void test01()
{
	Java ja;
	ja.footer();
	ja.header();
	ja.left();
	ja.content();
	cout << "����������������������������" << endl;
	Python py;
	py.content();
	py.footer();
	py.header();
	py.left();
	cout << "����������������������������" << endl;
	CPP cpp;
	cpp.content();
	cpp.footer();
	cpp.header();
	cpp.left();
};

int main() {

	test01();

	system("pause");

	return 0;
}