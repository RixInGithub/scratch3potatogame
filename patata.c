

// You can run a larger C program (FizzBuzz) by changing this condition.
// Note you may not want to do this for slower backends (e.g., Brainfuck).
#if 1
int putchar(int c);

int main() {
  const char* p = "Hello, world!\n";
  for (; *p; p++)
    putchar(*p);
  return 0;
}

#else

#include <stdio.h>

int main() {
  for (int i = 1; i <= 100; i++) {
    if (i % 5) {
      if (i % 3) {
        printf("%d\n", i);
      } else {
        printf("Fizz\n");
      }
    } else {
      printf("FizzBuzz\n" + i * i % 3 * 4);
    }
  }
  return 0;
}

#endif

