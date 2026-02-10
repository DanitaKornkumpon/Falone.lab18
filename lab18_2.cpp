#include <iostream>
using namespace std;

struct Rect {
    double x,y,w,h;
};

double overlap(Rect*R1, Rect*R2){
    
	double x1,y1,x2,y2;
    x1 = R1->x + R1->w;
    y1 = R1->y - R1->h;
    x2 = R2->x + R2->w;
    y2 = R2->y - R2->h;

    double T,L,R,B;
    T = min(R1->y, R2->y);
    B = max(y1, y2);
    L = max(R1->x, R2->x);
    R = min(x1, x2);

    double Dx,Dy;
	Dx=R-L;
	Dy=T-B;

    if(Dx>0&& Dy>0){
		return Dx*Dy;
	}else return 0;

}