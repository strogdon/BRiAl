//
//  untitled
//
//  Created by  on 2007-12-13.
//  Copyright (c) 2007 The PolyBoRi Team. All rights reserved.
//  PolyBoRi Project

#ifndef RANDOM_HEADER
#include "groebner_defs.h"
#include <boost/random/uniform_smallint.hpp>
#include <boost/random/linear_congruential.hpp>
#include <boost/random/variate_generator.hpp>
BEGIN_NAMESPACE_PBORIGB
typedef boost::minstd_rand base_generator_type;
typedef boost::uniform_smallint<> distribution_type;
typedef boost::variate_generator<base_generator_type&, distribution_type> bool_gen_type;
MonomialSet random_set(const Monomial& variables, unsigned int len);
END_NAMESPACE_PBORIGB
#endif
