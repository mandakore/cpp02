#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define GREEN "\033[32m"
# define RESET "\033[0m"

class Fixed {
private:
	int					_value;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other); 
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);    
};

#endif
