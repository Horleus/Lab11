#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double f,step,a,b,x ;
	int i,m;
	setlocale(LC_ALL, "Ukrainian");

	cout << "Уведiть початкове значення вiдрiзку" << endl;
	cin >> a;
	cout << "Уведiть кiнцеве значення вiдрiзку" << endl;
	cin >> b;
	cout << "Уведiть число розбиття" << endl;
	cin >> m;

	step = (b-a)/m;
	x= a;
	for(i = 0; i< m; i++)
	{
		f=1/tan(x) + 1;
		cout << "Значення функцiї f["<<x<<"]="<<f<<endl;
		x= x+step;
	}

	return 0;
}
