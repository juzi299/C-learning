#include<iostream>
using namespace std;
#include<string>

//������Ԫ

class Building;
class GoodGay
{
public:

	GoodGay();

	void visit(); //�ιۺ��� ����Building�е�����

	Building *building;
};

class Building
{
	friend void GoodGay::visit();
public:
	Building();


public:

	string m_sittingRoom; // ����

private:

	string m_BedRoom; //����
};

//����ȥд��Ա����
Building::Building()
{
	m_sittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "GoodGay���ڷ��ʣ�" << building->m_sittingRoom << endl;
	cout << "GoodGay���ڷ��ʣ�" << building-> m_BedRoom << endl;
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