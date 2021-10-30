#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PutInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PutInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil()
	{
		cout << "����ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���뿧��" << endl;
	}

	//���뱭��
	virtual void PutInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};

class tea :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "���˿�Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "�����Ҷ" << endl;
	}

	//���뱭��
	virtual void PutInCup()
	{
		cout << "���˲豭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "��������" << endl;
	}
};

//��������
void doWork(AbstractDrinking* abs) //AbstractDrinking * abs = new Coffee(new tea)
{
	abs->makeDrink();
	delete abs; //�ͷţ���ֹ�ڴ�й©
}

void test01()
{
	//��������
	doWork(new Coffee);

	cout << "----------------" << endl;

	//������
	doWork(new tea);
}

int main() {

	test01();

	system("pause");

	return 0;
}