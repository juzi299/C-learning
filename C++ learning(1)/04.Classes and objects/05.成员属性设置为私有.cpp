#include<iostream>
using namespace std;
#include<string>

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测的有效数

//设计人类
class Person 
{
public: //public(公众的;)

	//设置姓名 可读可写
	void person(string name)
	{
		p_Name = name;
	}
	string getName()
	{
		return p_Name;
	}

	//设置年龄 只读
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
			cout << "你这个老妖精！" << endl;
			return;
		}
		p_Age = age;
	}

	//设置情人 只写
	void setLove(string lover)
	{
		p_Love = lover;
	}

private: //private(私有的;)
	//设置姓名 可读可写
	string p_Name;
	//设置年龄 只读
	int p_Age;
	//设置情人 只写
	string p_Love;
};

int main() {

	Person  P1;

	P1.setLove("测试");	

	P1.person("张三");

	P1.setAge(18);

	cout << "姓名为：" << P1.getName() << endl;
	cout << "年龄为：" << P1.geyAage() << endl;
	//cout << "情人为：" << P1.setLove() << endl; //这个数据是不可以访问的

	system("pause");

	return 0;
}