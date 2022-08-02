#include <iostream>
#include<graphics.h>
#include <math.h>
using namespace std;
double funTop(double x) {
	return 0.6 * sqrt(abs(x)) - sqrt((1 - x * x) / 2.0);
}
double funBottom(double x) {
	return 0.6 * sqrt(abs(x)) + sqrt((1 - x * x) / 2.0);
}
int main(void) {
	initgraph(500, 500, 1);
	/*setbkcolor(RGB(0,0,0,0));*/
	int base[] = { 250,250 };
	cleardevice();
	setcolor(RED);
	for (int i = -200; i <= 200; i+=5)
	{	
		double x = i + base[0];
		double y = -(funTop(i / 200.0) * 200) + base[1];
		cout << x << "," << y << '\n';
		outtextxy(x,y,L"Bug");


		double x_ = i + base[0];
		double y_ = -(funBottom(i / 200.0) * 200) + base[1];
		cout << x << "," << y << '\n';
		outtextxy(x_, y_, L"Bug");
	}
	getchar();
}
