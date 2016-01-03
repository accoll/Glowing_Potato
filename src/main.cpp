#include <iostream>
#include <stdio.h>

void monthly_income(float &mi){
  std::cout <<"What is your monthly income?\n";
  std::cin >> mi;
}
void budgeted_living_expenses(float& ble){
  std::cout <<"What is your budgeted living expenses?\n";
  std::cin >> ble;
}
void actual_living_expenses(float &ale){
  std::cout <<"What is your living expenses?\n";
  std::cin >> ale;
}
void actual_taxes_withheld(float &atw){
  std::cout <<"What is your taxes withheld?\n";
  std::cin >> atw;
}
void actual_tithe_offerings(float &ato){
  std::cout <<"What is your tithe offerings?\n";
  std::cin >> ato;
}
void actual_other_expenses(float &aoe){
  std::cout <<"What is your actual other expenses?\n";
  std::cin >> aoe;
}
void chart(float mi, float ble, float ale, float atw, float ato, float aoe){
  std::cout << mi << std::endl;
  std::cout << ble << std::endl;
  std::cout << ale << std::endl;
  std::cout << atw << std::endl;
  std::cout << ato << std::endl;
  std::cout << aoe << std::endl;
}

int main(void) {
  float mi;
  float ble;
  float ale;
  float atw;
  float ato;
  float aoe;
  monthly_income(mi);
  budgeted_living_expenses(ble);
  actual_living_expenses(ale);
  actual_taxes_withheld(atw);
  actual_tithe_offerings(ato);
  actual_other_expenses(aoe);
  chart(mi, ble, ale, atw, ato, aoe);
 }
