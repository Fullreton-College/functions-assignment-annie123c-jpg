#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string CoinFlip()
{
   int result = rand() % 2;

   if (result == 1)
      return "Heads";
   else
      return "Tails";
}

int main() {
   // Add more variables as needed
   
   srand(2);  // Unique seed

   /* Type your code here */
   int numFlips;
   cout << "Enter the number of times to flip the coin: ";
   cin >> numFlips;

   for (int i = 0; i < numFlips; i++) 
   {
      cout << CoinFlip() << endl;
   }

   return 0;
}
