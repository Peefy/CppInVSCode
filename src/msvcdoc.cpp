
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
#include <cerrno>
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
using namespace std::chrono;

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

void header_bitset() {
	/*
	 * bitset	类模板描述了一种对象类型，该对象存储由固定数量的位构成的序列，
	 * 这些位提供一种压缩方法来保留一组项或条件的标志。
	*/
   bitset<5> b1 ( 6 );
   bool b, rb;

   cout << "The original bitset b1( 6 ) is: ( "<< b1 << " )"
        << endl;

   b = b1.any ( );

   if ( b )
      cout << "At least one of the bits in bitset is set to 1."
           << endl;
   else
      cout << "None of the bits in bitset are set to 1."
           << endl;

   bitset<5> rb1;
   rb1 = b1.reset ( );

   cout << "The reset bitset is: ( "<< b1 << " )"
        << endl;

   rb = rb1.any ( );

   if ( rb )
      cout << "At least one of the bits in the reset bitset "
           << "are set to 1." << endl;
   else
      cout << "None of the bits in bitset b1 are set to 1."
           << endl;

	string str("1111111000000011001101");
	bitset<32> bitvec5(str, 5, 4); // 4 bits starting at str[5], 1100
	bitset<32> bitvec6(str, str.size() - 4);     // use last 4 characters
	
}

void header_cassert() {
	/*
	 * 包括 C 标准库头文件<assert > 并将关联名称添加std到命名空间。 
	 * 包括此头文件可确保在std命名空间中声明使用 C 标准库头文件中的外部链接声明的名称。
	*/
	assert(1 == 1);

}

void header_ccomplex() {
	/* 
	 * 定义了C语言的complex.h库，复数库
	 * C++17中被弃用，C++20中被删除
	*/

}

void header_cctype() {
	/* 
	 * 包含标准 C 库头文件 <ctype.h> 并将关联名称添加到 std 命名空间。
	 * int isalnum(int c);
	 * int isalpha(int c);
	 * int isblank(int c);
	 * int iscntrl(int c);
	 * int isdigit(int c);
	 * int isgraph(int c);
	 * int islower(int c);
	 * int isprint(int c);
	 * int ispunct(int c);
	 * int isspace(int c);
	 * int isupper(int c);
	 * int isxdigit(int c);
	 * int tolower(int c);
	 * int toupper(int c);
	*/
	cout << isalpha('1') << " ";
	cout << islower('a') << " ";
	cout << isalpha('1') << " " << "\n";
}

void header_cerrno() {
	/*
	 * 包括 C 标准库头文件<errno > 并将关联名称添加std到命名空间。 
	*/
}

void header_cfenv() {
	/*
	 * 包含标准 C 库头文件 <fenv.h> 并将关联名称添加到 std 命名空间。
	*/
}

void header_cfloat() {
	/*
	 * 包含标准 C 库头文件 <float.h>
	*/
}

void header_chrono() {
	/*
	 * < chrono > 定义表示和操作持续时间及时刻的类和函数。
	 * duration 类	描述保持时间间隔的类型。
	 * time_point 类	描述表示时间点的类型。
	 * common_type 结构	介绍 duration 和 time_point 实例化的类模板common_type的专用化。
	 * duration_values 结构	提供 duration 模板参数 Rep 的特定值。
	 * high_resolution_clock 结构	
	 * steady_clock 结构	表示 steady 时钟。
	 * system_clock 结构	表示基于系统实时时钟的时钟类型。
	 * treat_as_floating_point 结构	指定是否可将一种类型视为浮点类型。
	 * duration_cast	将 duration 对象转换为指定类型。
	 * time_point_cast	将 time_point 对象转换为指定类型。
	 * typedef duration<long long, nano> nanoseconds;	计时周期为1毫微秒的 duration 类型的同义词。
	 * typedef duration<long long, micro> microseconds;	计时周期为1微秒的 duration 类型的同义词。
	 * typedef duration<long long, milli> milliseconds;	计时周期为1毫秒的 duration 类型的同义词。
	 * typedef duration<long long> seconds;	计时周期为1秒的 duration 类型的同义词。
	 * typedef duration<int, ratio<60> > minutes;	计时周期为1分钟的 duration 类型的同义词。
	 * typedef duration<int, ratio<3600> > hours;	计时周期为1小时的 duration 类型的同义词。
	*/
	constexpr auto day = 24h;
	constexpr auto week = 24h* 7;
	constexpr auto my_duration_unit = 108ms;
	std::this_thread::sleep_for(10ms);

	using std::chrono::system_clock;

    std::chrono::duration<int,std::ratio<60*60*24> > one_day (1);

    //current time
    system_clock::time_point today = system_clock::now();

    //tomorrow time
    system_clock::time_point tomorrow = today + one_day;

    //convert time type   
    time_t tmTomorrow = system_clock::to_time_t ( tomorrow );

    //time string
    std::cout << "tomorrow will be: " << ctime(&tmTomorrow);

    struct tm *p;   
    p = localtime(&tmTomorrow); /*转换为struct tm结构的当地时间*/  
    printf("%d/%d/%d ", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday); 

}

void header_cinttypes() {
	/*
	 * 包含标准 C 库头文件 <inttypes.h>。 
	 * 包含此头文件还将包括 <cstdint>。
	*/
}

void header_ciso646() {
	/*
	 * 包括 C 标准库头文件<iso646 >, 并将关联名称添加std到命名空间。
	*/
}

void header_climits() {
	/*
	 * #define CHAR_BIT
	 * #define SCHAR_MIN
	 * #define SCHAR_MAX
	 * #define UCHAR_MAX 
	 * #define CHAR_MIN
	 * #define CHAR_MAX
	 * #define MB_LEN_MAX
	 * #define SHRT_MIN
	 * #define SHRT_MAX
	 * #define USHRT_MAX
	 * #define INT_MIN
	 * #define INT_MAX
	 * #define UINT_MAX
	 * #define LONG_MIN
	 * #define LONG_MAX
	 * #define ULONG_MAX
	 * #define LLONG_MIN
	 * #define LLONG_MAX
	 * #define ULLONG_MAX
	*/
}

void header_clocale() {
	/*
	 * struct lconv;
	 * char* setlocale(int category, const char* locale);
	 * lconv* localeconv();
	*/
}

void header_cmath() {
	/*
	 * #include <math.h>  
	*/
	/* 
	 * float acos(float x);
	 * double acos(double x);
	 * long double acos(long double x);
	 * float acosf(float x);
	 * long double acosl(long double x);
	 * float asin(float x);
	 * double asin(double x);
	 * long double asin(long double x);
	 * float asinf(float x);
	 * long double asinl(long double x);
	 * float atan(float x);
	 * double atan(double x);
	 * long double atan(long double x);
	 * float atanf(float x);
	 * long double atanl(long double x);
	 * float atan2(float y, float x);
	 * double atan2(double y, double x);
	 * long double atan2(long double y, long double x);
	 * float atan2f(float y, float x);
	 * long double atan2l(long double y, long double x);
	 * float cos(float x);
	 * double cos(double x);
	 * long double cos(long double x);
	 * float cosf(float x);
	 * long double cosl(long double x);
	 * float sin(float x);
	 * double sin(double x);
	 * long double sin(long double x);
	 * float sinf(float x);
	 * long double sinl(long double x);
	 * float tan(float x);
	 * double tan(double x);
	 * long double tan(long double x);
	 * float tanf(float x);
	 * long double tanl(long double x);
	 * float acosh(float x);
	 * double acosh(double x);
	 * long double acosh(long double x);
	 * float acoshf(float x);
	 * long double acoshl(long double x);
	 * float asinh(float x);
	 * double asinh(double x);
	 * long double asinh(long double x);
	 * float asinhf(float x);
	 * long double asinhl(long double x);
	 * float atanh(float x);
	 * double atanh(double x);
	 * long double atanh(long double x);
	 * float atanhf(float x);
	 * long double atanhl(long double x);
	 * float cosh(float x);
	 * double cosh(double x);
	 * long double cosh(long double x);
	 * float coshf(float x);
	 * long double coshl(long double x);
	 * float sinh(float x);
	 * double sinh(double x);
	 * long double sinh(long double x);
	 * float sinhf(float x);
	 * long double sinhl(long double x);
	 * float tanh(float x);
	 * double tanh(double x);
	 * long double tanh(long double x);
	 * float tanhf(float x);
	 * long double tanhl(long double x);
	 * float exp(float x);
	 * double exp(double x);
	 * long double exp(long double x);
	 * float expf(float x);
	 * long double expl(long double x);
	 * float exp2(float x);
	 * double exp2(double x);
	 * long double exp2(long double x);
	 * float exp2f(float x);
	 * long double exp2l(long double x);
	 * float expm1(float x);
	 * double expm1(double x);
	 * long double expm1(long double x);
	 * float expm1f(float x);
	 * long double expm1l(long double x);
	 * float frexp(float value, int* exp);
	 * double frexp(double value, int* exp);
	 * long double frexp(long double value, int* exp);
	 * float frexpf(float value, int* exp);
	 * long double frexpl(long double value, int* exp);
	 * int ilogb(float x);
	 * int ilogb(double x);
	 * int ilogb(long double x);
	 * int ilogbf(float x);
	 * int ilogbl(long double x);
	 * float ldexp(float x, int exp);
	 * double ldexp(double x, int exp);
	 * long double ldexp(long double x, int exp);
	 * float ldexpf(float x, int exp);
	 * long double ldexpl(long double x, int exp);
	 * float log(float x);
	 * double log(double x);
	 * long double log(long double x);
	 * float logf(float x);
	 * long double logl(long double x);
	 * float log10(float x);
	 * double log10(double x);
	 * long double log10(long double x);
	 * float log10f(float x);
	 * long double log10l(long double x);
	 * float log1p(float x);
	 * double log1p(double x);
	 * long double log1p(long double x);
	 * float log1pf(float x);
	 * long double log1pl(long double x);
	 * float log2(float x);
	 * double log2(double x);
	 * long double log2(long double x);
	 * float log2f(float x);
	 * long double log2l(long double x);
	 * float logb(float x);
	 * double logb(double x);
	 * long double logb(long double x);
	 * float logbf(float x);
	 * long double logbl(long double x);
	 * float modf(float value, float* iptr);
	 * double modf(double value, double* iptr);
	 * long double modf(long double value, long double* iptr);
	 * float modff(float value, float* iptr);
	 * long double modfl(long double value, long double* iptr);
	 * float scalbn(float x, int n);
	 * double scalbn(double x, int n);
	 * long double scalbn(long double x, int n);
	 * float scalbnf(float x, int n);
	 * long double scalbnl(long double x, int n);
	 * float scalbln(float x, long int n);
	 * double scalbln(double x, long int n);
	 * long double scalbln(long double x, long int n);
	 * float scalblnf(float x, long int n);
	 * long double scalblnl(long double x, long int n);
	 * float cbrt(float x);
	 * double cbrt(double x);
	 * long double cbrt(long double x);
	 * float cbrtf(float x);
	 * long double cbrtl(long double x);
	 */

}

