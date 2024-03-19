#include <stdio.h>
void print_c(int a, char b) {
  for (int i = 0; i < a; i++) {
    printf("%c", b);
  }
}
int main(void) {
  int a, c;
  char b;
  scanf("%d %d %c", &c, &a, &b);
  for (int j = 0; j < c; j++) {
    print_c(a, b);
    printf("\n");
  }
  return 0;
}

