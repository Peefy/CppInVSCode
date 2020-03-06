
#include "msvcdoc.h"
// <a>
#include <algorithm>
#include <allocators>
#include <any>
#include <array>
#include <atomic>
// <b>
#include <bitset>
// <c>
#include <cassert>
#include <ccomplex>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <codecvt>
#include <complex>
#include <condition_variable>
#include <csetjmp>
#include <csignal>
#include <cstdalign>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <cuchar>
// #include <cvt-wbuffer>
// #include <cvt-wstring>
#include <cwchar>
#include <cwctype>
// <d>
#include <deque>
// <e>
#include <exception>
#include <execution>
// <f>
#include <filesystem>
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
// <h>
#include <hash_map>
#include <hash_set>
// <i>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
// <l>
#include <limits>
#include <list>
#include <locale>
// <m>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
// <n>
#include <new>
#include <numeric> 
// <o>
#include <optional>
#include <ostream>
// <q>
#include <queue>
// <r>
#include <random>
#include <radio>
#include <regex>
// <s>
#include <scoped_allocator>
#include <set>
#include <shared_mutex>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <string_view>
#include <strstream>
#include <system_error>
// <t>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
// <u>
#include <unordered_map>
#include <unordered_set>
#include <utility>
// <v>
#include <valarray>
#include <variant>
#include <vector>

using namespace std;

