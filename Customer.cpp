// Customer.cpp

#include "Customer.h"
#include <iostream>

Customer::Customer(const std::string &customerName) : name(customerName) {}

void Customer::purchaseProduct(const Product &product) {
    purchasedProducts.push_back(product);
}

void Customer::displayPurchases() const {
    std::cout << "Purchased products by " << name << ":" << std::endl;
    for (const Product &product : purchasedProducts) {
        product.display();
    }
}
