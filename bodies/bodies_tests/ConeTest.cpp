#include "stdafx.h"

#define _USE_MATH_DEFINES
#include "../Cone.h"
#include <math.h>


struct Cone_
{
	const double expectedRadius = 10.1;
	const double expectedHeight = 11.1;
	const CCone cone;
	Cone_()
		: cone(expectedRadius, expectedHeight)
	{}
};
// Конус
BOOST_FIXTURE_TEST_SUITE(Cone, Cone_)
	// является объемным телом
	BOOST_AUTO_TEST_CASE(is_a_body)
	{
		BOOST_CHECK(static_cast<const CBody*>(&cone));
	}
	// имеет радиус
	BOOST_AUTO_TEST_CASE(has_a_radius)
	{
		BOOST_CHECK_EQUAL(cone.GetRadius(), expectedRadius);
	}
	// имеет высоту
	BOOST_AUTO_TEST_CASE(has_a_height)
	{
		BOOST_CHECK_EQUAL(cone.GetHeight(), expectedHeight);
	}
BOOST_AUTO_TEST_SUITE_END()