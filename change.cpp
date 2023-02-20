#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cents;
    int dollar;
    int loonies;
    int toonies;
    int fiftycent;
    int quarter;
    int dime;
    int nickel;
    double total;
    int num;
    double coins;
    int changepaid ;
    int coinspaid;

    cout << "Enter true cost." << endl;
    cout << "Give the dollars: ";
    cin >> dollar;
    cout << "Now give the cents: ";
    cin >> cents;
    cout << "In cash the items costs: $" << dollar << "." << cents << endl;
    cout << "Number of toonies: ";
    cin >> toonies;
    cout << "Number of loonies: ";
    cin >> loonies;
    cout << "Number of fifty cent pieces: ";
    cin >> fiftycent;
    cout << "Number of quarters: ";
    cin >> quarter;
    cout << "Number of dimes: ";
    cin >> dime;
    cout << "Number of nickels: ";
    cin >> nickel;

    total = 2*toonies + 1*loonies + .5*fiftycent + .25*quarter + .10*dime + .05*nickel;
   int bucks = int(total);
   coins = total-bucks;
   int change = coins*100;
     cout << "You paid: " << bucks << " dollar(s) and " << change << " cents." << endl;
    changepaid = bucks-dollar;
    coinspaid = change-cents;
  if (coinspaid < 0)
  {
    changepaid = changepaid-1;
  }
  if(coinspaid < 0)
  {
    coinspaid=coinspaid+100;
  }
   cout << "Your change due is: " << changepaid << " dollars(s) and " << coinspaid << " cents(s)";

}

