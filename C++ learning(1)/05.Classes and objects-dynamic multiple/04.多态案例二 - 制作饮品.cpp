#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	//烧水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PutInCup() = 0;

	//加入辅料
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

	//烧水
	virtual void Boil()
	{
		cout << "到入农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "放入咖啡" << endl;
	}

	//倒入杯中
	virtual void PutInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}

};

class tea :public AbstractDrinking
{
public:
	//烧水
	virtual void Boil()
	{
		cout << "到人矿泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "放入茶叶" << endl;
	}

	//倒入杯中
	virtual void PutInCup()
	{
		cout << "到人茶杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入柠檬" << endl;
	}
};

//制作函数
void doWork(AbstractDrinking* abs) //AbstractDrinking * abs = new Coffee(new tea)
{
	abs->makeDrink();
	delete abs; //释放，防止内存泄漏
}

void test01()
{
	//制作咖啡
	doWork(new Coffee);

	cout << "----------------" << endl;

	//制作茶
	doWork(new tea);
}

int main() {

	test01();

	system("pause");

	return 0;
}