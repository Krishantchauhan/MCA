#include<graphics.h>
int rounds(double a)
{
	return a>0 ? a+0.5:a-0.5;
}
int main()
{
	double x1,y1,x2,y2,slope;
	printf("enter the co-ordinates");
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");

	slope=(y2-y1)/(x2-x1);
	if(slope>1)
	{
		while(y1!=y2)
		{
			putpixel(rounds(x1),y1,RED);
			x1=x1+(1/slope);
			y1=y1+1;
		}
	}
	else
	{
		while(x1!=x2)
		{
			putpixel(x1,rounds(y1),RED);
            x1=x1+1;
			y1=y1+slope;
		}
	}
	getch();
	closegraph();
}