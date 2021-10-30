#include<iostream>
using namespace std;
#include<fstream>

void test01()
{
	//1、包含头文件 fstream

	//2、创建流对象

	ofstream ofs;

	//3、指定打开方式
	ofs.open("cs.txt", ios::out);

	//4、写内容
	ofs << "城市擦我的骄傲的" << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}