template <typename T, int N = 10>
struct A
{
	T x;
	A()
	{
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
	Document(const Document &) = delete;
	// 删除赋值构造函数
	Document &operator=(const Document &) = delete;
	Document &operator=(const Document &) volatile = delete;
};

template <typename _Iter>
void show_vector(_Iter start, _Iter end)
{
	cout << "[ ";
	for (; start != end; start++)
		cout << *start << " ";
	cout << "]" << endl;
}

template <typename Type>
class MultValue
{
private:
	Type _factor;
public:
	MultValue ( const Type& value ) : _factor ( value ) { }
	Type operator() (Type& elem) const {
        return elem * _factor;
    }
};

void header_algorithm() {
	// !#include <algorithm> 容器算法，排序，查找，拷贝，替换，堆操作等。
	/*
	* adjacent_find	搜索相等或满足指定条件的两个相邻元素。
	* all_of	当给定范围内的每个元素都存在条件时，返回true 。
	* any_of	如果在指定的元素范围内至少出现一次条件，则返回 true 。
	* binary_search	测试已排序的范围中是否有等于指定值的元素，或在二元谓词指定的意义上与指定值等效的元素。
	* copy	将一个源范围中的元素值分配到目标范围，循环访问元素的源序列并将它们分配在一个向前方向的新位置。
	* copy_backward	将一个源范围中的元素值分配到目标范围，循环访问元素的源序列并将它们分配在一个向后方向的新位置。
	* copy_if	复制给定范围中的所有元素，这些元素对指定条件测试true
	* copy_n	复制指定数量的元素。
	* count	返回范围中其值与指定值匹配的元素的数量。
	* count_if	返回范围中其值与指定条件匹配的元素的数量。
	* equal	逐个元素比较两个范围是否相等或是否在二元谓词指定的意义上等效。
	* equal_range	在排序的范围中查找符合以下条件的位置对：第一个位置小于或等效于指定元素的位置，第二个位置大于此元素位置，等效意义或用于在序列中建立位置的排序可通过二元谓词指定。
	* fill	将相同的新值分配给指定范围中的每个元素。
	* fill_n	将新值分配给以特定元素开始的范围中的指定数量的元素。
	* find	在范围中找到具有指定值的元素的第一个匹配项位置。
	* find_end	在范围中查找与指定序列相同的最后一个序列，或在二元谓词指定的意义上等效的最后一个序列。
	* find_first_of	在目标范围中搜索若干值中任意值的第一个匹配项，或搜索在二元谓词指定的意义上等效于指定元素集的若干元素中任意元素的第一个匹配项。
	* find_if	在范围中找到满足指定条件的元素的第一个匹配项位置。
	* find_if_not	返回指示的范围中不满足条件的第一个元素。
	* for_each	将指定的函数对象按向前顺序应用于范围中的每个元素并返回此函数对象。
	* for_each_n
	* generate	将函数对象生成的值分配给范围中的每个元素。
	* generate_n	将函数对象生成的值分配给范围中指定数量的元素，并返回到超出最后一个分配值的下一位置。
	* includes	测试一个排序的范围是否包含另一排序范围中的所有元素，其中元素之间的排序或等效条件可通过二元谓词指定。
	* inplace_merge	将两个连续的排序范围中的元素合并为一个排序范围，其中排序条件可通过二元谓词指定。
	* is_heap	如果指定范围中的元素形成堆，则返回 true 。
	* is_heap_until	如果指定的范围形成堆直到最后一个元素，则返回true 。
	* is_partitioned	如果给定范围中对某个条件测试true的所有元素在任何测试false的元素之前，则返回true 。
	* is_permutation	确定给定范围的元素是否形成有效排列。
	* is_sorted	如果指定范围中的元素按顺序排序，则返回 true 。
	* is_sorted_until	如果指定范围中的元素按顺序排序，则返回 true 。
	* iter_swap	交换由一对指定迭代器引用的两个值。
	* lexicographical_compare	逐个元素比较两个序列以确定其中的较小序列。
	* lower_bound	在排序的范围中查找其值大于或等效于指定值的第一个元素的位置，其中排序条件可通过二元谓词指定。
	* make_heap	将指定范围中的元素转换到第一个元素是最大元素的堆中，其中排序条件可通过二元谓词指定。
	* max	比较两个对象并返回较大对象，其中排序条件可通过二元谓词指定。
	* max_element	在指定范围中查找最大元素的第一个匹配项，其中排序条件可通过二元谓词指定。
	* merge	将两个排序的源范围中的所有元素合并为一个排序的目标范围，其中排序条件可通过二元谓词指定。
	* min	比较两个对象并返回较小对象，其中排序条件可通过二元谓词指定。
	* min_element	在指定范围中查找最小元素的第一个匹配项，其中排序条件可通过二元谓词指定。
	* minmax	比较两个输入参数，并按最小到最大的顺序将它们作为参数对返回。
	* minmax_element	在一次调用中执行 min_element 和 max_element 执行的操作。
	* mismatch	逐个元素比较两个范围是否相等或是否在二元谓词指定的意义上等效，并找到出现不同的第一个位置。
	* <alg> move	移动与指定范围关联的元素。
	* move_backward	将一个迭代器的元素移动到另一迭代器。 移动从指定范围的最后一个元素开始，并在此范围的第一个元素结束。
	* next_permutation	重新排序范围中的元素，以便使用按字典顺序的下一个更大排列（如果有）替换原有排序，其中“下一个”的意义可通过二元谓词指定。
	* none_of	当给定范围内的元素内从不出现条件时，返回true 。
	* nth_element	对范围内的元素分区，正确找到范围中序列的第 n 个元素，以使序列中位于此元素之前的所有元素小于或等于此元素，位于此元素之后的所有元素大于或等于此元素。
	* partial_sort	将范围中指定数量的较小元素按非降序顺序排列，或根据二元谓词指定的排序条件排列。
	* partial_sort_copy	将源范围中的元素复制到目标范围，其中源元素按降序或二元谓词指定的其他顺序排序。
	* partition	将范围中的元素分为两个不相交的集，满足一元谓词的元素在不满足一元谓词的元素之前。
	* partition_copy	将条件为true的元素复制到一个目标，并将条件为false的元素复制到另一个目标。 元素必须来自于指定范围。
	* partition_point	返回给定范围中不满足条件的第一个元素。 元素经过排序，满足条件的元素在不满足条件的元素之前。
	* pop_heap	移除从堆顶到范围中倒数第二个位置之间的最大元素，然后将剩余元素形成新堆。
	* prev_permutation	重新排序范围中的元素，以便使用按字典顺序的下一个更大排列（如果有）替换原有排序，其中“下一个”的意义可通过二元谓词指定。
	* push_heap	将范围末尾的元素添加到包括范围中前面元素的现有堆中。
	* random_shuffle	将范围中 N 个元素的序列重新排序为随机 N! 种序列中的 可能排列之一。
	* remove	从给定范围中消除指定值，而不影响剩余元素的顺序，并返回不包含指定值的新范围的末尾。
	* remove_copy	将源范围中的元素复制到目标范围（不复制具有指定值的元素），而不影响剩余元素的顺序，并返回新目标范围的末尾。
	* remove_copy_if	将源范围中的元素复制到目标范围（不复制满足谓词的元素），而不影响剩余元素的顺序，并返回新目标范围的末尾。
	* remove_if	从给定范围中消除满足谓词的元素，而不影响剩余元素的顺序，并返回不包含指定值的新范围的末尾。
	* replace	检查范围中的每个元素，并替换与指定值匹配的元素。
	* replace_copy	检查源范围中的每个元素，并替换与指定值匹配的元素，同时将结果复制到新的目标范围。
	* replace_copy_if	检查源范围中的每个元素，并替换满足指定谓词的元素，同时将结果复制到新的目标范围。
	* replace_if	检查范围中的每个元素，并替换满足指定谓词的元素。
	* reverse	反转范围中元素的顺序。
	* reverse_copy	反转源范围中元素的顺序，同时将这些元素复制到目标范围
	* rotate	交换两个相邻范围中的元素。
	* rotate_copy	交换源范围中两个相邻范围内的元素，并将结果复制到目标范围。
	* search	在目标范围中搜索其元素与给定序列中的元素相等或在二元谓词指定的意义上等效于给定序列中的元素的序列的第一个匹配项。
	* search_n	在范围中搜索具有特定值或按二元谓词的指定与此值相关的指定数量的元素。
	* set_difference	将属于一个排序的源范围、但不属于另一排序的源范围的所有元素相并到一个排序的目标范围，其中排序条件可通过二元谓词指定。
	* set_intersection	将属于两个排序的源范围的所有元素相并为一个排序的目标范围，其中排序条件可通过二元谓词指定。
	* set_symmetric_difference	将属于一个而不是两个排序的源范围的所有元素相并为一个排序的目标范围，其中排序条件可通过二元谓词指定。
	* set_union	将至少属于两个排序的源范围之一的所有元素相并为一个排序的目标范围，其中排序条件可通过二元谓词指定。
	* sort	将指定范围中的元素按非降序顺序排列，或根据二元谓词指定的排序条件排列。
	* shuffle	使用随机数生成器重新排列给定范围中的元素。
	* sort_heap	将堆转换为排序的范围。
	* stable_partition	将范围中的元素分为两个不相交的集，满足一元谓词的元素在不满足一元谓词的元素之前，并保留等效元素的相对顺序。
	* stable_sort	将指定范围中的元素按非降序顺序排列，或根据二元谓词指定的排序条件排列，并保留等效元素的相对顺序。
	* swap	在两种类型的对象之间交换元素值，将第一个对象的内容分配给第二个对象，将第二个对象的内容分配给第一个对象。
	* swap_ranges	将一个范围中的元素与另一大小相等的范围中的元素交换。
	* transform	将指定的函数对象应用于源范围中的每个元素或两个源范围中的元素对，并将函数对象的返回值复制到目标范围。
	* unique	移除指定范围中彼此相邻的重复元素。
	* unique_copy	将源范围中的元素复制到目标范围，彼此相邻的重复元素除外。
	* upper_bound	在排序的范围中查找其值大于指定值的第一个元素的位置，其中排序条件可通过二元谓词指定。
	*/
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
}

void header_allocators() {
	// !<allocators> 提供六种分配器模板，可用于为基于节点的容器选择内存管理策略。
	/*
	* allocator_newdel
	* allocator_unbounded
	* allocator_fixed_size
	* allocator_variable_size
	* allocator_suballoc
	* allocator_chunklist
	*/
	// !ALLOCATOR_DECL(cache, sync, name) 该宏将生成一个模板定义
	// * CACHE_CHUNKLIST 生成 stdext::allocators::cache_chunklist<sizeof(Type)>。
	// * CACHE_FREELIST 生成 stdext::allocators::cache_freelist<sizeof(Type), max>。
	// * CACHE_SUBALLOC 生成 stdext::allocators::cache_suballoc<sizeof(Type)>。
	// * SYNC_DEFAULT 生成同步筛选器。

	// std::list<int, stdext::allocators::allocator_chunklist<int> > _List0;

	// ALLOCATOR_DECL(CACHE_CHUNKLIST, stdext::allocators::sync_per_thread, Alloc);
    // std::list<int, alloc<int> > _List1;

	// <allocators> 提供以下缓存模板：
	/*
	* cache_freelist
	* cache_suballoc
	* cache_chunklist
	*/

	// <allocators> 提供以下同步筛选器：
	/*
	* sync_none
	* sync_per_container
	* sync_per_thread
	* sync_shared
	*/

	// <allocators> 提供以下提供以下 max 类：
	/*
	* max_none
	* max_unbounded
	* max_fixed_size
	* max_variable_size
	*/

	// <allocators> 提供以下提供以下 运算符：
	/*
	* operator!= (<allocators>)  测试指定类的分配器对象之间是否不相等。
	* operator== (<allocators>)  测试指定类的分配器对象之间是否相等。
	*/

	// <allocators> 提供以下提供以下 类：
	/*
	* allocator_base	定义基类和常用函数需要从同步筛选器创建一个用户定义的分配器。
	* allocator_chunklist	描述一个对象，用于管理使用缓存类型为 cache_chunklist 的对象的存储分配和释放。
	* allocator_fixed_size	描述一个对象，用于管理由 max_fixed_size 所管理的长度的使用缓存类型 cache_suballoc 的类型 Type 的对象的存储分配和释放。
	* allocator_newdel	实现一个分配器，该分配器使用运算符 delete来释放内存块，使用new 运算符分配内存块。
	* allocator_suballoc	描述一个对象，用于管理使用类型 cache_suballoc 的缓存类型的类型 Type 的对象的存储分配和释放。
	* allocator_unbounded	描述一个对象，用于管理使用缓存类型为 cache_freelist 的对象类型 Type 的存储分配和释放，其长度由 max_unbounded 管理。
	* allocator_variable_size	描述一个对象，用于管理使用缓存类型为 cache_freelist 的对象类型 Type 的存储分配和释放，其长度由 max_variable_size 管理。
	* cache_chunklist	定义分配和释放单个大小内存块的块分配器。
	* cache_freelist	定义分配和释放单个大小内存块的块分配器。
	* cache_suballoc	定义分配和释放单个大小内存块的块分配器。
	* freelist	管理内存块列表。
	* max_fixed_size	描述 max 类对象，该对象将 freelist 对象限制为固定的最大长度。
	* max_none	描述 max 类对象，该对象将 freelist 对象限制为零的最大长度。
	* max_unbounded	描述 max 类对象，该对象不限制 freelist 对象的最大长度。
	* max_variable_size	描述 max 类对象，该对象将 freelist 对象限制为与已分配的内存块数大致成比例的最大长度。
	* rts_alloc	Rts_alloc 类模板描述了一个筛选器，该筛选器保存缓存实例的数组，并确定在运行时（而非编译时）用于分配和解除分配的实例。
	* sync_none	描述不提供同步的同步筛选器。
	* sync_per_container	描述为每个筛选器对象提供单独的缓存对象的同步筛选。
	* sync_per_thread	描述为每个线程提供单独的缓存对象的同步筛选器。
	* sync_shared	介绍同步筛选器，它使用互斥体来控制对所有分配器共享的缓存对象的访问。
	*/
	allocator<void> avoid;
}

void header_any() {
	any a(1);
	any b(nullptr);
	/* 
	 * emplace	设置任何值。
	 * has_value	返回 ，则返回 true如果任何具有一个值。
	 * reset	重置了任何。
	 * swap	交换两个任何对象。
	 * type	返回的任何类型。
	 * operator=	任何替换任何使用的另一个副本。
	*/
	std::out << a.has_value() << "\n";
	std::vector<std::any> anys;    
	anys.push_back(1);
	anys.push_back(2.0);
	anys.push_back(std::wstring(L"3.0"));

	for (auto& val : anys) {
    	if (val.type() == typeid(int)) {
        	std::wcout << std::any_cast<int>(val) << std::endl;
    	}
    	else if (val.type() == typeid(double)) {
        	std::wcout << std::any_cast<double>(val) << std::endl;
    	}
    	else if (val.type() == typeid(std::wstring)) {
        	std::wcout << std::any_cast<std::wstring>(val) << std::endl;
    	}
	}
}

void header_array() {
	/* 
	 * 类
     * array	存储元素的固定长度序列。
	 * tuple_element	包装数组元素的类型。
	 * tuple_size	包装数组元素的大小。
	 * 函数
	 * get	获取指定的数组元素。 
	 * swap	将一个数组的内容与另一个数组的内容进行交换。
	*/

    std::array<int, 5> arr = {1, 2, 3, 4, 5};
 
    cout << "array values: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }
    cout << std::endl;

    std::array<int, 4> c0 { 0, 1, 2, 3 };

    // display contents " 0 1 2 3"
    for (const auto& e : c0)
    {
        cout << " " << e;
    }
    cout << endl;

    // display odd elements " 1 3"
    cout << " " << get<1>(c0);
    cout << " " << get<3>(c0) << endl;

 	cout << "array[0] = " << arr[0] << std::endl;
    cout << "array.at(4) = " << arr.at(4) << std::endl;
    cout << "array.front() = " << arr.front() << std::endl;
    cout << "array.back() = " << arr.back() << std::endl;

	arr.fill(5);


    std::array<int,5> a = {10, 20, 30, 40, 50};
    std::array<int,5> b = {10, 20, 30, 40, 50};
    std::array<int,5> c = {50, 40, 30, 20, 10};
 
    if (a == b) {
        cout << "a == b" << std::endl;
    } else {
        cout << "a != b" << std::endl;
    }
 
    if (a == c) {
        cout << "a == c" << std::endl;
    } else {
        cout << "a != c" << std::endl;
    }
 
    if (a < c) {
        cout << "a < c" << std::endl;
    } else {
        cout << "a >= c" << std::endl;
    }

  	std::array<int,3> myarray = {10, 20, 30};
    std::tuple<int, int, int> mytuple (10, 20, 30);
 
    std::tuple_element<0, decltype(myarray)>::type myelement;  // int myelement
 
    myelement = std::get<2>(myarray);
    std::get<2>(myarray) = std::get<0>(myarray);
    std::get<0>(myarray) = myelement;
 
    std::cout << "first element in myarray: " << std::get<0>(myarray) << std::endl;
    std::cout << "first element in mytuple: " << std::get<0>(mytuple) << std::endl;

}

void header_atomic() {
	/*
     * atomic 结构	描述对存储值执行原子操作的对象。
	 * atomic_flag 结构	描述一个对象，该对象以原子方式设置并清除布尔型标志。
	 * memory_order 枚举	为内存位置上的同步操作提供符号名称。 这些操作将影响一个线程内的分配如何在另一个线程内变得可见。
	 * atomic_compare_exchange_strong	执行原子比较和交换操作。
	 * atomic_compare_exchange_strong_explicit	执行原子比较和交换操作。
	 * atomic_compare_exchange_weak	执行弱原子比较和交换操作。
	 * atomic_compare_exchange_weak_explicit	执行弱原子比较和交换操作。
	 * atomic_exchange	替换存储值。
	 * atomic_exchange_explicit	替换存储值。
	 * atomic_fetch_add	将指定的值添加到现有存储值。
	 * atomic_fetch_add_explicit	将指定的值添加到现有存储值。
	 * atomic_fetch_and	对指定值和现有存储值执行按位 and。
	 * atomic_fetch_and_explicit	对指定值和现有存储值执行按位 and。
	 * atomic_fetch_or	对指定值和现有存储值执行按位 or。
	 * atomic_fetch_or_explicit	对指定值和现有存储值执行按位 or。
	 * atomic_fetch_sub	从现有存储值减去指定的值。
	 * atomic_fetch_sub_explicit	从现有存储值减去指定的值。
	 * atomic_fetch_xor	对指定值和现有存储值执行按位 exclusive or。
	 * atomic_fetch_xor_explicit	对指定值和现有存储值执行按位 exclusive or。
	 * atomic_flag_clear	将 atomic_flag 对象中的标志设置为false。
	 * atomic_flag_clear_explicit	将 atomic_flag 对象中的标志设置为false。
	 * atomic_flag_test_and_set	将 atomic_flag 对象中的标志设置为true。
	 * atomic_flag_test_and_set_explicit	将 atomic_flag 对象中的标志设置为true。
	 * atomic_init	设置 atomic 对象中存储的值。
	 * atomic_is_lock_free	指定对指定对象执行的原子操作是否为无锁。
	 * atomic_load	以原子方式检索一个值。
	 * atomic_load_explicit	以原子方式检索一个值。
	 * atomic_signal_fence	充当 fence，用于在调用线程中信号处理程序在同一线程中执行的 fence 之间建立内存排序要求。
	 * atomic_store	以原子方式存储一个值。
	 * atomic_store_explicit	以原子方式存储一个值。
	 * atomic_thread_fence	充当就其他 fence 建立内存排序要求的 fence。
	 * kill_dependency	中断可能的依赖关系链。
	*/
	std::atomic<bool> ready(false);    // can be checked without being set
	std::atomic_flag winner = ATOMIC_FLAG_INIT;    // always set when checked
	auto count1m = [](int id) -> void
	{
    	while (!ready) {
        	std::this_thread::yield();
    	} // 等待主线程中设置 ready 为 true.
    	for (int i = 0; i < 1000000; ++i) {
    	} // 计数.

    	// 如果某个线程率先执行完上面的计数过程，则输出自己的 ID.
    	// 此后其他线程执行 test_and_set 是 if 语句判断为 false，
    	// 因此不会输出自身 ID.
    	if (!winner.test_and_set()) {
        	std::cout << "thread #" << id << " won!\n";
    	}
	};
	std::vector<std::thread> threads;
    std::cout << "spawning 10 threads that count to 1 million...\n";
    for (int i = 1; i <= 10; ++i)
        threads.push_back(std::thread(count1m, i));
    ready = true;
    for (auto & th:threads)
        th.join();
}

int msvc_main() {
	cout << "Hello MSVC C++ library!\n";
	header_algorithm();
	header_allocators();
	return -1;
}