void header_codecvt() { 
	/* 
	 * 在此头文件中声明的区域设置 facet 在几个字符编码之间进行转换。 
	 * 对于宽字符（存储在固定大小整数程序中）：
	 * UCS-4 是在程序内作为 32 位整数的编码的 Unicode (ISO 10646)。
	 * UCS-2 是在程序内作为 16 位整数的编码的 Unicode。
	 * UTF-16 是在程序内作为任意一个或两个 16 位整数的编码的 Unicode。 
	 * （请注意，这不符合标准 C 或标准 C++ 的有效宽字符编码的全部要求。 不过，它仍被广泛使用。）
	 * 对于字节流（存储在文件中，以字节序列的形式传输，或存储于char数组中的程序内）：
	 * Utf-8 是字节流中已编码的 Unicode，为具有确定性字节顺序的一个或多个八位字节。
	 * UTF 16LE 是字节流中作为 UTF-16 已编码的 Unicode，每个 16 位整数表示为两个八位字节，不重要字节优先。
	 * UTF 16BE 是字节流中作为 UTF-16 已编码的 Unicode，每个 16 位整数表示为两个八位字节，重要字节优先。
	 * 
	 * 枚举 
	 * codecvt_mode	指定区域设置 facet 的配置信息。
	 * 
	 * 类
	 * codecvt_utf8	表示在编码为 UCS-2 或 UCS-4 的宽字符和编码为 UTF-8 的字节流之间转换的区域设置 facet。
	 * codecvt_utf8_utf16	表示在编码为 UTF-16 的宽字符和编码为 UTF-8 的字节流之间转换的区域设置 facet。
	 * codecvt_utf16	表示在编码为 UCS-2 或 UCS-4 的宽字符和编码为 UTF-16LE 或 UTF-16BE 的字节流之间转换的区域设置 facet。
	 */
}

void header_complex() { 
	/*
	 * 定义容器类模板 complex 及其支持的模板。
	 *  一个复数是有序的实数对。 在纯粹几何术语中，复平面是真实的二维平面。 
	 * 将复平面与实平面区分开来的特质在于它具有其他代数结构。 这种代数结构有加法和乘法基本操作。
	 * 带复数加法和复数乘法操作的复数集在标准代数意义上为域。
	 * 
	 * 函数
	 * abs	计算复数的模。
	 * acos	
	 * acosh	
	 * arg	从复数中提取自变量。
	 * asin	
	 * asinh	
	 * atan	
	 * atanh	
	 * conj	返回复数的复数共轭。
	 * cos	返回复数的余弦值。
	 * cosh	返回复数的双曲余弦值。
	 * exp	返回复数的指数函数。
	 * imag	提取复数的虚分量。
	 * log	返回复数的自然对数。
	 * log10	返回复数的以 10 为底的对数。
	 * norm	提取复数的范数。
	 * polar	返回以笛卡尔坐标形式表示的，对应于指定模数和自变量的复数。
	 * pow	计算通过进行底数为复数的另一个复数次幂运算获得的复数。
	 * tfsbuild.proj	
	 * real	提取复数的实分量。
	 * sin	返回复数的正弦值。
	 * sinh	返回复数的双曲正弦值。
	 * sqrt	返回复数的平方根。
	 * tan	返回复数的正切值。
	 * tanh	返回复数的双曲正切值。
	 * 
	 * 运算符
	 * operator!=	测试两个复数是否不相等，这两个复数或其中一个可能属于其类型与实部和虚部的类型相同的子集。
	 * operator*	将两个复数相乘，这两个复数或其中一个可能属于其类型与实部和虚部的类型相同的子集。
	 * operator+	将两个复数相加，这两个复数或其中一个可能属于其类型与实部和虚部的类型相同的子集。
	 * operator-	将两个复数相减，这两个复数或其中一个可能属于其类型与实部和虚部的类型相同的子集。
	 * operator/	将两个复数相除，这两个复数或其中一个可能属于其类型与实部和虚部的类型相同的子集。
	 * operator<<	一个模板函数，用于将复数插入输出流。
	 * operator==	测试两个复数是否相等，这两个复数或其中一个可能属于其类型与实部和虚部的类型相同的子集。
	 * operator>>	一个模板函数，用于从输入流提取复值。
	 * 
	 * 类
	 * complex<double>	显式专用化的类模板描述了一个对象，该对象存储两个类型的对象（均为double类型），第一个对象表示复数的实部，第二个对象表示虚部。
	 * complex<float>	显式专用化的类模板描述了一个对象，该对象存储有序对象对，这两种类型都是float类型，第一个对象表示复数的实部，第二个对象表示虚部。
	 * complex<long double>	显式专用化的类模板描述了一个对象，该对象存储两个类型为long double的有序对象对，第一个对象表示复数的实部，第二个对象表示复数的虚部。
	 * complex	类模板描述了一个对象，该对象用于表示复数系统和执行复杂算术运算。
	 */
   using namespace std;
   double pi = 3.14159265359;

   // Complex numbers can be entered in polar form with
   // modulus and argument parameter inputs but are
   // stored in Cartesian form as real & imag coordinates
   complex <double> c1 ( polar ( 5.0 ) );   // Default argument = 0
   complex <double> c2 ( polar ( 5.0 , pi / 6 ) );
   complex <double> c3 ( polar ( 5.0 , 13 * pi / 6 ) );
   cout << "c1 = polar ( 5.0 ) = " << c1 << endl;
   cout << "c2 = polar ( 5.0 , pi / 6 ) = " << c2 << endl;
   cout << "c3 = polar ( 5.0 , 13 * pi / 6 ) = " << c3 << endl;

   // The modulus and argument of a complex number can be recovered
   // using abs & arg member functions
   double absc1 = abs ( c1 );
   double argc1 = arg ( c1 );
   cout << "The modulus of c1 is recovered from c1 using: abs ( c1 ) = "
        << absc1 << endl;
   cout << "Argument of c1 is recovered from c1 using:\n arg ( c1 ) = "
        << argc1 << " radians, which is " << argc1 * 180 / pi
        << " degrees." << endl;

   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is recovered from c2 using: abs ( c2 ) = "
        << absc2 << endl;
   cout << "Argument of c2 is recovered from c2 using:\n arg ( c2 ) = "
        << argc2 << " radians, which is " << argc2 * 180 / pi
        << " degrees." << endl;

   // Testing if the principal angles of c2 and c3 are the same
   if ( (arg ( c2 ) <= ( arg ( c3 ) + .00000001) ) ||
        (arg ( c2 ) >= ( arg ( c3 ) - .00000001) ) )
      cout << "The complex numbers c2 & c3 have the "
           << "same principal arguments."<< endl;
   else
      cout << "The complex numbers c2 & c3 don't have the "
           << "same principal arguments." << endl;
}

void header_condition_variable() { 
	/*
	 * 定义类 condition_variable 和 condition_variable_any，它们用于创建等待条件变为 true 的对象。
	 * 等待条件变量的代码必须也使用 mutex。 调用线程必须在其调用等待条件变量的函数前锁定 mutex。 
	 * 然后，mutex 将在所调用的函数返回时被锁定。 mutex 在线程等待条件变为 true 时不被锁定。 
	 * 因此，没有不可预知的结果，等待条件变量的每个线程必须使用同一 mutex 对象。
	 * condition_variable_any 类型的对象可与任何类型的 mutex 一起使用。
	 * 所使用的 mutex 类型不一定提供 try_lock 方法。 
	 * condition_variable 类型的对象只能与 unique_lock<mutex> 类型的 mutex 一起使用。 
	 * 此类型的对象可能比 condition_variable_any<unique_lock<mutex>> 类型的对象快。
	 * 若要等待某个事件，首先锁定 mutex，然后调用条件变量上的其中一个 wait 方法。 wait 调用在其他线程向条件变量发出信号前将保持阻止状态。
	 * 当等待条件变量的线程在没有适当的通知的情况下变为取消阻止时发生虚假唤醒。 
	 * 若要识别此类虚假唤醒，等待条件变为 true 的代码应在代码从等待函数返回时显式检查该条件。 
	 * 这通常是通过使用循环来实现的；可以使用 wait(unique_lock<mutex>& lock, Predicate pred) 为你执行此循环。
	 * condition_variable_any 和 condition_variable 类各自拥有等待条件的三种方法。
	 * wait 等待不受限制的时间段。
	 * wait_until 在指定 time 前等待。
	 * wait_for 等待指定的 time interval。
	 * 这些方法各自拥有两个重载版本。 其中一个版本只需等待并可虚假唤醒。 而另一个版本使用其他模板参数定义谓词。 此方法不返回, 直到该谓词为true。
	 * 每个类还具有两个方法, 这些方法用于通知条件变量其条件为true。
	 * notify_one 唤醒等待条件变量的其中一个线程。
	 * notify_all 唤醒等待条件变量的所有线程。
	 * 
	 * 构造函数
	 * condition_variable	构造 condition_variable 对象。
	 * 函数
	 * 
	 * native_handle	返回表示 condition_variable 句柄的特定于实现的类型。
	 * notify_all	取消阻止正在等待 condition_variable 对象的所有线程。
	 * notify_one	取消阻止正在等待 condition_variable 对象的某个线程。
	 * 阻止线程。
	 * wait_for	阻止某个线程，并设置线程阻止的时间间隔。
	 * wait_until	阻止某个线程，并设置线程阻止的最大时间点。
	*/
}

void header_csetjmp() {
	/*
	 * 包含标准 C 库头文件 <setjmp.h> 并将关联名称添加到 std 命名空间。
	*/
}

void header_csignal() {
	/*
	 * 包含标准C头文件 <signal.h>
	*/
}

void header_cstdalign() { 
	/*
	 * 包含标准C头文件 <stdalign.h>
	 * 
	 * 宏
	 * __alignas_is_defined	可扩展到整数常数1的 C 兼容性宏。
	 * __alignof_is_defined	可扩展到整数常数1的 C 兼容性宏。
	*/
}

