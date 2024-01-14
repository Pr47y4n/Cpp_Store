#ifndef DPRD_H
#define DPRD_H

#include "prd.h"

class DiscountedProduct : public Product 
{
public:
	DiscountedProduct(const std::string& name, double price, double dp) : Product(name, price), m_discount_precentage(dp) {} 
	~DiscountedProduct() = default;

public:
	void display() override;
	double calculate_discount() override;
	
private:
	double m_discount_precentage;	
};

#endif // DPRD_H 
