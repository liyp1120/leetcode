#include<stdio.h>
#include<stdbool.h>

bool divisorGame(int n) {
  //return (n % 2 == 0) ? true : false;
  return n % 2 == 0;
}

int main() {

  for (int n = 1; n <= 1000; n++) {
    bool aliceWin = divisorGame(n);
    printf("n = %d, ", n);
    if (aliceWin) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  }
  return 0;
}
