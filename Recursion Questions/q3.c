// fibonacci using recursion (static)
#include <stdio.h>

int fibonacci(int);

int main(int argc, char *argv[]) {
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  fibonacci(num);
  return 0;
}

int fibonacci(int x) {
  static int a = 0, b = 1, c;
  if (x > 0) {
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    a = b;
    b = c;
    fibonacci(x - 1);
  }
  return 0;
}
