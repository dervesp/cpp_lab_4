#include "stdafx.h"

#define _USE_MATH_DEFINES
#include "../Cone.h"
#include <math.h>


struct Cone_
{
	const double expectedLength = 1.1;
	const double expectedWidth = 10.1;
	const double expectedHeight = 20.1;
	const double expectedDensity = 8.8;
	const double expectedVolume = 223.311;
	const CCone cone;
	Cone_()
		: cone()
	{}
};
// Конус
BOOST_FIXTURE_TEST_SUITE(Cone, Cone_)
	// является объемным телом
	BOOST_AUTO_TEST_CASE(is_a_body)
	{
		BOOST_CHECK(static_cast<const CBody*>(&cone));
	}
BOOST_AUTO_TEST_SUITE_END()