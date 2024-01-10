// Customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Product.h"

class Customer {
private:
    std::string name;
    std::vector<Product> purchasedProducts;

public:
    Customer(const std::string &customerName);
    void purchaseProduct(const Product &product);
    void displayPurchases() const;
};

#endif // CUSTOMER_H
