#include<stdio.h>
int main ()
{
	float a, b;
	printf ("nhap vao gia tri a=");
	scanf ("%f",&a);
	printf ("nhap vao gia tri b=");
	scanf ("%f",&b);
	/*printf ("%.2f + %.2f = %.2f", a, b, a+b);*/
	
	float tong=a+b;
	printf ("%.2f + %.2f = %.2f", a, b, tong);
	
	float hieu=a-b;
	printf ("\n %.2f - %.2f = %.2f", a, b, hieu);
	
	float tich=a*b;
	printf ("\n %.2f * %.2f = %.2f", a, b, tich);
	
	float thuong=a/b;
	printf ("\n %.2f / %.2f = %.2f", a, b, thuong);
	
	int r=((int)a)%((int)b);
	printf ("\n %.2f chia lay du %.2f = %.d", a, b, r);
	
	printf("\n a=%.2f",++a); //a thay doi truoc khi ket thuc lenh
	printf("\n b=%.2f",++b); //b thay doi truoc khi ket thuc lenh
	
/*	a++,
	printf ("\n a++=%f",a); //a thay doi sau khi ket thuc lenh
	
	b--;
	printf ("\n b--=%f",b);	//b thay doi sau khi ket thuc lenh
	*/
}
