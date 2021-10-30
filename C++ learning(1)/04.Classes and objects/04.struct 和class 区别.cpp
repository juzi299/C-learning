#include<iostream>
using namespace std;

class c1
{
	int m_A; //默认权限是私有
};

struct c2
{
	int m_A; //默认权限是公共
};

int main() {

	//struct 和 class区别
	//struct 默认权限是 公共 public
	//class  默认权限是 私有 private
	c1 C1;
	//C1.m_A = 100; //在class默认权限为私有，因此不可以访问

	c2 C2;
	C2.m_A = 100;//在struct默认的权限为公共，因此可以访问

	system("pause");

	return 0;
}