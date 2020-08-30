#include <iostream>

int main() {

  // Write a for loop here:
  int i;
  for (i = 99; i > 0; i--)
  {
    std::cout <<  i << " bottles of pop on the wall.\n";
	std::cout << "Take one down and pass it around.\n";
    std::cout <<  i - 1  << " bottles of pop on the wall.\n\n";
  }
}