void header_cstdarg() { 
	/*
	 * 包含标准C头文件 <stdarg.h>
	 * namespace std {
	 *     using va_list = see below;
	 * }
	 * #define va_arg(V, P)
	 * #define va_copy(VDST, VSRC)
	 * #define va_end(V)
	 * #define va_start(V, P)
	*/
}

void header_cstdbool() { 
	/*
	 * 包含标准C头文件 <stdbool.h>
	*/
}

void header_cstddef() { 
	/*
	 * 包含标准C头文件 <stddef.h>
	 * namespace std {
	 *     using ptrdiff_t = see definition;
	 *     using size_t = see definition;
	 *     using max_align_t = see definition;
	 *     using nullptr_t = decltype(nullptr);
	 * }
	 * 
	 * #define NULL  // an implementation-defined null pointer constant
	 * #define offsetof(type, member-designator)
	 * 
	 * 参数
	 * ptrdiff_t 实现定义的有符号整数类型, 它可以保存数组对象中两个下标的差。
	 * size_t 实现定义的无符号整数类型, 该类型足够大, 足以包含任何对象的大小 (以字节为单位)。
	 * max_align_t 一个 POD 类型, 其对齐要求至少与每个标量类型的类型相同, 并且每个上下文都支持其对齐要求。
	 * nullptr_t Nullptr表达式的类型的同义词。 尽管不能采用nullptr地址, 但也可以采用作为左值的另一个nullptr_t对象的地址。
	 * 
	 * byte类
	*/
}

void header_cstdint() { 
	/*
	 * 包含标准C头文件 <stdint.h>
	 * 
	 * 宏
	 * INT_[FAST LEAST]{8 16 32 64}_MIN
	 * [U]INT_[FAST LEAST]{8 16 32 64}_MAX
	 * INT{MAX PTR}_MIN
	 * [U]INT{MAX PTR}_MAX
	 * {PTRDIFF SIG_ATOMIC WCHAR WINT}{_MAX _MIN}
	 * SIZE_MAX
	 * 
	 * [U]INT{8 16 32 64 MAX}_C
	 * 
	 * 类型
	 * namespace std {
	 *     using int8_t = signed integer type; // optional
	 *     using int16_t = signed integer type; // optional
	 *     using int32_t = signed integer type; // optional
	 *     using int64_t = signed integer type; // optional
	 *     using int_fast8_t = signed integer type;
	 *     using int_fast16_t = signed integer type;
	 *     using int_fast32_t = signed integer type;
	 *     using int_fast64_t = signed integer type;
	 *     using int_least8_t = signed integer type;
	 *     using int_least16_t = signed integer type;
	 *     using int_least32_t = signed integer type;
	 *     using int_least64_t = signed integer type;
	 *     using intmax_t = signed integer type;
	 *     using intptr_t = signed integer type; // optional
	 *     using uint8_t = unsigned integer type; // optional
	 *     using uint16_t = unsigned integer type; // optional 
	 *     using uint32_t = unsigned integer type; // optional
	 *     using uint64_t = unsigned integer type; // optional
	 *     using uint_fast8_t = unsigned integer type;
	 *     using uint_fast16_t = unsigned integer type;
	 *     using uint_fast32_t = unsigned integer type;
	 *     using uint_fast64_t = unsigned integer type;
	 *     using uint_least8_t = unsigned integer type;
	 *     using uint_least16_t = unsigned integer type;
	 *     using uint_least32_t = unsigned integer type;
	 *     using uint_least64_t = unsigned integer type;
	 *     using uintmax_t = unsigned integer type;
	 *     using uintptr_t = unsigned integer type; // optional
	 * }
	*/
}

void header_cstdio() { 
	/*
	 * 包含标准C头文件 <stdio.h>
	*/
}

void header_cstdlib() { 
	/*
	 * 包含标准C头文件 <stdlib.h>
	*/
}

void header_cstring() { 
	/*
	 * 包含标准C头文件 <string.h>
	 * 
	 * 函数
	 * void* memcpy(void* s1, const void* s2, size_t n);
	 * void* memmove(void* s1, const void* s2, size_t n);
	 * char* strcpy(char* s1, const char* s2);
	 * char* strncpy(char* s1, const char* s2, size_t n);
	 * char* strcat(char* s1, const char* s2);
	 * char* strncat(char* s1, const char* s2, size_t n);
	 * int memcmp(const void* s1, const void* s2, size_t n);
	 * int strcmp(const char* s1, const char* s2);
	 * int strcoll(const char* s1, const char* s2);
	 * int strncmp(const char* s1, const char* s2, size_t n);
	 * size_t strxfrm(char* s1, const char* s2, size_t n);
	 * const void* memchr(const void* s, int c, size_t n); 
	 * void* memchr(void* s, int c, size_t n) 
	 * const char* strchr(const char* s, int c) 
	 * char* strchr(char* s, int c) 
	 * size_t strcspn(const char* s1, const char* s2);
	 * const char* strpbrk(const char* s1, const char* s2) 
	 * char* strpbrk(char* s1, const char* s2) 
	 * const char* strrchr(const char* s, int c) 
	 * char* strrchr(char* s, int c) 
	 * size_t strspn(const char* s1, const char* s2);
	 * const char* strstr(const char* s1, const char* s2) 
	 * char* strstr(char* s1, const char* s2) 
	 * char* strtok(char* s1, const char* s2);
	 * void* memset(void* s, int c, size_t n);
	 * char* strerror(int errnum);
	 * size_t strlen(const char* s);
	*/
}

// void header_ctgmath() { }

void header_ctime() { 
	/*
	 * 包含标准C头文件 <time.h>
	*/
}

void header_cuchar() { 
	/*
	 * 包含标准C头文件 <uchar.h>
	 * 将mbstate_t和size_t std和函数c16rtomb、 c32rtomb、 mbrtoc16和mbrtoc32添加到命名空间。
	*/
}

// void header_cvt-wbuffer() { }
// void header_cvt-wstring() { }
void header_cwchar() { 
	/*
	 * 包含标准C头文件 <wchar.h>
	 * 
	 * 常量
	 * namespace std {
	 *     using size_t = see below;
	 *     using mbstate_t = see below ;
	 *     using wint_t = see below ;
	 * }
	 * #define NULL see below
	 * #define WCHAR_MAX see below
	 * #define WCHAR_MIN see below
	 * #define WEOF see below
	 * 
	 * 结构
	 * struct tm;
	 * 
	 * 函数
	 * int fwprintf(FILE* stream, const wchar_t* format, ...);
	 * int fwscanf(FILE* stream, const wchar_t* format, ...);
	 * int swprintf(wchar_t* s, size_t n, const wchar_t* format, ...);
	 * int swscanf(const wchar_t* s, const wchar_t* format, ...);
	 * int vfwprintf(FILE* stream, const wchar_t* format, va_list arg);
	 * int vfwscanf(FILE* stream, const wchar_t* format, va_list arg);
	 * int vswprintf(wchar_t* s, size_t n, const wchar_t* format, va_list arg);
	 * int vswscanf(const wchar_t* s, const wchar_t* format, va_list arg);
	 * int vwprintf(const wchar_t* format, va_list arg);
	 * int vwscanf(const wchar_t* format, va_list arg);
	 * int wprintf(const wchar_t* format, ...);
	 * int wscanf(const wchar_t* format, ...);
	 * wint_t fgetwc(FILE* stream);
	 * wchar_t* fgetws(wchar_t* s, int n, FILE* stream);
	 * wint_t fputwc(wchar_t c, FILE* stream);
	 * int fputws(const wchar_t* s, FILE* stream);
	 * int fwide(FILE* stream, int mode);
	 * wint_t getwc(FILE* stream);
	 * wint_t getwchar();
	 * wint_t putwc(wchar_t c, FILE* stream);
	 * wint_t putwchar(wchar_t c);
	 * wint_t ungetwc(wint_t c, FILE* stream);
	 * double wcstod(const wchar_t* nptr, wchar_t** endptr);
	 * float wcstof(const wchar_t* nptr, wchar_t** endptr);
	 * long double wcstold(const wchar_t* nptr, wchar_t** endptr);
	 * long int wcstol(const wchar_t* nptr, wchar_t** endptr, int base);
	 * long long int wcstoll(const wchar_t* nptr, wchar_t** endptr, int base);
	 * unsigned long int wcstoul(const wchar_t* nptr, wchar_t** endptr, int base);
	 * unsigned long long int wcstoull(const wchar_t* nptr, wchar_t** endptr, int base);
	 * wchar_t* wcscpy(wchar_t* s1, const wchar_t* s2);
	 * wchar_t* wcsncpy(wchar_t* s1, const wchar_t* s2, size_t n);
	 * wchar_t* wmemcpy(wchar_t* s1, const wchar_t* s2, size_t n);
	 * wchar_t* wmemmove(wchar_t* s1, const wchar_t* s2, size_t n);
	 * wchar_t* wcscat(wchar_t* s1, const wchar_t* s2);
	 * wchar_t* wcsncat(wchar_t* s1, const wchar_t* s2, size_t n);
	 * int wcscmp(const wchar_t* s1, const wchar_t* s2);
	 * int wcscoll(const wchar_t* s1, const wchar_t* s2);
	 * int wcsncmp(const wchar_t* s1, const wchar_t* s2, size_t n);
	 * size_t wcsxfrm(wchar_t* s1, const wchar_t* s2, size_t n);
	 * int wmemcmp(const wchar_t* s1, const wchar_t* s2, size_t n);
	 * const wchar_t* wcschr(const wchar_t* s, wchar_t c) 
	 * wchar_t* wcschr(wchar_t* s, wchar_t c) 
	 * size_t wcscspn(const wchar_t* s1, const wchar_t* s2);
	 * const wchar_t* wcspbrk(const wchar_t* s1, const wchar_t* s2) 
	 * wchar_t* wcspbrk(wchar_t* s1, const wchar_t* s2) 
	 * const wchar_t* wcsrchr(const wchar_t* s, wchar_t c) 
	 * wchar_t* wcsrchr(wchar_t* s, wchar_t c) 
	 * size_t wcsspn(const wchar_t* s1, const wchar_t* s2);
	 * const wchar_t* wcsstr(const wchar_t* s1, const wchar_t* s2) 
	 * wchar_t* wcsstr(wchar_t* s1, const wchar_t* s2) 
	 * wchar_t* wcstok(wchar_t* s1, const wchar_t* s2, wchar_t** ptr);
	 * const wchar_t* wmemchr(const wchar_t* s, wchar_t c, size_t n) 
	 * wchar_t* wmemchr(wchar_t* s, wchar_t c, size_t n) 
	 * size_t wcslen(const wchar_t* s);
	 * wchar_t* wmemset(wchar_t* s, wchar_t c, size_t n);
	 * size_t wcsftime(wchar_t* s, size_t maxsize, const wchar_t* format, const struct tm* timeptr);
	 * wint_t btowc(int c);
	 * int wctob(wint_t c);
	 * int mbsinit(const mbstate_t* ps);
	 * size_t mbrlen(const char* s, size_t n, mbstate_t* ps);
	 * size_t mbrtowc(wchar_t* pwc, const char* s, size_t n, mbstate_t* ps);
	 * size_t wcrtomb(char* s, wchar_t wc, mbstate_t* ps);
	 * size_t mbsrtowcs(wchar_t* dst, const char** src, size_t len, mbstate_t* ps);
	 * size_t wcsrtombs(char* dst, const wchar_t** src, size_t len, mbstate_t* ps);
	*/
}

