#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int a[5] = {0};
	for (int i =0; i<5 ;i++)
	{
		cout << a[i] << " ";
	}
	cout <<endl << "========================" << endl;
	int b[] = {1,2,3,4,5,6};
	int n = sizeof(b)/sizeof(int );
	for (int i =0; i<n ;i++)
	{
		cout << b[i] << " ";
	}
	cout <<endl << "===========dynamic_array=============="<< endl;
	int* d = new int[5];
	n=5; 
	memset(d, 0, sizeof(int) * 5 );
	for (int i = 0; i <n; i++)
	{
		cout << d[i] << " ";
	}
	return 0;
} 
