#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define PI 3.1415926
int main() {
	initgraph(800, 800);
	setorigin(400, 400);//��������ԭ��
	
	POINT pts[5];//���飬�洢�������嶥������
	double add = 2 * PI / 5;//����,���Բ������ÿ�����㵽�ڽ�����ת72�ȣ�

	int radius = 200, startAngle = PI / 2;//�뾶����ʼ�Ƕ�
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