void header_cwctype() { 
	/*
	 * 包含标准C头文件 <wctype.h>
	 * 
	 * 常量
	 * namespace std {
	 *     using wint_t = see below ;
	 *     using wctrans_t = see below ;
	 *     using wctype_t = see below ;
	 * }
	 * #define WEOF see below
	 * 
	 * 函数
	 * int iswalnum(wint_t wc);
	 * int iswalpha(wint_t wc);
	 * int iswblank(wint_t wc);
	 * int iswcntrl(wint_t wc);
	 * int iswdigit(wint_t wc);
	 * int iswgraph(wint_t wc);
	 * int iswlower(wint_t wc);
	 * int iswprint(wint_t wc);
	 * int iswpunct(wint_t wc);
	 * int iswspace(wint_t wc);
	 * int iswupper(wint_t wc);
	 * int iswxdigit(wint_t wc);
	 * int iswctype(wint_t wc, wctype_t desc);
	 * wctype_t wctype(const char* property);
	 * wint_t towlower(wint_t wc);
	 * wint_t towupper(wint_t wc);
	 * wint_t towctrans(wint_t wc, wctrans_t desc);
	 * wctrans_t wctrans(const char* property);
	*/
}

// <d>
void header_deque() { 
	/*
	 * 定义容器类模板 deque 和多个支持模板。
	 * 
	 * 运算符
	 * operator!=	测试运算符左侧的 deque 对象是否不等于右侧的 deque 对象。
	 * operator<	测试运算符左侧的 deque 对象是否小于右侧的 deque 对象。
	 * operator<=	测试运算符左侧的 deque 对象是否小于或等于右侧的 deque 对象。
	 * operator==	测试运算符左侧的 deque 对象是否等于右侧的 deque 对象。
	 * operator>	测试运算符左侧的 deque 对象是否大于右侧的 deque 对象。
	 * operator>=	测试运算符左侧的 deque 对象是否大于或等于右侧的 deque 对象。
	 * 
	 * 函数
	 * swap	交换两个 deque 的元素。
	 * 
	 * 类
	 * deque 类	序列容器的类模板，用于排列线性排列中给定类型的元素，
	 * 例如向量，允许快速随机访问任何元素和在容器后面高效插入和删除。
	 * 
	 * 函数
	 * assign	将元素从 deque 中清除并将新的元素序列复制到目标 deque。
	 * at	返回对 deque 中指定位置的元素的引用。
	 * back	返回对 deque 中最后一个元素的引用。
	 * begin	返回发现 deque 中第一个元素的随机访问迭代器。
	 * cbegin	返回一个指向 deque 中第一个元素的常量迭代器。
	 * cend	返回一个随机访问常量迭代器，它指向刚超出 deque末尾的位置。
	 * clear	清除 deque 的所有元素。
	 * crbegin	返回一个指向以相反顺序查看的 deque 中的第一个元素的随机访问常量迭代器。
	 * crend	返回一个指向以相反顺序查看的 deque 中的第一个元素的随机访问常量迭代器。
	 * emplace	将就地构造的元素插入到指定位置的 deque 中。
	 * emplace_back	将就地构造的元素添加到 deque 的末尾。
	 * emplace_front	将就地构造的元素添加到 deque 的开头。
	 * empty	如果 deque 包含零个元素，则返回true ; 如果包含一个或多个元素，则返回false 。
	 * end	返回指向刚超出 deque 末尾位置的随机访问迭代器。
	 * erase	从指定位置删除 deque 中一个或一系列元素。
	 * front	返回对 deque 中第一个元素的引用。
	 * get_allocator	返回用于构造 allocator 的 deque 对象的副本。
	 * insert	将一个、多个或一系列元素插入到指定位置的 deque 中。
	 * max_size	返回 deque 的最大可取长度。
	 * pop_back	清除 deque 末尾处的元素。
	 * pop_front	清除 deque 开头处的元素。
	 * push_back	将元素添加到 deque 的末尾。
	 * push_front	将元素添加到 deque 的开头。
	 * rbegin	返回指向反向 deque 中的第一个元素的随机访问迭代器。
	 * rend	返回指向刚超出反向 deque 中的最后一个元素位置的随机访问迭代器。
	 * resize	为 deque 指定新的大小。
	 * shrink_to_fit	放弃额外容量。
	 * size	返回 deque 中的元素数量。
	 * swap	交换两个 deque 的元素。
	 * 
	*/
   	using namespace std;
   	deque <int> c1, c2;

   	c1.push_back( 1 );
   	c1.push_back( 2 );
   	c1.push_back( 4 );

   	c2.push_back( 1 );
   	c2.push_back( 3 );

   	if ( c1 <= c2 )
    	cout << "Deque c1 is less than or equal to deque c2." << endl;
    else
      	cout << "Deque c1 is greater than deque c2." << endl;
}

// <e>
void header_exception() { 
	/*
	 * 定义与异常处理相关的若干类型和函数。 
	 * 异常处理用于系统可从错误中恢复的情形。 
	 * 它提供了将控制权从函数返回给程序的一种方法。 
	 * 合并异常处理的目标是提高程序的可靠性，同时提供一种有序地从错误中恢复的方法。
	 * 
	 * Typedef
	 * exception_ptr	该类型描述指向异常的指针。
	 * terminate_handler	该类型描述指向适合用作 terminate_handler 的函数的指针。
	 * unexpected_handler	该类型描述指向适合用作 unexpected_handler 的函数的指针。
	 * 
	 * 函数
	 * current_exception	获取指向当前异常的指针。
	 * get_terminate	获取当前的 terminate_handler 函数。
	 * get_unexpected	获取当前的 unexpected_handler 函数。
	 * make_exception_ptr	创建保留异常副本的 exception_ptr 对象。
	 * rethrow_exception	引发作为参数传递的异常。
	 * rethrow_if_nested	如果嵌套, 则强制转换和引发异常。
	 * set_terminate	建立程序终止时要调用的新 terminate_handler。
	 * set_unexpected	建立遇到意外异常时要调用的新 unexpected_handler。
	 * terminate	调用终止处理程序。
	 * throw_with_nested	如果嵌套, 则引发异常。
	 * uncaught_exception	仅当引发的异常当前正在处理时返回 true。
	 * unexpected	调用意外处理程序。
	 * 
	 * 类
	 * bad_exception 类	该类描述可从 unexpected_handler 引发的异常。
	 * exception 类	该类用作某些表达式和 C++ 标准库所引发的所有异常的基类。
	 * nested_exception 类	类描述了一个可以捕获和存储的异常, 以便以后使用。
	*/
}

void header_execution() { 
	/*
	 * 介绍并行算法的执行策略。
	 * 
	 * namespace std {
	 *     template<class T> inline constexpr bool is_execution_policy_v = is_execution_policy<T>::value;
	 * }
	 * namespace std::execution {
	 *     inline constexpr sequenced_policy seq { unspecified };
	 *     inline constexpr parallel_policy par { unspecified };
	 *     inline constexpr parallel_unsequenced_policy par_unseq { unspecified };
	 * }
	 * 
	 * 类和结构
	 * is_execution_policy 结构	检测执行策略，以排除其他不明确的重载决策参与的函数签名。
	 * parallel_policy 类	用作消除并行算法重载的唯一类型，并指示并行算法的执行可能会并行化。
	 * parallel_unsequenced_policy 类	用作消除并行算法重载的唯一类型，并指示并行算法的执行可能会并行化并向量化。
	 * sequenced_policy 类	用作消除并行算法重载的唯一类型，并要求并行算法的执行不会并行化。
	*/
}

