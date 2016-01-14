// bodies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BodyBuilder.h"


int _tmain(int argc, _TCHAR* argv[])
{
    CBodyBuilder builder = CBodyBuilder();
    while (std::cin)
    {
        std::shared_ptr<CBody> body = builder.CreateFromStream(std::cin);
        if (body.use_count())
        {
            std::cout << body->ToString() << std::endl;
        }
    }
    system("pause");
	return 0;
}

