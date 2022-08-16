#include<stdio.h>

struct point{
	float x;
	float y;
};
struct triangle{ // HINH TAM GIAC
	point a, b, c;
};

struct circle{// hinh tron
	point tamO;
	float r;
};
struct rectangle{ // hinh chu nhat
	point a, b, c ,d;
};

struct polygon{// da giac
	point[100] ps;
	int n;// so luong dinh cua da giac
};
struct polygon2{// da giac
	point *ps;
};
