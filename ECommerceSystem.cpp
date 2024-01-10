// ECommerceSystem.cpp

#include "ECommerceSystem.h"
#include <iostream>

void ECommerceSystem::addProduct(const Product &product) {
    availableProducts.push_back(product);
}

void ECommerceSystem::addCustomer(const Customer &customer) {
    customers.push_back(customer);
}

void ECommerceSystem::displayAvailableProducts() const {
    std::cout << "Available Products:" << std::endl;
    for (const Product &product : availableProducts) {
        product.display();
    }
}

void ECommerceSystem::displayCustomerPurchases() const {
    std::cout << "Customer Purchases:" << std::endl;
    for (const Customer &customer : customers) {
        customer.displayPurchases();
    }
}
