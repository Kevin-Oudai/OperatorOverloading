#include <iostream>

class Complex
{
private:
	double real;
	double img;

public:
	Complex(double r, double i) : real(r), img(i) {}

	// Overload the addition operator
	Complex operator+(const Complex& other) const
	{
		return Complex(this->real + other.real, this->img + other.img);
	}

	// Overload the output stream operator
	friend std::ostream& operator<<(std::ostream& os, const Complex& c)
	{
		os << c.real << " + " << c.img << "i";
		return os;
	}
};

int main()
{
	Complex c1(3.5, 2.7);
	Complex c2(1.2, 4.6);
	Complex sum = c1 + c2;
	std::cout << "Sum of complex numbers are: " << sum << std::endl;
	return 0;
}
