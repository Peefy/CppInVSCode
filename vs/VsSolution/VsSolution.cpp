// VsSolution.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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

template <typename Type>
class MultValue
{
private:
	Type _factor;
public:
	MultValue(const Type& value) : _factor(value) { }
	Type operator() (Type& elem) const {
		return elem * _factor;
	}
};

int main()
{
    std::cout << "Hello World!\n"; 
	auto a = A<double, 3>();

	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> v2(0, 100);
	vector<int> vsort{ 1, 2, 3, 4, 5 };
	auto mygreater = [](int a) -> bool { return a <= 2; };
	auto UDgreater = [](int elem1, int elem2) { return elem1 > elem2; };
	auto twice = [](int elem1, int elem2) { return elem1 * 2 == elem2; };
	auto is_even = [](int const elem) -> bool { return !(elem % 2); };
	auto is_odd = [](int const elem) -> bool { return (elem % 2); };
	show_vector(v.begin(), v.end());
	cout << *adjacent_find(v.begin(), v.end(), [](int a, int b) { return a * 2 == b; }) << std::endl;
	cout << all_of(v.begin(), v.end(), [](int a) { return a <= 2; }) << std::endl;
	cout << any_of(v.begin(), v.end(), [](int a) { return a <= 2; }) << std::endl;
	cout << binary_search(v.begin(), v.end(), 3) << std::endl;
	cout << *copy(v.begin() + 2, v.begin() + 4, v.begin()) << std::endl;
	// cout << *copy_backward(v.begin() + 2, v.begin() + 4, v.begin()) << std::endl;
	cout << *copy_if(v.begin(), v.end(), v2.begin(), is_even) << std::endl;
	cout << *copy_n(v.begin(), 2, v2.begin()) << std::endl;
	cout << count(v.begin(), v.end(), 3) << std::endl;
	cout << count_if(v.begin(), v.end(), [](int a) { return a <= 2; }) << std::endl;
	cout << equal(v.begin(), v.end(), v2.begin()) << std::endl;
	cout << *(equal_range(v.begin(), v.end(), 3).first) << std::endl;

	fill(v.begin(), v.end(), 2);
	fill_n(v.begin(), 3, 3);
	find(v.begin(), v.end(), 3);
	find_end(v.begin(), v.end(), v2.begin(), v2.end());
	find_first_of(v.begin(), v.end(), v2.begin(), v2.end());
	find_if(v.begin(), v.end(), [](int a) { return a == 2; });
	find_if_not(v.begin(), v.end(), [](int a) { return a != 2; });
	for_each(v.begin(), v.end(), [](int x) { return x + 1; });
	generate(v.begin(), v.end(), rand);
	generate_n(v.begin(), 3, rand);
	includes(v.begin(), v.end(), v2.begin(), v2.end());
	inplace_merge(v.begin(), v.begin() + 3, v.end(), [](int elem1, int elem2) {
		return abs(elem1) - abs(elem2);
		});
	is_heap(v.begin(), v.end());
	is_heap_until(v.begin(), v.end());
	// is_partitioned(v.begin(), v.end(), std::less<int>());
	is_permutation(v.begin(), v.end(), v2.begin());
	is_sorted(v.begin(), v.end());
	is_sorted_until(v.begin(), v.end());
	iter_swap(v.begin(), v.begin() + 1);
	lexicographical_compare(v.begin(), v.end(), v2.begin(), v2.end());
	lower_bound(vsort.begin(), vsort.end(), 3);
	make_heap(v.begin(), v.end());
	max(v, v2);
	max_element(v.begin(), v.end());
	min(v, v2);
	min_element(v.begin(), v.end());
	minmax_element(v.begin(), v.end());
	minmax(v.begin(), v.end());
	mismatch(v.begin(), v.end(), v2.begin());
	move(v.begin(), v.end(), v2.begin());
	move_backward(v.begin(), v.end(), v2.end());
	next_permutation(v.begin(), v.end());
	nth_element(v.begin(), v.begin() + 3, v.end());
	none_of(v.begin(), v.end(), [](int a) { return a <= 2; });
	partial_sort(v.begin(), v.begin() + 3, v.end());
	partial_sort_copy(v.begin(), v.end(), v2.begin(), v2.end());
	partition(v.begin(), v.end(), [](int a) { return a <= 2; });
	partition_copy(v.begin(), v.end(), v2.begin(), v2.end(), [](int a) { return a <= 2; });
	partition_point(v.begin(), v.end(), [](int a) -> bool { return a <= 2; });
	pop_heap(v.begin(), v.end());
	prev_permutation(v.begin(), v.end());
	push_heap(v.begin(), v.end());
	random_shuffle(v.begin(), v.end());
	remove(v.begin(), v.end(), 3);
	remove_copy(v.begin(), v.end(), v2.begin(), 3);
	remove_copy_if(v.begin(), v.end(), v2.begin(), [](int a) -> bool { return a <= 2; });
	remove_if(v.begin(), v.end(), mygreater);
	replace(v.begin(), v.end(), 2, 3);
	replace_copy(v.begin(), v.end(), v2.begin(), 2, 3);
	replace_copy_if(v.begin(), v.end(), v2.begin(), mygreater, 3);
	replace_if(v.begin(), v.end(), mygreater, 5);
	reverse(v.begin(), v.end());
	reverse_copy(v.begin(), v.end(), v2.begin());
	rotate(v.begin(), v.begin() + 1, v.end());
	rotate_copy(v.begin(), v.begin() + 1, v.end(), v2.begin());
	// sample(v.begin(), v.end(), v2.begin(), v2.end(), twice);
	// search(v.begin(), v.end(), v2.begin(), v2.end(), twice);
	// search_n(v.begin(), v.end(), 3, 5, twice);
	set_difference(v.begin(), v.end(), v2.begin(), v2.end(), v.begin());
	// set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), greater<int>());
	set_symmetric_difference(v.begin(), v.end(), v2.begin(), v2.end(), v.begin());
	set_union(v.begin(), v.end(), v2.begin(), v2.end(), v.begin());
	// shuffle(v.begin(), v.end());
	sort(v.begin(), v.end());
	sort_heap(v.begin(), v.end());
	stable_partition(v.begin(), v.end(), mygreater);
	stable_sort(v.begin(), v.end());
	// stable_sort(v.begin(), v.end(), UDgreater);
	// swap(v.begin(), v.end());
	swap_ranges(v.begin(), v.end(), v2.begin());
	transform(v.begin(), v.end(), v2.begin(), MultValue<int>(5));
	unique(v.begin(), v.end());
	unique_copy(v.begin(), v.begin() + 2, v.begin() + 8);
	upper_bound(v.begin(), v.end(), 3);

	return -1;
}


