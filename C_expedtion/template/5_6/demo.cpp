#include <stdlib.h>
#include <string>
#include "MyArray.h"
using namespace std;

/*
 * 类模板
 * 定义类模板MyArray,成员函数：构造函数、析构函数、display函数
 * 数据成员：m_pArr
 */
int main(void)
{
	MyArray<int,5,6> arr;
	arr.display();
	return 0;
}
