#include<iostream>
using namespace std;

class c1
{
	int m_A; //Ĭ��Ȩ����˽��
};

struct c2
{
	int m_A; //Ĭ��Ȩ���ǹ���
};

int main() {

	//struct �� class����
	//struct Ĭ��Ȩ���� ���� public
	//class  Ĭ��Ȩ���� ˽�� private
	c1 C1;
	//C1.m_A = 100; //��classĬ��Ȩ��Ϊ˽�У���˲����Է���

	c2 C2;
	C2.m_A = 100;//��structĬ�ϵ�Ȩ��Ϊ��������˿��Է���

	system("pause");

	return 0;
}