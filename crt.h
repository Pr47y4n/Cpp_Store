#ifndef CRT_H
#define CRT_H

#include "prd.h"

#include <vector>

class Cart
{
public:
	Cart() = default;
	~Cart() = default;

public:
	void add_product(Product*);
	void display() const;
	double calculate_total();

private:
	std::vector<Product*> m_products;	
};

#endif // CRT_H

