#include<iostream>
using namespace std;

class Person
{
public:

	Person()
	{
		cout << "默认函数的调用" << endl;
	}
	Person(int age , int higeth)
	{
		cout << "有参函数的调用" << endl;
		m_age = age;
		m_Higeth = new int(higeth);
	}

	

	~Person()
	{
		//析构代码，将队去开辟数据做释放操作
		if (m_Higeth != NULL)
		{
			delete m_Higeth;
			m_Higeth = NULL;
		}
		cout << "析构函数的调用" << endl;
	}

	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person(const Person& p)
	{
		m_age = p.m_age;
		// m_Higeth = p.m_Higeth; 编译器默认实现就是这行代码
		//深拷贝操作

		m_Higeth = new int(*p.m_Higeth);
		cout << "拷贝函数的调用" << endl;
	}
	int m_age; //年龄
	int* m_Higeth; //身高
};

void test01()
{
	Person p1(18,170); //调用了有参函数

	cout << "p1的年龄为：" << p1.m_age << "身高为：" << *p1.m_Higeth << endl;

	Person p2(p1);

	cout << "p2的年龄为：" << p2.m_age << "身高为：" << *p2.m_Higeth << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}