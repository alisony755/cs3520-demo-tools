/*
Use gdb (and not cout) to determine the value assigned to result when ii is 5.

You can paste the code into scratch.cpp from the demo to run in VS Code.

Optional challenge: if you set mys to 10 in that iteration of the loop (right
before result is added to mys), what is the value of result on the next
iteration?
*/

// ANSWER:

int mystery_func(int &x) {
  x = 5 + ((x * x * 2) % 41);
  return x / 2;
}

int main() {
  int mys = 0;
  for (int ii = 0; ii < 10; ++ii) {
    int result = mystery_func(mys);
    mys += result;
  }
}
