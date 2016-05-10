/*
  Customer.hpp

  Include file for Customer class
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Rental.hpp"

#include <string>
#include <vector>

class Customer {
public:

    // constructor
    Customer(const std::string& name);

    // customer name
    std::string getName() const;

    // add a new rental
    void addRental(const Rental& rental);
	
	//prints total amount owed
	void printTotal(double totalAmount);
	
	//calculates amount for customers
	double customer::amountFor(const Rental& r) const{
		return 0;
	}

    // customer rental statement
    std::string statement() const;

private:
    std::string name;
    std::vector<Rental> rentals;
};

#endif
