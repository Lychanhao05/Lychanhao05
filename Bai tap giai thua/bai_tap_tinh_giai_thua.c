#include <stdio.h>

int main() {
  int n;

  printf("nhap so n: ");
  scanf("%d", &n);

  int GiaiThua = 1;
  for (int i = 1; i <= n; i++) {
    GiaiThua *= i;
  }

  int HaiMuN = 1;
  for (int i = 0; i < n; i++) {
    HaiMuN *= 2;
  }

  int SoNguyenTo = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      SoNguyenTo = 0;
      break;
    }
  }

  
  printf("gia thua cua %d la: %d\n", n, GiaiThua);
  printf("2 mu %d la: %d\n", n, HaiMuN);

  if (SoNguyenTo) {
    printf("%d la so nguyen to\n", n);
  } else {
    printf("%d khong phai la so nguyen to\n", n);
  }

  return 0;
}