#include <stdio.h>

/* Hello world 
 * by Juliana Curry
 */

int main(int argc, char *argv[])
{
	printf("Hello world!\n");
	
	int x,y,z;
	x=10;
	y=20;
	z=x+y;
	printf("x is %d, y is %d, z is %d\n",x,y,z);
	
	int h,w,d,v ; /*h=height, w=width, d=depth, v=volume*/
	
	h=11;
	w=7;
	d=14;
	v=h*w*d;
	printf("Volume of the box is %d\n",v);
	
	return 0;
}
