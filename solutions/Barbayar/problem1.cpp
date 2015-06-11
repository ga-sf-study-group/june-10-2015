#include <iostream>

using namespace std;

/*
  Time Complexity: O(n)
  Space Complexity: O(0)
  Algorithm: Kadane's Algorithm
*/

int main() {
  int nums[] = {1, 2, 3, -5, -8, -10, 10, 20, 30};

  int max_sum = 0;
  int sum = 0;
  
  for (int i = 0; i < sizeof(nums) / sizeof(int); i++) {
    sum = max(nums[i], sum + nums[i]);
    max_sum = max(sum, max_sum);
  }

  cout << max_sum << endl;
}
