#ifndef PRD_H
#define PRD_H

#include <string>

class Product
{
public:
	Product(const std::string& name, double price) : m_name(name), m_price(price) {}
	virtual ~Product() = default;

public:
	virtual void display();
	virtual double calculate_discount();
	void set_price(double);
	void set_name(const std::string&);
	std::string get_name() const;
	double get_price() const;

protected:
	std::string m_name;
	double m_price;	
};

#endif	//PRD_H
