#include<iostream>
using namespace std;
#include<string>

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����Ч��

//�������
class Person 
{
public: //public(���ڵ�;)

	//�������� �ɶ���д
	void person(string name)
	{
		p_Name = name;
	}
	string getName()
	{
		return p_Name;
	}

	//�������� ֻ��
	int geyAage()
	{
		//p_Age = 18;
		return p_Age;
	}
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			p_Age = 0;
			cout << "�������������" << endl;
			return;
		}
		p_Age = age;
	}

	//�������� ֻд
	void setLove(string lover)
	{
		p_Love = lover;
	}

private: //private(˽�е�;)
	//�������� �ɶ���д
	string p_Name;
	//�������� ֻ��
	int p_Age;
	//�������� ֻд
	string p_Love;
};

int main() {

	Person  P1;

	P1.setLove("����");	

	P1.person("����");

	P1.setAge(18);

	cout << "����Ϊ��" << P1.getName() << endl;
	cout << "����Ϊ��" << P1.geyAage() << endl;
	//cout << "����Ϊ��" << P1.setLove() << endl; //��������ǲ����Է��ʵ�

	system("pause");

	return 0;
}