#include "stdafx.h"

#define _USE_MATH_DEFINES
#include "../Parallelepiped.h"
#include <math.h>


struct Parallelepiped_
{
	const CParallelepiped parallelepiped;
	Parallelepiped_()
		: parallelepiped()
	{}
};
// Параллелепипед
BOOST_FIXTURE_TEST_SUITE(Parallelepiped, Parallelepiped_)
	// является объемным телом
	BOOST_AUTO_TEST_CASE(is_a_body)
	{
		//BOOST_CHECK(static_cast<const CBody*>(&parallelepiped));
	}
BOOST_AUTO_TEST_SUITE_END()