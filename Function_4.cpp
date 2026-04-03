#include <iostream>
using namespace std;

//define necessary functions
void computeCoins (int coinValue, int& num, int& amountLeft);

int main()
{
  int amount;
  char choice;

  do
  {
    cout << "Enter amount (1-99): ";
    cin >> amount;

    if (amount < 1 || amount > 99)
    {
      cout << "Invalid input.\n";
      continue;
    }

    int amountLeft = amount;
    int quarters, dimes, pennies;

    computeCoins(25, quarters, amountLeft);
    computeCoins(10, dimes, amountLeft);
    computeCoins(1, pennies, amountLeft);

    cout << amount << " cents can be given as ";
    cout << quarters << " quarter(s), ";
    cout << dimes << " dime(s), and ";
    cout << pennies << " penny(pennies).\n";

    cout << "Do you want to enter another amount? (y/n): ";
    cin >> choice;
    
  } while (choice == 'y' || choice == 'Y');

return 0;
}

//implement functions
void computeCoins (int coinValue, int& num, int& amountLeft)
{
  num = amountLeft / coinValue;
  amountLeft = amountLeft % coinValue;
}