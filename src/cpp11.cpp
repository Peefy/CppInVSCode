#include "stdafx.h"
#include "cpp11.h"

using namespace std;

namespace cpp11
{
    Cpp11::Cpp11()
    {

    }

    Cpp11::~Cpp11()
    {

    }

    /*
    * auto 自动类型推导
    */
    void Cpp11::AutoTypeDerivation()
    {
        auto int_var = 0;
        auto float_var = 0.0f;
        auto double_var = 0.0;
        auto bool_var = true;
        auto char_var = 'c';
        auto str_var = "ok";
        auto vec = vector<int>();
        vec.push_back(1);
        vec.push_back(2);
        cout << int_var << " ";
        cout << float_var << " ";
        cout << double_var << " ";
        cout << bool_var << " ";
        cout << char_var << " ";
        cout << str_var << " ";
        cout << vec.size() << " ";
        cout << endl;
        for (auto iter = vec.cbegin(); iter != vec.cend(); iter++)
        {
            cout << *iter << " ";
        }
    }

    /*
    * decltype 获取类型关键字
    */
    void Cpp11::Decltype()
    {
        auto x = 1;
        // decltype 从变量或者类获取类型
        decltype(x) y = 1;
        auto str = "ok";
        decltype("ok") str_tmp = "ok";
        cout << x << " " << y;
        cout << str << endl;
        cout << str_tmp << endl;
        string cstr = "ok";
        cstr.at(0) = 'a';
        cout << cstr << endl;
    }

    /*
    * nullptr 关键字，空指针元素，区别于NULL
    */
    void Cpp11::Nullptr()
    {
        int a = NULL;
        int * p = NULL;
        int * q = nullptr;
        cout << (p == q) << endl;
    }

    /*
    * for(auto list : lists) 类似于C#的foreach in Python的for in ,用法同Java
    */
    void Cpp11::Foreach()
    {
        auto x = new vector<int>;
        // 左值引用&与右值引用&&
        x->push_back(1);
        x->push_back(2);
        x->push_back(3);
        for (auto val : *x)
        {
            cout << val << " ";
        }
        delete x;
        vector<int> vals{ 1,2,3,4,5 };
        for (auto val : vals)
        {
            cout << val << " ";
        }
        auto list = { 1, 2, 3, 4 };
        for_each(list.begin(), list.end(), [](int i) {return i * 2; });
        for (auto i : list)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    * lambda 表达式
    */
    void Cpp11::Lambda()
    {
        auto func = [=](int a, int b) -> int { return a + b; };
        cout << func(1, 2) << endl;
        vector<int> vals{ 1,2,3,4,5 };
        for_each(vals.begin(), vals.end(), [](int a) {return a * 2; });
        for (auto val : vals)
        {
            cout << val << " ";
        }
        for (auto& val : vals)
        {
            val = 0;
        }
        for (auto val : vals)
        {
            cout << val << " ";
        }
        printf("lambda 捕获选项 \r\n");
        printf("[]  不捕获任何变量\r\n");
        printf("[&] 以引用方式捕获所有变量\r\n");
        printf("[=] 用值的方式捕获所有变量（可能被编译器优化为const &)\r\n");
        printf("[=, &foo] 以引用捕获foo, 但其余变量都靠值捕获\r\n");
        printf("[bar] 以值方式捕获bar; 不捕获其它变量\r\n");
        printf("[this] 捕获所在类的this指针\r\n");
    }

    template<typename T, typename T1>
    void Print(T1 str, T tu)
    {
        if (str != NULL)
        {
            cout << str << " " << tu;
        }
    }

    /*
    * 变长模板 以及 make_pair
    */
    void Cpp11::VariableLengthTemplate()
    {
        auto dic = make_pair("name", 1);
        cout << dic.first << " " << dic.second << endl;
        Print(1, 1.0);
    }

    /*
    * 集合默认初始化
    */
    void Cpp11::CollectionInit()
    {
        auto hash = new map<string, int>
        {
            { "123", 123 },
            { "456", 456 }
        };
        auto v = vector<int>{ 1, 2, 3, 45 };
        for (auto val : *hash)
        {
            cout << val.first << " " << val.second << endl;
        }
    }

    auto Multiply(double a, double b) -> double
    {
        return a * b;
    }

    /*
    * 函数返回值用 -> int 表示，类似于python
    */
    void Cpp11::NewFunctionName()
    {
        auto func = [](double a, double b) -> double {return a * b; };
        cout << Multiply(2, 5) << endl;
        cout << func(2, 5) << endl;
    }

    /*
    * throw关键字，类似于Java
    */
    void Cpp11::Throw()
    {
        auto func = [](double a, double b) throw () 
        {
            a = 0; 
            return 2 / a; 
        };
        try
        {
            cout << func(0, 0) << endl;
        }
        catch (exception* e)
        {
            cout << "error\r\n";
        }

    }

    constexpr double AddConst(double& a)
    {
        a++;
        return a;
    }

    /*
    编译时计算 constexpr 关键字
    */
    void Cpp11::Constexpr()
    {
        auto a = 2.0;
        const auto b = AddConst(a);
        cout << b << endl;
    }

    /*
    static_assert 关键字,编译是进行断言，运行时不进行断言
    */
    void Cpp11::StaticAssert()
    {
        auto a = 0;
        static_assert(sizeof(void*) == 4, "not supported");       
    }

    void Cpp11::SmartPointer()
    {
        // auto ptr;
        //auto_ptr<Cpp11> auto_p(new Cpp11);
        //auto_p->Lambda();
        //auto ptr = auto_p.release();
        //delete ptr;
        // unique_ptr; 独占指针使用权，不能随便赋值
        unique_ptr<Cpp11> unique_p(new Cpp11);
        auto p1 = move(unique_p);
        if (p1.get() != nullptr)
        {
            printf("p1 != nullptr \r\n");
        }
        if (unique_p.get() != nullptr)
        {
            printf("unique_p != nullptr \r\n");
        }
        // share_ptr
        shared_ptr<Cpp11> share_p(new Cpp11);
        auto share_p1 = share_p;
        auto share_p2 = share_p;
        if (share_p.get() != nullptr)
        {
            printf("share_p != nullptr \r\n");
        }
    }

    void Cpp11::MultiByteChar()
    {
        char str1[] = "哈哈哈";
        wchar_t str2[] = L"哈哈哈";
        char16_t str3[] = u"哈哈哈";
        char32_t str4[] = U"哈哈哈";
        cout << str1 << endl;
        cout << str2 << endl;
        cout << str3 << endl;
        cout << str4 << endl;
    }

}