#include <iostream>
#include <string>
using namespace std;

class Building
{
    //���߱�����goodGayȫ�ֺ�����Building�����ѣ����Է���Building�е�˽�г�Ա
    friend void goodGay(Building* building);

public:

    Building() {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }
    string m_SittingRoom;  //�����Ŀ���

private:

    string m_BedRoom;  //˽�ܵ�����
};

//ȫ�ֺ���
void goodGay(Building* building)  // * building ���յ���test01 �������� & building (��ַ����)
{
    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01() {
    Building building;

    goodGay(&building);//�������ַ���� ȫ�ֺ��� goodGay 
}

int main() {

    test01();

    system("pause");

    return 0;
}
