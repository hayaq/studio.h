/* ring1.c */

#include <studio.h>
#include <math.h>

main()
float r, th, dth, x, y;
dth = 0.02*M_PI;
r = 1.0;
for(th=0.0;th<=2.0*M_PI;th=th+dth){
	x = r*cos(th);
	y = r*sin(th);
	printf( "%f %f \n",x,y);
return 0;
