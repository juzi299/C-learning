#include<iostream>
using namespace std;

//普通实现页面

//Java
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类)" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//
//};
//
////CPP
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类)" << endl;
//	}
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//
//};
//

//继承实现页面

//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册....(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图....(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++....(公共分类)" << endl;
	}
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};



//继承的好处
//语法：class 子类 ： 继承方式 父类
//子类  也称为  派生类
//父类  也称为  基类


//Java页面
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};

//Python页面
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

//CPP页面
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPP学科视频" << endl;
	}
};

void test01()
{
	Java ja;
	ja.footer();
	ja.header();
	ja.left();
	ja.content();
	cout << "——————————————" << endl;
	Python py;
	py.content();
	py.footer();
	py.header();
	py.left();
	cout << "——————————————" << endl;
	CPP cpp;
	cpp.content();
	cpp.footer();
	cpp.header();
	cpp.left();
};

int main() {

	test01();

	system("pause");

	return 0;
}