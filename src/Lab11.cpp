#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double f,step,a,b,x ;
	int i,m;
	setlocale(LC_ALL, "Ukrainian");

	cout << "����i�� ��������� �������� �i��i���" << endl;
	cin >> a;
	cout << "����i�� �i����� �������� �i��i���" << endl;
	cin >> b;
	cout << "����i�� ����� ��������" << endl;
	cin >> m;

	step = (b-a)/m;
	x= a;
	for(i = 0; i< m; i++)
	{
		f=1/tan(x) + 1;
		cout << "�������� �����i� f["<<x<<"]="<<f<<endl;
		x= x+step;
	}

	return 0;
}
