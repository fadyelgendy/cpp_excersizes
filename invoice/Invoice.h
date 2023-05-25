#include <string>
#include <iostream>

class Invoice {
    public:

        Invoice(std::string partNumber, std::string partDescription, int quantity, int price) : partNumber{partNumber}, partDescription{partDescription}, quantity{quantity},  price{price} {
            vat = 0.2;
            discountRate = 0;
        }

        std::string getPartNumber() const {
            return partNumber;
        }

        void setPartNumber(std::string newNumber) {
            partNumber = newNumber;
        }

        std::string getPartDescription() const {
            return partDescription;
        }

        void setPartDescription(std::string newDescription) {
            partDescription = newDescription;
        }

        int getQuantity() const {
            return quantity;
        }

        void setQuantity(int newQuantity) {
            if (newQuantity > 0) {
                quantity = newQuantity;
            }
        }

        int getPrice() const {
            return price;
        }

        void setPrice(int newPrice) {
            if (newPrice > 0) {
                price = newPrice;
            }
        }

        double getVat() const {
            return vat;
        }

        void setVat(double currentVat) {
            if (currentVat >= 0) {
                vat = currentVat;
            }
        }

        double getDiscountRate() const {
            return discountRate;
        }

        void setDiscountRate(double rate) {
            if (rate >= 0) {
                discountRate = rate;
            }
        }

        double getInvoiceAmount() const {
            double subTotal = quantity * price;

            double calculatedVat = subTotal * vat;

            double calculatedDiscout = subTotal * discountRate;

            return (subTotal + calculatedVat) - calculatedDiscout;
        }

        void printInvoice() const {
            std::cout << "\t<< INVOICE >>" << std::endl << std::endl;
            std::cout << "Part Number: \t\t" << getPartNumber() << std::endl;
            std::cout << "Part Description: \t" << getPartDescription() << std::endl;
            std::cout << "Quantity: \t\t" << getQuantity() << std::endl;
            std::cout << "Price: \t\t\t" << getPrice() << std::endl;
            std::cout << "VAT: \t\t\t" << getVat() << std::endl;
            std::cout << "Discount Rate: \t\t" << getDiscountRate() << std::endl;
            std::cout << "---------------------------------------" << std::endl;
            std::cout << "Total amount: \t\t" << getInvoiceAmount() << std::endl << std::endl;
        }

    private:
        std::string partNumber;

        std::string partDescription;

        int quantity;

        int price;

        double vat;

        double discountRate;
};
