#include "stdafx.h"
#include "cpp14.h"

using namespace std;

namespace cpp14
{
    Cpp14::Cpp14()
    {

    }

    Cpp14::~Cpp14()
    {

    }

    /*
     * 泛型Lambda表达式
    */
    void Cpp14::GenericLambda()
    {
        //c++ 11
        auto func = [](double a, double b)->double {return a * b; };
        cout << func(2, 5) << endl;
        //c++ 14
        auto generic_func = [](auto a, auto b) {return a * b; };
        cout << generic_func(3.5, 5) << endl;
    }

    class ReturnS
    {
    public:
        string str;
        int id;
        ReturnS(string str, int id) : str(str), id(id) {}
        explicit ReturnS(string str) : str(str) {}
    };

    auto GetValue(int id)   
    {
        if (id == 0)
        {
            auto r = new ReturnS("123", id);
            return r;
        }
        else
        {
            string str = "0000";
            auto r = new ReturnS(str);
            return r;
        }

    }

    void Cpp14::ReturnTypeDeduction()
    {
        cout << GetValue(0)->str << endl;
        cout << GetValue(1)->str << endl;
    }

    void [[deprecated]] Cpp14::InitializedLambdaCaptures()
    {
        // unique_ptr没有拷贝构造函数
        unique_ptr<int> p(new int);
        *p = 11;
        auto y = [p = std::move(p)]() {  
            *p = *p + 2;
            std::cout << "inside: " << *p << "\n"; 
        };
        y();
        if (p.get() != nullptr)
            std::cout << "outside: " << *p << "\n";
        else
            cout << "Capture successful!\r\n";
    }

    /*
    弃用的函数
    */
    [[deprecated("Consider using something other than cranky")]]
    void Cpp14::DeprecatedFunction()
    {

    }

    void Cpp14::NumberSeparator()
    {
        auto num = 0b1111'0000;
        cout << num << " " << 1'000'000 << endl;
    }

    void Cpp14::MakeSmartPointer()
    {
        auto p = make_unique<ReturnS>("123", 0);
        cout << p->id << endl;
        cout << p->str << endl;
        p.reset();      
    }

    void Cpp14::TypeTuple()
    {
        tuple<int, string, float> t(1, "123", 1.1f);
        auto val = get<int>(t);
        auto index_val = get<1>(t);
        cout << val << " " << index_val << endl;
    }

}
