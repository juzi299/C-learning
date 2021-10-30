#include <iostream>
#include <string>
using namespace std;

class Building
{
    //告诉编译器goodGay全局函数是Building好朋友，可以访问Building中的私有成员
    friend void goodGay(Building* building);

public:

    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;  //公共的客厅

private:

    string m_BedRoom;  //私密的卧室
};

//全局函数
void goodGay(Building* building)  // * building 接收的是test01 传进来的 & building (地址传入)
{
    cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;
}

void test01() {
    Building building;

    goodGay(&building);//将对象地址传入 全局函数 goodGay 
}

int main() {

    test01();

    system("pause");

    return 0;
}
