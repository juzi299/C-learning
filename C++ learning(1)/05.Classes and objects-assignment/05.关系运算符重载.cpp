#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	bool operator==(Person& p)
	{
		if (this->m_Age == p.m_Age and this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Person& p)
	{
		if (this->m_Age != p.m_Age || this->m_Name != p.m_Name)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;

};

void test01()
{
	Person p1("小王" , 18);

	Person p2("小王" , 18);
	
	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;
	}

	cout << p1.m_Name << "and" << p1.m_Age << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}