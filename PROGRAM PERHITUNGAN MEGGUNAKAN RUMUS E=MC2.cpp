#include <stdio.h>
#include <conio.h>

int main()
{

 float c=89.88,m,E;
 printf("PROGRAM PERHITUNGAN MENGGUNAKAN RUMUS E=mc2 \n");
 printf("BY ACHMAD DIDHANI NIM 311810294\n");
 printf("INSITUT PELITA BANGSA. TEKHNIK INFORMATIKA\n\n");
 printf("masukan massa (kg) : ");scanf("%f", &m);
 E=m*c*c;
 printf("E = %.2f * %.2f * %.2f = %.2f J",m,c,c,E);
 getch();
}
