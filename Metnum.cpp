/*	Irman Nur Alim
	3411151091
	SIE - B
	
	Informatika Unjani
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<stdlib.h>

int main ()
{
	int a,b,c;
	int fungsi,turunan,integral,hasil;
	int pilih;
	Menu :
		system("cls");
		printf("\t===============================\n");
		printf("\t          MENU OPERASI\n");
		printf("\t===============================\n");
		printf("\t 1. Tambah\n");
		printf("\t 2. Kurang\n");
		printf("\t 3. Kali\n");
		printf("\t 4. Pangkat\n");
		printf("\t 5. Kalkulus\n");
		printf("\t 6. Exit\n");
	
	printf("\t Pilih Pemjumlahan : ");
	scanf("%d", &pilih);

	switch(pilih)
	{
		case 1:
			system("cls");
			printf("\t===============================\n");
			printf("\t          PENJUMLAHAN\n");
			printf("\t===============================\n");
			printf("\tA + B = n \n");
			printf("\tMasukan Angka A = ");
			scanf("%d",&a);
			printf("\tMasukan Angka B = ");
			scanf("%d",&b);
			hasil = a + b;
			printf("\tHasil dari A + B = %d", hasil);
			getch();
			goto Menu;
		break;
		
		case 2:
			system("cls");
			printf("\t===============================\n");
			printf("\t          PENGURANGAN\n");
			printf("\t===============================\n");
			printf("\tA - B = n \n");
			printf("\tMasukan Angka A = ");
			scanf("%d",&a);
			printf("\tMasukan Angka B = ");
			scanf("%d",&b);
			hasil = a - b;
			printf("\tHasil dari A - B = %d", hasil);
			getch();
			goto Menu;
		break;
		
		case 3:
			system("cls");
			printf("\t===============================\n");
			printf("\t           PERKALIAN\n");
			printf("\t===============================\n");
			printf("\tA x B = n \n");
			printf("\tMasukan Angka A = ");
			scanf("%d",&a);
			printf("\tMasukan Angka B = ");
			scanf("%d",&b);
			hasil = a * b;
			printf("\tHasil dari A x B = %d", hasil);
			getch();
			goto Menu;
		break;
		
		case 4:
			system("cls");
			printf("\t===============================\n");
			printf("\t          PERPANGKATAN\n");
			printf("\t===============================\n");
			printf("\tA ^ B = n \n");
			printf("\tMasukan Angka A = ");
			scanf("%d",&a);
			printf("\tMasukan Angka B = ");
			scanf("%d",&b);
			hasil = pow(a,b);
			printf("\tHasil dari A ^ B = %d", hasil);
			getch();
			goto Menu;
		break;
		
		case 5:
			system("cls");
			printf("\t=====================================\n");
			printf("\t               KALKULUS\n");
			printf("\t=====================================\n");
			printf("\tBentuk Umum F(x) = 3x^2 + x - 1\n");
			printf("\tBentuk C (Ax^2) + (Bx) - (C)\n");
			printf("\tMasukan Nilai A = ");
			scanf("%d",&a);
			printf("\tMasukan Nilai B = ");
			scanf("%d",&b);
			printf("\tMasukan Nilai C = ");
			scanf("%d",&c);
			printf("\tF(x) = %dx^2 + %dx - %d\n", a,b,c);
			fungsi =a*2;
			printf("\tTurunannya adalah : %dx + %d\n", fungsi,b);
			turunan =a/3;
			integral =b/2;
			printf("\tIntegralnya adalah : %dx^3 + %dx^2 - %dx", turunan,integral,c);
			getch();
			goto Menu;
		break;
	}
}