// <f>
void header_filesystem() { 
	/*
	 * <filesystem> 访问操作和检索有关路径、文件和目录的信息的类和函数。
	 * 
	 * 类
	 * directory_entry 类	描述一个对象，该对象由 directory_iterator 或 recursive_directory_iterator 返回，并包含 path。
	 * directory_iterator 类	描述通过文件系统目录中的文件名排序的输入迭代器。
	 * filesystem_error 类	所引发以报告低级系统溢出的异常的基类。
	 * path 类	定义一个类，该类存储适合用作文件名的模板类型 String 的对象。
	 * recursive_directory_iterator 类	描述通过文件系统目录中的文件名排序的输入迭代器。 迭代器还可以降到子目录中。
	 * file_status 类	包装 file_type。
	 * 
	 * 结构
	 * space_info 结构	保存有关卷的信息。
	 * 
	 * 枚举
	 * copy_options	如果目标文件已存在，则与 copy_file 一起使用的枚举将决定行为。
	 * directory_options	为目录迭代器指定选项的枚举。
	 * file_type	文件类型的枚举。
	 * perm_options	枚举 permissions 函数的选项。
	 * perms	用于传达权限和权限选项的位掩码类型
	 * 
	 * 函数
	 * path absolute(const path& pval, const path& base = current_path());
	 * 
	 * const directory_iterator& begin(const directory_iterator& iter) noexcept;
	 * const recursive_directory_iterator& begin(const recursive_directory_iterator& iter) noexcept;
	 * 
	 * path canonical(const path& pval, const path& base = current_path());
	 * path canonical(const path& pval, error_code& ec);
	 * path canonical(const path& pval, const path& base, error_code& ec);
	 * 
	 * void copy(const path& from, const path& to);
	 * void copy(const path& from, const path& to, error_code& ec) noexcept;
	 * void copy(const path& from, const path& to, copy_options opts);
	 * void copy(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
	 * 
	 * bool copy_file(const path& from, const path& to);
	 * bool copy_file(const path& from, const path& to, error_code& ec) noexcept;
	 * bool copy_file(const path& from, const path& to, copy_options opts);
	 * bool copy_file(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
	 * 
	 * void copy_symlink(const path& from, const path& to);
	 * void copy_symlink(const path& from, const path& to, error_code& ec) noexcept;
	 * 
	 * bool create_directories(const path& pval);
	 * bool create_directories(const path& pval, error_code& ec) noexcept;
	 * 
	 * void create_directory_symlink(const path& to, const path& link);
	 * void create_directory_symlink(const path& to, const path& link, error_code& ec) noexcept;
	 * 
	 * void create_hard_link(const path& to,  const path& link);
	 * void create_hard_link(const path& to, const path& link, error_code& ec) noexcept;
	 * 
	 * void create_symlink(const path& to, const path& link);
	 * void create_symlink(const path& to, const path& link, error_code& ec) noexcept;
	 * 
	 * path current_path();
	 * path current_path(error_code& ec);
	 * void current_path(const path& pval);
	 * void current_path(const path& pval, error_code& ec) noexcept;
	 * 
	 * directory_iterator& end(const directory_iterator& iter) noexcept;
	 * recursive_directory_iterator& end(const recursive_directory_iterator& iter) noexcept;
	 * 
	 * bool exists(file_status stat) noexcept;
	 * bool exists(const path& pval);
	 * bool exists(const path& pval, error_code& ec) noexcept;
	 * 
	 * uintmax_t file_size(const path& pval);
	 * uintmax_t file_size(const path& pval, error_code& ec) noexcept;
	 * 
	 * uintmax_t hard_link_count(const path& pval);
	 * uintmax_t hard_link_count(const path& pval, error_code& ec) noexcept;
	 * 
	 * size_t hash_value(const path& pval) noexcept;
	 * 
	 * bool is_block_file(file_status stat) noexcept;
	 * bool is_block_file(const path& pval);
	 * bool is_block_file(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_character_file(file_status stat) noexcept;
	 * bool is_character_file(const path& pval);
	 * bool is_character_file(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_directory(file_status stat) noexcept;
	 * bool is_directory(const path& pval);
	 * bool is_directory(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_empty(file_status stat) noexcept;
	 * bool is_empty(const path& pval);
	 * bool is_empty(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_fifo(file_status stat) noexcept;
	 * bool is_fifo(const path& pval);
	 * bool is_fifo(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_other(file_status stat) noexcept;
	 * bool is_other(const path& pval);
	 * bool is_other(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_regular_file(file_status stat) noexcept;
	 * bool is_regular_file(const path& pval);
	 * bool is_regular_file(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_socket(file_status stat) noexcept;
	 * bool is_socket(const path& pval);
	 * bool is_socket(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool is_symlink(file_status stat) noexcept;
	 * bool is_symlink(const path& pval);
	 * bool is_symlink(const path& pval, error_code& ec) noexcept;
	 * 
	 * file_time_type last_write_time(const path& pval);
	 * file_time_type last_write_time(const path& pval, error_code& ec) noexcept;
	 * void last_write_time(const path& pval, file_time_type new_time);
	 * void last_write_time(const path& pval, file_time_type new_time, error_code& ec) noexcept;
	 * 
	 * void permissions(const path& pval, perms mask);
	 * void permissions(const path& pval, perms mask, error_code& ec) noexcept;
	 * 
	 * path proximate(const path& p, error_code& ec);
	 * path proximate(const path& p, const path& base = current_path());
	 * path proximate(const path& p, const path& base, error_code& ec);
	 * 
	 * path read_symlink(const path& pval);
	 * path read_symlink(const path& pval, error_code& ec);
	 * 
	 * path relative(const path& p, error_code& ec);
	 * path relative(const path& p, const path& base = current_path());
	 * path relative(const path& p, const path& base, error_code& ec);
	 * 
	 * bool remove(const path& pval);
	 * bool remove(const path& pval, error_code& ec) noexcept;
	 * 
	 * uintmax_t remove_all(const path& pval);
	 * uintmax_t remove_all(const path& pval, error_code& ec) noexcept;
	 * 
	 * void rename(const path& from, const path& to);
	 * void rename(const path& from, const path& to, error_code& ec) noexcept;
	 * 
	 * void resize(const path& pval, uintmax_t size);
	 * void resize(const path& pval, uintmax_t size, error_code& ec) noexcept;
	 * 
	 * space_info space(const path& pval);
	 * space_info space(const path& pval, error_code& ec) noexcept;
	 * 
	 * file_status status(const path& pval);
	 * file_status status(const path& pval, error_code& ec) noexcept;
	 * 
	 * bool status_known(file_status stat) noexcept;
	 * 
	 * void swap(path& left, path& right) noexcept;
	 * 
	 * file_status symlink_status(const path& pval);
	 * file_status symlink_status(const path& pval, erroxr_code& ec) noexcept;
	 * 
	 * path system_complete(const path& pval);
	 * path system_complete(const path& pval, error_code& ec);
	 * 
	 * path temp_directory_path();
	 * path temp_directory_path(error_code& ec);
	 * 
	 * template <class Source>
	 * path u8path(const Source& source);
	 * template <class InIt>
	 * path u8path(InIt first, InIt last);
	 * 
	 * path weakly_canonical(const path& p);
	 * path weakly_canonical(const path& p, error_code& ec);
	*/
}

void header_forward_list() { 
	/*
	 * 定义容器类模板 forward_list 和多个支持模板。描述用于控制变长元素序列的对象。
	 * 序列存储为节点的单向链接列表，其中每个节点都包含 Type 类型的成员。
	 * 
	 * 运算符
	 * operator==	测试运算符左侧的转发列表对象是否等于右侧的转发列表对象。
	 * operator!=	测试运算符左侧的转发列表对象是否不等于右侧的转发列表对象。
	 * operator<	测试运算符左侧的转发列表对象是否小于右侧的转发列表对象。
	 * operator<=	测试运算符左侧的转发列表对象是否小于或等于右侧的转发列表对象。
	 * operator>	测试运算符左侧的转发列表对象是否大于右侧的转发列表对象。
	 * operator>=	测试运算符左侧的转发列表对象是否大于或等于右侧的转发列表对象。
	 * 
	 * 函数
	 * swap	交换两个转发列表的元素。
	 * 
	 * 类
	 * forward_list	描述用于控制变长元素序列的对象。 
	 * 序列存储为元素的单向链接列表，其中每个节点都包含 Type 类型的成员。
	 * 
	 * Typedef
	 * allocator_type	一种类型，用于表示转发列表对象的分配器类。
	 * const_iterator	一种类型，用于为转发列表提供常量迭代器。
	 * const_pointer	一种类型，它提供指向转发列表中const元素的指针。
	 * const_reference	一种类型，用于提供对转发列表中元素的常量引用。
	 * difference_type	一种有符号整数类型，可用于表示转发列表中某个范围类迭代器所指向元素之间的元素数目。
	 * 迭代器	一种类型，用于为转发列表提供迭代器。
	 * 指针	一种类型，用于提供指向转发列表中元素的指针。
	 * reference	一种类型，用于提供对转发列表中元素的引用。
	 * size_type	一种类型，用于表示两个元素之间的无符号距离。
	 * value_type	一种类型，用于表示转发列表中存储的元素的类型。
	 * 
	 * 函数
	 * assign	清除转发列表中的元素，并将一组新的元素复制到目标转发列表。
	 * before_begin	返回寻址转发列表中第一个元素之前的位置的迭代器。
	 * begin	返回寻址转发列表中第一个元素的迭代器。
	 * cbefore_begin	返回寻址转发列表中第一个元素之前的位置的常量迭代器。
	 * cbegin	返回寻址转发列表中第一个元素的常量迭代器。
	 * cend	返回寻址转发列表中最后一个元素之后的位置的常量迭代器。
	 * clear	清除转发列表中的所有元素。
	 * emplace_after	在指定位置之后移动构造新元素。
	 * emplace_front	在列表的起始位置添加一个就地构造的元素。
	 * empty	测试转发列表是否为空。
	 * end	返回寻址转发列表中最后一个元素之后的位置的迭代器。
	 * erase_after	删除转发列表中指定位置之后的元素。
	 * front	返回对转发列表中第一个元素的引用。
	 * get_allocator	返回用于构造转发列表的分配器对象的一个副本。
	 * insert_after	在转发列表中的指定位置之后添加元素。
	 * max_size	返回转发列表的最大长度。
	 * merge	将元素从参数列表中删除，将它们插入目标转发列表，将新的组合元素集以升序或其他指定顺序排序。
	 * pop_front	删除转发列表起始处的一个元素。
	 * push_front	在转发列表起始处添加一个元素。
	 * remove	清除转发列表中与指定值匹配的元素。
	 * remove_if	将满足指定谓词的元素从转发列表中清除。
	 * resize	为转发列表指定新的大小。
	 * reverse	颠倒转发列表中元素的顺序。
	 * sort	按升序或按谓词指定的顺序排列元素。
	 * splice_after	重新联结节点间的链接。
	 * swap	交换两个转发列表的元素。
	 * unique	删除通过了指定测试的相邻元素。
	*/
}

