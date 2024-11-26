//	Calculator
#include <stdio.h>

void Clear(){
	for (int i= 0; i < 30; i++)puts("");
}

int penjumlahan(int a, int b){
	return a + b;
}

int pengurangan(int a, int b){
	return a - b;
}

int perkalian(int a, int b){
	return a * b;
}

int pembagian(int a, int b){
	if (b == 0){
		printf("Error");
		return 0;;
	} else{
		return a / b;
	}
}

int faktorial(int x){
	if (x < 1){
		printf("Error\n");
		return 0;
	}
	if (x == 1){
		return 1;
	}else{
		return x * faktorial(x-1);
	}
}

	
int main(){
	int inputMenu;
	
	do{
		Clear();
		printf("Calculator Menu\n");
		printf("1. Penjumlahan\n");
		printf("2. Pengurangan\n");
		printf("3. Perkalian\n");
		printf("4. Pembagian\n");
		printf("5. Faktorial\n");
		printf("6. Exit\n");
		printf("Input: ");
		scanf("%d", &inputMenu);
		getchar();
	
		float a, b;
		int c;
		if (inputMenu == 1){
				puts("Masukkan kedua angka: ");
				scanf("%f %f", &a, &b); getchar();
				printf("Hasil Penjumlahan: %d\n", penjumlahan(a, b));
				break;
		} else if (inputMenu == 2){
				puts("Masukkan kedua angka: ");
				scanf("%f %f", &a, &b); getchar();
				printf("Hasil Pengurangan: %d\n", pengurangan(a, b));
				break;
		} else if (inputMenu == 3){
				puts("Masukkan kedua angka: ");
				scanf("%f %f", &a, &b); getchar();
				printf("Hasil Perkalian: %d\n", perkalian(a, b));
				break;
		} else if (inputMenu == 4){
				puts("Masukkan kedua angka: ");
				scanf("%f %f", &a, &b); getchar();
				printf("Hasil Pembagian: %d\n", pembagian(a, b));
				break;
		} else if (inputMenu == 5){
				puts("Masukkan bilangan bulat untuk faktorial: ");
				scanf("%d", &c); getchar();
				int hasil_faktorial = faktorial(c);
				if (hasil_faktorial != -1){
					printf("Faktorial dari %d adalah %d\n", c, hasil_faktorial);
				}
				break;
		} else if (inputMenu == 6){
				puts("Exiting Calculator");
				puts("Thank you for using the calculator");
				return 0;
		} else {
			printf("Pilihan tidak Valid. Silahkan coba lagi.\n");
		} printf("Tekan enter untuk melanjutkan...");

	} while (inputMenu != 6);
	return 0;
}