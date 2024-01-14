#ifndef CSTMR_H
#define CSMTR_H

#include "prd.h"
#include "crt.h"

#include <string>

class Costumer
{
public:
	Costumer(const std::string& name);
	~Costumer() = default;

private:
	std::string m_name;
	Cart m_cart;

public:
	void add_to_cart(Product*);
	void view_cart();
};

#endif // crstmr.h
