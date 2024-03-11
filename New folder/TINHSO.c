#include <stdio.h>

int main() {
  int n;
  
  do {
    printf("Nhap so  n (9999<= n < 999999): ");
    scanf("%d", &n);
  } while (n <= 9999  || n > 999999);

  int sum = 0;
  do {
    int digit = n % 10;
    sum += digit;
    n /= 10;
  } while (n > 0);

  printf("Tong cac so  %d la: %d\n", n, sum);

  return 0;
}