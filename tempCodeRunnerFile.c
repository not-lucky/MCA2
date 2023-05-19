#include <stdio.h>

int part(int a[], int s, int e) {
  int p = a[e];
  int i = s - 1;

  for (int j = s; j < e; j++) {
    if (a[j] < p) {
      i++;

      int t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }

  int t = a[e];
  a[e] = a[i+1];
  a[i+1] = t;

  return i+1;
}


void quick(int a[], int s, int e) {
  if (s < e) {
    int p = part(a, s, e);
    quick(a, s, p - 1);
    quick(a, p+1, e);
  }
}

void print(int a[], int n) {
  for (int i =0;i<n;i++) {
    printf("%d, ", a[i]);
  }
  printf("\n\n");
}

int main() {
  int a[] = {1,5,6,3,8,8,6,3,9,2};
  print(a, 10);

  quick(a, 0, 9);

  print(a, 10);

}