void header_fstream() { 
	/*
	 * 定义若干类，这些类支持在存储于外部文件中的序列上的 iostreams 操作。
	 * 
	 * Typedef
	 * 类型名称	描述
	 * filebuf	@No__t_0 专用于char模板参数的类型。
	 * fstream	@No__t_0 专用于char模板参数的类型。
	 * ifstream	@No__t_0 专用于char模板参数的类型。
	 * ofstream	@No__t_0 专用于char模板参数的类型。
	 * wfstream	一个类型 basic_fstream 专用于wchar_t模板参数的类型。
	 * wifstream	一个类型 basic_ifstream 专用于wchar_t模板参数的类型。
	 * wofstream	一个类型 basic_ofstream 专用于wchar_t模板参数的类型。
	 * wfilebuf	一个类型 basic_filebuf 专用于wchar_t模板参数的类型。
	 * 
	 * 类
	 * basic_filebuf	类模板描述了一个流缓冲区，该缓冲区控制 Elem 类型的元素的传输，
	 *     其字符特征由类 Tr、和从存储在外部文件中的一系列元素确定。
	 * basic_fstream	类模板描述了一个对象，该对象使用类basic_filebuf <Elem， Tr> 的
	 *     流缓冲区控制元素和编码对象的插入和提取，该对象的元素类型 Elem，其字符特征由类 Tr 确定。
	 * basic_ifstream	类模板描述了一个对象，该对象控制从basic_filebuf <Elem， Tr> 类的
	 *     流缓冲区提取元素和编码对象，其中的元素类型为 Elem，其字符特征为由类 Tr 确定。
	 * basic_ofstream	类模板描述了一个对象，该对象可控制将元素和编码对象插入到类basic_filebuf <Elem， Tr> 的
	 *     流缓冲区中，其中包含类型 Elem 的元素，其字符特征已确定由类 Tr。
	 * 
	 * 成员函数	说明
	 * close	关闭文件。
	 * is_open	确定文件是否打开。
	 * open	打开文件。
	 * rdbuf	返回存储的流缓冲区的地址。
	 * swap	将此 basic_ofstream 的内容与提供的 basic_ofstream 的内容进行交换。
	*/
    fstream fs("fstream.txt", ios::in | ios::out | ios::trunc);
    if (!fs.bad())
    {
        // Write to the file.
        fs << "Writing to a basic_fstream object..." << endl;
        fs.close();

        // Dump the contents of the file to cout.
        fs.open("fstream.txt", ios::in);
        cout << fs.rdbuf();
        fs.close();
    }

	ifstream ifs("basic_ifstream_class.txt");
    if (!ifs.bad())
    {
        // Dump the contents of the file to cout.
        cout << ifs.rdbuf();
        ifs.close();
    }

    ifstream ifs("basic_ifstream_ctor.txt");
    if (!ifs.bad())
    {
        // Dump the contents of the file to cout.
        cout << ifs.rdbuf();
        ifs.close();
    }

	ofstream ofs("ofstream.txt");
    if (!ofs.bad())
    {
        ofs << "Writing to a basic_ofstream object..." << endl;
        ofs.close();
    }
}

void header_functional() { 
	/*
	 * 定义C++有助于构造函数对象（也称为函子）及其联编程序的标准库函数。 
	 * 函数对象是用于定义 operator() 的类型的对象。 函数对象可以是函数指针，
	 * 但该对象更常用于存储可在函数调用过程中访问的其他信息。
	 * 
	 * 类
	 * bad_function_call	一种类，用于描述引发的异常，以指示对函数对象上的 operator() 的调用由于该对象为空而失败。
	 * binary_negate	提供成员函数的类模板，用于对指定二元函数的返回值求反。（在 c + + 17 中弃用。）
	 * binder1st	一个类模板，它提供了一个构造函数，该构造函数通过将二元函数的第一个自变量绑定到指定的值，
	 *     将二元函数对象转换为一元函数对象。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * binder2nd	一个类模板，它提供了一个构造函数，该构造函数通过将二元函数的第二个
	 *     参数绑定到指定的值，将二元函数对象转换为一元函数对象。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * boyer_moore_horspool_searcher	
	 * boyer_moore_searcher	
	 * const_mem_fun_ref_t	一种适配器类，在使用引用自变量进行初始化的情况下，
	 *     该类允许将不带任何自变量的 const 成员函数作为一元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * const_mem_fun_t	一种适配器类，在使用指针自变量进行初始化的情况下，
	 *     该类允许将不带任何自变量的 const 成员函数作为一元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * const_mem_fun1_ref_t	一种适配器类，在使用引用自变量进行初始化的情况下，
	 *     该类允许将仅带一个自变量的 const 成员函数作为二元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * const_mem_fun1_t	一种适配器类，在使用指针自变量进行初始化的情况下，
	 *     该类允许将仅带一个自变量的 const 成员函数作为二元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * default_searcher	
	 * function	一种类，用于包装可调用的对象。
	 * hash	一种类，用于计算值的哈希代码。
	 * is_bind_expression	一种类，用于调用 bind 时是否会生成特定的类型。
	 * is_placeholder	一种类，用于测试特定类型是否为占位符。
	 * mem_fun_ref_t	一种适配器类，在使用引用自变量进行初始化时，
	 *     该类允许将不带任何自变量的 non_const 成员函数作为一元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * mem_fun_t	一种适配器类，在使用指针参数进行初始化时，
	 *     该类允许将不带任何自变量的 non_const 成员函数作为一元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * mem_fun1_ref_t	一种适配器类，在使用引用自变量进行初始化时，
	 *     它允许使用单个自变量的 non_const 成员函数作为二元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * mem_fun1_t	一种适配器类，在使用指针参数进行初始化时，
	 *     此类允许使用单个自变量的 non_const 成员函数作为二元函数对象调用。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * pointer_to_binary_function	将二元函数指针转换为自适应二元函数。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * pointer_to_unary_function	将一元函数指针转换为自适应一元函数。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * reference_wrapper	一种类，用于包装引用。
	 * unary_negate	提供成员函数的类模板，用于对指定一元函数的返回值求反。（在 c + + 17 中弃用。）
	 * 
	 * 函数
	 * bind	将自变量绑定到可调用对象。	
	 * bind1st	一种帮助程序模板类，用于创建适配器，通过将二元函数的第一个自变量绑定到指定的值，
	 *     将二元函数对象转换为一元函数对象。（在 c + + 11 中已弃用，c + + 17 中已删除）。	
	 * bind2nd	一种帮助程序模板类，用于创建适配器，通过将二元函数的第二个自变量绑定到指定的值，
	 *     将二元函数对象转换为一元函数对象。（在 c + + 11 中已弃用，c + + 17 中已删除）。	
	 * bit_and	返回两个参数的按位逻辑 AND（二元运算符 &）。	
	 * bit_not	返回两个参数的按位逻辑求反（二元运算符 ~）。（添加到 c + + 14 中。）	
	 * bit_or	返回两个参数的按位逻辑 OR（运算符	）。
	 * bit_xor	返回两个参数的按位逻辑 XOR（二元运算符 ^）。	
	 * cref	从变量构造常量 reference_wrapper。		
	 * mem_fn	生成一个简单的调用包装器。	
	 * mem_fun	帮助程序模板函数，在使用指针自变量进行初始化的情况下，
	 *     用来构造成员函数的函数对象适配器。（在 c + + 11 中已弃用，c + + 17 中已删除）。	
	 * mem_fun_ref	帮助程序模板函数，在使用引用自变量进行初始化的情况下，用来构造成员函数的函数对象适配器。	
	 * not1	返回一元谓词的补集。（在 c + + 17 中弃用。）	
	 * not2	返回二元谓词的补集。（在 c + + 17 中弃用。）	
	 * not_fn	返回其函数对象的结果的补码。（在 c + + 17 中添加。）	
	 * ptr_fun	帮助程序模板函数，用于将一元和二元函数指针分别转换为一元和二元自适应函数。（在 c + + 11 中已弃用，c + + 17 中已删除）。	
	 * ref	从变量构造常量 reference_wrapper 。	
	 * swap	交换两个 function 对象。	
	 * 
	 * 结构
	 * binary_function	空基类，定义可能由提供二元函数对象的派生类继承的类型。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	 * divides	此类提供预定义的函数对象，后者对指定值类型的元素执行除法算术运算。
	 * equal_to	此二元谓词测试指定类型的一个值是否等于该类型的另一个值。
	 * greater	此二元谓词测试指定类型的一个值是否大于该类型的另一个值。
	 * greater_equal	此二元谓词测试指定类型的一个值是否大于或等于该类型的另一个值。
	 * less	此二元谓词测试指定类型的一个值是否小于该类型的另一个值。
	 * less_equal	此二元谓词测试指定类型的一个值是否小于或等于该类型的另一个值。
	 * logical_and	此类提供预定义的函数对象，后者对指定值类型的元素执行合取逻辑运算，并测试结果是 ture 还是 false。
	 * logical_not	此类提供预定义的函数对象，后者对指定值类型的元素执行求反逻辑运算，并测试结果是 ture 还是 false。
	 * logical_or	此类提供预定义的函数对象，后者对指定值类型的元素执行析取逻辑运算，并测试结果是 ture 还是 false。
	 * minus	此类提供预定义的函数对象，后者对指定值类型的元素执行减法算术运算。
	 * modulus	此类提供预定义的函数对象，后者对指定值类型的元素执行取模算术运算。
	 * multiplies	此类提供预定义的函数对象，后者对指定值类型的元素执行乘法算术运算。
	 * negate	此类提供预定义的函数对象，后者返回元素值的负值。
	 * not_equal_to	此二元谓词测试指定类型的一个值是否不等于该类型的另一个值。
	 * plus	此类提供预定义的函数对象，后对指定值类型的元素执行加法算术运算。
	 * unary_function	空基类，定义可能由提供一元函数对象的派生类继承的类型。（在 c + + 11 中已弃用，c + + 17 中已删除）。
	*/
	using namespace std::placeholders;

	void square(double x) {
    	std::cout << x << "^2 == " << x * x << std::endl;
	}

	void product(double x, double y) {
    	std::cout << x << "*" << y << " == " << x * y << std::endl;
	}

    double arg[] = { 1, 2, 3 };
	std::for_each(&arg[0], arg + 3, square);
    std::cout << std::endl;
    std::for_each(&arg[0], arg + 3, std::bind(product, _1, 2));
    std::cout << std::endl;
    std::for_each(&arg[0], arg + 3, std::bind(square, _1));

}

