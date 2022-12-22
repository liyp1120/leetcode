#include<stdio.h>
#include<stdbool.h>

// find x, return 0 when x does not exist
int getX(int n) {
  int tmp_x = 0;
  for (int x = n - 1; x > 0; x--) {
    if (n % x == 0)
      tmp_x = x;
  }
  return tmp_x;
}

bool divisorGame(int n) {
  bool result = false;
  int round = 1; // alice first
  int x = getX(n);
  while (x != 0) {
    round++;
    n = n - x;
    x = getX(n);
  }
  result = (round % 2 == 0) ? true : false;
  return result;
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
