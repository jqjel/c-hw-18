#include <iostream>
#include <string>
#include <vector>

#include "caesar.h"

using namespace std;

int main() {
  string s = "hello";
  cout << encrypt_word(s, 5) << endl; // mjqqt
}