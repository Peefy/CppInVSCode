
#include "msvcdoc.h"

#include <iostream>
#include <cstddef>

#include <vector>

#include <algorithm>
#include <allocators>
#include <any>
#include <atomic>

#include <bitset>

#include <cassert>
#include <ccomplex>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <chrono>

#include <functional>
#include <future>
#include <iostream>

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

void header_algorithm() {
	// #include <algorithm>
	vector<int> v{ 1, 2, 3, 4 ,5 };
	vector<int> v2{ 6, 7, 8, 9 ,10 };
	vector<int> vsort{1, 2, 3, 4, 5 };
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

	fill(v.begin(), v.end(), 2);
	fill_n(v.begin(), 3, 3);
	find(v.begin(), v.end(), 3);
	find_end(v.begin(), v.end(), v2.begin(), v2.end());
	find_first_of(v.begin(), v.end(), v2.begin(), v2.end());
	find_if(v.begin(), v.end(), 3);
	find_if_not(v.begin(), v.end(), 3);
	for_each(v.begin(), v.end(), [](int x){return x + 1;});
	for_each_n(v.begin(), 3, [](int x){return x + 1;});
	generate(v.begin(), v.end(), rand);
	generate_n(v.begin(), 3, rand);
	includes(v.begin(), v.end(), v2.begin(), v2.end());
	inplace_merge(v.begin(), v.begin() + 3 , v.end(), [](int elem1, int elem2){
		return abs(elem1) - abs(elem2);
	});
	is_heap(v.begin(), v.end());
	is_heap_until(v.begin(), v.end());
	is_partitioned(v.begin(), v.end(), std::less<int>)
	is_permutation(v.begin(), v.end(), v2.begin());
	is_sorted(v.begin(), v.end());
	is_sorted_until(v.begin(), v.end());
	iter_swap(v.begin(), v.begin() + 1);
	lexicographical_compare(v.begin(), v.end(), v2.begin(), v2.end());
	lower_bound(vsort.begin(), vsort.end(), 3);
	make_heap(v.begin(), v.end());
	max(v, v2);
	max_element(v.begin(), v.end());
	
}

void header_allocators() {

}

int msvc_main() {
    std::cout << "Hello MSVC C++ library!\n"; 
	header_algorithm();
	header_allocators();
	return -1;
}
