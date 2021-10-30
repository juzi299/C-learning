#include<iostream>
using namespace std;
#include<string>

class MyPrint
{
public:
	//重载的（）运算符 也称为伪函数
	void operator()(string myprint)
	{
		cout << myprint << endl;
	}

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}


};

void test02()
{
	MyPrint num;
	int ret = num(10, 20);
	cout << "ret = " << ret << endl;

	//匿名函数对象
	cout << MyPrint()(20, 30) << endl;

}

void myprint()
{
	MyPrint myPrint;
	myPrint("cscacs");

}

int main() {

	myprint();

	test02();

	system("pause");

	return 0;
}