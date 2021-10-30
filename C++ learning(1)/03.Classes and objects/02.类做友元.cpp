#include<iostream>
using namespace std;
#include<string>

//类做友元

class Building;
class GoodGay
{
public:

	GoodGay();

	void visit(); //参观函数 访问Building中的属性

	Building *building;
};

class Building
{
	friend void GoodGay::visit();
public:
	Building();


public:

	string m_sittingRoom; // 客厅

private:

	string m_BedRoom; //卧室
};

//类外去写成员函数
Building::Building()
{
	m_sittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

void GoodGay::visit()
{
	cout << "GoodGay正在访问：" << building->m_sittingRoom << endl;
	cout << "GoodGay正在访问：" << building-> m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main() {

	test01();

	system("pause");
	return 0;
}