
#include "stdafx.h"
#include "cpp17.h"

using namespace std;

namespace cpp17::NestNamespace
{
    Cpp17::Cpp17()
    {
    }


    Cpp17::~Cpp17()
    {
    }

    void NestNamespace::Cpp17::ShowNestNamespace()
    {
        cout << "cpp17::NestNamespace" << endl;
    }

    void Cpp17::StructuredBinding()
    {
        auto m = new map<string, int>
        {
            { "123", 123 },
            { "456", 456 },
            { "789", 789 }
        };
        //for(auto [key, value] : m)
        //{

        //}
    }

    void Cpp17::ClassTemplateArgumentDeduction()
    {
        // before
        pair<int, int> p(1, 1);
        // after
        
    }

}
