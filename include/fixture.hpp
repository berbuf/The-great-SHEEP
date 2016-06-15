#ifndef FIXTURE_HPP_
# define FIXTURE_HPP_

# include "vect.hpp"

class			Fixture
{
public:
  Fixture(Vect<2u, double> *position, Vect<2u, double> *speed, double *size);
  Vect<2u, double>	*position;
  Vect<2u, double>	*speed;
  double		*size;
};

#endif // FIXTURE_HPP_