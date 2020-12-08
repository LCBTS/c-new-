#include<iostream>
using namespace std;
#include<string>
int* func()
{

	//利用new关键字 可以将数据开辟到堆区
		//指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆区的
	int* p = new int(10);

	int a = 10;
	return p;
}
int* fun() {
//在堆区创建一个整形的 数据
	int*p =new int(10);

	return p;
}
void test01() {
	int* p = fun();
	cout << *p << endl;
}
//new创建一个数组返回一个首地址
void test02() {
int *arr = new int[10];

for (int i = 0; i < 10; i++)
{
	arr[i] = i + 100;

}
for (int i = 0; i < 10; i++)
{
	cout << arr[i] << endl;

}
//释放堆区的数组//delete p;
//释放数组的时候要加[]才可以
  delete[]arr;
}
int main()
{
	test01();
	test02();
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;


	}  
