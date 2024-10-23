#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   float initInvest, monDeposit, anInterest, months, years;
   float totalAmt, intAmt, yearTotInt;

   cout << "********************************\n";
   cout << "********** Data Input **********\n";
   cout << "Initial Investment Amount: \n";
   cout << "Monthly Deposit: \n";
   cout << "Annual Interest: \n";
   cout << "Number of years: \n";

   cout << "********************************\n";
   cout << "********** Data Input **********\n";
   cout << "Initial Investment Amount: $";
   cin >> initInvest;
   cout << "Monthly Deposit: $";
   cin >> monDeposit;
   cout << "Annual Interest: %";
   cin >> anInterest;
   cout << "Number of years: ";
   cin >> years;
   months = years * 12;

   totalAmt = initInvest;

   cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
   cout << "==============================================================\n";
   cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------\n";


   for (int i = 0; i < years; i++) {

       intAmt = (totalAmt) * ((anInterest / 100));

       totalAmt = totalAmt + intAmt;

       cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t$" << intAmt << "\n";

   }

   totalAmt = initInvest;

   cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
   cout << "==============================================================\n";
   cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------\n";

   for (int i = 0; i < years; i++) {

       yearTotInt = 0;

       for (int j = 0; j < 12; j++) {

           intAmt = (totalAmt + monDeposit) * ((anInterest / 100) / 12);

           yearTotInt = yearTotInt + intAmt;

           totalAmt = totalAmt + monDeposit + intAmt;

       }

       cout << (i + 1) << "\t\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t\t$" << yearTotInt << "\n";


   }

   return 0;
}
