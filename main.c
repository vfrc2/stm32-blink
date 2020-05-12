#include <stdint.h>
#include <stm32f1xx.h>

// LD3: Green LED LD3 labeled PC9 is connected to the I/O PC9 of STM32F100RBT6B.
// LD4: Blue LED LD4 labeled PC8 is connected to the I/O PC8 of STM32F100RBT6B.

/* Main program. */
int main(void) {

  RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;

  int val = 0;
  while (1) {
    val += 1;
  }
}
