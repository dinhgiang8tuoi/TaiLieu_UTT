//b�i 21
// c�n c� t�ng 20000d tu ba loai gi�y 1000d,2000d,5000d.l�p chuong tr�nh d� t�m t�t ca phuong �n c� th�
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,dem=0;
	for(x=1;x<=13;x++)
	for(y=1;y<=7;y++)
	for(z=1;z<=3;z++)
	if(1000*x+2000*y+5000*z==20000)
	{
	dem++;
	printf("phuong an %d-%d-%d",x,y,z);
	}
	printf("so phuong an %d",dem);
}
