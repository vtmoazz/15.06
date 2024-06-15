#include <stdio.h>

void circularShift(int* a, int* b, int* c, int* d){
    int trungGian = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = trungGian;
}

int main(){
   	int a,b,c,d;
   	printf("Enter: a = ");
   	scanf("%d",&a);
   	printf("Enter: b = ");
   	scanf("%d",&b);
   	printf("Enter: c = ");
   	scanf("%d",&c);
   	printf("Enter: d = ");
   	scanf("%d",&d);
    printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);

    circularShift(&a, &b, &c, &d);

    printf("Values after circular shift:\n");
    printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);

    return 0;
}
