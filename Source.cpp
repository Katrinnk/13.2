#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define SQR(x) (x)*(x) 
#define MAX(y,z) ((y)>(z))?(y):(z) 
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z,
		a, b, c, k,
		max,
		min;
	char ch; 
	do
	{
		puts("define maximum of three numbers");
		puts("Input 3 integer numbers");
		scanf("%d", &x);
		PRINTI(x); 
		scanf("%d", &y);
		PRINTI(y);
		scanf("%d", &z);
		PRINTI(z);
#if z<1&&z>=1
		a = SQR((x + y), (x + z));
		min = MIN(x,y,z,a);
		PRINTR(min);
#endif
#if z<1&&zz>=10
		b = (SQR(x), 5 * abs(y - z));
		max = MAX(x, y, z, b);
		PRINTR(max);
#endif 
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}