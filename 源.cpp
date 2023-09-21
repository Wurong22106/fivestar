#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define PI 3.1415926
int main() {
	initgraph(800, 800);
	setorigin(400, 400);//设置坐标原点
	
	POINT pts[5];//数组，存储。。。五顶点坐标
	double add = 2 * PI / 5;//增量,五分圆。。。每个顶点到邻近顶点转72度；

	int radius = 200, startAngle = PI / 2;//半径，初始角度
	for (int i = 0; i < 7; i++) {
			pts[i].x = cos(startAngle + (i+1) * add) * radius;
			pts[i].y = sin(startAngle + (i+1) * add) * radius;
	}
	for (int i = 0; i < 5; i++) {
		line(pts[i].x, pts[i].y, pts[i + 2].x, pts[i + 2].y);
	}
	
	_getch();
	closegraph();
	return 0;
}