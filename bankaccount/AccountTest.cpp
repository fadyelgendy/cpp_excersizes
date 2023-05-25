#include "Account.h"

int main () {
    Account myAccount{"Fady Gendy", 100};

    myAccount.printAccount();

    myAccount.setName("Fady Elgendy");
    myAccount.setBalance(500);

    myAccount.printAccount(); // 500

    myAccount.deposit(300);

    myAccount.printAccount(); // 800

    myAccount.withdraw(1000); // exceeded

    myAccount.withdraw(250);

    myAccount.printAccount();
}
