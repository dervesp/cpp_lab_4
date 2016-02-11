// bodies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BodyBuilder.h"


void main()
{
    CBodyBuilder builder = CBodyBuilder(std::cout);

	std::string line;
	while (std::getline(std::cin, line))
	{
		builder.ProcessLine(std::istringstream(line));
	}
}

