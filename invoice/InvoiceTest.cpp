#include "Invoice.h"

int main () {
    Invoice myInvoice{"234ABC", "Test description", 1, 100};

    myInvoice.setDiscountRate(0.1);
    myInvoice.setVat(0.3);
    myInvoice.setQuantity(50);
    myInvoice.setQuantity(-9);

    myInvoice.printInvoice();
}