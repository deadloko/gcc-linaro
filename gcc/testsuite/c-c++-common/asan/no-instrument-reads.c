/* { dg-do compile } */
/* { dg-options "--param asan-instrument-reads=0" } */

volatile int ten = 10;

int main() {
  volatile char x[10];
  x[ten];
  return 0;
}

/* { dg-final { scan-assembler-not "__asan_load" } } */
