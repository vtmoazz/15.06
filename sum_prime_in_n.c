#include <stdio.h>

int main() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    int s = sumPrime(n);
    printf("Sum of prime numbers: %d\n", s);
    return 0;
}

int prime(int num) {
	
	int i;// 1 khong phai la so nguyen to --> if (num<=1) return 0
    if (num <= 1){ 
		return 0;
	}
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
			return 0;
		}
    }
    return 1;
}


int sumPrime(int n) {
    int s = 0;
    while (n != 0) {
        int num;
		num = n % 10;
        if (prime(num)) {
            s = s + num;
        }
        n /= 10;
    }
    return s;
}


