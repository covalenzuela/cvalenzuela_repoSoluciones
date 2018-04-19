/*
 *
 * 
 * 
 */


#include <stdio.h>

int main()
{
	float c1, c2, c3, n1, n2, n3, n4, np, nt1, nt2, nt3, nt4, nt, nf, nc;
	
	printf ("ingrese nota certamen 1:");
	scanf ("%f", &c1);
	printf ("ingrese nota certamen 2:");
	scanf ("%f", &c2);
	printf ("ingrese nota laboratorio 1:");
	scanf ("%f", &n1);
	printf ("ingrese nota laboratorio 2:");
	scanf ("%f", &n2);
	printf ("ingrese nota laboratorio 3:");
	scanf ("%f", &n3);
	printf ("ingrese nota laboratorio 4:");
	scanf ("%f",&n4);
	np= (((n1+n2+n3+n4)/4)*0.2)
	printf ("ingrese nota control 1:");
	scanf ("%f", &nt1);
	printf ("ingrese nota control 2:");
	scanf ("%f", &nt2);
	printf ("ingrese nota control 3:");
	scanf ("%f", &nt3);
	printf ("ingrese nota control 4:");
	scanf ("%f", &nt4);
	nt= (((nt1+nt2+nt3+nt4)/4)*0.1)
	nf= 40
	c3= 30/7*(-(np)-(nt)+nf)-(nc*2)
	nc = (c1+c2+c3)
	printf ("la nota minima para aprobar el curso es: %f", c3);
	return 0;
}

