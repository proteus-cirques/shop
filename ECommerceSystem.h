// ECommerceSystem.h

#ifndef ECOMMERCESYSTEM_H
#define ECOMMERCESYSTEM_H

#include <vector>
#include "Product.h"
#include "Customer.h"

class ECommerceSystem {
private:
    std::vector<Product> availableProducts;
    std::vector<Customer> customers;

public:
    void addProduct(const Product &product);
    void addCustomer(const Customer &customer);
    void displayAvailableProducts() const;
    void displayCustomerPurchases() const;
};

#endif // ECOMMERCESYSTEM_H
