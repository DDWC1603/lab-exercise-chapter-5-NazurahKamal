#include<iostream>
using namespace std;

int add(int ,int);

int main()
{
	int num1, num2, sum;
	cout<<"enter two numbers to sum= ";
	cin>>num1 >>num2;
	
	sum = add(num1, num2);
	cout<<"sum = " <<sum;
	return 0;
}
int add(int x, int y)
{
	int add;
	add = x + y;
	
	return add;
}
