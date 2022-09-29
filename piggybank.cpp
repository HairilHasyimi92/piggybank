#include <iostream>

int main() {

  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter a number of Colombian Pesos: ";
  std::cin >> pesos;"\n";
  std::cout << "Enter a number of Brazilian Reais: ";
  std::cin >> reais;"\n";
  std::cout << "Enter a number of Peruvian Soles: ";
  std::cin >> soles;"\n";

double pesoscr = 0.05;
double reaiscr = 0.19;
double solescr = 0.26;

dollars = (pesoscr*pesos)+(reaiscr*reais)+(solescr*soles);

std::cout << "US Dollars = "<< dollars;

  
  
  
}