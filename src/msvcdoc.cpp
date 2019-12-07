
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

template<typename _Iter>
void show_vector(_Iter start, _Iter end) {
	cout << "[ ";
	for (; start != end; start++)
		cout << *start << " ";
	cout << "]" << endl;
}

auto is_even = [](int const elem) -> bool { return !(elem % 2); };
auto is_odd = [](int const elem) -> bool { return (elem % 2); };


int msvc_main() {
    std::cout << "Hello World!\n"; 
	auto a = A<double, 3>();

	// #include <algorithm>
	vector<int> v{ 1, 2, 3, 4 ,5 };
	vector<int> v2{ 6, 7, 8, 9 ,10 };
	show_vector(v.begin(), v.end());
	cout << *adjacent_find(v.begin(), v.end(), [](int a, int b) {return a * 2 == b; }) << std::endl;
	cout << all_of(v.begin(), v.end(), [](int a) {return a <= 2; }) << std::endl;
	cout << any_of(v.begin(), v.end(), [](int a) {return a <= 2; }) << std::endl;
	cout << binary_search(v.begin(), v.end(), 3) << std::endl;
	cout << *copy(v.begin() + 2, v.begin() + 4, v.begin()) << std::endl;
	// cout << *copy_backward(v.begin() + 2, v.begin() + 4, v.begin()) << std::endl;
	cout << *copy_if(v.begin(), v.end(), v2.begin(), is_even) << std::endl;
	cout << *copy_n(v.begin(), 2, v2.begin()) << std::endl;
	cout << count(v.begin(), v.end(), 3) << std::endl;
	cout << count_if(v.begin(), v.end(), [](int a) {return a <= 2; }) << std::endl;
	cout << equal(v.begin(), v.end(), v2.begin()) << std::endl;
	cout << *(equal_range(v.begin(), v.end(), 3).first) << std::endl;

	return -1;
}
