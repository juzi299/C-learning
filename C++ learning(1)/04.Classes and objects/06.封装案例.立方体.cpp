#include<iostream>
using namespace std;

class Cube
{
public:
	
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}

	//设置宽
	void setW(int w)
	{
		m_W = w;
	}

	//获取宽
	int getW()
	{
		return m_W;
	}

	//获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//获取立方体体积
	int calculateV()
	{
		return m_L * m_W * m_H;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	
	int m_L; // 长
	int m_W; // 宽
	int m_H; // 高
};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main() {

	//创建一个立方体的对象
	Cube c1;
	//设置长
	c1.setL(10);
	//设置宽
	c1.setW(10);
	//设置高
	c1.setH(10);

	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	//创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	cout << "c2的面积为：" << c2.calculateS() << endl;
	cout << "c2的体积为：" << c2.calculateV() << endl;


	bool ret = isSame(c1, c2);
	{
		if(ret)
		{
			cout << "c1和c2是相等的" << endl;
		}
		else
		{
			cout << "c1和c2是不相等的" << endl;
		}
	}

	ret = c1.isSameByClass(c2);
	{
		if (ret)
		{
			cout << "c1和c2体积是相等的" << endl;
		}
		else
		{
			cout << "c1和c2t体积是不相等的" << endl;
		}
	}

	system("pause");

	return 0;
}