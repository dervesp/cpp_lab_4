// bodies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BodyBuilder.h"


int _tmain(int argc, _TCHAR* argv[])
{
    CBodyBuilder builder = CBodyBuilder();
    while (std::cin)
    {
        auto bodyPtr = builder.CreateFromStream(std::cin);
        if (bodyPtr)
        {
            auto body = std::shared_ptr<CBody>(bodyPtr);
            std::cout << body->ToString() << std::endl;
        }
    }
    system("pause");
	return 0;
}

