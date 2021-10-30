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

//利用开发人员提示工具查看对象模型
//跳转盘符 D:
//跳转文件路径 cd 具体路径下
//查看命名
// cl /d1 reportSingleClassLayout(Son是类名)Son 03.继承中的对象模型.cpp（文件名）

void test01()
{
	// 16
	// 父类中所有非静态成员属性都会被子类继承下去
	// 父类中的私有成员属性 是被编译器给隐藏了，因此访问不到，但是确实被继承下去了
	cout << "size of Son =" << sizeof(Son) << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}