#include<iostream>
using namespace std;

//类对象作为成员

//手机类
class Phone
{
public:

	
	Phone(string pName)
	{
		cout << "Phone的构造函数的调用" << endl;
		m_PName = pName;
	}
	
	~Phone()
	{
		cout << "Phone析构函数调用" << endl;
	}
	//手机品牌的名称
	string m_PName;
};




//人类
class Person
{
public:

	//Phone m_PName = panme 隐式转换法
	Person(string name, string pname) : m_Name(name), m_Phone(pname)
	{
		cout << "Person的构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};


//当其他类的对象作为本类成员，构造时候先构造对象，在构造自身，析构的顺序与构造相反
void test01()
{
	Person p("张三","苹果MAX");

	cout << p.m_Name << "拿着：" <<  p.m_Phone.m_PName << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}