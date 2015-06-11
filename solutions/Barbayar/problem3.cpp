#include <iostream>

using namespace std;

/*
  Time Complexity: O(n^4)
  Space Complexity: O(0)
  Algorithm: Bruteforce (not a good solution)
*/

#define WIDTH 5
#define HEIGHT 5

int square[WIDTH][HEIGHT] = {
  {0,0,0,0,1},
  {0,1,1,1,0},
  {1,1,0,1,1},
  {1,1,1,1,0},
  {0,0,1,0,0}
};

bool check(int x, int y, int size) {
  for (int i = 0; i < size; i++) {
    if (!square[x + i][y]) {
      return false;
    }

    if (!square[x + i][y + size - 1]) {
      return false;
    }

    if (!square[x][y + i]) {
      return false;
    }

    if (!square[x + size - 1][y + i]) {
      return false;
    }
  }

  return true;
}

int main() {
  int max_size = 0;
  int max_x = -1;
  int max_y = -1;

  for (int i = 0; i < WIDTH; i++) {
    for (int j = 0; j < HEIGHT; j++) {
      int possible_size = min(WIDTH - i, HEIGHT - j);

      for (int k = max_size + 1; k <= possible_size; k++) {
        if (check(i, j, k)) {
          max_size = k;
          max_x = i;
          max_y = j;
        }
      }
    }
  }

  cout << max_x << "x" << max_y << ": " << max_size << endl;
}
