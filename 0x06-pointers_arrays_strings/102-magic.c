#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1028;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + (sizeof(int) + 1)) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  printf("size of an int = %ld\n", sizeof(int));
  printf("memory of n %p\n", &n);
  printf("memory of a %p\n", &a);
  printf("memory of a[0] %p\n", &a[0]);
  printf("memory of a[1] %p\n", &a[1]);
  printf("memory of a[2] %p\n", &a[2]);
  printf("memory of p + 5 %p\n", &n + 5);
  return (0);
}