void header_future() { 
	/*
	 * 包含标准头文件 <future > 来定义类模板和支持模板，
	 * 这些模板可简化运行函数（可能在单独的线程中）并检索其结果。 
	 * 结果可以是由函数返回的值或由函数发出但函数中未捕获的异常。
	 * 异步提供程序存储函数调用的结果。 异步返回对象用于检索函数调用的结果。 
	 * 关联异步状态提供一个异步提供程序和一个或多个异步返回对象之间的通信。
	 * 程序不会直接创建任何关联异步状态对象。 程序在需要异步提供程序时会创建一个异步提供程序，
	 * 且随之会创建一个与提供程序共享其关联异步状态的异步返回对象。 异步提供程序和异步返回对象管理保留其共享关联异步状态的对象。 
	 * 最后一个引用关联异步状态的对象释放状态时，则保留关联异步状态的对象会被销毁。
	 * 不具有关联异步状态的异步提供程序或异步返回对象即为空。
	 * 只有当其异步提供程序存储了返回值或存储了异常时，关联的异步状态才会为准备就绪。
	 * 模板函数 async 和类模板 promise 并且 packaged_task 是异步提供程序。 类模板 future 和 shared_future 描述异步返回对象。
	 * 每个类模板 promise、future 和 shared_future 都具有类型void的专用化和按引用存储和检索值的部分专用化。 
	 * 这些专用化与主模板的唯一区别是用于存储和检索返回值的函数的签名和语义。
	 * 类模板 future 和 shared_future 永远不会在其析构函数中阻塞，只不过为实现向后兼容性而保留的一种情况除外：
	 * 与所有其他先期情况不同，对于附加到任务的 future 或最后一个 shared_future，该任务使用 std::async如果任务尚未完成，
	 * 则析构函数将阻塞;也就是说，如果此线程尚未调用 .get() 或 .wait() 并且任务仍在运行，它将会阻止。 
	 * 如下可用性注释已添加到草案标准中 std::async 的描述中：“[注意：如果将从 std::async 获取的 future 移出本地范围外，
	 * 则使用此 future 的其他代码必须意识到此 future 的析构函数可能阻塞，直到共享状态变为准备就绪。—尾注]”在其他所有情况下，
	 * 需要使用 future 和 shared_future 析构函数，且需保证其永不阻塞。
	 * 
	 * 类
	 * future 类	描述异步返回对象。
	 * future_error 类	描述可由管理 future 对象的类型方法引发的异常对象。
	 * packaged_task 类	描述作为调用包装器且其调用签名为 Ty(ArgTypes...) 的异步提供程序。 除可能的结果外，其关联异步状态还保留可调用对象的副本。
	 * promise 类	描述异步提供程序。
	 * shared_future 类	描述异步返回对象。 相较于 future 对象，异步提供程序可与任意数量的 shared_future 对象关联。
	 * 
	 * 结构
	 * is_error_code_enum 结构	指示 future_errc 适合存储 error_code 的专用化。
	 * uses_allocator 结构	始终保持 true 的专用化。
	 * 
	 * 函数
	 * async	表示一个异步提供程序。
	 * future_category	返回一个描述与 future 对象相关联错误的 error_category 对象的引用。
	 * make_error_code	创建具有 error_category 对象（此对象描述 future 错误的特点）的 error_code。
	 * make_error_condition	创建具有 error_category 对象（此对象描述 future 错误的特点）的 error_condition。
	 * swap	将一个 promise 对象的关联异步状态与另一对象的关联异步状态交换。
	 * 
	 * 枚举
	 * future_errc	为 future_error 类报告的错误提供符号名称。
	 * future_status	为计时等待函数可返回的原因提供符号名称。
	 * begin	表示描述模板函数 async 的可能模式的位掩码类型。
	 * 
	 * future和promise的作用是在不同线程之间传递数据。使用指针也可以完成数据的传递，
	 * 但是指针非常危险，因为互斥量不能阻止指针的访问；而且指针的方式传递的数据是固定的，
	 * 如果更改数据类型，那么还需要更改有关的接口，比较麻烦；promise支持泛型的操作，更加方便编程处理。
	*/

	void thread_set_promise(std::promise<int>& promiseObj) {
    	std::cout << "In a thread, making data...\n";
    	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    	promiseObj.set_value(35);
    	std::cout << "Finished\n";
	}

    std::promise<int> promiseObj;
    std::future<int> futureObj = promiseObj.get_future();
    std::thread t(&thread_set_promise, std::ref(promiseObj));
    std::cout << futureObj.get() << std::endl;
    t.join();
}

// <h>
void header_hash_map() { 
	/*
	 * 定义容器类模板 hash_map 和 hash_multimap 及其支持的模板。
	 * 运算符
	 * operator!= (hash_map)	operator！ = （hash_multimap）	测试运算符左侧和右侧的 hash_map 或 hash_multimap 对象是否不相等。
	 * operator== (hash_map)	operator== (hash_multimap)	测试运算符左侧和右侧的 hash_map 或 hash_multimap 对象是否相等。
	 * 
	 * 类
	 * hash_compare 类	描述一个对象，该对象可供任何哈希关联容器（hash_map、hash_multimap、hash_set 或 hash_multiset）使用，作为默认的 Traits 参数对象，以对其所包含的元素进行排序和哈希处理。
	 * value_compare 类	提供一个函数对象，该对象能通过比较 hash_map 元素的键值来比较这些元素，以确定其在 hash_map 中的相对顺序。
	 * hash_map 类	用于存储和快速检索集合中的数据，集合中的每个元素都是具有排序键和关联数据值的元素对，而排序键的值是唯一的。
	 * hash_multimap 类	用于存储和快速检索集合中的数据，集合中的每个元素都是具有排序键和关联数据值的元素对，而排序键的值不需要具有唯一性。
	*/
	hash_map<int, int> IntHash;  
	IntHash[1] = 123;  
	IntHash[2] = 456;  
	int val = IntHash[1];  
	int val = IntHash[2];  

	hash_map<const char*, int, hash_compare<const char*, CharLess> > CharHash;  
	CharHash["a"] = 123;  
	CharHash["b"] = 456;  
	char szInput[64] = "";  
	scanf("%s", szInput);  
	int val = CharHash[szInput];  

 	struct string_less : public binary_function<const string, const string, bool>  {   
	public:   
    	result_type operator()(const first_argument_type& _Left, const second_argument_type& _Right) const   {   
        	return(_Left.compare(_Right) < 0 ? true : fase);   
    	}   
	};  

	hash_map<string, int, hash_compare<string, string_less> > StringHash;  
	StringHash["a"] = 123;  
	StringHash["b"] = 456;  
	string strKey = "a";  
	int val = CharHash[strKey];  
}

void header_hash_set() { 
	/*
	 * 此头文件已经弃用，替代项为 <unordered_set>。定义容器类模板 hash_set 和 hash_multiset 及其支持的模板。
	 * 在STL中，set是以红黑树（RB-Tree）作为底层数据结构的，hash_set是以哈希表（Hash table）作为底层数据结构的。
	 * set可以在时间复杂度为O（logN）的情况下插入，删除和查找数据。hash_set操作的时间度则比较复杂，取决于哈希函数和哈希表的负载情况。
	*/
 	const int MAXN = 15;
    int a[MAXN];
    int i;
    srand(time(NULL));
    for (i = 0; i < MAXN; ++i)
        a[i] = rand() % (MAXN * 2);

    set<int> iset;   
    set<int>::iterator pos; 

    //插入数据 insert()有三种重载
    iset.insert(a, a + MAXN);

    //当前集合中个数 最大容纳数据量
    printf("当前集合中个数: %d     最大容纳数据量: %d\n", iset.size(), iset.max_size());

    //依次输出
    printf("依次输出集合中所有元素-------\n");
    for (pos = iset.begin(); pos != iset.end(); ++pos)
        printf("%d ", *pos);
    putchar('\n');

    //查找
    int findNum = MAXN;
    printf("查找 %d是否存在-----------------------\n", findNum);
    pos = iset.find(findNum);
    if (pos != iset.end())
        printf("%d 存在\n", findNum);
    else
        printf("%d 不存在\n", findNum);

    //在最后位置插入数据，如果给定的位置不正确，会重新找个正确的位置并返回该位置
    pos  = iset.insert(--iset.end(), MAXN * 2); 
    printf("已经插入%d\n", *pos);

    //删除
    iset.erase(MAXN);
    printf("已经删除%d\n", MAXN);

    //依次输出
    printf("依次输出集合中所有元素-------\n");
    for (pos = iset.begin(); pos != iset.end(); ++pos)
        printf("%d ", *pos);
    putchar('\n');
}

// <i>
void header_initializer_list() { 
	/*
	 * 定义容器类模板 initializer_list 和多个支持模板。
	 * 
	 * Typedef
	 * value_type	initializer_list 中元素的类型。
	 * reference	一个类型，它提供对 initializer_list 中元素的引用。
	 * const_reference	一个类型，它提供对 initializer_list 中元素的常量引用。
	 * size_type	一个类型，它表示 initializer_list 中元素的数目。
	 * iterator	一个类型，它为 initializer_list 提供迭代器。
	 * const_iterator	一个类型，它为 initializer_list 提供常量迭代器。
	 * 
	 * 成员函数
	 * begin	返回指向 initializer_list 中第一个元素的指针。
	 * end	返回指向 initializer_list 中最后一个元素之后的元素的指针。
	 * size	返回 initializer_list 中的元素数量。
	*/
	using namespace std;
    // Create an empty initializer_list c0
    initializer_list <int> c0;

    // Create an initializer_list c1 with 1 element
    initializer_list <int> c1{ 3 };

    // Create an initializer_list c2 with 5 elements
    initializer_list <int> c2{ 5, 4, 3, 2, 1 };

    // Create a copy, initializer_list c3, of initializer_list c2
    initializer_list <int> c3(c2);

    // Create a initializer_list c4 by copying the range c3[ first,  last)
    const int* c3_ptr = c3.begin();
    c3_ptr++;
    c3_ptr++;
    initializer_list <int> c4(c3.begin(), c3_ptr);

    // Move initializer_list c4 to initializer_list c5
    initializer_list <int> c5(move(c4));

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    cout << "c2 =";
    for (auto c : c2)
        cout << " " << c;
    cout << endl;

    cout << "c3 =";
    for (auto c : c3)
        cout << " " << c;
    cout << endl;

    cout << "c5 =";
    for (auto c : c5)
        cout << " " << c;
    cout << endl;
}

