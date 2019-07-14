#include <iostream>

int main() {
  int year;
  
  std::cout << "What year do you want to check? ";
  std::cin >> year;
  
  if (year < 1000 || year > 9999) {
    std::cout << "Invalid Entry\n";
  }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year << " falls on a leap year.\n";
  }
  else {
    std::cout << year << " is not a leap year.\n";
  }
}
