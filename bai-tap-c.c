#define SIZE 20
#include<stdio.h>

typedef struct MA_TRAN{
	int a[SIZE][SIZE];
	int d, c;
	
}MT;

void nhap(MT*a);
void xuta(MT a);

int main(){
    MT a;
    nhap(&a);
    xuat(a);

	return 0;
}
  void nhap(MT*a){
  int i, j;
  printf("Hay nhap cot: ");
  scanf("%d", &a->c);
  printf("Hay nhap so dong: ");
  scanf("%d", &a->d);
  for (i = 0; i < a->d; i++) {
        for (j = 0; j < a->c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a->a[i][j]);
}
}
}
  void xuat(MT a){
  int i, j;
    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < a.d; i++) {
        for (j = 0; j < a.c; j++) {
            printf("%4d", a.a[i][j]);
        }
        printf("\n");
    }
  }
