#include<iostream>
using namespace std;
#include<fstream>

void test01()
{
	//1������ͷ�ļ� fstream

	//2������������

	ofstream ofs;

	//3��ָ���򿪷�ʽ
	ofs.open("cs.txt", ios::out);

	//4��д����
	ofs << "���в��ҵĽ�����" << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}