void header_iomanip() { 
	/*
	 * <iomanip > 来定义多个操控器, 每个操控器都采用一个自变量。 iostreams
	 * 
	 * 操控器
	 * get_money	获取货币金额（可选择采用国际格式）。
	 * get_time	使用指定格式以某种时间结构获取时间。
	 * put_money	提供货币金额（可选择采用国际格式）。
	 * put_time	采用要使用的时间结构和格式字符串提供时间。
	 * quoted	使用插入和提取运算符实现字符串的方便往返。
	 * resetiosflags	清除指定标志。
	 * setbase	为整数设置基数。
	 * setfill	设置用于在右对齐显示中填充空格的字符。
	 * setiosflags	设置指定标志。
	 * setprecision	为浮点值设置精度。
	 * setw	指定显示字段的宽度。
	*/
	// Results are identical regardless of input string type:
    // string inserted { R"(This is a "sentence".)" }; // raw string literal
    // string inserted { "This is a \"sentence\"." };  // regular string literal
    const char* inserted = "This is a \"sentence\".";  // const char*
    stringstream ss, ss_quoted;
    string extracted, extracted_quoted;

    ss << inserted;
    ss_quoted << quoted(inserted);

    cout << "ss.str() is storing       : " << ss.str() << endl;
    cout << "ss_quoted.str() is storing: " << ss_quoted.str() << endl << endl;

    // Round-trip the strings
    ss >> extracted;
    ss_quoted >> quoted(extracted_quoted);

    cout << "After round trip: " << endl;
    cout << "Non-quoted      : " << extracted << endl;
    cout << "Quoted          : " << extracted_quoted << endl;

	// Keep console window open in debug mode.
    cout << endl << "Press Enter to exit" << endl;
    string input{};
    getline(cin, input);

    string inserted{ R"("This" "is" "a" "heavily-quoted" "sentence".)" };
    // string inserted{ "\"This\" \"is\" \"a\" \"heavily-quoted\" \"sentence\"" };
    // const char* inserted{ "\"This\" \"is\" \"a\" \"heavily-quoted\" \"sentence\"" };
    stringstream ss, ss_quoted;
    string extracted;

    ss_quoted << quoted(inserted, '*');
    ss << inserted;
    cout << "ss_quoted.str() is storing: " << ss_quoted.str() << endl;
    cout << "ss.str() is storing       : " << ss.str() << endl << endl;

    // Use the same quoted arguments as on insertion.
    ss_quoted >> quoted(extracted, '*');

    cout << "After round trip: " << endl;
    cout << "Quoted          : " << extracted << endl;

    extracted = {};
    ss >> extracted;
    cout << "Non-quoted      : " << extracted << endl << endl;

	    string inserted{ R"(\\root\trunk\branch\nest\egg\yolk)" };
    // string inserted{ "\\\\root\\trunk\\branch\\nest\\egg\\yolk" };
    stringstream ss, ss_quoted, ss_quoted_custom;
    string extracted;

    // Use '"' as delimiter and '~' as escape character.
    ss_quoted_custom << quoted(inserted, '"', '~');
    ss_quoted << quoted(inserted);
    ss << inserted;
    cout << "ss_quoted_custom.str(): " << ss_quoted_custom.str() << endl;
    cout << "ss_quoted.str()       : " << ss_quoted.str() << endl;
    cout << "ss.str()              : " << ss.str() << endl << endl;

    // No spaces in this string, so non-quoted behaves same as quoted
    // after round-tripping.

	// Keep console window open in debug mode.
    cout << endl << "Press Enter to exit" << endl;
    string input{};
    getline(cin, input);
}

void header_ios() { 
	/*
	 * 定义作为 iostreams 操作的基础的多种类型和函数。 此头文件通常包含在另一 iostream 头文件中；
	 * 
	 * Typedef
	 * ios	支持旧 iostream 库中的 ios 类。
	 * streamoff	支持内部操作。
	 * streampos	保留缓冲区指针或文件指针的当前位置。
	 * streamsize	指定流的大小。
	 * wios	支持旧 iostream 库中的 wios 类。
	 * wstreampos	保留缓冲区指针或文件指针的当前位置。
	 * 
	 * 操控器
	 * boolalpha	指定类型为 bool 的变量在流中显示为 true 或 false。
	 * dec	指定以十进制计数法形式显示整数变量。
	 * defaultfloat	配置 ios_base 对象的标记以使用浮点值的默认显示格式。
	 * fixed	指定浮点数以自动设置小数点表示法显示。
	 * hex	指定以十六进制计数法形式显示整数变量。
	 * hexfloat	
	 * internal	导致数字的符号左对齐，数字右对齐。
	 * left	导致宽度比输出宽度短的文本在流刷新过程中显示时带有左边距。
	 * noboolalpha	指定类型为 bool 的变量在流中显示为 1 或 0。
	 * noshowbase	关闭显示数字所采用的进制的指示。
	 * noshowpoint	仅显示浮点数（其小数部分为零）的整数部分。
	 * noshowpos	导致正数不显式带有符号。
	 * noskipws	导致输入流读取空格。
	 * nounitbuf	导致缓冲区已满时缓冲和处理输出。
	 * nouppercase	指定十六进制数字和科学计数法形式的指数以小写形式显示。
	 * oct	指定以八进制计数法形式显示整数变量。
	 * right	导致宽度比输出宽度短的文本在流刷新过程中显示时带有右边距。
	 * scientific	导致使用科学表示法显示浮点数。
	 * showbase	指示显示数字所采用的进制。
	 * showpoint	显示浮点数的整数部分和小数点右侧的数字，即使小数部分为零。
	 * showpos	导致正数显式带有符号。
	 * skipws	导致输入流不读取空格。
	 * unitbuf	导致在缓冲区未满时处理输出。
	 * uppercase	指定十六进制数字和科学计数法形式的指数以大写形式显示。
	 * 
	 * 错误报告
	 * io_errc	
	 * is_error_code_enum	
	 * iostream_category	
	 * make_error_code	
	 * make_error_condition
	 * 
	 * 类
	 * basic_ios	类模板描述了依赖于模板参数的输入流（类模板basic_istream）和输出流（属于类模板basic_ostream）所共有的存储和成员函数。
	 * fpos	类模板描述了一个对象，该对象可以存储还原任何流内的任意文件位置指示器所需的所有信息。
	 * ios_base	此类描述了不依赖模板参数的输入和输出流通用的存储和成员函数。
	*/
   	using namespace std;
   	bool b = true;
   	cout << b << endl;
   	boolalpha( cout );
   	cout << b << endl;
   	noboolalpha( cout );
   	cout << b << endl;
   	cout << boolalpha << b << endl;
	
	int i = 100;

    cout << i << endl;   // Default is base 10
    cout << hex << i << endl;
    dec( cout );
    cout << i << endl;
    oct( cout );
    cout << i << endl;
    cout << dec << i << endl;

	float ii = 1.1F;

    cout << ii << endl;   // fixed is the default
    cout << scientific << ii << endl;
    cout.precision( 1 );
    cout << fixed << ii << endl;

}

void header_iosfwd() { 
	/*
	 * 声明对在整个 iostreams 中使用的多个类模板的前向引用。 
	 * 所有此类模板都是在其他标准头文件中定义的。 
	 * 仅在需要其中一个声明而不是定义时将此头文件明确包含在内。
	 * 
	 * typedef T1 streamoff;
	 * typedef T2 streamsize;
	 * typedef fpos streampos;
	 * // wchar_t TYPE DEFINITIONS
	 * typedef basic_ios<char, char_traits<char>> ios;
	 * typedef basic_streambuf<char, char_traits<char>> streambuf;
	 * typedef basic_istream<char, char_traits<char>> istream;
	 * typedef basic_ostream<char, char_traits<char>> ostream;
	 * typedef basic_iostream<char, char_traits<char>> iostream;
	 * typedef basic_stringbuf<char, char_traits<char>> stringbuf;
	 * typedef basic_istringstream<char, char_traits<char>> istringstream;
	 * typedef basic_ostringstream<char, char_traits<char>> ostringstream;
	 * typedef basic_stringstream<char, char_traits<char>> stringstream;
	 * typedef basic_filebuf<char, char_traits<char>> filebuf;
	 * typedef basic_ifstream<char, char_traits<char>> ifstream;
	 * typedef basic_ofstream<char, char_traits<char>> ofstream;
	 * typedef basic_fstream<char, char_traits<char>> fstream;
	 * // wchar_t TYPE DEFINITIONS
	 * typedef basic_ios<wchar_t, char_traits<wchar_t>> wios;
	 * typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
	 * typedef basic_istream<wchar_t, char_traits<wchar_t>> wistream;
	 * typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
	 * typedef basic_iostream<wchar_t, char_traits<wchar_t>> wiostream;
	 * typedef basic_stringbuf<wchar_t, char_traits<wchar_t>> wstringbuf;
	 * typedef basic_istringstream<wchar_t, char_traits<wchar_t>> wistringstream;
	 * typedef basic_ostringstream<wchar_t, char_traits<wchar_t>> wostringstream;
	 * typedef basic_stringstream<wchar_t, char_traits<wchar_t>> wstringstream;
	 * typedef basic_filebuf<wchar_t, char_traits<wchar_t>> wfilebuf;
	 * typedef basic_ifstream<wchar_t, char_traits<wchar_t>> wifstream;
	 * typedef basic_ofstream<wchar_t, char_traits<wchar_t>> wofstream;
	 * typedef basic_fstream<wchar_t, char_traits<wchar_t>> wfstream;
	 * 
	 * 前向申明和类模版
	 * template <class _Statetype>
	 * class fpos;
	 * 
	 * template <class Elem>;
	 * class char_traits;
	 * 
	 * class char_traits<char>;
	 * 
	 * class char_traits<wchar_t>;
	 * 
	 * template <class T>
	 * class allocator;
	 * 
	 * class ios_base;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_ios;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class istreambuf_iterator;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class ostreambuf_iterator;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_streambuf;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_istream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_ostream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_iostream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_stringbuf;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_istringstream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_ostringstream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_stringstream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_filebuf;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_ifstream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_ofstream;
	 * 
	 * template <class Elem, class Tr = char_traits<Elem>>
	 * class basic_fstream;
	*/
}

void header_iostream() { 
	/*
	 * 声明控制从标准流读取和写入到标准流的对象。 这通常是你需要从C++程序执行输入和输出操作的唯一头文件。
	*/
}

void header_istream() { 

}

void header_iterator() { 

}

// <l>
void header_limits() { 

}

void header_list() { 

}

void header_locale() { 

}

// <m>
void header_map() { 

}

void header_memory() { 

}

void header_memory_resource() { 

}

void header_mutex() { 

}

// <n>
void header_new() { 

}

void header_numeric() { 

} 

// <o>
void header_optional() { 

}

void header_ostream() { 

}

// <q>
void header_queue() { 

}

// <r>
void header_random() { 

}

void header_radio() { 

}

void header_regex() { 

}

// <s>
void header_scoped_allocator() { 

}

void header_set() { 

}

void header_shared_mutex() { 

}

void header_sstream() { 

}

void header_stack() { 

}

void header_stdexcept() { 

}

void header_streambuf() { 

}

void header_string() { 

}

void header_string_view() { 

}

void header_strstream() { 

}

void header_system_error() { 

}

// <t>
void header_thread() { 

}

void header_tuple() { 

}

void header_type_traits() { 

}

void header_typeindex() { 

}

void header_typeinfo() { 

}

// <u>
void header_unordered_map() { 

}

void header_unordered_set() { 

}

void header_utility() { 

}

// <v>
void header_valarray() { 

}

void header_variant() { 

}

void header_vector() { 

}

int msvc_main() {
	cout << "Hello MSVC C++ library!\n";
	header_algorithm();
	header_allocators();
	return -1;
}
