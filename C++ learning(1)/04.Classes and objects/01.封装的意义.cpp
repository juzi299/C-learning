#include<iostream>
using namespace std;
#include<string>

const double PI = 3.14;

//���һ��԰�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2 * PI * �뾶

//class �������һ���࣬���������ž����������
class  Circle
{
	//����Ȩ��
	//��������
public:

	//����
	//�뾶
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

int main() {

	Circle c1;

	c1.m_r = 10;
	cin >> c1.m_r;

	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	system("pause");

	return 0;
}