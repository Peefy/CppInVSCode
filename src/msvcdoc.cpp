
#include "msvcdoc.h"

#include <iostream>
#include <cstddef>

#include <vector>

#include <algorithm>

#include <functional>
#include <future>
#include <atomic>

using namespace std;

template <typename T, int N = 10>
struct A {
	T x;
	A() {
		x = N;
	}
};


struct Document
{
	// 默认构造函数,不会发生异常 
	Document() noexcept = default;
	// 默认析构函数,不会发生异常 
	virtual ~Document() noexcept = default;
	// 删除拷贝构造函数
	Document(const Document&) = delete;
	// 删除赋值构造函数
	Document& operator=(const Document&) = delete;
	Document& operator=(const Document&) volatile = delete;
};


int msvc_main() {
     std::cout << "Hello World!\n"; 
	auto a = A<double, 3>();
	vector<int> v{ 1, 2, 3 };
	std::cout << all_of(v.begin(), v.end(), [](int a) {return a <= 5; });
	return -1;
}
