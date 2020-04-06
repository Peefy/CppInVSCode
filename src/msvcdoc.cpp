
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
	 * <iostream > 库使用 #include <ios>、#include <streambuf>、#include <istream>和 #include <ostream> 语句。
	 * 
	 * 这些对象分为两组：
	 * * cin、 cout、 cerr和堵塞是面向字节的，可执行传统的一次性传输。
	 * * wcin、wcout、wcerr 和 wclog 面向宽字节，与程序内部操作的宽字符相互转换。
	 * 对流执行特定操作（如标准输入）后，不能对同一流执行不同方向的操作。 因此，程序不能在cin和wcin上互换操作，例如。
	 * 此头文件中声明的所有对象都共享特殊属性，您可以假设它们是在您定义的任何静态对象之前构造的，
	 * 在包含 <iostream > 的翻译单元中。 同样，你可以假定在你定义的任何此类静态对象的析构函数之前，这些对象不会被销毁。 
	 * （但是，在程序终止过程中输出流将刷新。）因此，您可以在程序启动之前和程序终止之后安全地读取或写入标准流。
	 * 但这种保证并不是通用的。 静态构造函数可能调用另一个翻译单元中的函数。 
	 * 被调用的函数不能假定已构造了此头文件中声明的对象，因为翻译单元在静态构造中的顺序不确定。 
	 * 若要在此类上下文中使用这些对象，必须先构造 ios_base::Init 类的对象。
	 * 
	 * 全局流对象
	 * cerr	指定 cerr 全局流。
	 * cin	指定 cin 全局流。
	 * clog	指定 clog 全局流。
	 * cout	指定 cout 全局流。
	 * wcerr	指定 wcerr 全局流。
	 * wcin	指定 wcin 全局流。
	 * wclog	指定 wclog 全局流。
	 * wcout	指定 wcout 全局流。
	*/
    int i = 0;
    cout << "Enter a number: ";
    cin >> i;
    cerr << "test for cerr" << endl;
    clog << "test for clog" << endl;

	int i = 0;
    wcout << L"Enter a number: ";
    wcin >> i;
    wcerr << L"test for wcerr" << endl;
    wclog << L"test for wclog" << endl;

    int x;
    cout << "enter choice:";
    cin >> x;
    while (x < 1 || x > 4) {
        cout << "Invalid choice, try again:";
        cin >> x;
        // not a numeric character, probably
        // clear the failure and pull off the non-numeric character
        if (cin.fail()) {
          	cin.clear();
          	char c;
         	cin >> c;
      	}
   }
}

void header_istream() { 
	/*
	 * 定义用于调节 iostreams 提取的类模板 basic_istream，以及用于调节插入和提取的类模板 basic_iostream。 
	 * 头文件还定义了一个相关的操控程序。 通常会由另一个 iostreams 头文件为你包括此头文件；几乎不需要直接包括它。
	 * 
	 * Typedef
	 * iostream	在charbasic_iostream 专用化的类型。
	 * istream	在charbasic_istream 专用化的类型。
	 * wiostream	专用于 wchar 的类型 basic_iostream。
	 * wistream	专用于 wchar 的类型 basic_istream。
	 * 
	 * 操控器
	 * ws	跳过流中的空白。
	 * swap	交换两个流对象。
	 * 
	 * 运算符
	 * operator>>	从流中提取字符和字符串。
	 * 
	 * 类
	 * basic_iostream	可以完成输入和输出的流类。
	 * basic_istream	类模板描述了一个对象，该对象可控制从流缓冲区提取元素和编码对象，
	 * 其元素类型为 Elem （也称为char_type），其字符特征由类 Tr （也称为traits_type。
	*/
   	ws( cin );
   	char c[10];

   	cin.width( 9 );
   	cin >> c;
   	cout << c << endl;
}

void header_iterator() { 
	/*
	 * 定义迭代器基元、预定义的迭代器和流迭代器，以及一些支持模板。 
	 * 预定义的迭代器包含插入及反向适配器。 插入迭代器适配器包括三类：前向、后向和常规。 
	 * 它们提供的是插入语义而不是容器成员函数迭代器所提供的覆盖语义。
	 * 
	 * 迭代器是指针的泛化，它从这些指针的需求中抽象出来，允许 C++ 程序使用统一的方式来处理不同的数据结构。 
	 * 迭代器充当容器和泛型算法之间的媒介。 算法被定义为对某一迭代器类型所指定的范围起作用，而不是作用于特定的数据类型。 
	 * 随后，算法可能会作用于任何满足迭代器要求的数据结构。 迭代器有五个类型或类别，各自具有自己的要求和最终功能：
	 * - 输出：向前移动，可以存储但不能检索值，由 ostream 和 inserter 提供。
	 * - 输入：向前移动，可以检索但不能存储值，由 istream 提供。
	 * - 向前：向前移动，可以存储和检索值。
	 * - 双向：向前和向后移动，可以存储和检索值，由列表、集合、多重集、映射和多重映射提供。
	 * - 随机访问：以任意顺序访问元素，可以存储和检索值，由向量、双端队列、字符串和数组提供。
	 * 
	 * 可使用要求较高、因而需要更强大元素访问的迭代器来代替要求较低的迭代器。 例如，如果调用向前迭代器，则可使用随机访问迭代器来代替。
	 * 
	 * 函数
	 * advance	使迭代器递增指定数量的位置。
	 * back_inserter	创建一个可以在指定容器的后面插入元素的迭代器。
	 * begin	检索一个指向指定容器中第一个元素的迭代器。
	 * cbegin	检索一个指向指定容器中第一个元素的常量迭代器。
	 * cend	检索一个指向指定容器中最后元素之后的元素的常量迭代器。
	 * crbegin	
	 * crend	
	 * data	
	 * distance	确定两个迭代器定址位置之间的增量数。
	 * end	检索指向指定容器中最后一个元素之后的元素的迭代器。
	 * empty	
	 * front_inserter	创建一个可以在指定容器前面插入元素的迭代器。
	 * inserter	一个可以在指定插入点向容器添加新元素的迭代器适配器。
	 * make_checked_array_iterator	创建可由其他算法使用的 checked_array_iterator。 
	 *     注意： 该函数是 C++ 标准库的 Microsoft 扩展。 使用该函数实现的代码不可移植到不支持该 Microsoft 扩展的 C++ 标准生成环境中。
	 * make_move_iterator	返回一个移动迭代器，其中包含所提供的迭代器作为其存储的基迭代器。
	 * make_unchecked_array_iterator	创建可由其他算法使用的 unchecked_array_iterator。 
	 *     注意： 该函数是 C++ 标准库的 Microsoft 扩展。 使用该函数实现的代码不可移植到不支持该 Microsoft 扩展的 C++ 标准生成环境中。
	 * next	迭代指定的次数并返回新的迭代器位置。
	 * prev	反向迭代指定的次数并返回新的迭代器位置。
	 * rbegin	
	 * rend	
	 * size	
	 * 
	 * 运算符
	 * operator!=	测试运算符左侧的迭代器对象是否不等于右侧的迭代器对象。
	 * operator==	测试运算符左侧的迭代器对象是否等于右侧的迭代器对象。
	 * operator<	测试运算符左侧的迭代器对象是否小于右侧的迭代器对象。
	 * operator<=	测试运算符左侧的迭代器对象是否小于或等于右侧的迭代器对象。
	 * operator>	测试运算符左侧的迭代器对象是否大于右侧的迭代器对象。
	 * operator>=	测试运算符左侧的迭代器对象是否大于或等于右侧的迭代器对象。
	 * operator+	将偏移量添加到迭代器，并返回在新偏移位置处发现插入元素的新 reverse_iterator。
	 * operator-	从另一个迭代器中减去一个迭代器并返回差值。
	 * 
	 * 类
	 * back_insert_iterator	类模板描述输出迭代器对象。 它将元素插入到 Container 类型的容器中，该容器通过它存储的受保护 pointer 对象（称为容器）进行访问。
	 * bidirectional_iterator_tag	一个类，该类为表示双向迭代器的 iterator_category 函数提供返回类型。
	 * checked_array_iterator	一种使用随机访问检查迭代器来访问数组的类。 
	 *     注意： 此类为 C++ 标准库的 Microsoft 扩展。 使用该函数实现的代码不可移植到不支持该 Microsoft 扩展的 C++ 标准生成环境中。
	 * forward_iterator_tag	一种为表示向前迭代器的 iterator_category 函数提供返回类型的类。
	 * front_insert_iterator	类模板描述输出迭代器对象。 它将元素插入到 Container 类型的容器中，该容器通过它存储的受保护 pointer 对象（称为容器）进行访问。
	 * input_iterator_tag	为表示输入迭代器的 iterator_category 函数提供返回类型的类。
	 * insert_iterator	类模板描述输出迭代器对象。 它将元素插入到 Container 类型的容器中，该容器通过它存储的受保护 pointer 对象（称为容器）进行访问。 它还将类 Container::iterator 的受保护 iterator 对象（称为 iter）存储。
	 * istream_iterator	类模板描述一个输入迭代器对象。 它从输入流中提取类 Ty 的对象，该输入流通过它存储的对象访问该对象，其类型指针指向 basic_istream <Elem， Tr>。
	 * istreambuf_iterator	类模板描述一个输入迭代器对象。 它将类 Elem 的元素插入到输出流缓冲区中，该缓冲区通过它存储的对象（类型 pointer）访问 basic_streambuf <Elem， Tr>。
	 * iterator	类模板用作所有迭代器的基类型。
	 * iterator_traits	一种模板 helper 类，可以提供与不同迭代器类型相关联的关键类型，以便用相同的方式引用这些迭代器。
	 * move_iterator	move_iterator 对象可以存储 RandomIterator 类型的随机访问迭代器。 它的行为类似于随机访问迭代器，但在解引用时除外。 operator* 的结果将隐式强制转换为 value_type&&:，以便形成 rvalue reference。
	 * ostream_iterator	类模板描述输出迭代器对象。 它在输出流中插入类 Type 的对象，并将其通过其所存储的对象进行访问，将 pointer 类型 basic_ostream <Elem、 Tr>。
	 * ostreambuf_iterator 类	类模板描述输出迭代器对象。 它将类 Elem 的元素插入到输出流缓冲区中，并通过它存储的对象访问该缓冲区，将类型指针插入到 basic_streambuf <Elem， Tr>。
	 * output_iterator_tag	一个类，该类为表示输出迭代器的 iterator_category 函数提供返回类型。
	 * random_access_iterator_tag	一个类，该类提供表示随机访问迭代器 iterator_category 函数的返回类型。
	 * reverse_iterator	类模板描述的行为类似于随机访问迭代器的对象，仅反向进行。
	 * unchecked_array_iterator	一种使用随机访问未检查迭代器来访问数组的类。 
	 *     注意： 此类为 C++ 标准库的 Microsoft 扩展。 使用该函数实现的代码不可移植到不支持该 Microsoft 扩展的 C++ 标准生成环境中。
	*/
   	using namespace std;
   	int i;

   	list<int> L;
   	for ( i = 1 ; i < 9 ; ++i ) {
    	L.push_back ( i );
   	}
   	list <int>::iterator L_Iter, LPOS = L.begin ( );

   	cout << "The list L is: ( ";
   	for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      	cout << *L_Iter << " ";
   	cout << ")." << endl;

   	cout << "The iterator LPOS initially points to the first element: "
         << *LPOS << "." << endl;

    advance ( LPOS , 4 );
   	cout << "LPOS is advanced 4 steps forward to point"
         << " to the fifth element: "
         << *LPOS << "." << endl;

    advance ( LPOS , -3 );
    cout << "LPOS is moved 3 steps back to point to the "
         << "2nd element: " << *LPOS << "." << endl;

	   list <int>::iterator L_Iter;

    list<int> L;
    for (i = 2 ; i < 5 ; ++i ) {
    	L.push_back ( 10 * i );
    }

    cout << "The list L is:\n ( ";
    for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
    	cout << *L_Iter << " ";
    cout << ")." << endl;

    // Using the template version to insert an element
    insert_iterator<list <int> > Iter( L, L.begin ( ) );
	*Iter = 1;

    // Alternatively, using the member function to insert an element
    inserter ( L, L.end ( ) ) = 500;

    cout << "After the insertions, the list L is:\n ( ";
    for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      	cout << *L_Iter << " ";
   	cout << ")." << endl;
}

// <l>
void header_limits() { 
	/*
	 * 定义类模板 numeric_limits 和两个有关浮点表示形式和舍入的枚举。
	 * 
	 * 枚举
	 * float_denorm_style	此枚举描述实现可以选择用于表示非标准化浮点值的各种方法，这种浮点值由于太小而无法表示为规范化值：
	 * float_round_style	此枚举描述实现可以选择用于将浮点值舍入为整数值的各种方法。
	 * 
	 * 类
	 * numeric_limits 类	类模板描述内置数值类型的算术属性。
	 * 
	 * 枚举
	 * enum float_denorm_style {
	 *     denorm_indeterminate = -1,
	 *     denorm_absent = 0,
	 *     denorm_present = 1    
	 * };
	 * 
	 * enum float_round_style {
	 *     round_indeterminate = -1,
	 *     round_toward_zero = 0,
	 *     round_to_nearest = 1,
	 *     round_toward_infinity = 2,
	 *     round_toward_neg_infinity = 3    
	 * };
	 * 
	 * 头文件为类型wchar_t、 bool、 char、有符号字符、无符号 char、 short、无符号短、整数、无符号整数、
	 * 长、无符号长、浮点、双 精度、长双精度、长整数、无符号长、 char16_t和char32_t定义显式专用化。 
	 * 对于这些显式专用化，成员numeric_limits：： is_specialized为true，所有相关成员都具有有意义的值。 
	 * 程序可提供额外的显式专用化。 类的大多数成员函数描述或测试float的可能实现。
	 * 对于任意专用化，所有成员均无有意义的值。 不具有有意义的值的成员对象将存储零（或false），并且不返回有意义的值的成员函数将返回 Type(0)。
	 * 
	 * 静态函数和常数
	 * denorm_min	返回最小的非规范化非零值。
	 * digits	返回类型可以表示而不会降低精度的基数数字的位数。
	 * digits10	返回类型可以表示而不会降低精度的十进制数字的位数。
	 * epsilon	返回数据类型可以表示的 1 与大于 1 的最小值之间的差值。
	 * has_denorm	测试类型是否允许非规范化值。
	 * has_denorm_loss	测试是否将准确度降低检测为非规范化损失，而不是不准确结果。
	 * has_infinity	测试某一类型是否能够表示正无穷。
	 * has_quiet_NaN	测试某一类型是否具有 quiet （非信号）的表示形式。
	 * has_signaling_NaN	测试某一类型是否能表示信号性沉寂非数值 (NAN)。
	 * infinity	某一类型用于表示正无穷的值（若适用）。
	 * is_bounded	测试某一类型可表示的值设置是否为有限。
	 * is_exact	测试针对某一类型进行的计算是否不产生舍入错误。
	 * is_iec559	测试某一类型是否符合 IEC 559 标准。
	 * is_integer	测试某一类型是否具有具有整数表示形式。
	 * is_modulo	测试某一类型是否具有具有取模表示形式。
	 * is_signed	测试某一类型是否具有带符号的表示形式。
	 * is_specialized	测试某一类型是否具有在类模板 numeric_limits中定义的显式专用化。
	 * lowest	返回最小的负有限值。
	 * max	返回某个类型的最大有限值。
	 * max_digits10	返回确保类型的两个非重复值具有不同的十进制表示形式所需的十进制数字的位数。
	 * max_exponent	返回最大正整数指数，当计算基数的该指数次幂时，浮点类型可将其表示为有限值。
	 * max_exponent10	返回最大正整数指数，当计算 10 的该指数次幂时，浮点类型可将其表示为有限值。
	 * min	返回某个类型的最小规范化值。
	 * min_exponent	返回最大负整数指数，当计算基数的该指数次幂时，浮点类型可将其表示为有限值。
	 * min_exponent10	返回最大负整数指数，当计算 10 的该指数次幂时，浮点类型可将其表示为有限值。
	 * quiet_NaN	返回类型的静默非数值 (NAN) 表示形式。
	 * radix	返回用于表示类型的整数底数（称为基数）。
	 * round_error	返回类型的最大舍入误差值。
	 * round_style	返回一个值，该值描述可供实现选择用于将浮点值舍入为整数值的各种方法。
	 * signaling_NaN	返回类型的信令非数值 (NAN) 表示形式。
	 * tinyness_before	测试某个类型是否可在舍入某个值之前确定该值太小而无法表示为规范化值。
	 * traps	测试是否为某个类型实现了报告算术异常的捕获。
	*/
   	cout << "The smallest nonzero denormalized value" << endl
         << "for float objects is: "
         << numeric_limits<float>::denorm_min( ) << endl;
    cout << "The smallest nonzero denormalized value" << endl
         << "for double objects is: "
         << numeric_limits<double>::denorm_min( ) << endl;
    cout << "The smallest nonzero denormalized value" << endl
         << "for long double objects is: "
         << numeric_limits<long double>::denorm_min( ) << endl;

   // A smaller value will round to zero
   cout << numeric_limits<float>::denorm_min( )/2 <<endl;
   cout << numeric_limits<double>::denorm_min( )/2 <<endl;
   cout << numeric_limits<long double>::denorm_min( )/2 <<endl;

   cout << numeric_limits<float>::digits <<endl;
   cout << numeric_limits<double>::digits <<endl;
   cout << numeric_limits<long double>::digits <<endl;
   cout << numeric_limits<int>::digits <<endl;
   cout << numeric_limits<__int64>::digits <<endl;

   cout << numeric_limits<float>::digits10 <<endl;
   cout << numeric_limits<double>::digits10 <<endl;
   cout << numeric_limits<long double>::digits10 <<endl;
   cout << numeric_limits<int>::digits10 <<endl;
   cout << numeric_limits<__int64>::digits10 <<endl;
   float f = (float)99999999;
   cout.precision ( 10 );
   cout << "The float is; " << f << endl;

   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for float objects is: "
        << numeric_limits<float>::epsilon( ) << endl;
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for double objects is: "
        << numeric_limits<double>::epsilon( ) << endl;
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for long double objects is: "
        << numeric_limits<long double>::epsilon( ) << endl;

   cout << "Whether float objects allow denormalized values: "
        << numeric_limits<float>::has_denorm
        << endl;
   cout << "Whether double objects allow denormalized values: "
        << numeric_limits<double>::has_denorm
        << endl;
   cout << "Whether long int objects allow denormalized values: "
        << numeric_limits<long int>::has_denorm
        << endl;

   cout << "Whether float objects can detect denormalized loss: "
        << numeric_limits<float>::has_denorm_loss
        << endl;
   cout << "Whether double objects can detect denormalized loss: "
        << numeric_limits<double>::has_denorm_loss
        << endl;
   cout << "Whether long int objects can detect denormalized loss: "
        << numeric_limits<long int>::has_denorm_loss
        << endl;

   cout << "Whether float objects have infinity: "
        << numeric_limits<float>::has_infinity
        << endl;
   cout << "Whether double objects have infinity: "
        << numeric_limits<double>::has_infinity
        << endl;
   cout << "Whether long int objects have infinity: "
        << numeric_limits<long int>::has_infinity
        << endl;

   cout << "Whether float objects have a signaling_NaN: "
        << numeric_limits<float>::has_signaling_NaN
        << endl;
   cout << "Whether double objects have a signaling_NaN: "
        << numeric_limits<double>::has_signaling_NaN
        << endl;
   cout << "Whether long int objects have a signaling_NaN: "
        << numeric_limits<long int>::has_signaling_NaN
        << endl;

   cout << numeric_limits<float>::has_infinity <<endl;
   cout << numeric_limits<double>::has_infinity<<endl;
   cout << numeric_limits<long double>::has_infinity <<endl;
   cout << numeric_limits<int>::has_infinity <<endl;
   cout << numeric_limits<__int64>::has_infinity <<endl;

   cout << "The representation of infinity for type float is: "
        << numeric_limits<float>::infinity( ) <<endl;
   cout << "The representation of infinity for type double is: "
        << numeric_limits<double>::infinity( ) <<endl;
   cout << "The representation of infinity for type long double is: "
        << numeric_limits<long double>::infinity( ) <<endl;

   cout << "Whether float objects have bounded set "
        << "of representable values: "
        << numeric_limits<float>::is_bounded
        << endl;
   cout << "Whether double objects have bounded set "
        << "of representable values: "
        << numeric_limits<double>::is_bounded
        << endl;
   cout << "Whether long int objects have bounded set "
        << "of representable values: "
        << numeric_limits<long int>::is_bounded
        << endl;
   cout << "Whether unsigned char objects have bounded set "
        << "of representable values: "
        << numeric_limits<unsigned char>::is_bounded
        << endl;

}

void header_list() { 
	/*
	 * 定义容器类模板列链表和多个支持模板。
	 * 
	 * 运算符
	 * operator!=	测试运算符左侧的列表对象是否不等于右侧的列表对象。
	 * operator<	测试运算符左侧的列表对象是否小于右侧的列表对象。
	 * operator<=	测试运算符左侧的列表对象是否小于或等于右侧的列表对象。
	 * operator==	测试运算符左侧的列表对象是否等于右侧的列表对象。
	 * operator>	测试运算符左侧的列表对象是否大于右侧的列表对象。
	 * operator>=	测试运算符左侧的列表对象是否大于或等于右侧的列表对象。
	 * 
	 * 函数
	 * swap	交换两个列表的元素。
	 * 
	 * 类
	 * list 类	序列容器的类模板，它以线性方式维护其元素，并允许在序列内的任何位置高效插入和删除。
	 * 
	 * Typedef
	 * allocator_type	表示列表对象的 allocator 类的类型。
	 * const_iterator	提供可读取列表中 const 元素的双向迭代器的类型。
	 * const_pointer	一种类型，它提供指向列表中const元素的指针。
	 * const_reference	提供对存储于列表中供读取和执行 const 操作的 const 元素的引用的类型。
	 * const_reverse_iterator	提供可读取列表中任何 const 元素的双向迭代器的类型。
	 * difference_type	提供引用同一列表中的元素的两个迭代器之间的差异的类型。
	 * Iterator	提供可读取或修改列表中任何元素的双向迭代器的类型。
	 * pointer	提供指向列表中元素的指针的类型。
	 * reference	提供对存储于列表中供读取和执行 const 操作的 const 元素的引用的类型。
	 * reverse_iterator	提供可读取或修改反向列表中的元素的双向迭代器的类型。
	 * size_type	计算列表中元素的数目的类型。
	 * value_type	表示列表中存储的数据类型的类型。
	 * 
	 * 函数
	 * assign	将元素从列表中擦除并将一组新的元素复制到目标列表。
	 * back	返回对列表中最后一个元素的引用。
	 * begin	返回发现列表中第一个元素的位置的迭代器。
	 * cbegin	返回发现列表中第一个元素的位置的常量迭代器。
	 * cend	返回发现一个列表中最后一个元素之后的位置的敞亮表达式。
	 * clear	消除列表中的全部元素。
	 * crbegin	返回发现反向列表中第一个元素的位置的常量迭代器。
	 * crend	返回用于发现反向列表中最后一个元素之后的位置的常量迭代器。
	 * emplace	将构造的元素插入到列表中的指定位置。
	 * emplace_back	在列表的结尾处添加一个就地构造的元素。
	 * emplace_front	在列表的起始位置添加一个就地构造的元素。
	 * empty	测试列表是否为空。
	 * end	返回用于发现列表中最后一个元素之后的位置的迭代器。
	 * erase	从列表中的指定位置移除一个或一系列元素。
	 * front	返回对列表中第一个元素的引用。
	 * get_allocator	返回用于构造列表的 allocator 对象的一个副本。
	 * insert	将一个、几个或一系列元素插入列表中的指定位置。
	 * max_size	返回列表的最大长度。
	 * merge	将元素从参数列表移除，将它们插入目标列表，将新的组合元素集以升序或其他指定顺序排序。
	 * pop_back	删除列表末尾的元素。
	 * pop_front	删除列表起始处的一个元素。
	 * push_back	在列表的末尾添加元素。
	 * push_front	在列表的开头添加元素。
	 * rbegin	返回发现反向列表中第一个元素的位置的迭代器。
	 * remove	清除列表中与指定值匹配的元素。
	 * remove_if	将满足指定谓词的元素从列表中消除。
	 * rend	返回发现反向列表中最后一个元素之后的位置的迭代器。
	 * resize	为列表指定新的大小。
	 * reverse	反转列表中元素的顺序。
	 * size	返回列表中元素的数目。
	 * sort	按升序或其他顺序关系排列列表中的元素。
	 * splice	将元素从自变量列表中删除或将它们插入目标列表。
	 * swap	交换两个列表的元素。
	 * unique	从列表中删除满足某些其他二元谓词的相邻重复元素或相邻元素。
	 * 
	 * 容器类型选择通常应根据应用程序所需的搜索和插入的类型。 当对任何元素的随机访问超出限制并且仅要求在序列的末尾插入或删除元素时，
	 * 矢量应作为用于管理序列的首选容器。 当需要随机访问并且在序列起始处和末尾处插入和删除元素已到达极限时，应首选类 deque 容器进行操作。
	 * 列表成员函数 merge、reverse、unique、remove 和 remove_if 已针对对列表的操作进行了优化，它们可作为泛型对应函数的高性能替代函数。
	 * 当成员函数必须插入或删除列表中的元素时，将发生列表的重新分配。 在所有这类情况下，仅指向受控制序列被消除部分的迭代器或引用将变为无效。
	*/
	using namespace std;
	list <int> c1, c2;
	c1.push_back( 1 );
	c2.push_back( 2 );

	if ( c1 != c2 )
		cout << "Lists not equal." << endl;
	else
		cout << "Lists equal." << endl;

    list<int>::const_iterator cIter;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(40);
    c2.push_back(50);
    c2.push_back(60);

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.assign(++c2.begin(), c2.end());
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.assign(7, 4);
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    c1.assign({ 10, 20, 30, 40 });
    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;
}

void header_locale() { 
	/*
	 * 定义类模板和函数， C++这些模板和函数可用于封装和操作有关数字、货币和日历数据（包括国际化支持）
	 * 的表示形式和格式的不同文化约定用于字符分类和字符串排序规则。
	 * 
	 * 函数
	 * has_facet	测试某一特定 facet 是否存储在指定区域设置中。
	 * isalnum	测试区域设置中的某一元素是否是字母字符或数字字符。
	 * isalpha	测试区域设置中的某一元素是否是字母字符。
	 * iscntrl	测试区域设置中的某一元素是否是控制字符。
	 * isdigit	测试区域设置中的某一元素是否是数字字符。
	 * isgraph	测试区域设置中的某一元素是否是字母数字字符或标点字符。
	 * islower	测试区域设置中的某一元素是否是小写。
	 * isprint	测试区域设置中的某一元素是否是可打印字符。
	 * ispunct	测试区域设置中的某一元素是否是标点字符。
	 * isspace	测试区域设置中的某一元素是否是空白字符。
	 * isupper	测试区域设置中的某一元素是否是大写。
	 * isxdigit	测试区域设置中的某一元素是否是用于表示十六进制数字的字符。
	 * tolower	将字符转换为小写。
	 * toupper	将字符转换为大写。
	 * use_facet	返回对区域设置中存储的某一指定类型 facet 的引用。
	 * 
	 * 类
	 * codecvt	提供用于在内部和外部字符编码之间进行转换的 facet 的类模板。
	 * codecvt_base	用于定义称为 result 的枚举类型的 codecvt 类的基类，此类枚举类型用作 facet 成员函数的返回类型，以指示转换的结果。
	 * codecvt_byname	一个派生类模板，用于描述一个对象，该对象可充当给定区域设置的排序规则 facet，从而能够检索涉及转换的文化区域的信息。
	 * collate	一种排序类模板，用于提供处理字符串排序约定的方面。
	 * collate_byname	一个派生类模板，用于描述一个对象，该对象可充当给定区域设置的排序规则 facet，从而能够检索特定于涉及字符串排序约定的区域性区域的信息。
	 * ctype	一个类模板，该模板提供用于对字符进行分类、在本机字符集和本地字符集之间进行转换的方面以及区域设置使用的设置。
	 * ctype <char >	一个类，该类是类模板的显式专用化 ctype<CharType> 为类型char，描述可用作区域设置 facet 的对象，用于描述类型为char的字符的各种属性。
	 * ctype_base	一种 ctype 类的基类，用于定义枚举类型来分类或测试单个字符或整个范围内的字符。
	 * ctype_byname	一种派生类模板，用于描述一个对象，该对象可充当给定区域设置的 ctype facet，启用字符分类以及区分大小写和本地和区域设置指定字符集之间的字符的转换。
	 * locale	一种描述区域设置对象的类，可将区域性特定信息封装为一组 facet，以便共同定义特定的本地化环境。
	 * messages	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以便从给定区域设置的国际化消息目录中检索本地化消息。
	 * messages_base	描述消息目录的int类型的基类。
	 * messages_byname	一种派生类模板，用于描述一个对象，该对象可充当给定区域设置的消息方面，并支持检索本地化消息。
	 * money_base	一种 ctype 类的基类，用于定义枚举类型来分类或测试单个字符或整个范围内的字符。
	 * money_get	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以便控制CharType类型的序列到货币值的转换。
	 * money_put	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以便控制货币值到CharType类型的转换。
	 * moneypunct	一个类模板，该模板描述可用作区域设置 facet 的对象，以描述用于表示货币输入字段或货币输出字段的CharType类型的序列。
	 * moneypunct_byname	一个派生类模板，用于描述一个对象，该对象可充当给定区域设置的 moneypunct facet，从而启用格式货币输入或输出字段。
	 * num_get	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以便控制CharType类型的序列到数值的转换。
	 * num_put	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以便控制数值到类型CharType的序列的转换。
	 * numpunct	一个类模板，用于描述一个对象，该对象可用作本地方面，以描述用于表示有关数值和布尔表达式的格式和标点的信息的CharType类型的序列。
	 * numpunct_byname	一个派生类模板，用于描述一个对象，该对象可充当给定区域设置的 moneypunct facet，从而支持数值和布尔表达式的格式设置和标点。
	 * time_base	一个类，用于作为类模板 time_get 的各方面的基类，只定义枚举的类型 dateorder 以及此类型的几个常量。
	 * time_get	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以控制CharType类型的序列到时间值的转换。
	 * time_get_byname	一种派生类模板，用于描述一个对象，该对象可充当类型为 time_get <CharType， InputIterator> 的区域设置 facet。
	 * time_put	一个类模板，用于描述一个对象，该对象可充当区域设置 facet，以控制将时间值转换为CharType类型的序列。
	 * time_put_byname	一个派生类模板，用于描述一个对象，该对象可充当类型 time_put <CharType， OutputIterator> 的区域设置 facet。
	 * wbuffer_convert 类	描述用于控制元素与字节流缓冲区之间的来回传输的流缓冲区。
	 * wstring_convert 类	一个类模板，它在宽字符串和字节字符串之间执行转换。
	*/

   	locale loc ( "German_Germany" );
   	bool result1 = use_facet<codecvt<char, char, mbstate_t> >
      	( loc ).always_noconv( );

   	if ( result1 )
      	cout << "No conversion is needed." << endl;
   	else
      	cout << "At least one conversion is required." << endl;

   	bool result2 = use_facet<codecvt<wchar_t, char, mbstate_t> >
      	( loc ).always_noconv( );

   	if ( result2 )
      	cout << "No conversion is needed." << endl;
   	else
      	cout << "At least one conversion is required." << endl;

	typename _TCHAR = char;

   	_TCHAR * s1 = _T("Das ist wei\x00dfzz."); // \x00df is the German sharp-s, it comes before z in the German alphabet
   	_TCHAR * s2 = _T("Das ist weizzz.");
   	int result1 = use_facet<collate<_TCHAR> > ( loc ).
      	compare ( s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   	cout << result1 << endl;

   	locale loc2 ( "C" );
   	int result2 = use_facet<collate<_TCHAR> > ( loc2 ).
      	compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );
   	cout << result2 << endl;

   	locale loc1 ( "english" );
   	wchar_t *str1 = L"\x0392fhello everyone";
   	char str2 [16];
   	bool result1 = (use_facet<ctype<wchar_t> > ( loc1 ).narrow
      	( str1, str1 + wcslen(str1), 'X', &str2[0] ) != 0);  // C4996
   	str2[wcslen(str1)] = '\0';
   	wcout << str1 << endl;
   	cout << &str2[0] << endl;

}

// <m>
void header_map() { 
	/*
	 * 定义容器类模板 map 和多重映射及其支持的模板。
	 * 用于存储和检索集合中的数据，此集合中的每个元素均为包含数据值和排序键的元素对。 键的值是唯一的，用于自动排序数据。
	 * 可以直接更改映射中的元素值。 键值是常量，不能更改。 必须先删除与旧元素关联的键值，才能为新元素插入新键值。
	 * 
	 * C++ 标准库 map 类为：
	 * - 大小可变的关联容器，基于关联键值高效检索元素值。
	 * - 可逆，因为它提供双向迭代器来访问其元素。
	 * - 有序，因为它的元素根据指定的比较函数按键值排序。
	 * - 唯一。 因为它的每个元素必须具有唯一键。
	 * - 关联容器对，因为它的元素数据值与其键值不同。
	 * - 类模板，因为它提供的功能是泛型的，独立于元素或键类型。 用于元素和键的数据类型作为类模板以及比较函数和分配器中的参数指定。
	 * 
	 * map 类提供的迭代器是双向迭代器，但 insert 和 map 类成员函数有一些版本可以将功能较少的输入迭代器作为 template 参数，
	 * 这种迭代器的功能要求比双向迭代器类保证的功能要求少。 不同的迭代器概念通过它们的功能优化相关联。 每个迭代器概念有它自己的一套要求，
	 * 使用这些概念的算法必须受这些要求的限制。 输入迭代器可取消引用以引用某个对象，并可递增到序列中的下一迭代器。
	 * 
	 * 建议根据应用程序需要的搜索和插入类型选择容器类型。 关联容器针对查找、插入和移除操作进行了优化。 
	 * 显式支持这些操作的成员函数执行这些操作的最坏情况时间与容器中元素数量的对数成比例。 
	 * 插入元素不会使迭代器失效，移除元素仅会使专门指向已移除元素的迭代器失效。
	 * 
	 * 建议在应用程序满足将值与键关联的条件时，选择映射作为关联容器。 
	 * 此类结构的模型是关键字排序列表，这些关键字只出现一次，并具有提供定义的关联字符串值。 
	 * 如果关键字有多个正确定义，则此关键字不唯一，应选择多重映射作为容器。 如果仅存储关键字列表，则应使用集作为适当容器。
	 * 如果允许关键字多次出现，则多重集合为适当容器。
	 * 
	 * map 通过调用存储的 key_compare 类型的函数对象，对它控制的元素进行排序。 此存储的对象是比较函数，
	 * 可通过调用 key_comp 方法访问。 通常，将比较任意两个给当元素，以确定其中一个是否小于另一个或两者是否等效。 
	 * 比较所有元素后，将创建非等效元素的排序序列。
	*/
	typedef std::map<char, int> Mymap;
	Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

	// find and show elements
    std::cout << "c1.at('a') == " << c1.at('a') << std::endl;
    std::cout << "c1.at('b') == " << c1.at('b') << std::endl;
    std::cout << "c1.at('c') == " << c1.at('c') << std::endl;

    map <int, int> m1;

    map <int, int> :: iterator m1_Iter;
    map <int, int> :: const_iterator m1_cIter;
    typedef pair <int, int> Int_Pair;

    m1.insert ( Int_Pair ( 0, 0 ) );
    m1.insert ( Int_Pair ( 1, 1 ) );
    m1.insert ( Int_Pair ( 2, 4 ) );

    m1_cIter = m1.begin ( );
    cout << "The first element of m1 is " << m1_cIter -> first << endl;

    m1_Iter = m1.begin ( );
    m1.erase ( m1_Iter );

    // The following 2 lines would err because the iterator is const
    // m1_cIter = m1.begin ( );
    // m1.erase ( m1_cIter );

    m1_cIter = m1.begin( );
    cout << "The first element of m1 is now " << m1_cIter -> first << endl;

   	multimap <int, int> m t;

   	multimap <int, int> :: iterator mt1_Iter;
   	multimap <int, int> :: const_iterator mt1_cIter;
   	typedef pair <int, int> Int_Pair;

   	mt1.insert ( Int_Pair ( 0, 0 ) );
   	mt1.insert ( Int_Pair ( 1, 1 ) );
   	mt1.insert ( Int_Pair ( 2, 4 ) );

   	mt1_cIter = mt1.begin ( );
   	cout << "The first element of mt1 is " << mt1_cIter -> first << endl;

   	mt1_Iter = mt1.begin ( );
   	mt1.erase ( mt1_Iter );

   	// The following 2 lines would err as the iterator is const
   	// mt1_cIter = mt1.begin ( );
   	// mt1.erase ( mt1_cIter );

   	mt1_cIter = mt1.begin( );
   	cout << "First element of mt1 is now " << mt1_cIter -> first << endl;

}

void header_memory() { 
	/*
	 * 定义一个类、运算符和一些模板来帮助分配和释放对象。特别地，是智能指针所在的头文件
	 * auto_ptr bad_weak_ptr weak_ptr unique_ptr shared_ptr
	 * 
	 * 函数
	 * addressof	获取对象的实际地址。
	 * align	根据所提供的对齐和起始地址，返回指向给定大小范围的指针。
	 * allocate_shared	创建一个 shared_ptr，指向使用指定分配器分配和构造的给定类型的对象。
	 * atomic_compare_exchange_strong	
	 * atomic_compare_exchange_weak	
	 * atomic_compare_exchange_strong_explicit	
	 * atomic_compare_exchange_weak_explicit	
	 * atomic_exchange	
	 * atomic_exchange_explicit	
	 * atomic_is_lock_free	
	 * atomic_load	
	 * atomic_load_explicit	
	 * atomic_store	
	 * atomic_store_explicit	
	 * const_pointer_cast	常量强制转换为 shared_ptr。
	 * declare_no_pointers	通知垃圾回收器：从指定地址开始且属于所指示块大小范围内的字符不包含可跟踪的指针。
	 * declare_reachable	通知垃圾回收器：所指示的地址属于分配的存储并可到达。
	 * default_delete	删除使用 operator new 分配的对象。 适合与 unique_ptr 一起使用。
	 * destroy_at	速记 destroy 方法。
	 * destroy	速记 destroy 方法。
	 * destroy_n	速记 destroy 方法。
	 * dynamic_pointer_cast	动态强制转换为 shared_ptr。
	 * get_deleter	从 shared_ptr 获取删除器。
	 * get_pointer_safety	返回任意垃圾回收器所采用的指针安全类型。
	 * get_temporary_buffer	为不超过指定元素数量的元素序列分配临时存储。
	 * make_shared	创建并返回一个 shared_ptr，指向使用默认分配器从零个或多个参数构造的分配对象。
	 * make_unique	创建并返回一个 unique_ptr，指向从零个或多个自变量构建的分配对象。
	 * pointer_safety	一种对 get_pointer_safety 的所有可能返回值的枚举。
	 * return_temporary_buffer	对使用 get_temporary_buffer 模板函数分配的临时内存执行解除分配。
	 * static_pointer_cast	静态强制转换为 shared_ptr。
	 * swap	交换两个 shared_ptr 或 weak_ptr 对象。
	 * undeclare_no_pointers	通知垃圾回收器：通过基地址指针和块大小而定义的内存块中的字符现在可包含可跟踪的指针。
	 * undeclare_reachable	通知 garbage_collector：指定的内存位置无法达到。
	 * uninitialized_copy	将来自指定输入范围的对象复制到未初始化的目标范围。
	 * uninitialized_copy_n	创建来自输入迭代器的指定数量的元素的副本。 副本放置在向前迭代器中。
	 * uninitialized_default_construct	速记 uninitialized_default_construct 方法
	 * uninitialized_default_construct_n	速记 uninitialized_construct 方法。
	 * uninitialized_fill	将具有指定值的对象复制到未初始化的目标范围。
	 * uninitialized_fill_n	将具有指定值的对象复制到未初始化目标范围的指定数量的元素。
	 * uninitialized_move	速记 uninitialized_move 方法。
	 * uninitialized_move_n	速记 uninitialized_move 方法。
	 * uninitialized_value_construct	速记 uninitialized_value_construct 方法。
	 * uninitialized_value_construct_n	速记 uninitialized_value_construct 方法。
	 * uses_allocator_v	
	 * 
	 * 运算符
	 * operator!=	测试指定类的分配器对象之间是否不相等。
	 * operator==	测试指定类的分配器对象之间是否相等。
	 * operator>=	测试指定类的某一分配器对象是否大于或等于另一个分配器对象。
	 * operator<	测试指定类的某一对象是否小于另一个对象。
	 * operator<=	测试指定类的某一对象是否小于或等于另一个对象。
	 * operator>	测试指定类的某一对象是否大于另一个对象。
	 * operator<<	shared_ptr 插入器。
	 * 
	 * 类
	 * allocator	类模板描述了一个对象，该对象管理类型为的对象数组的存储分配和释放。
	 * allocator_traits	描述一个对象，用于确定支持分配器的容器所需要的全部信息。
	 * auto_ptr	类模板描述了一个对象，该对象存储一个指向类型为type *的已分配对象的指针，该指针可确保当它的封闭 auto_ptr 被销毁时，它指向的对象将被删除。
	 * bad_weak_ptr	报告不良的 weak_ptr 异常。
	 * enabled_shared_from_this	帮助生成一个 shared_ptr。
	 * pointer_traits	提供 allocator_traits 类型的对象所需的信息，以描述指针类型为 Ptr 的分配器。
	 * raw_storage_iterator	一种所提供的适配器类，使算法能够将它们的结果存储到未初始化的内存中。
	 * shared_ptr	将引用计数智能指针回绕在动态分配的对象周围。
	 * unique_ptr	存储指向拥有的对象的指针。 指针不归任何其他 unique_ptr 所拥有。 当所有者被销毁后，unique_ptr 也会被销毁。
	 * weak_ptr	回绕弱链接指针。
	*/

	char buffer[256]; // for simplicity
	size_t alignment = std::alignment_of<int>::value;
	void * ptr = buffer;
	std::size_t space = sizeof(buffer); // Be sure this results in the true size of your buffer

	while (std::align(alignment, sizeof(MyObj), ptr, space)) {
    	// You now have storage the size of MyObj, starting at ptr, aligned on
    	// int boundary. Use it here if you like, or save off the starting address
    	// contained in ptr for later use.
    	// ...
    	// Last, move starting pointer and decrease available space before
    	// the while loop restarts.
    	ptr = reinterpret_cast<char*>(ptr) + sizeof(MyObj);
    	space -= sizeof(MyObj);
	}

    std::shared_ptr<int> sp0(new int);
    std::shared_ptr<const int> sp1 =
        std::const_pointer_cast<const int>(sp0);

    *sp0 = 3;
    std::cout << "sp1 == " << *sp1 << std::endl;

	struct base {
    	virtual ~base() {}
    	int value;
	};

	struct derived : public base { };

    std::shared_ptr<base> spbase0(new derived);
    std::shared_ptr<derived> spderived1 =
        std::dynamic_pointer_cast<derived>(spbase0);

    spbase0->value = 3;
    std::cout << "sp1->value == " << spderived1->value << std::endl;

        // Create an array of ints
    int intArray [] = { 10, 20, 30, 40, 100, 200, 300, 1000, 2000 };
    int count = sizeof ( intArray ) / sizeof ( int );
    cout << "The number of integers in the array is: "
        << count << "." << endl;

    pair<int *, ptrdiff_t> resultPair;
    resultPair = get_temporary_buffer<int>( count );

    cout << "The number of elements that the allocated memory\n"
        << "could store is given by: resultPair.second = "
        << resultPair.second << "." << endl;

}

void header_memory_resource() { 
	/*
	 * 定义容器类模板 memory_resource 及其支持的模板。
	 * 
	 * 运算符
	 * operator!=	测试位于运算符左侧的 memory_resource 对象是否不等于右侧的 memory_resource 对象。
	 * operator==	测试位于运算符左侧的 memory_resource 对象是否等于右侧的 memory_resource 对象。
	 * 
	 * 专用化模板函数
	 * polymorphic_allocator
	 * 
	 * 函数
	 * get_default_resource	
	 * new_delete_resource	
	 * null_memory_resource	
	 * set_default_resource
	 * 
	 * 类和结构
	 * memory_resource 类	
	 * monotonic_buffer_resource 类	
	 * pool_options 结构	
	 * synchronized_pool_resource 类	
	 * unsynchronized_pool_resource 类
	*/

}

void header_mutex() { 
	/*
	 * 包括：用于定义类 mutex、recursive_mutex、timed_mutex 和 recursive_timed_mutex 的标准头文件 <mutex>，
	 * 模板 lock_guard 和 unique_lock，以及用于定义互斥代码区域的支持类型和函数。
	 * 
	 * 类 mutex 和 recursive_mutex 是互斥体类型。 互斥体类型的默认构造函数和析构函数不会引发异常。 
	 * 当多个线程尝试锁定同一对象时，这些对象有方法实现互相排斥。 具体而言，互斥体类型包含的方法有 lock、try_lock 和 unlock：
	 * * lock 方法是阻止调用线程，直到线程获取互斥体的所有权。 忽略其返回值。
	 * * try_lock 方法尝试在不阻止的情况下获取互斥体的所有权。 如果该方法获取所有权, 则其返回类型可转换为bool , 为true , 否则为false。
	 * * unlock 方法是从调用线程中释放互斥体的所有权。
	 * 
	 * 可以使用互斥体类型作为类型参数来对模板 lock_guard 和 unique_lock 进行实例化。 
	 * 可以将这些类型的对象作为 Lock 自变量以用于模板 condition_variable_any 中的等待成员函数。
	 * 定时互斥体类型满足互斥体类型的需求。 此外, 它还具有try_lock_for和try_lock_until方法, 
	 * 这些方法必须可使用一个参数进行调用, 并且必须返回可转换为布尔值的类型。 
	 * 定时互斥体类型可使用其他自变量来定义这些函数，前提是这些其他自变量都具有默认值。
	 * * try_lock_for 方法必须可使用一个自变量 Rel_time 进行调用，该自变量的类型是 chrono::duration 的实例化。 
	 *     此方法尝试获取互斥体的所有权，但无论成功与否，都会在 Rel_time 指定的时间内返回。 
	 *     如果该方法获取所有权, 则返回值将转换为true ;否则, 返回值将转换为false。
	 * * try_lock_until 方法必须可使用一个自变量 Abs_time 进行调用，该自变量的类型是 chrono::time_point 的实例化。 
	 *     此方法尝试获取互斥体的所有权，但无论成功与否，都会在不迟于 Abs_time 指定的时间内返回。 如果该方法获取所有权, 则返回值将转换为true ;
	 *     否则, 返回值将转换为false。
	 * 互斥体类型也称为可锁定类型。 如果未提供成员函数 try_lock，则为基本可锁定类型。 定时互斥体类型也称为定时可锁定类型。
	 * 
	 * 类
	 * lock_guard 类	表示可进行实例化以创建其析构函数解锁 mutex 的对象的模板。
	 * mutex 类（C++ 标准库）	表示互斥体类型。 使用此类型的对象以在程序内强制实现互相排斥。
	 * recursive_mutex 类	表示互斥体类型。 与 mutex 类相反，为已锁定的对象调用锁定方法的行为是有明确定义的。
	 * recursive_timed_mutex 类	表示定时互斥体类型。 使用此类型的对象以在程序内强制实现有时间限制的互相排斥。 
	 *     与 timed_mutex 类型的对象不同，为 recursive_timed_mutex 对象调用锁定方法的效果是有明确定义的。
	 * scoped_lock 类	
	 * timed_mutex 类	表示定时互斥体类型。 使用此类型的对象以在程序内强制实现有时间限制的互相排斥。
	 * unique_lock 类	表示可进行实例化以创建管理 mutex 锁定和解锁的对象的模板。
	 * 
	 * 函数
	 * call_once	提供在执行期间只调用一次指定的可调用对象的机制。
	 * lock	尝试在不死锁的情况下锁定所有自变量。
	 * swap	
	 * try_lock	
	 * 
	 * 结构
	 * adopt_lock_t 结构	表示用于定义 adopt_lock 的类型。
	 * defer_lock_t 结构	表示定义用于选择 unique_lock 的重载构造函数之一的 defer_lock 对象的类型。
	 * once_flag 结构	表示一个结构, 该结构与模板函数call_once结合使用, 以确保初始化代码只调用一次, 即使存在多个执行线程。
	 * try_to_lock_t 结构	表示一个结构, 该结构try_to_lock定义对象并用于选择unique_lock的重载构造函数之一。
	 * 
	 * 变量
	 * adopt_lock	表示可传递给 lock_guard 和 unique_lock 的构造函数，以指示同样传递给该构造函数的互斥体对象已锁定的对象。
	 * defer_lock	表示可以传递给 unique_lock 的构造函数的对象，以指示该构造函数不应锁定同样传递给它的互斥体对象。
	 * try_to_lock	表示可以传递给 unique_lock 的构造函数的对象，以指示该构造函数应尝试在不阻止的情况下解锁同样传递给它的 mutex。
	*/
}

// <n>
void header_new() { 
	/*
	 * 定义一些类型和函数，它们控制程序控件下存储空间的分配和释放。 
	 * 它还定义了用于报告存储管理错误的组件。
	 * 
	 * 对象
	 * nothrow	提供一个对象, 该对象用作new和delete的nothrow版本的参数。
	 * 
	 * Typedef
	 * new_handler	一个类型，它指向适合用作新处理程序的函数。
	 * hardware_constructive_interference_size	
	 * hardware_destructive_interference_size
	 * 
	 * 函数
	 * get_new_handler	
	 * launder	
	 * set_new_handler	安装一个用户函数，当尝试分配内存再次失败时会调用该函数。
	 * 
	 * 运算符
	 * 运算符 delete	由 delete 表达式调用来解除单个对象的存储空间分配的函数。
	 * 运算符 []	由 delete 表达式调用来解除对象数组的存储空间分配的函数。
	 * 运算符 new	由 new 表达式调用来为单个对象分配存储空间的函数。
	 * 运算符 new[]	由 new 表达式调用来为对象数组分配存储空间的函数。
	 * 
	 * 枚举
	 * align_val_t
	 * 
	 * 类
	 * bad_alloc 类	该类描述引发的异常以指示分配请求未成功。
	 * bad_array_new_length 类	
	 * nothrow_t Class	该类用作运算符 new 的函数参数，指示函数应返回一个 null 指针来报告分配失败，而不是引发异常。
	*/
	struct X { const int n; };

	X *p = new X{3};
	const int a = p->n;
	new (p) X{5}; // p does not point to new object because X::n is const
	const int b = p->n; // undefined behavior
	const int c = std::launder(p)->n; // OK
}

void header_numeric() { 
	/*
	 * 定义执行数值处理算法的容器模板函数。数字算法类似于 <algorithm> 中的 C++ 标准库算法，并可以应用于多个数据结构。
	 * 这包括标准库容器类（例如 vector 和 list）、程序定义的数据结构和满足特定算法需求的元素数组。 
	 * 这些算法通过迭代器间接访问并遍历容器元素来实现此一般性级别。 这些算法处理通常由开始或末尾位置指定的迭代器范围。 
	 * 引用的范围必须有效，即范围中的所有指针必须可以取消引用，并且在每个范围的序列中，可从第一个位置递增到达最后一个位置。
	 * 这些算法可扩展每个 C++ 标准库容器的运算和成员函数支持的操作，并允许同时与不同类型的容器对象进行交互。
	 * 
	 * 函数
	 * accumulate	通过计算连续的部分和来计算指定范围中所有元素的总和（包括初始值），或计算通过使用指定二元运算而非求和运算获得的连续部分结果的结果总和。
	 * adjacent_difference	计算输入范围中每个元素与其前一元素之间的连续差值，并将结果输出到目标范围，或计算将差值运算替换为其他指定二元运算的一般化程序的结果。
	 * exclusive_scan	
	 * gcd	
	 * inclusive_scan	
	 * inner_product	计算两个范围的逐元素集乘积的总和并将总和添加到指定初始值，或计算将求和与乘积运算替换为其他指定二元运算的一般化程序的结果。
	 * iota	存储一个起始值，从第一个元素开始，在间隔 value++ 内的每个元素中填充此值的连续递增值 ([first, last))。	
	 * partial_sum	计算输入范围中从第一个元素到第 i 个元素的一系列总和，并在目标范围的第 i 个元素中存储每个总和的结果，或计算将求和运算替换为其他指定二元运算的一般化程序的结果。
	 * transform_exclusive_scan	
	 * transform_inclusive_scan	
	 * transform_reduce	
	*/

 	vector <int> v1, v2(20);
    vector <int>::iterator iter1, iter2;

    int i;
    for (i = 1; i < 21; i++) {
      	v1.push_back(i);
   	}

   	cout << "The original vector v1 is:\n ( " ;
   	for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
      	cout << *iter1 << " ";
   	cout << ")." << endl;

   	// The first member function for the accumulated sum
   	int total;
   	total = accumulate(v1.begin(), v1.end(), 0);

   	cout << "The sum of the integers from 1 to 20 is: "
         << total << "." << endl;

    // Constructing a vector of partial sums
    int j = 0, partotal;
    for (iter1 = v1.begin(); iter1 != v1.end(); iter1++) {
      	partotal = accumulate(v1.begin(), iter1 + 1, 0);
      	v2[j] = partotal;
      	j++;
   	}

    cout << "The vector of partial sums is:\n ( " ;
    for (iter2 = v2.begin(); iter2 != v2.end(); iter2++)
      	cout << *iter2 << " ";
   	cout << ")." << endl << endl;

   	// The second member function for the accumulated product
   	vector <int> v3, v4(10);
   	vector <int>::iterator iter3, iter4;

   	int s;
   	for (s = 1; s < 11; s++) {
      	v3.push_back(s);
   	}

   	cout << "The original vector v3 is:\n ( " ;
   	for (iter3 = v3.begin(); iter3 != v3.end(); iter3++)
      	cout << *iter3 << " ";
   	cout << ")." << endl;

   	int ptotal;
   	ptotal = accumulate(v3.begin(), v3.end(), 1, multiplies<int>());

   	cout << "The product of the integers from 1 to 10 is: "
         << ptotal << "." << endl;

    // Constructing a vector of partial products
    int k = 0, ppartotal;
   	for (iter3 = v3.begin(); iter3 != v3.end(); iter3++) {
		ppartotal = accumulate(v3.begin(), iter3 + 1, 1, multiplies<int>());
      	v4[k] = ppartotal;
      	k++;
   	}

   	cout << "The vector of partial products is:\n ( " ;
   	for (iter4 = v4.begin(); iter4 != v4.end(); iter4++)
      	cout << *iter4 << " ";
   	cout << ")." << endl;

   	vector<int> V1( 10 ), V2( 10 );
   	vector<int>::iterator VIter1, VIter2, VIterend, VIterend2;

   	list <int> L1;
   	list <int>::iterator LIter1, LIterend, LIterend2;

   	int t;
   	for ( t = 1 ; t <= 10 ; t++ ) {
      	L1.push_back( t * t );
   	}

    cout << "The input list L1 is:\n ( " ;
   	for ( LIter1 = L1.begin( ) ; LIter1 != L1.end( ) ; LIter1++ )
      	cout << *LIter1 << " ";
   	cout << ")." << endl;

   	// The first member function for the adjacent_differences of
   	// elements in a list output to a vector
   	VIterend = adjacent_difference ( L1.begin ( ) , L1.end ( ) , V1.begin ( ) );

   	cout << "Output vector containing adjacent_differences is:\n ( " ;
   	for ( VIter1 = V1.begin( ) ; VIter1 != VIterend ; VIter1++ )
      	cout << *VIter1 << " ";
   	cout << ")." << endl;

   	// The second member function used to compute
   	// the adjacent products of the elements in a list
   	VIterend2 = adjacent_difference ( L1.begin ( ) , L1.end ( ) , V2.begin ( ) , multiplies<int>( ) );

   	cout << "The output vector with the adjacent products is:\n ( " ;
   	for ( VIter2 = V2.begin( ) ; VIter2 != VIterend2 ; VIter2++ )
      	cout << *VIter2 << " ";
   	cout << ")." << endl;

   	// Computation of adjacent_differences in place
   	LIterend2 = adjacent_difference ( L1.begin ( ) , L1.end ( ) , L1.begin ( ) );
   	cout << "In place output adjacent_differences in list L1 is:\n ( " ;
   	for ( LIter1 = L1.begin( ) ; LIter1 != LIterend2 ; LIter1++ )
      	cout << *LIter1 << " ";
   	cout << ")." << endl;

} 

// <o>
void header_optional() { 
	/*
	 * 定义容器类模板 optional 和多个支持模板。
	 * 
	 * 函数
	 * make_optional	使对象成为可选的。
	 * swap	交换两个 optional 对象的包含值。
	 * 
	 * 类和结构
	 * hash	返回所包含的对象的哈希值。
	 * optional	描述一个对象，该对象不能包含值。
	 * nullopt_t 结构	描述不包含值的对象。
	 * bad_optional_access 类	描述作为异常引发的对象，以报告尝试访问不存在的值。
	 * 
	 * 对象
	 * nullopt	用于比较 nullopt_t 的实例。
	 * 
	 * 类模板 optional<T> 描述一个对象，该对象可能包含也可能不包含 T类型的值，称为包含值。
	 * 当的实例 optional<T> 包含一个值时，包含的值将在 optional 对象的存储中分配，该区域在为类型 T进行了适当对齐的区域中。 
	 * 将 optional<T> 转换为 bool时，如果该对象包含一个值，则将 true 结果;否则，false。
	 * T 包含的对象类型不得为in_place_t或nullopt_t。 T 必须是易损坏，也就是说，其析构函数必须回收所有拥有的资源，并且可能不会引发异常。
	 * optional 类是 c++ 17 中的新类。
	*/
}

void header_ostream() { 
	/*
	 * 定义类模板basic_ostream，它可调节 iostreams 的插入。 此头文件还定义了若干相关的操控程序。 
	 * （此头文件通常包含在另一个 iostream 头文件中。 很少会直接包含它。）
	 * 
	 * Typedef
	 * ostream	从 basic_ostream 创建一个类型，该类型在char上专用化并 char_traits 专用化。
	 * wostream	从 basic_ostream 创建一个类型，该类型在wchar_t上特殊化并专用于wchar_tchar_traits。
	 * 
	 * 操控器
	 * endl	终止行并刷新缓冲区。
	 * ends	终止字符串。
	 * flush	刷新缓冲区。
	 * swap	将 basic_ostream 对象参数左侧的值与 basic_ostream 对象参数右侧的值进行交换。
	 * 
	 * 类
	 * basic_ostream	类模板描述了控制元素和编码对象插入流缓冲区的对象。
	 * 成员函数
	 * flush	刷新缓冲区。
	 * put	将字符放入流中。
	 * seekp	重置在输出流中的位置。
	 * sentry	嵌套的类描述一个对象，该对象的声明构造格式化的输出函数和未格式化的输出函数。
	 * swap	将此 basic_ostream 对象的值与提供的 basic_ostream 对象的值进行交换。
	 * tellp	报告在输出流中的位置。
	 * write	将字符放入流中。
	*/
	using namespace std;
    ofstream x("basic_ostream_seekp.txt");
    streamoff i = x.tellp();
    cout << i << endl;
    x << "testing";
    i = x.tellp();
    cout << i << endl;
    x.seekp(2);   // Put char in third char position in file
    x << " ";

    x.seekp(2, ios::end);   // Put char two after end of file
    x << "z";
}

// <q>
void header_queue() { 
	/*
	 * 定义类模板 priority_queue 和 queue 以及多个支持模板。
	 * 
	 * 运算符
	 * operator!=	测试运算符左侧和右侧的 queue 对象是否不相等。
	 * operator<	测试运算符左侧的 queue 对象是否小于右侧的 queue 对象。
	 * operator<=	测试运算符左侧的 queue 对象是否小于或等于右侧的 queue 对象。
	 * operator==	测试运算符左侧和右侧的 queue 对象是否相等。
	 * operator>	测试运算符左侧的 queue 对象是否大于右侧的 queue 对象。
	 * operator>=	测试运算符左侧的 queue 对象是否大于或等于右侧的 queue 对象。
	 * 
	 * 类
	 * queue 类	一个模板容器适配器类，它提供功能的限制，限制一些基本容器类型的前端和后端元素的访问权限。
	 * priority_queue 类	一个模板容器适配器类，它提供功能的限制，限制一些基本容器类型顶端元素的访问权限，并且该类通常为最大类。
	*/
   // The first member function declares priority_queue
   // with a default vector base container
   priority_queue <int> q1;
   cout << "q1 = ( ";
   while ( !q1.empty( ) )
   {
      cout << q1.top( ) << " ";
      q1.pop( );
   }
   cout << ")" << endl;

   // Explicitly declares a priority_queue with nondefault
   // deque base container
   priority_queue <int, deque <int> > q2;
   q2.push( 5 );
   q2.push( 15 );
   q2.push( 10 );
   cout << "q2 = ( ";
   while ( !q2.empty( ) )
   {
      cout << q2.top( ) << " ";
      q2.pop( );
   }
   cout << ")" << endl;

   // This method of printing out the elements of a priority_queue
   // removes the elements from the priority queue, leaving it empty
   cout << "After printing, q2 has " << q2.size( ) << " elements." << endl;

   // The third member function declares a priority_queue
   // with a vector base container and specifies that the comparison
   // function greater is to be used for ordering elements
   priority_queue <int, vector<int>, greater<int> > q3;
   q3.push( 2 );
   q3.push( 1 );
   q3.push( 3 );
   cout << "q3 = ( ";
   while ( !q3.empty( ) )
   {
      cout << q3.top( ) << " ";
      q3.pop( );
   }
   cout << ")" << endl;

   // The fourth member function declares a priority_queue and
   // initializes it with elements copied from another container:
   // first, inserting elements into q1, then copying q1 elements into q4
   q1.push( 100 );
   q1.push( 200 );
   priority_queue <int> q4( q1 );
   cout << "q4 = ( ";
   while ( !q4.empty( ) )
   {
      cout << q4.top( ) << " ";
      q4.pop( );
   }
   cout << ")" << endl;

   // Creates an auxiliary vector object v5 to be used to initialize q5
   vector <int> v5;
   vector <int>::iterator v5_Iter;
   v5.push_back( 10 );
   v5.push_back( 30 );
   v5.push_back( 20 );
   cout << "v5 = ( " ;
   for ( v5_Iter = v5.begin( ) ; v5_Iter != v5.end( ) ; v5_Iter++ )
      cout << *v5_Iter << " ";
   cout << ")" << endl;

   // The fifth member function declares and
   // initializes a priority_queue q5 by copying the
   // range v5[ first,  last) from vector v5
   priority_queue <int> q5( v5.begin( ), v5.begin( ) + 2 );
   cout << "q5 = ( ";
   while ( !q5.empty( ) )
   {
      cout << q5.top( ) << " ";
      q5.pop( );
   }
   cout << ")" << endl;

   // The sixth member function declares a priority_queue q6
   // with a comparison function greater and initializes q6
   // by copying the range v5[ first,  last) from vector v5
   priority_queue <int, vector<int>, greater<int> >
      q6( v5.begin( ), v5.begin( ) + 2 );
   cout << "q6 = ( ";
   while ( !q6.empty( ) )
   {
      cout << q6.top( ) << " ";
      q6.pop( );
   }
   cout << ")" << endl;
}

// <r>
void header_random() { 
	/*
	 * 定义随机数生成设备，从而允许创建均匀分布的随机数。
	 * 随机数生成器是指可产生伪随机值序列的对象。 可产生在指定范围内均匀分布的值的生成器称为均匀随机数生成器 (URNG)。 
	 * 如果类具有某些常见特征，则设计为 URNG 的类模板称为引擎，本文稍后将对此进行介绍。 
	 * 通过将 URNG 作为自变量传递到分布的 operator()，URNG 可以（通常也会）和分布一起使用，从而产生以该分布定义的方式分布的值。
	 * 
	 * 随机数分布
	 * 以下部分列出了 <random > 头文件中提供的分布。 这些分布是后处理机制，通常将 URNG 输出用作输入并通过定义的统计概率密度函数分布输出。、
	 * 
	 * 均匀分布
	 * uniform_int_distribution 类	在闭区间 [a，b]（包含起始值和结束值）范围内产生均匀整数值分布。
	 * uniform_real_distribution 类	在半开区间 [a，b)（包含起始值，不包含结束值）范围内产生均匀真（浮点）值分布。
	 * generate_canonical	产生 [0，1)（包含起始值，不包含结束值）上给定精度的真（浮点）值的均匀分布。
	 * [随机数分布]
	 * 伯努利分布
	 * bernoulli_distribution 类	生成布尔值的伯努利分布。
	 * binomial_distribution 类	产生整数值的二项式分布。
	 * geometric_distribution 类	产生整数值的几何分布。
	 * negative_binomial_distribution 类	产生整数值的负二项式分布。
	 * [随机数分布]
	 * 正态分布
	 * cauchy_distribution 类	产生真（浮点）值的柯西分布。
	 * chi_squared_distribution 类	产生真（浮点）值的卡方分布。
	 * fisher_f_distribution 类	生成实（浮点）值的 F-分布（也称为 Snedecor 的 F 分布或费舍尔-Snedecor 分布）。
	 * lognormal_distribution 类	产生真（浮点）值的对数正态分布。
	 * normal_distribution 类	产生真（浮点）值的正态（高斯）分布。
	 * student_t_distribution 类	产生真（浮点）值的学生 t-分布。
	 * [随机数分布]
	 * 泊松分布
	 * exponential_distribution 类	产生真（浮点）值的指数分布。
	 * extreme_value_distribution 类	产生真（浮点）值的极值分布。
	 * gamma_distribution 类	产生真（浮点）值的 gamma 分布。
	 * poisson_distribution 类	产生整数值的泊松分布。
	 * weibull_distribution 类	产生真（浮点）值的韦伯分布。
	 * [随机数分布]
	 * discrete_distribution 类	产生离散型整数分布。
	 * piecewise_constant_distribution 类	产生真（浮点）值的分段常数分布。
	 * piecewise_linear_distribution 类	产生真（浮点）值的分段线性分布。
	*/
    random_device rd;   // non-deterministic generator
    mt19937 gen(rd());  // to seed mersenne twister.
                        // replace the call to rd() with a
                        // constant value to get repeatable
                        // results.

    for (int i = 0; i < 5; ++i) {
        cout << gen() << " "; // print the raw output of the generator.
    }
    cout << endl;
}

void header_radio() { 
	/*
	 * 包括标准头文件 <ratio>，以定义用于在编译时存储和操作有理数的常量和模板。
	 * 专用化
	 * 
	 * <ratio> 还定义具有以下形式的 ratio 的专用化。
	 * template <class R1, class R2> struct ratio_specialization
	 * 每个专用化采用两个同时必须为 ratio 的专用化的模板参数。 type 的值由关联的逻辑操作确定。
	 * 
	 * ratio_add	R1 + R2
	 * ratio_divide	R1 / R2
	 * ratio_equal	R1 == R2
	 * ratio_greater	R1 > R2
	 * ratio_greater_equal	R1 >= R2
	 * ratio_less	R1 < R2
	 * ratio_less_equal	R1 <= R2
	 * ratio_multiply	R1 * R2
	 * ratio_not_equal	!(R1 == R2)
	 * ratio_subtract	R1 - R2
	 * 
	 * typedefs
	 * 为方便起见，头文件定义标准 SI 前缀的比率：
	 * typedef ratio<1, 1000000000000000000> atto;
	 * typedef ratio<1, 1000000000000000> femto;
	 * typedef ratio<1, 1000000000000> pico;
	 * typedef ratio<1, 1000000000> nano;
	 * typedef ratio<1, 1000000> micro;
	 * typedef ratio<1, 1000> milli;
	 * typedef ratio<1, 100> centi;
	 * typedef ratio<1, 10> deci;
	 * typedef ratio<10, 1> deca;
	 * typedef ratio<100, 1> hecto;
	 * typedef ratio<1000, 1> kilo;
	 * typedef ratio<1000000, 1> mega;
	 * typedef ratio<1000000000, 1> giga;
	 * typedef ratio<1000000000000, 1> tera;
	 * typedef ratio<1000000000000000, 1> peta;
	 * typedef ratio<1000000000000000000, 1> exa;
	*/
}

void header_regex() { 
	/*
	 * 定义用于分析正则表达式的类模板C++（），以及用于在文本中搜索与正则表达式对象的匹配项的多个类模板和函数。
	 * 若要创建正则表达式对象，请使用类模板Basic_regex 类或其专用化、 regex和wregex之一，
	 *     以及类型regex_constants：： syntax_option_type的语法标志。
	 * 若要在文本中搜索正则表达式对象的匹配项，请将模板函数regex_match和regex_search与类型regex_constants：： 
	 *     match_flag_type的匹配标志一起使用。 这些函数通过以下方式返回结果：使用类模板Match_results 类及其专用化、 cmatch、 wcmatch、 
	 *     smatch和wsmatch，以及类模板sub_match 类及其专用化、 csub_match、 wcsub_match、 ssub_match和wssub_match。
	 * 若要替换匹配正则表达式对象的文本，请将模板函数regex_replace与类型regex_constants：： match_flag_type的匹配标志一起使用。
	 * 若要循环访问正则表达式对象的多个匹配项，请使用类模板regex_iterator类和regex_token_iterator 类，或其专用化、 cregex_iterator、
	 *     sregex_iterator中的一个wcregex_iterator、 wsregex_iterator、 cregex_token_iterator、 sregex_token_iterator、 
	 *     wcregex_token_iterator或wsregex_token_iterator，以及类型为 regex_ 的匹配标志常量：： match_flag_type。
	 * 若要修改正则表达式语法的详细信息，请编写一个实现正则表达式特征的类。
	 * 类
	 * basic_regex	包装正则表达式。
	 * match_results	包含一系列子匹配项。
	 * regex_constants	包含各种类型的常量。
	 * regex_error	报告错误的正则表达式。
	 * regex_iterator	循环访问匹配结果。
	 * regex_traits	描述用于匹配的元素的特征。
	 * regex_traits<char>	描述用于匹配的char的特征。
	 * regex_traits<wchar_t>	描述用于匹配的wchar_t的特征。
	 * regex_token_iterator	循环访问子匹配项。
	 * sub_match	介绍子匹配项。
	 * 
	 * 类型定义
	 * cmatch	Char match_results 的类型定义。
	 * cregex_iterator	Char regex_iterator 的类型定义。
	 * cregex_token_iterator	Char regex_token_iterator 的类型定义。
	 * csub_match	Char sub_match 的类型定义。
	 * regex	Char basic_regex 的类型定义。
	 * smatch	string match_results 的类型定义。
	 * sregex_iterator	string regex_iterator 的类型定义。
	 * sregex_token_iterator	string regex_token_iterator 的类型定义。
	 * ssub_match	string sub_match 的类型定义。
	 * wcmatch	Wchar_t match_results 的类型定义。
	 * wcregex_iterator	Wchar_t regex_iterator 的类型定义。
	 * wcregex_token_iterator	Wchar_t regex_token_iterator 的类型定义。
	 * wcsub_match	Wchar_t sub_match 的类型定义。
	 * wregex	Wchar_t basic_regex 的类型定义。
	 * wsmatch	wstring match_results 的类型定义。
	 * wsregex_iterator	wstring regex_iterator 的类型定义。
	 * wsregex_token_iterator	wstring regex_token_iterator 的类型定义。
	 * wssub_match	wstring sub_match 的类型定义。
	 * 
	 * 函数
	 * regex_match	与正则表达式完全匹配。
	 * regex_replace	替换匹配正则表达式。
	 * regex_search	搜索正则表达式匹配项。
	 * swap	交换 basic_regex 或 match_results 对象。
	 * 
	 * 运算符
	 * operator==	比较各种对象，相等。
	 * operator!=	比较各种对象，不相等。
	 * operator<	比较各种对象，小于。
	 * operator<=	比较各种对象，小于或等于。
	 * operator>	比较各种对象，大于。
	 * operator>=	比较各种对象，大于或等于。
	 * operator<<	将 sub_match 插入流中。
	*/
   // (1) with char*
    // Note how const char* requires cmatch and regex
    const char *first = "abc";
    const char *last = first + strlen(first);
    cmatch narrowMatch;
    regex rx("a(b)c");

    bool found = regex_match(first, last, narrowMatch, rx);
    if (found)
        wcout << L"Regex found in abc" << endl;

    // (2) with std::wstring
    // Note how wstring requires wsmatch and wregex.
    // Note use of const iterators cbegin() and cend().
    wstring target(L"Hello");
    wsmatch wideMatch;
    wregex wrx(L"He(l+)o");

    if (regex_match(target.cbegin(), target.cend(), wideMatch, wrx))
        wcout << L"The matching text is:" << wideMatch.str() << endl;

    // (3) with std::string
    string target2("Drizzle");
    regex rx2(R"(D\w+e)"); // no double backslashes with raw string literal

    found = regex_match(target2.cbegin(), target2.cend(), rx2);
    if (found)
        wcout << L"Regex found in Drizzle" << endl;

    // (4) with wchar_t*
    const wchar_t* target3 = L"2014-04-02";
    wcmatch wideMatch2;

    // LR"(...)" is a  raw wide-string literal. Open and close parens
    // are delimiters, not string elements.
    wregex wrx2(LR"(\d{4}(-|/)\d{2}(-|/)\d{2})");
    if (regex_match(target3, wideMatch2, wrx2))
    {
        wcout << L"Matching text: " << wideMatch2.str() << endl;
    }

    char buf[20];
    const char *first = "axayaz";
    const char *last = first + strlen(first);
    std::regex rx("a");
    std::string fmt("A");
    std::regex_constants::match_flag_type fonly =
        std::regex_constants::format_first_only;

    *std::regex_replace(&buf[0], first, last, rx, fmt) = '\0';
    std::cout << "replacement == " << &buf[0] << std::endl;

    *std::regex_replace(&buf[0], first, last, rx, fmt, fonly) = '\0';
    std::cout << "replacement == " << &buf[0] << std::endl;

    std::string str("adaeaf");
    std::cout << "replacement == "
        << std::regex_replace(str, rx, fmt) << std::endl;

    std::cout << "replacement == "
        << std::regex_replace(str, rx, fmt, fonly) << std::endl;

    const char *first = "abcd";
    const char *last = first + strlen(first);
    std::cmatch mr;
    std::regex rx("abc");
    std::regex_constants::match_flag_type fl =
        std::regex_constants::match_default;

    std::cout << "search(f, f+1, \"abc\") == " << std::boolalpha
        << regex_search(first, first + 1, rx, fl) << std::endl;

    std::cout << "search(f, l, \"abc\") == " << std::boolalpha
        << regex_search(first, last, mr, rx) << std::endl;
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl;

    std::cout << "search(\"a\", \"abc\") == " << std::boolalpha
        << regex_search("a", rx) << std::endl;

    std::cout << "search(\"xabcd\", \"abc\") == " << std::boolalpha
        << regex_search("xabcd", mr, rx) << std::endl;
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl;

    std::cout << "search(string, \"abc\") == " << std::boolalpha
        << regex_search(std::string("a"), rx) << std::endl;

    std::string str("abcabc");
    std::match_results<std::string::const_iterator> mr2;
    std::cout << "search(string, \"abc\") == " << std::boolalpha
        << regex_search(str, mr2, rx) << std::endl;
    std::cout << "  matched: \"" << mr2.str() << "\"" << std::endl;

    std::regex rx0("c(a*)|(b)");
    std::regex rx1;
    std::cmatch mr0;
    std::cmatch mr1;

    swap(rx0, rx1);
    std::regex_search("xcaaay", mr1, rx1);
    swap(mr0, mr1);

    std::csub_match sub = mr0[1];
    std::cout << "matched == " << std::boolalpha
        << sub.matched << std::endl;
    std::cout << "length == " << sub.length() << std::endl;
    std::cout << "string == " << sub << std::endl;

	typedef std::regex_token_iterator<const char *> Myiter;
	    const char *pat = "aaxaayaaz";
    Myiter::regex_type rx("(a)a");
    Myiter next(pat, pat + strlen(pat), rx);
    Myiter end;

// show whole match
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefix before match
    next = Myiter(pat, pat + strlen(pat), rx, -1);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show (a) submatch only
    next = Myiter(pat, pat + strlen(pat), rx, 1);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefixes and submatches
    std::vector<int> vec;
    vec.push_back(-1);
    vec.push_back(1);
    next = Myiter(pat, pat + strlen(pat), rx, vec);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefixes and whole matches
    int arr[] = {-1, 0};
    next = Myiter(pat, pat + strlen(pat), rx, arr);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// other members
    Myiter it1(pat, pat + strlen(pat), rx);
    Myiter it2(it1);
    next = it1;

    Myiter::iterator_category cat = std::forward_iterator_tag();
    Myiter::difference_type dif = -3;
    Myiter::value_type mr = *it1;
    Myiter::reference ref = mr;
    Myiter::pointer ptr = &ref;

    dif = dif; // to quiet "unused" warnings
    ptr = ptr;
}

// <s>
void header_scoped_allocator() { 
	/*
	 * 定义容器类模板 scoped_allocator。
	 * 类模板封装一个或多个分配器的嵌套。 每个这样的类都具有一个类型为 outer_allocator_type 的最外层分配器，
	 * 该类型也即 Outer，是 scoped_allocator_adaptor 对象的公共基类。 Outer 可用于分配容器要使用的内存。 
	 * 通过调用 outer_allocator 可获取对此分配器基对象的引用。
	 * 嵌套的其余部分具有 inner_allocator_type 类型。 内部分配器用于为容器中的元素分配内存。 
	 * 通过调用 inner_allocator 可获取对此类型的存储对象的引用。 如果 Inner... 不为空，则 inner_allocator_type 将具有类型 
	 * scoped_allocator_adaptor<Inner...>，inner_allocator 指示成员对象。 否则，inner_allocator_type 
	 * 将具有类型 scoped_allocator_adaptor<Outer>，inner_allocator 指示整个对象。
	 * 嵌套的表现行为好像可以具有任意深度，可根据需要复制其最里层的封装分配器。
	 * 不属于可见界面的多个概念有助于描述此类模板的行为。 最外层分配器，可协调对构造和销毁方法的所有调用。 
	 * 它实际上是由递归函数 OUTERMOST(X) 定义的，其中 OUTERMOST(X) 是以下项之一。
	 * * 如果 X.outer_allocator() 的格式正确，则 OUTERMOST(X) 为 OUTERMOST(X.outer_allocator())。
	 * * 否则 OUTERMOST(X) 为 X。
	 * 
	 * Typedef
	 * const_pointer	此类型是 const_pointer（与分配器 Outer 关联）的同义词。
	 * const_void_pointer	此类型是 const_void_pointer（与分配器 Outer 关联）的同义词。
	 * difference_type	此类型是 difference_type（与分配器 Outer 关联）的同义词。
	 * inner_allocator_type	此类型是嵌套适配器 scoped_allocator_adaptor<Inner...> 类型的同义词。
	 * outer_allocator_type	此类型是基本分配器 Outer 类型的同义词。
	 * pointer	此类型是 pointer（与分配器 Outer 关联）的同义词。
	 * propagate_on_container_copy_assignment	仅当 Outer_traits::propagate_on_container_copy_assignment 或 inner_allocator_type::propagate_on_container_copy_assignment 为 true 时，该类型才为 true。
	 * propagate_on_container_move_assignment	仅当 Outer_traits::propagate_on_container_move_assignment 或 inner_allocator_type::propagate_on_container_move_assignment 为 true 时，该类型才为 true。
	 * propagate_on_container_swap	仅当 Outer_traits::propagate_on_container_swap 或 inner_allocator_type::propagate_on_container_swap 为 true 时，该类型才为 true。
	 * size_type	此类型是 size_type（与分配器 Outer 关联）的同义词。
	 * value_type	此类型是 value_type（与分配器 Outer 关联）的同义词。
	 * void_pointer	此类型是 void_pointer（与分配器 Outer 关联）的同义词。
	*/
    using namespace std;
    set <int> s1;
    set <int>::iterator s1_Iter;
    set <int>::const_iterator s1_cIter;

    s1.insert( 1 );
    s1.insert( 2 );
    s1.insert( 3 );

    s1_Iter = s1.begin( );
    cout << "The first element of s1 is " << *s1_Iter << endl;

    s1_Iter = s1.begin( );
    s1.erase( s1_Iter );

    // The following 2 lines would err because the iterator is const
    // s1_cIter = s1.begin( );
    // s1.erase( s1_cIter );

    s1_cIter = s1.begin( );
    cout << "The first element of s1 is now " << *s1_cIter << endl;
}

void header_set() { 
	/*
	 * 定义容器类模板集和多集及其支持的模板。
	 * 参数
	 * key
	 * 要存储在集中的元素数据类型。
	 * value
	 * 一种提供函数对象的类型，该函数对象将两个元素值作为排序键进行比较，以确定其在集中的相对顺序。 此参数是可选自变量，默认值为二元谓词 less <Key> 。
	 * 在 C++ 14 中可以通过指定没有类型参数的 std::less<> 或 std::greater<> 谓词来启用异类查找。 有关详细信息，请参阅关联容器中的异类查找
	 * 分配器
	 * 一种表示存储的分配器对象的类型，该分配器对象封装有关集的内存分配和解除分配的详细信息。 此参数是可选参数，默认值为 allocator<Key>。
	 * 
	 * C++ 标准库集是：
	 * * 大小可变的关联容器，支持基于关联键值高效检索元素值。 此外，它是简单的关联容器，因为它的元素值即为它的键值。
	 * * 可逆，因为它提供双向迭代器来访问其元素。
	 * * 有序，因为它的元素在容器中根据指定的比较函数按键值排序。
	 * * 唯一，每个元素必须具有唯一键。 集还是简单关联容器，因此它的元素也是唯一的。
	 * 
	 * 集还被描述为类模板，因为它提供的功能是通用的，独立于作为元素包含的特定数据类型。 
	 * 可使用的数据类型作为类模板以及比较函数和分配器中的参数指定。
	 * 容器类型选择通常应根据应用程序所需的搜索和插入的类型。 关联容器针对查找、插入和移除操作进行了优化。 
	 * 显式支持这些操作的成员函数较为高效，执行这些操作的时间与容器中元素数量的对数平均成比例。 
	 * 插入元素不会使迭代器失效，移除元素仅会使专门指向已移除元素的迭代器失效。
	 * 当应用程序满足将值与其键关联的条件时，应选择集作为关联容器。 集的元素是唯一的，并用作其自己的排序键。 
	 * 此类结构的模型是排序列表，如关键字排序列表，其中关键字只能出现一次。 如果允许关键字多次出现，则应使用多重集合作为适当的容器结构。 
	 * 如果需要将值附加到唯一关键字的列表，则映射应为包含此数据的适当结构。 如果键不唯一，则应选择多重映射作为容器。
	 * 集通过调用存储的 key_compare 类型的函数对象，对它控制的序列进行排序。 此存储对象是比较函数，可通过调用成员函数 key_comp 进行访问。 
	 * 通常，元素仅需小于比较元素即可建立此顺序，因此，给定任意两个元素，可以确定这两个元素等效（即两者均不小于对方）或其中一个小于另一个。 
	 * 这将导致在非等效元素之间进行排序。 在技术性更强的说明中，比较函数是一个二元谓词，在标准数学的意义上引发严格弱排序。 
	 * 二元谓词 f( x,y) 是包含两个参数对象（x 和 y）以及一个返回值（true 或 false）的函数对象。 
	 * 如果二元谓词具有自反性、反对称性和传递性且等效可传递，对集进行的排序将为严格弱排序，
	 * 其中两个对象 x 和 y 定义为在 f(x,y) 和 f(y,x) 均为 false 时等效。 如果键之间的更强相等条件取代了等效性，
	 * 则排序将为总排序（即所有元素彼此排序），并且匹配的键将难以彼此辨别。
	 * 
	 * 集类提供的迭代器是双向迭代器，但类成员函数 insert 和 set 具有将较弱输入迭代器作为模板参数的版本，
	 * 较弱输入迭代器的功能需求比双向迭代器类保证的功能需求更少。 不同的迭代器概念形成一个系列，通过它们的功能优化相关联。
	 * 每个迭代器概念有它自己的一套要求，使用这些概念的算法必须根据迭代器类型提供的要求限制它们的假设。 
	 * 可以假定输入迭代器可取消引用以引用某个对象，并可递增到序列中的下一迭代器。 这是最小的功能集，
	 * 但足以按有意义的方式提供类成员函数的上下文中的迭代器范围 [First, Last)。
	 * 
	 * 函数
	 * begin	返回一个迭代器，此迭代器用于发现集中的第一个元素。
	 * cbegin	返回一个常量迭代器，此迭代器用于发现集中的第一个元素。
	 * cend	返回一个常量迭代器，此迭代器用于发现集中最后一个元素之后的位置。
	 * clear	清除集的所有元素。
	 * count	返回集中其键与指定为参数的键匹配的元素数量。
	 * crbegin	返回一个常量迭代器，此迭代器用于发现反向集中的第一个元素。
	 * crend	返回一个常量迭代器，此迭代器用于发现反向集中最后一个元素之后的位置。
	 * emplace	将就地构造的元素插入到集中。
	 * emplace_hint	将就地构造的元素插入到集中，附带位置提示。
	 * empty	测试集是否为空。
	 * end	返回一个迭代器，此迭代器用于发现集中最后一个元素之后的位置。
	 * equal_range	返回一对迭代器，这两个迭代器分别用于发现集中其键大于指定键的第一个元素，以及集中其键等于或大于指定键的第一个元素。
	 * erase	从集中的指定位置移除一个元素或元素范围，或者移除与指定键匹配的元素。
	 * find	返回一个迭代器，此迭代器用于发现集中其键与指定键等效的元素的位置。
	 * get_allocator	返回用于构造集的 allocator 对象的副本。
	 * insert	将一个元素或元素范围插入到集。
	 * key_comp	检索用于对集中的键进行排序的比较对象副本。
	 * lower_bound	返回一个迭代器，此迭代器指向集中其键等于或大于指定键的第一个元素。
	 * max_size	返回集的最大长度。
	 * rbegin	返回一个迭代器，此迭代器用于发现反向集中的第一个元素。
	 * rend	返回一个迭代器，此迭代器用于发现反向集中最后一个元素之后的位置。
	 * size	返回集合中元素的数目。
	 * swap	交换两个集的元素。
	 * upper_bound	返回一个迭代器，此迭代器指向集中其键大于指定键的第一个元素。
	 * value_comp	检索用于对集中的元素值进行排序的比较对象副本。
	 * 
	 * multiset类：C++ 标准库多重集合类用于存储和检索集合中的数据，此集合中包含的元素值无需唯一，
	 * 并且用作数据自动排序所依据的键值。 不能直接更改多重集合中元素的键值。 必须先删除旧值，才能插入具有新值的元素。
	*/
}

void header_shared_mutex() { 
	/*
	 * 提供了同步基元，用于保护可由多个线程访问的共享数据。 除由 mutex 类提供的独占访问控制之外，
	 * 共享 mutex 类还允许共享多个线程的非独占访问所有权。 共享 mutex 可用于控制可通过多个线程读取的资源且不会引发争用条件问题，
	 * 但必须以独占方式通过单个线程写入。
	 * 头文件 <shared_mutex > 定义用于共享 mutex 支持的类 shared_mutex 和 shared_timed_mutex、类模板 shared_lock 和模板函数 swap。
	 * 
	 * 类
	 * shared_mutex 类	一种共享 mutex 类型，可由单个代理以独占方式锁定，或由多个代理以非独占方式共享。
	 * shared_timed_mutex 类	一种共享的定时 mutex 类型，可由单个代理以独占方式锁定，或由多个代理以非独占方式共享。
	 * shared_lock 类	一个类模板，用于包装共享 mutex 以支持定时锁定操作和多个代理的非独占共享。
	 * 
	 * 共享 mutex 类型支持其他其他方法 lock_shared、unlock_shared 和 try_lock_shared：
	 * * lock_shared 方法阻止调用线程，直到线程获取 mutex 共享所有权。
	 * * unlock_shared 方法通过调用线程释放 mutex 共享所有权。
	 * * try_lock_shared 方法尝试在不阻止的情况下获取 mutex 共享所有权。 如果该方法获取所有权，则其返回类型可转换为bool ，为true ，否则为false。
	 * 
	 * 类 shared_timed_mutex 是 共享定时 mutex 类型，满足共享 mutex 类型的两个要求并且是定时 mutex 类型。
	 * 共享 mutex 类型支持其他方法 try_lock_shared_for 和 try_lock_shared_until：
	 * * try_lock_shared_for 方法尝试获取 mutex 共享所有权，直到超过由参数指定的持续时间。 如果持续时间不为正，
	 *     则该方法等效于 try_lock_shared。 除非已获得共享所有权，否则在指定持续时间内不会返回该方法。 如果该方法获取所有权，
	 *     则其返回值为true ，否则为false。
	 * try_lock_shared_until 方法尝试获取 mutex 共享所有权，直到超过指定的绝对持续时间。 
	 *     如果指定的时间已过，该方法等效于 try_lock_shared。 除非已获得共享所有权，否则不会在指定时间之前返回该方法。 
	 *     如果该方法获取所有权，则其返回值为true ，否则为false。
	*/
}

template<class out_type,class in_value>
out_type convert(const in_value & t) {
   	stringstream ss;
   	ss << t;//向流中传值
   	out_type result;//这里存储转换结果
   	ss >> result;//向result中写入值
    return result;
}

void header_sstream() { 
	/*
	 * 定义多个类模板，这些模板支持对存储在已分配的数组对象中的序列进行 iostreams 操作。 
	 * 此类序列可轻松地与类模板basic_string的对象相互转换。
	 * 
	 * Typedef
	 * istringstream	创建一个 basic_istringstream 专用于char模板参数的类型。
	 * ostringstream	创建一个 basic_ostringstream 专用于char模板参数的类型。
	 * stringbuf	创建一个 basic_stringbuf 专用于char模板参数的类型。
	 * stringstream	创建一个 basic_stringstream 专用于char模板参数的类型。
	 * wistringstream	创建一个类型 basic_istringstream 专用于wchar_t模板参数的类型。
	 * wostringstream	创建一个类型 basic_ostringstream 专用于wchar_t模板参数的类型。
	 * wstringbuf	创建一个类型 basic_stringbuf 专用于wchar_t模板参数的类型。
	 * wstringstream	创建一个类型 basic_stringstream 专用于wchar_t模板参数的类型。
	 * 
	 * 类
	 * basic_stringbuf	描述对 Elem 类型的元素（其字符特征由类 Tr 确定）与数组对象中存储的元素序列之间的来回传输进行控制的流缓冲区。
	 * basic_istringstream	描述一个对象，该对象控制从 > Alloc < basic_stringbuf类的流缓冲区提取元素和编码对象，
	 *     并使用 Elem 类型的元素（其字符特征由确定）类 Tr，其元素由类 Alloc 的分配器进行分配。
	 * basic_ostringstream	描述一个对象，该对象控制将元素和编码对象插入到类basic_stringbuf <Elem， Tr，Alloc >，并具有 Elem 类型的元素，
	 *     其字符特征由类 Tr，其元素由类 Alloc 的分配器进行分配。
	 * basic_stringstream	描述一个对象，该对象使用类basic_stringbuf <Elem， Tr，Alloc > 的流缓冲区控制元素和编码对象的插入和提取，
	 *     并使用 Elem 类型的元素，其字符特征为由类 Tr 确定，其元素由类 Alloc 的分配器进行分配。
	*/
    std::string str = "I am coding ...";
    std::istringstream is(str);
    do
    {
        std::string substr;
        is>>substr;
        std::cout << substr << std::endl;
    } while (is);

	double d;
	string salary;
	string s = ”12.56”;

	d = convert<double>(s);//d等于12.56
 	salary = convert<string>(9000.0);//salary等于”9000”
}

void header_stack() { 
	/*
	 * 定义类模板堆栈和两个支持模板。
	 * 
	 * 函数
	 * empty	测试 stack 是否为空。
	 * pop	从 stack 的顶部删除元素。
	 * push	将元素添加到 stack 顶部。
	 * size	返回 stack 中的元素数量。
	 * top	返回对 stack 顶部元素的引用。
	*/
  // Declares stacks with vector base containers
   stack <int, vector<int> > s1, s2, s3;

   // The following would have cause an error because stacks with
   // different base containers are not equality comparable
   // stack <int, list<int> >  s3;

   s1.push( 1 );
   s2.push( 2 );
   s3.push( 1 );

   if ( s1 != s2 )
      cout << "The stacks s1 and s2 are not equal." << endl;
   else
      cout << "The stacks s1 and s2 are equal." << endl;

   if ( s1 != s3 )
      cout << "The stacks s1 and s3 are not equal." << endl;
   else
      cout << "The stacks s1 and s3 are equal." << endl;
}

void header_stdexcept() { 
	/*
	 * 定义用于报告异常的多个标准类。 这些类构成派生自 exception 类的所有派生层次结构，并包括两种常规类型的异常：
	 * 逻辑错误和运行时错误。 逻辑错误因程序员错误而引起。 它们派生自基类 logic_error，并且包括：
	 * * domain_error
	 * * invalid_argument
	 * * length_error
	 * * out_of_range
	 * 
	 * 出现运行时错误是因库函数或运行时系统出错引起。 它们派生自基类 runtime_error，并且包括：
	 * * overflow_error
	 * * range_error
	 * * underflow_error
	 * 
	 * 类
	 * domain_error 类	此类用作引发报告域错误的所有异常的基类。
	 * invalid_argument 类	此类用作引发报告无效自变量的所有异常的基类。
	 * length_error 类	此类用作引发报告尝试生成对象太长而难以指定的所有异常的基类。
	 * logic_error 类	此类用作引发报告执行程序前大概可检测的错误（例如，违反逻辑前提条件）的所有异常的基类。
	 * out_of_range 类	此类用作引发报告无效自变量的所有异常的基类。
	 * overflow_error 类	此类用作引发报告算数溢出的所有异常的基类。
	 * range_error 类	此类用作引发报告范围错误的所有异常的基类。
	 * runtime_error 类	此类用作引发报告仅在执行程序时大概可检测的错误的所有异常的基类。
	 * underflow_error 类	此类用作引发报告算数下溢的所有异常的基类。
	*/
   try
   {
      throw domain_error( "Your domain is in error!" );
   }
   catch (exception &e)
   {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid(e).name( ) << endl;
   };

   try
   {
      bitset< 32 > bitset( string( "11001010101100001b100101010110000") );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };

   try {
      string str( "Micro" );
      string rstr( "soft" );
      str.append( rstr, 5, 3 );
      cout << str << endl;
   }
   catch ( exception &e ) {
      cerr << "Caught: " << e.what( ) << endl;
   };
}

void header_streambuf() { 
	/*
	 * 包含 iostreams 标准头文件 <streambuf > 来定义类模板basic_streambuf，
	 * 这是 iostreams 类操作的基本操作。 此头文件通常包含在另一 iostream 头文件中；很少会直接包含它。
	 * 
	 * Typedef
	 * streambuf	使用char作为模板参数的 basic_streambuf 的专用化。
	 * wstreambuf	使用wchar_t作为模板参数的 basic_streambuf 的专用化。
	 * 
	 * basic_streambuf 类	类模板描述用于派生流缓冲区的抽象基类，该缓冲区控制元素与特定的流表示形式之间的来回传输。
	 * 
	 * 类模板描述用于派生流缓冲区的抽象基类，该缓冲区控制元素与特定的流表示形式之间的来回传输。 
	 * 类 basic_streambuf 的对象可帮助控制具有Tr类型（也称为char_type）的元素的流，其字符特征由类char_traits确定，也称为traits_type。
	 * 从概念上来说，每个流缓冲区控制两个独立的流：一个用于提取（输入），另一个用于插入（输出）。 
	 * 但是，特定的表示形式可能会导致这些流中的一个或两个不可访问。 通常，它在两个流之间保持有某种关系。
	 * 例如，向 basic_stringbuf< Elem, Tr> 对象的输出流插入的内容，就是之后从其输入流中提取的内容。 
	 * 当定位 basic_filebuf< Elem, Tr> 对象的一个流时，将同时定位其他流。
	 * 类模板的公共接口 basic_streambuf 提供对所有流缓冲区通用的操作，但这些操作是专用的。 
	 * 受保护的接口提供特定流的表示形式完成其工作所需的操作。 受保护的虚拟成员函数允许你为特定的流表示形式定制派生流缓冲区的行为。 
	 * 此库中的每个派生流缓冲区描述它如何专用化其受保护虚拟成员函数的行为。 本主题中描述了基类的默认行为，基类通常不执行任何操作。
	 * 剩余的受保护成员函数控制将内容复制到任何存储以及从此类存储中复制内容的操作，这类存储用于缓冲出入流的传输。 例如，输入缓冲区的特征是：
	 * * eback，指向缓冲区开头的指针。
	 * * gptr，指向要读取的下一个元素的指针。
	 * * egptr，刚超出缓冲区末尾的指针。
	 * 同样，输出缓冲区的特征是：
	 * * pbase，指向缓冲区开头的指针。
	 * * pptr，指向要写入的下一个元素的指针。
	 * * epptr，刚超出缓冲区末尾的指针。
	 * 
	 * 对于任何缓冲区，使用以下协议：
	 * * 如果下一个指针为 null，则不存在缓冲区。 否则，所有三个指针都将指向相同的序列。 可以安全地比较它们的顺序。
	 * * 对于输出缓冲区，如果下一个指针与结束指针相比较小，则可以在下一个指针指定的写入位置处存储元素。
	 * * 对于输入缓冲区，如果下一个指针与结束指针相比较小，则可以在下一个指针指定的读取位置处读取元素。
	 * * 对于输入缓冲区，如果开始指针与下一个指针相比较小，则可以在递减的下一个指针指定的放回位置处放回元素。
	 * 
	 * 成员函数
	 * eback	一个受保护的函数，该函数返回指向输入缓冲区开头的指针。
	 * egptr	一个受保护的函数，该函数返回刚超出输入缓冲区末尾的指针。
	 * epptr	一个受保护的函数，该函数返回刚超出输出缓冲区末尾的指针。
	 * gbump	一个受保护的函数，该函数将 count 添加到输入缓冲区的下一个指针。
	 * getloc	获取 basic_streambuf 对象的区域设置。
	 * gptr	一个受保护的函数，该函数返回指向输入缓冲区的下一个元素的指针。
	 * imbue	由 pubimbue 调用的受保护虚拟函数。
	 * in_avail	返回可随时从缓冲区读取的元素数目。
	 * overflow	将新字符插入到已满缓冲区时可以调用的受保护虚函数。
	 * pbackfail	一个受保护虚拟成员函数，该函数尝试将元素放回输入流中，随后使它成为当前元素（由下一个指针指向）。
	 * pbase	一个受保护的函数，该函数返回指向输出缓冲区开头的指针。
	 * pbump	一个受保护的函数，该函数将 count 添加到输出缓冲区的下一个指针。
	 * pptr	一个受保护的函数，该函数返回指向输出缓冲区的下一个元素的指针。
	 * pubimbue	设置 basic_streambuf 对象的区域设置。
	 * pubseekoff	调用 seekoff，它是在派生类中进行了重写的受保护虚拟函数。
	 * pubseekpos	调用 seekpos，它是在派生类中进行了重写并且重置了当前指针位置的受保护虚拟函数。
	 * pubsetbuf	调用 setbuf，它是在派生类中进行了重写的受保护虚拟函数。
	 * pubsync	调用 sync，它是在派生类中进行了重写并且更新了与此缓冲区关联的外部流的受保护虚拟函数。
	 * sbumpc	读取并返回当前元素，从而移动流指针。
	 * seekoff	受保护虚拟成员函数尝试更改受控制流的当前位置。
	 * seekpos	受保护虚拟成员函数尝试更改受控制流的当前位置。
	 * setbuf	受保护虚拟成员函数执行特定于每个派生流缓冲区的操作。
	 * setg	一个受保护的函数，该函数将 _Gbeg 存储到开始指针，将 _Gnext 存储到下一个指针，并将 _Gend 存储到输入缓冲区的结束指针。
	 * setp	一个受保护的函数，该函数将 _Pbeg 存储到开始指针，并将 _Pend 存储到输出缓冲区的结束指针。
	 * sgetc	返回当前元素，但不更改流中的位置。
	 * sgetn	返回读取的元素数目。
	 * showmanyc	一个受保护的虚拟成员函数，该函数返回可以从输入流中提取并确保该程序将不需要无限期等待的字符数计数。
	 * snextc	读取当前元素并返回以下元素。
	 * sputbackc	将 char_type 放入流中。
	 * sputc	将一个字符放入流中。
	 * sputn	将一个字符串放入流中。
	 * stossc	越过流中的当前元素。
	 * sungetc	从流中获取字符。
	 * swap	将此对象中的值与所提供 basic_streambuf 对象参数中的值进行交换。
	 * sync	一个受保护的虚拟函数，它尝试将受控流与任何关联的外部流同步。
	 * uflow	一个受保护的虚拟函数，它从输入流中提取当前元素。
	 * underflow	一个受保护的虚拟函数，它从输入流中提取当前元素。
	 * xsgetn	一个受保护的虚拟函数，它从输入流中提取元素。
	 * xsputn	一个受保护的虚拟函数，它将元素插入到输出流中。
	*/

	cout << cout.rdbuf( )->getloc( ).name( ).c_str( ) << endl;
    char c;
    // cin's buffer is empty, in_avail will return 0
    cout << cin.rdbuf( )->in_avail( ) << endl;
    cin >> c;
    cout << cin.rdbuf( )->in_avail( ) << endl;
}

void header_string() { 
	/*
	 * C++ 语言和 C++ 标准库支持两种类型的字符串：
	 * 以 null 结尾的字符数组通常作为 C 字符串被引用。
	 * 类型 basic_string 的类模板对象，用于处理所有类似于字符的模板参数。
	 * 
	 * Typedef
	 * string	一种类型，用于描述类模板的专用化，basic_string 将char类型的元素作为 string。
	 * wstring	一种类型，用于描述类模板的专用化，basic_string 将 wstring 类型的元素作为。
	 * u16string	一种类型，该类型描述基于 char16_t 类型的元素 basic_string 类模板的专用化。
	 * u32string	一种类型，该类型描述基于 char32_t 类型的元素 basic_string 类模板的专用化。
	 * 
	 * 运算符	
	 * operator+	连接两个字符串对象。
	 * operator!=	测试运算符左侧的字符串对象是否不等于右侧的字符串对象。
	 * operator==	测试运算符左侧的字符串对象是否等于右侧的字符串对象。
	 * operator<	测试运算符左侧的字符串对象是否小于右侧的字符串对象。
	 * operator<=	测试运算符左侧的字符串对象是否小于或等于右侧的字符串对象。
	 * operator<<	一个模板函数，用于向输出流插入字符串。
	 * operator>	测试运算符左侧的字符串对象是否大于右侧的字符串对象。
	 * operator>=	测试运算符左侧的字符串对象是否大于或等于右侧的字符串对象。
	 * operator>>	一个模板函数，用于从输入流提取字符串。
	 * 
	 * 专用化模板函数
	 * hash	生成字符串的哈希。
	 * swap	交换两个字符串的字符数组。
	 * stod	将字符序列转换为双精度型。
	 * stof	将字符序列转换为float。
	 * stoi	将字符序列转换为整数。
	 * stold	将字符序列转换为长双精度值。
	 * stoll	将字符序列转换为长整型。
	 * stoul	将字符序列转换为无符号长整数。
	 * stoull	将字符序列转换为无符号长整数。
	 * to_string	将一个值转换为 string。
	 * to_wstring	将一个值转换为宽 string。
	 * 
	 * 函数
	 * getline 模板	将字符串从输入流中一行一行地提取出来。
	 * 
	 * 类
	 * basic_string 类	一个类模板，用于描述可存储任意类似于字符的对象序列的对象。
	 * char_traits 结构	一个类模板，用于描述与类型 CharType 的字符关联的特性。
	 * 
	 * 专用化
	 * char_traits<char> Struct	一个结构，它是模板结构 char_traits<CharType> 对类型 char 元素的专用化。
	 * char_traits<wchar_t> 结构	一个结构，它是模板结构 char_traits<CharType> 对类型 wchar_t 元素的专用化。
	 * char_traits<char16_t> 结构	一个结构，它是模板结构 char_traits<CharType> 对类型 char16_t 元素的专用化。
	 * char_traits<char32_t> 结构	一个结构，它是模板结构 char_traits<CharType> 对类型 char32_t 元素的专用化。
	 * 
	 * 成员函数
	 * append	向字符串的末尾添加字符。
	 * assign	对字符串的内容赋新的字符值。
	 * at	返回对字符串中指定位置的元素的引用。
	 * back	
	 * begin	返回发现字符串中第一个元素的位置的迭代器。
	 * c_str	将字符串的内容转换为以 null 结尾的 C 样式字符串。
	 * capacity	返回在不增加字符串内存分配的情况下可存储在字符串中的元素的最大数目。
	 * cbegin	返回发现字符串中第一个元素的位置的常量迭代器。
	 * cend	返回发现字符串中最后一个元素之后的位置的常量迭代器。
	 * clear	清除字符串中的全部元素。
	 * compare	将字符串与指定字符串比较，确定两个字符串是否相等或按字典顺序一个字符串是否小于另一个。
	 * copy	将指定数目的字符从源字符串中的索引位置复制到目标字符组。 已否决。 改用 basic_string::_Copy_s。
	 * crbegin	返回发现反向字符串中第一个元素的位置的常量迭代器。
	 * crend	返回发现反向字符串中最后一个元素之后的位置的常量迭代器。
	 * _Copy_s	将指定数目的字符从源字符串中的索引位置复制到目标字符组。
	 * data	将字符串的内容转换为字符数组。
	 * empty	测试字符串是否包含字符。
	 * end	返回发现字符串中最后一个元素之后的位置的迭代器。
	 * erase	从字符串中的指定位置删除一个或一系列元素。
	 * find	向前搜索字符串，搜索与指定字符序列匹配的第一个子字符串。
	 * find_first_not_of	在字符串中搜索不属于指定字符串中任何元素的第一个字符。
	 * find_first_of	在字符串中搜索与指定字符串中任何元素匹配的第一个字符。
	 * find_last_not_of	在字符串中搜索不属于指定字符串元素的最后一个字符。
	 * find_last_of	在字符串中搜索属于指定字符串中一个元素的最后一个字符。
	 * front	返回对字符串中第一个元素的引用。
	 * get_allocator	返回用于构造字符串的 allocator 对象的副本。
	 * insert	将一个、多个或一些列元素插入字符串中的指定位置。
	 * length	返回字符串中元素的当前数目。
	 * max_size	返回字符串可包含的字符的最大数目。
	 * pop_back	删除字符串的最后一个元素。
	 * push_back	在字符串的末尾处添加一个元素。
	 * rbegin	返回指向反向字符串中第一个元素的迭代器。
	 * rend	返回指向刚超出反向字符串的最后一个元素的位置的迭代器。
	 * replace	用指定字符或者从其他范围、字符串或 C 字符串复制的字符来替代字符串中指定位置的元素。
	 * reserve	将字符串的容量设置为一个数目，这个数目至少应与指定数目一样大。
	 * resize	根据要求追加或删除元素，为字符串指定新的大小。
	 * rfind	向后搜索字符串，搜索与指定字符序列匹配的第一个子字符串。
	 * shrink_to_fit	放弃字符串的超出容量。
	 * size	返回字符串中元素的当前数目。
	 * substr	从字符串起始处的指定位置复制最多某个数目的字符的子字符串。
	 * swap	交换两个字符串的内容。
	 * 运算符
	 * Operator	描述
	 * operator+=	向字符串追加字符。
	 * operator=	对字符串的内容赋新的字符值。
	 * operator[]	使用字符串中的指定索引提供对字符的引用。
	*/
	string s1("Hello World");  // si = ""
	string s2("Hello");  // s2 = "Hello"
	string s3(4, 'K');  // s3 = "KKKK"
	string s4("12345", 1, 3);  //s4 = "234"，即 "12345" 的从下标 1 开始，长度为 3 的子串

	s3.assign(s1);  // s3 = s1
	s2.assign(s1, 1, 2);  // s2 = "23"，即 s1 的子串(1, 2)
	s2.assign(4, 'K');  // s2 = "KKKK"
	s2.assign("abcde", 2, 3);  // s2 = "cde"，即 "abcde" 的子串(2, 3)

	int n = s1.compare(s2);
	n = s1.compare(1, 2, s2, 0, 3);  //比较s1的子串 (1,2) 和s2的子串 (0,3)
	n = s1.compare(0, 2, s2);  // 比较s1的子串 (0,2) 和 s2
	n = s1.compare("Hello");
	n = s1.compare(1, 2, "Hello");  //比较 s1 的子串(1,2)和"Hello”
	n = s1.compare(1, 2, "Hello", 1, 2);  //比较 s1 的子串(1,2)和 "Hello" 的子串(1,2)

	auto s5 = s1.substr(2);  
	s1.swap(s2);

    string ss1("Source Code");
    int n;
    if ((n = ss1.find('u')) != string::npos) //查找 u 出现的位置
        cout << "1) " << n << "," << ss1.substr(n) << endl;
    //输出 l)2,urce Code
    if ((n = ss1.find("Source", 3)) == string::npos)
        //从下标3开始查找"Source"，找不到
        cout << "2) " << "Not Found" << endl;  //输出 2) Not Found
    if ((n = ss1.find("Co")) != string::npos)
        //查找子串"Co"。能找到，返回"Co"的位置
        cout << "3) " << n << ", " << ss1.substr(n) << endl;
    //输出 3) 7, Code
    if ((n = ss1.find_first_of("ceo")) != string::npos)
        //查找第一次出现或 'c'、'e'或'o'的位置
        cout << "4) " << n << ", " << ss1.substr(n) << endl;
    //输出 4) l, ource Code
    if ((n = ss1.find_last_of('e')) != string::npos)
        //查找最后一个 'e' 的位置
        cout << "5) " << n << ", " << ss1.substr(n) << endl;  //输出 5) 10, e
    if ((n = ss1.find_first_not_of("eou", 1)) != string::npos)
        //从下标1开始查找第一次出现非 'e'、'o' 或 'u' 字符的位置
        cout << "6) " << n << ", " << ss1.substr(n) << endl;
    //输出 6) 3, rce Code
    return 0;

}

void header_string_view() { 
	/*
	 * 模板专用化的 string_view 系列提供了一种有效的方法, 可将只读、异常安全、非拥有的句柄传递给任何类似于字符串的对象, 
	 * 并将其序列的第一个元素置于位置零。 类型string_view为 (是的basic_string_view<char>typedef) 的函数参数std::string可以接受诸如、 
	 * char* 或任何其他类似于字符串的窄字符类 (其隐式转换为) string_view已定义。 同样, wstring_view u16string_view或的参数也可以接受
	 * 为其定义了隐式转换的任何字符串类型。
	 * 
	 * Typedef
	 * string_view	类模板basic_string_view的专用化, 其中包含char类型的元素。
	 * wstring_view	类模板basic_string_view的专用化, 其中包含wchar_t类型的元素。
	 * u16string_view	类模板basic_string_view的专用化, 其中包含类型char16_t的元素。
	 * u32string_view	类模板basic_string_view的专用化, 其中包含类型char32_t的元素。
	 * 
	 * 运算符	
	 * operator!=	测试运算符左侧的对象是否不等于右侧的对象。
	 * operator==	测试运算符左侧的对象是否等于右侧的对象。
	 * operator<	测试运算符左侧的对象是否小于右侧的对象的位置。
	 * operator<=	测试运算符左侧的对象是否小于或等于右侧的对象。
	 * operator<<	将插入string_view到输出流中的模板函数。
	 * operator>	测试运算符左侧的对象是否大于右侧的对象的位置。
	 * operator>=	测试运算符左侧的对象是否大于或等于右侧的对象。
	 * 
	 * 运算符	描述
	 * sv	wstring_view构造、 、u16string_view或,u32string_view具体取决于将其追加到的字符串文本的类型。 string_view
	 * 
	 * 类
	 * basic_string_view 类	一个类模板, 它提供一个只读视图, 并将其用作任意类似于字符的对象的序列。
	 * hash	为 string_view 生成哈希值的函数对象。
	 * 
	 * 成员函数	
	 * at	返回 const_reference 到指定位置的元素。
	 * back	返回最后一个元素的 const_reference。
	 * begin	返回寻址第一个元素的常量迭代器。 （string_views 是不可变的。）
	 * cbegin	与begin相同。
	 * cend	返回一个常量迭代器，该迭代器指向最后一个元素之后的一个。
	 * copy	从源 string_view 中的索引位置到目标字符数组，最多复制指定数目的字符。 （不建议使用。 改用 _Copy_s。）
	 * _Copy_s	安全 CRT 复制函数。
	 * compare	将 string_view 与指定的 string_view 进行比较，以确定它们是否相等，或者按字典顺序是否小于另一个。
	 * crbegin	与rbegin相同。
	 * crend	与rend相同。
	 * data	返回指向字符序列的原始非所有者指针。
	 * empty	测试 string_view 是否包含字符。
	 * end	与cend相同。
	 * find	向前搜索与指定字符序列匹配的子字符串的第一个匹配项。
	 * find_first_not_of	搜索不属于指定 string_view 或可转换的字符串对象的任何元素的第一个字符。
	 * find_first_of	搜索与指定 string_view 或可转换的字符串对象的任何元素匹配的第一个字符。
	 * find_last_not_of	搜索不属于指定 string_view 或可转换字符串对象的任何元素的最后一个字符。
	 * find_last_of	搜索作为指定 string_view 或可转换的字符串对象的元素的最后一个字符。
	 * front	返回第一个元素的 const_reference。
	 * length	返回元素的当前数目。
	 * max_size	返回 string_view 可包含的最大字符数。
	 * rbegin	返回一个常量迭代器，该迭代器用于发现反向 string_view 中的第一个元素。
	 * remove_prefix	将指针向后移动指定数量的元素。
	 * remove_suffix	从后面开始，将视图的大小减少到指定数目的元素。
	 * rend	返回一个常量迭代器，该迭代器指向反向 string_view 中最后一个元素之后的一个。
	 * rfind	反向搜索 string_view 与指定字符序列匹配的第一个子字符串。
	 * size	返回元素的当前数目。
	 * substr	返回从指定索引处开始的指定长度的子字符串。
	 * swap	交换两个 string_views 的内容。
	*/
    string_view sv1 { "ABA" };
    string_view sv2{ "ABAC" };
    string_view sv3{ "ABAD" };
    string_view sv4{ "ABACE" };

    bool result = sv2 > sv1; // true
    result = sv3 > sv2; // true
    result = sv3 != sv1; // true
    result = sv4 < sv3; // true because `C` < `D`

	string_view e = "embedded\0nulls"sv;

	   // The first member function compares
   // two string_views
   string_view sv_A("CAB");
   string_view sv_B("CAB");
   cout << "sv_A is " << sv_A << endl;
   cout << "sv_B is " << sv_B << endl;
   int comp1 = sv_A.compare(sv_B);
   cout << "sv_A is" << to_alpha(comp1) << "sv_B.\n";

   // The second member function compares part of
   // an operand string_view to another string_view
   string_view sv_C("AACAB");
   string_view sv_D("CAB");
   cout << "sv_C is: " << sv_C << endl;
   cout << "sv_D is: " << sv_D << endl;
   int comp2a = sv_C.compare(2, 3, sv_D);
   cout << "The last three characters of sv_C are"
       << to_alpha(comp2a) << "sv_D.\n";

   int comp2b = sv_C.compare(0, 3, sv_D);
   cout << "The first three characters of sv_C are"
       << to_alpha(comp2b) << "sv_D.\n";

	auto to_alpha = [=](int result) -> string {
   		if (result < 0) return " less than ";
   		else if (result == 0) return " equal to ";
   		else return " greater than ";
	}

   // The third member function compares part of
   // an operand string_view to part of another string_view
   string_view sv_E("AACAB");
   string_view sv_F("DCABD");
   cout << "sv_E: " << sv_E << endl;
   cout << "sv_F is: " << sv_F << endl;
   int comp3a = sv_E.compare(2, 3, sv_F, 1, 3);
   cout << "The three characters from position 2 of sv_E are"
       << to_alpha(comp3a)
       << "the 3 characters of sv_F from position 1.\n";

   // The fourth member function compares
   // an operand string_view to a C string
   string_view sv_G("ABC");
   const char* cs_A = "DEF";
   cout << "sv_G is: " << sv_G << endl;
   cout << "cs_A is: " << cs_A << endl;
   int comp4a = sv_G.compare(cs_A);
   cout << "sv_G is" << to_alpha(comp4a) << "cs_A.\n";

   // The fifth member function compares part of
   // an operand string_view to a C string
   string_view sv_H("AACAB");
   const char* cs_B = "CAB";
   cout << "sv_H is: " << sv_H << endl;
   cout << "cs_B is: " << cs_B << endl;
   int comp5a = sv_H.compare(2, 3, cs_B);
   cout << "The last three characters of sv_H are"
      << to_alpha(comp5a) << "cs_B.\n";

   // The sixth member function compares part of
   // an operand string_view to part of an equal length of
   // a C string
   string_view sv_I("AACAB");
   const char* cs_C = "ACAB";
   cout << "sv_I is: " << sv_I << endl;
   cout << "cs_C: " << cs_C << endl;
   int comp6a = sv_I.compare(1, 3, cs_C, 3);
   cout << "The 3 characters from position 1 of sv_I are"
      << to_alpha(comp6a) << "the first 3 characters of cs_C.\n";

}

void header_strstream() { 
	/*
	 * 定义多个类, 这些类支持存储在char对象的分配数组中的序列上的 iostreams 操作。 这类序列可轻松地转换为 C 字符串或者从 C 字符串进行转换。
	 * 
	 * 类
	 * strstreambuf 类	此类描述一个流缓冲区, 该缓冲区控制元素与char数组对象中存储的元素序列之间的来回传输。
	 * istrstream 类	此类描述了一种对象，该对象可控制从 strstreambuf 类的流缓冲区提取元素和编码对象。
	 * ostrstream 类	此类描述了一种对象，该对象可控制在 strstreambuf 类的流缓冲区中插入元素和编码对象。
	 * strstream 类	此类描述了一种对象，该对象使用 strstreambuf 类的流缓冲区控制元素和编码对象的插入和提取。
	 * 
	 * 类 strstreambuf 的对象将模式信息的几个位存储为其 strstreambuf 模式。 这些位指示受控序列是否：
	 * * 已分配且最后需要释放。
	 * * 是可修改的。
	 * * 可通过重新分配存储进行扩展。
	 * * 已被冻结并因此需要在对象被销毁前进行解冻，或者已由不是对象的某个代理释放（若已分配）。
	 * 
	 * 无论这些单独模式位的状态如何，都不能修改或扩展已冻结的受控序列。
	 * 此对象还存储指向控制 strstreambuf 分配的两个函数的指针。 如果这些指针都是空指针，则对象会自行设计用于分配和释放受控序列存储的方法。
	 * 
	 * 成员函数	
	 * freeze	导致无法通过流缓冲区操作使用流缓冲区。
	 * overflow	将新字符插入到已满缓冲区时可以调用的受保护虚函数。
	 * pbackfail	一个受保护的虚拟成员函数，该函数尝试将元素放回到输入流，然后使它成为当前元素（由下一个指针指向）。
	 * pcount	返回写入到受控序列的元素计数。
	 * seekoff	一个受保护的虚拟成员函数，它尝试更改受控流的当前位置。
	 * seekpos	一个受保护的虚拟成员函数，它尝试更改受控流的当前位置。
	 * str	调用 freeze，然后将返回指向受控序列开头的指针。
	 * underflow	一个受保护的虚拟函数，用于从输入流中提取当前元素。
	*/

	auto report = [](strstream &x) {
    	if (!x.good())
        	cout << "stream bad" << endl;
    	else
        	cout << "stream good" << endl;
	}

    strstream x;

    x << "test1";
    cout << "before freeze: ";
    report(x);

    // Calling str freezes stream.
    cout.write(x.rdbuf()->str(), 5) << endl;
    cout << "after freeze: ";
    report(x);

    // Stream is bad now, wrote on frozen stream
    x << "test1.5";
    cout << "after write to frozen stream: ";
    report(x);

    // Unfreeze stream, but it is still bad
    x.rdbuf()->freeze(false);
    cout << "after unfreezing stream: ";
    report(x);

    // Clear stream
    x.clear();
    cout << "after clearing stream: ";
    report(x);

    x << "test3";
    cout.write(x.rdbuf()->str(), 10) << endl;

    // Clean up.  Failure to unfreeze stream will cause a
    // memory leak.
    x.rdbuf()->freeze(false);

}

void header_system_error() { 
	/*
	 * 包括头文件 <system_error > 定义异常类 system_error 和相关模板来处理低级别系统错误。
	 * 
	 * 对象
	 * generic_category	表示一般错误的类别。
	 * is_error_code_enum_v	
	 * is_error_condition_enum_v	
	 * system_category	表示因低级别系统溢出而引起的错误类别。
	 * 
	 * 函数
	 * make_error_code	创建一个 error_code 对象。
	 * make_error_condition	创建一个 error_condition 对象。
	 * 
	 * 运算符
	 * operator==	测试运算符左侧的对象是否等于右侧的对象。
	 * operator!=	测试运算符左侧的对象是否不等于右侧的对象。
	 * operator<	测试一个对象是否小于要比较的传入对象。
	 * operator<<	
	 * 
	 * 枚举
	 * errc	为 <errno.h>中的 POSIX 定义的所有错误代码宏提供符号名称。
	 * 
	 * 类和结构
	 * error_category	表示描述错误代码类别的对象的抽象、公用基。
	 * error_code	表示特定于实现的低级别系统错误。
	 * error_condition	表示用户定义的错误代码。
	 * hash	
	 * is_error_code_enum	表示测试 error_code 枚举的类型谓词。
	 * is_error_condition_enum	表示测试 error_condition Class 枚举的类型谓词。
	 * system_error	表示为报告低级别系统溢出而引发的所有异常的基类。
	*/

    cin.exceptions(ios::failbit | ios::badbit);

    try {
        cin.rdbuf(nullptr); // throws io_errc::stream
    }
    catch (ios::failure& e) {
        cerr << "ios failure caught: ";
        if (e.code() == make_error_condition(io_errc::stream)) {
            cerr << "io_errc stream error condition" << endl;
        }
        else {
            cerr << "unmatched error condition code " << e.code() << endl;
        }
    }

}

// <t>
void header_thread() { 
	/*
	 * 包含标准头文件<线程 > 来定义类线程和各种支持函数。
	 * 
	 * 公共类
	 * thread 类	定义一个对象, 该对象用于观察和管理应用程序中的执行线程。
	 * 
	 * 公共结构
	 * hash 结构（C++ 标准库）	定义一个成员函数, 该函数返回由thread::id唯一确定的值。 
	 *     成员函数定义的哈希函数适用于将类型thread::id的值映射到索引值的分布。
	 * 
	 * 公共函数
	 * get_id	唯一标识当前的执行线程。
	 * sleep_for	阻塞调用线程。
	 * sleep_until	阻赛调用线程，至少直到指定的时间。
	 * swap	交换两个线程对象的状态。
	 * yield	表示要运行其他线程的操作系统，即使当前线程会照常继续运行。
	 * 
	 * 公共运算符
	 * 运算符 > = 运算符	确定一个 thread::id 对象是否大于或等于另一个。
	 * 运算符 > 运算符	确定一个 thread::id 对象是否大于另一个。
	 * 运算符 < = 运算符	确定一个 thread::id 对象是否小于或等于另一个。
	 * 运算符 < 运算符	确定一个 thread::id 对象是否小于另一个。
	 * operator! = 运算符	比较两个 thread::id 对象是否相等。
	 * operator = = 运算符	比较两个 thread::id 对象是否相等。
	 * 运算符 < < 运算符	将 thread::id 对象的文本表示形式插入流。
	 * 
	 * thread类：可以使用线程对象观察和管理应用程序中的执行线程。 
	 * 使用默认构造函数创建的线程对象不与任何执行线程相关联。 
	 * 通过使用可调用对象构造的线程对象创建一个新的执行线程，并在该线程中调用可调用对象。 
	 * 可移动线程对象，但不能复制。 因此，执行线程只与一个线程对象相关联。
	 * 
	 * 每个执行线程都具有 thread::id 类型的唯一标识符。 函数 this_thread::get_id 返回调用线程的标识符。 
	 * 成员函数thread::get_id 返回由线程对象管理的线程标识符。 对于默认构造的线程对象，thread::get_id 
	 * 方法返回具有值的对象，该值与所有默认构造线程对象的值相同但和 this_thread::get_id 
	 * 返回的任何线程（可在调用时连接）的值不同。
	 * 
	 * 公共方法
	 * detach	从线程对象分离关联的线程。
	 * get_id	返回关联线程的唯一标识符。
	 * hardware_concurrency	静态。 返回硬件线程上下文的估计数量。
	 * join	阻止，直到完成关联的线程。
	 * joinable	指定关联的线程是否可联接。
	 * native_handle	返回表示线程句柄的特定于实现的类型。
	 * swap	使用指定的线程对象交换对象状态。
	*/

    std::thread t([](){
		std::cout << "hello thread." << std::endl;
	});  
    t.join();  

}

void header_tuple() { 
	/*
	 * 定义了一个模板 tuple它的实例包括不同类型的对象。
	 * 
	 * 类和结构
	 * tuple 类	包装元素的固定长度序列。
	 * tuple_element 类	包装的 tuple 类型的元素。
	 * tuple_size 类	包装 tuple 元素计数。
	 * uses_allocator	
	 * 
	 * 对象
	 * tuple_element_t	
	 * tuple_size_v
	 * 
	 * 运算符
	 * operator==	tuple比较对象是否相等。
	 * operator!=	比较对象tuple , 而不是。
	 * operator<	tuple比较对象, 小于。
	 * operator<=	tuple比较对象, 小于或等于。
	 * operator>	tuple比较对象, 大于。
	 * operator>=	对象的tuple比较, 大于或等于。
	 * 
	 * 函数
	 * apply	使用元组调用函数。
	 * forward_as_tuple	构造一个引用元组。
	 * get	从 tuple 对象获取一个元素。
	 * make_from_tuple	要生成的tuple速记。
	 * make_tuple	从元素值中生成一个 tuple。
	 * swap	
	 * tie	从元素引用中生成一个 tuple。
	 * tuple_cat	使用一系列类型元素构造元组对象。
	*/
    tuple<int, double, string> tup(0, 1.42, "Call me Tuple");

    // get elements by index
    cout << " " << get<0>(tup);
    cout << " " << get<1>(tup);
    cout << " " << get<2>(tup) << endl;

    // get elements by type
    cout << " " << get<int>(tup);
    cout << " " << get<double>(tup);
    cout << " " << get<string>(tup) << endl;

	typedef tuple<int, double, string> MyTuple;

	MyTuple c0{ 0, 1.5, "Tail" };

    tuple_element_t<0, MyTuple> val = get<0>(c0); //get by index
    tuple_element_t<1, MyTuple> val2 = get<1>(c0);
    tuple_element_t<2, MyTuple> val3 = get<string>(c0); // get by type

    cout << val << " " << val2 << " " << val3 << endl;

}

void header_type_traits() { 
	/*
	 * 定义编译时常数的模板，这些常数提供有关其类型参数的属性的信息或生成转换类型。
	 * 头文件中的类和模板用于在编译时支持类型推理、分类和转换。 它们还用于检测与类型相关的错误，有助于优化一般代码。
	 *  一元类型特征描述类型的属性，二进制类型特征描述类型之间的关系，转换特征修改类型的属性。
	 * Helper 类 integral_constant 及其模板专用化 true_type 并 false_type 形成类型谓词的基类。 
	 * 类型谓词是采用一个或多个类型参数的模板。 当类型谓词为 true时，它会直接或间接从true_type中派生。 
	 * 当类型谓词为 false时，它会直接或间接从false_type中派生。
	 * 类型修饰符或转换特征是一个模板，包含一个或多个参数以及一个成员 type（即修改后的类型）。
	 * 
	 * add_const_t	add_cv_t	add_lvalue_reference_t
	 * add_pointer_t	add_rvalue_reference_t	add_volatile_t
	 * aligned_storage_t	aligned_union_t	common_type_t
	 * conditional_t	decay_t	enable_if_t
	 * invoke_result_t	make_signed_t	make_unsigned_t
	 * remove_all_extents_t	remove_const_t	remove_cv_t
	 * remove_extent_t	remove_pointer_t	remove_reference_t
	 * remove_volatile_t	result_of_t	underlying_type_t
	 * 
	 * 帮助程序类和 typedef
	 * integral_constant	从类型和值生成整型常量。
	 * true_type	保留包含值 true 的整数常量。
	 * false_type	保留包含值 false 的整数常量。
	 * 
	 * 主要类型类别
	 * is_void	测试类型是否为void。
	 * is_null_pointer	测试类型是否为 std::nullptr_t。
	 * is_integral	测试类型是否为整型。
	 * is_floating_point	测试类型是否为浮点。
	 * is_array	测试类型是否为数组。
	 * is_pointer	测试类型是否为指针。
	 * is_lvalue_reference	测试类型是否是左值引用。
	 * is_rvalue_reference	测试类型是否是右值引用。
	 * is_member_object_pointer	测试类型是否为指向成员对象的指针。
	 * is_member_function_pointer	测试类型是否为指向成员函数的指针。
	 * is_enum	测试类型是否为枚举。
	 * is_union	测试类型是否为联合。
	 * is_class	测试类型是否为类。
	 * is_function	测试类型是否为函数类型。
	 * 
	 * 复合类型类别
	 * is_reference	测试类型是否为引用。
	 * is_arithmetic	测试类型是否为算术型。
	 * is_fundamental	测试类型是否为void或算术。
	 * is_object	测试类型是否为对象类型。
	 * is_scalar	测试类型是否为标量类型。
	 * is_compound	测试类型是否为非标量类型。
	 * is_member_pointer	测试类型是否为指向成员的指针。
	*/

    std::cout << "is_array<int> == " << std::boolalpha
        << std::is_array<int>::value << std::endl;
    std::cout << "is_array<int[5]> == " << std::boolalpha
        << std::is_array<int[5]>::value << std::endl;
	
	std::cout << "is_same<int, int> == " << std::boolalpha
        << std::is_same<int, int>::value << std::endl;
    std::cout << "is_same<int, const int> == " << std::boolalpha
        << std::is_same<int, const int>::value << std::endl;

}

void header_typeindex() { 
	/*
	 * 包括标准头文件 <typeindex>，以定义支持类 type_info 的对象索引的类和函数。
	 * 
	 * hash 结构可定义适合将 type_index 类型的值映射到索引值的分布的 hash function。
	 * type_index 类包装指向 type_info 对象的指针，以便辅助编写索引。
	*/
}

void header_typeinfo() { 
	/*
	 * 包括标准头文件<typeinfo > 来定义多个类型与类型标识运算符关联typeid 运算符，其结果为静态和动态类型的信息。
	 * 
	 * Type_info类描述编译器在程序内生成的类型信息。 此类的对象可以有效存储指向类型的名称的指针。
	 * Type_info类还存储了一个适合用于比较两个类型是否相等或排序的编码值。 
	 * 类型的编码规则和排列顺序是未指定的，并且可能因程序而异。
	 * 
	 * 不能直接实例化type_info类的对象，因为该类只有一个私有复制构造函数。 构造（临时） type_info对象的唯一方法是使用typeid运算符。 由于赋值运算符也是私有的，因此不能复制或分配type_info类的对象。
	 * type_info::hash_code 定义适用于将类型typeinfo的值映射到索引值分布的哈希函数。
	 * 运算符 == 和 != 可用于分别比较是否与其他type_info对象比较是否相等。
	 * 类型的排列顺序与继承关系之间没有关联。 使用 type_info::before 成员函数确定类型的排序顺序。 不保证 type_info::before 在同一程序的不同程序或不同的运行中产生相同的结果。 通过这种方式，type_info::before 类似于 (&) 运算符的地址。
	 * type_info::name 成员函数返回一个表示类型的用户可读名称的以 null 结尾的字符串的 const char*。 
	 * 将缓存所指向的内存，应该从不直接释放它。
	 * type_info::raw_name 成员函数返回一个表示对象类型的修饰名称的以 null 结尾的字符串的 const char*。 
	 * 该名称实际上以其修饰的形式存储以节省空间。 因此，此函数比 type_info::name 更快，因为它不需要取消修饰名称。
	 * type_info::raw_name 函数返回的字符串在比较运算中非常有用，但不可读。 如果需要用户可读的字符串，
	 * 请改用 type_info::name 函数。
	*/
	int i = 1;
	float f = 1.222;
		
	//定义引用对象 
	const type_info& t1 = typeid(f);
	const type_info& t2 = typeid(int);
	//获得类型名称 
	const char* a=t1.name();
	const char* b=t1.name();
	//比较对象相等 
	cout<<"ti==t2 ? "<< t1==t2<<endl;

}

// <u>
void header_unordered_map() { 
	/*
	 * 定义容器类模板unordered_map和unordered_multimap及其支持的模板。
	 * 类模板描述了一个对象，该对象控制 std::pair<const Key, Ty>类型的不同长度的元素序列。 
	 * 序列由哈希函数弱排序，哈希函数将此序列分区到称为存储桶的有序序列集中。 
	 * 在每个存储桶中，比较函数将确定任一元素对是否具有等效顺序。 每个元素存储两个对象，包括一个排序键和一个值。
	 * 序列以允许查找、插入和移除任意元素的方式表示，并包含与序列中的元素数量无关的多个操作（常量时间），
	 * 至少在所有存储桶长度大致相等时如此。 在最坏情况下，当所有元素位于一个存储桶中时，
	 * 操作数量与序列中的元素数量成比例（线性时间）。 
	 * 此外，插入元素不会使迭代器失效，移除元素仅会使指向已移除元素的迭代器失效。
	 * 
	 * 成员函数	
	 * at	查找具有指定键的元素。
	 * begin	指定受控序列的开头。
	 * bucket	获取键值的存储桶编号。
	 * bucket_count	获取存储桶数。
	 * bucket_size	获取存储桶的大小。
	 * cbegin	指定受控序列的开头。
	 * cend	指定受控序列的末尾。
	 * clear	删除所有元素。
	 * count	查找与指定键匹配的元素数。
	 * emplace	添加就地构造的元素。
	 * emplace_hint	添加就地构造的元素，附带提示。
	 * empty	测试元素是否存在。
	 * end	指定受控序列的末尾。
	 * equal_range	查找与指定键匹配的范围。
	 * erase	移除指定位置处的元素。
	 * find	查找与指定键匹配的元素。
	 * get_allocator	获取存储的分配器对象。
	 * hash_function	获取存储的哈希函数对象。
	 * insert	添加元素。
	 * key_eq	获取存储的比较函数对象。
	 * load_factor	对每个存储桶的平均元素数进行计数。
	 * max_bucket_count	获取最大的存储桶数。
	 * max_load_factor	获取或设置每个存储桶的最多元素数。
	 * max_size	获取受控序列的最大大小。
	 * rehash	重新生成哈希表。
	 * size	对元素数进行计数。
	 * swap	交换两个容器的内容。
	 * unordered_map	构造容器对象。
	 * 
	 * 运算符
	 * unordered_map::operator[]	查找或插入具有指定键的元素。
	 * unordered_map::operator=	复制哈希表。
	*/

	typedef std::unordered_map<char, int> Mymap;	
	typedef std::allocator<std::pair<const char, int> > Myalloc;

    Mymap c1;

    Mymap::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // find and show elements
    std::cout << "c1.at('a') == " << c1.at('a') << std::endl;
    std::cout << "c1.at('b') == " << c1.at('b') << std::endl;
    std::cout << "c1.at('c') == " << c1.at('c') << std::endl;

    return (0);

}

void header_unordered_set() { 
	/*
	 * 定义容器类模板unordered_multiset和unordered_set及其支持的模板。
	 * 
	 * 类模板描述了一个对象，该对象控制 const Key类型的不同长度的元素序列。 
	 * 序列由哈希函数弱排序，哈希函数将此序列分区到称为存储桶的有序序列集中。 
	 * 在每个存储桶中，比较函数将确定任一元素对是否具有等效顺序。 每个元素同时用作排序键和值。 
	 * 序列以允许查找、插入和移除任意元素的方式表示，并包含与序列中的元素数量无关的多个操作（常量时间），
	 * 至少在所有存储桶长度大致相等时如此。 在最坏情况下，当所有元素位于一个存储桶中时，
	 * 操作数量与序列中的元素数量成比例（线性时间）。 此外，插入元素不会使迭代器失效，
	 * 移除元素仅会使指向已移除元素的迭代器失效。
	 * 
	 * 函数
	 * begin	指定受控序列的开头。
	 * bucket	获取键值的存储桶编号。
	 * bucket_count	获取存储桶数。
	 * bucket_size	获取存储桶的大小。
	 * cbegin	指定受控序列的开头。
	 * cend	指定受控序列的末尾。
	 * clear	删除所有元素。
	 * 计数	查找与指定键匹配的元素数。
	 * emplace	添加就地构造的元素。
	 * emplace_hint	添加就地构造的元素，附带提示。
	 * empty	测试元素是否存在。
	 * end	指定受控序列的末尾。
	 * equal_range	查找与指定键匹配的范围。
	 * erase	移除指定位置处的元素。
	 * find	查找与指定键匹配的元素。
	 * get_allocator	获取存储的分配器对象。
	 * hash_function	获取存储的哈希函数对象。
	 * insert	添加元素。
	 * key_eq	获取存储的比较函数对象。
	 * load_factor	对每个存储桶的平均元素数进行计数。
	 * max_bucket_count	获取最大的存储桶数。
	 * max_load_factor	获取或设置每个存储桶的最多元素数。
	 * max_size	获取受控序列的最大大小。
	 * rehash	重新生成哈希表。
	 * size	对元素数进行计数。
	 * swap	交换两个容器的内容。
	 * unordered_set	构造容器对象。
	*/

    unordered_set<char> c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents using range-based for
    for (auto it : c1) {
    cout << "[" << it << "] ";
    }

    cout << endl;

    // display contents using explicit for
    for (unordered_set<char>::const_iterator it = c1.begin(); it != c1.end(); ++it) {
        cout << "[" << *it << "] ";
    }

    cout << std::endl;

    // display first two items
    unordered_set<char>::iterator it2 = c1.begin();
    cout << "[" << *it2 << "] ";
    ++it2;
    cout << "[" << *it2 << "] ";
    cout << endl;

    // display bucket containing 'a'
    unordered_set<char>::const_local_iterator lit = c1.begin(c1.bucket('a'));
    cout << "[" << *lit << "] ";

}

void header_utility() { 
	/*
	 * 定义有助于构造和管理对象对的 C++ 标准库类型、函数和运算符，这些项在每次需要将两个对象视为单个对象时都非常有用。
	 * 
	 * 类
	 * chars_format	用于基元数值转换的浮点格式。
	 * tuple_element	一个包装 pair 元素的类型的类。
	 * tuple_size	一个包装 pair 元素计数的类。
	 * 
	 * 对象
	 * index_sequence	
	 * index_sequence_for	
	 * make_index_sequence	
	 * make_integer_sequence
	 * 
	 * 函数
	 * as_const	返回类型。
	 * declval	简写表达式计算。
	 * exchange	将新值分配给对象并返回其旧值。
	 * forward	保留参数的引用类型（lvalue 或 rvalue），使其不被完美转发掩盖。
	 * from_chars	
	 * get	一个从 pair 对象获取元素的函数。
	 * make_pair	一个模板帮助程序函数，用于构造类型 pair 的对象，其中组件类型基于作为参数传递的数据类型。
	 * move	将传入的参数作为 rvalue 引用返回。
	 * move_if_noexcept	
	 * swap	交换两个 pair 对象的元素。
	 * to_chars	将值转换为字符串。
	 * 
	 * 结构
	 * from_chars_result	用于的from_chars结构。
	 * identity	一个将类型定义作为模板参数提供的结构。
	 * in_place_t	还包括结构in_place_type_t和in_place_index_t。
	 * integer_sequence	表示整数序列。
	 * pair	一种类型，它提供了将两个对象视为单个对象的功能。
	 * piecewise_construct_t	用于保留单独的构造函数和函数重载的类型。
	 * to_chars_result	用于的to_chars结构。
	*/

    typedef pair<int, double> MyPair;

    MyPair c0(9, 3.14);

    // get elements by index
    cout << " " << get<0>(c0);
    cout << " " << get<1>(c0) << endl;

    // get elements by type (C++14)
    MyPair c1(1, 0.27);
    cout << " " << get<int>(c1);
    cout << " " << get<double>(c1) << endl;

}

// <v>
void header_valarray() { 
	/*
	 * 定义类模板 valarray 和众多支持类模板和函数。
	 * 这些类模板和函数允许使用异常纬度来提高性能。 具体而言，
	 * 返回类型 valarray<T1> 的任何函数可能会返回某个其他类型 T2 的对象。 
	 * 在这种情况下，任何接受类型 valarray<T2> 的一个或多个参数的函数必须具有接受这些参数的任意组合的重载，
	 * 每个重载都替换为类型 T2 的参数。
	 * 
	 * 类
	 * gslice 类	用于定义 valarray 多维切分的 valarray 实用程序类。
	 * gslice_array 类	一个内部的辅助类模板，它通过提供由 valarray 的常规切片定义的子集数组之间的操作来支持常规切片对象。
	 * indirect_array 类	一个内部的辅助类模板，它通过在通过指定父级 valarray 的索引子集定义的子集数组间提供操作来支持作为 valarray 子集的对象。
	 * mask_array 类	一个内部的辅助类模板，它通过提供子集数组之间的操作来支持作为父 valarray 的子集的对象（使用布尔表达式指定）。
	 * slice 类	一个用于定义 valarray 的一维矢量型子集的 valarray 实用程序类。
	 * slice_array 类	一个内部的辅助类模板，它通过提供由 valarray 的切片定义的子集数组之间的操作来支持切片对象。
	 * valarray 类	类模板描述了一个对象，该对象控制一个类型为 Type 的元素序列，这些元素存储为数组并针对计算性能进行了优化，用于执行高速数学运算。
	 * 
	 * valarray 类成员函数
	 * apply	将指定函数应用到 valarray 的每个元素。
	 * cshift	将 valarray 中的所有元素循环移动指定数目的位置。
	 * free	释放 valarray 使用的内存。
	 * max	查找 valarray 中的最大元素。
	 * min	查找 valarray 中的最小元素。
	 * resize	将 valarray 中元素的数量更改为指定数量，根据需要添加或删除元素。
	 * shift	将 valarray 的所有元素移动指定数目的位置。
	 * size	查找 valarray 中的元素数目。
	 * sum	确定长度不为零的 valarray 中的所有元素的总和。
	 * swap	
	*/

   int i;

   valarray<int> va1 ( 9 ), va2 ( 9 );
   for ( i = 0 ; i < 4 ; i++ )
      va1 [ i ] =  -i;
   for ( i = 4 ; i < 9 ; i++ )
      va1 [ i ] =  i;

   cout << "The initial valarray is: ";
      for (i = 0 ; i < 9 ; i++ )
         cout << va1 [ i ] << " ";
   cout << "." << endl;

   va2 = abs ( va1 );
   cout << "The absolute value of the initial valarray is: ";
      for (i = 0 ; i < 9 ; i++ )
         cout << va2 [ i ] << " ";
   cout << "." << endl;

}

void header_variant() { 
	/*
	 * 变体对象保存和管理值。 如果将该变量保留了一个值，该值的类型必须是提供给变体的模板自变量类型之一。 
	 * 这些模板自变量被调用替代项。
	 * 
	 * 函数
	 * get	获取一个对象的变体。
	 * get_if	如果它存在，则获取一个对象的变体。
	 * holds_alternative	返回 ，则返回 true如果存在一个变体。
	 * swap	交换变体。
	 * 
	 * 类
	 * bad_variant_access	向报表为变量对象的值的无效访问引发的对象。
	 * variant	为对象保留一个及其替代的类型，或没有值的值。
	 * 
	 * 结构
	 * hash	
	 * monostate	要将变体类型默认可构造一个变体的替代类型。
	 * uses_allocator	
	 * variant_alternative	可帮助您的变体对象。
	 * variant_size	可帮助您的变体对象。
	 * 
	 * 对象
	 * variant_npos
	*/
}

void header_vector() { 
	/*
	 * C++标准库 vector 类是序列容器的类模板。 矢量以线性方式存储给定类型的元素，
	 * 并允许快速随机访问任何元素。 当随机访问性能处于高级版时，矢量是序列的首选容器。
	 * 
	 * 向量允许在序列末尾插入和删除常量事件。 若要在矢量中间插入或删除元素，则需要线性时间。 
	 * Deque 类容器在序列的开头和结尾处速度更快。 列表类容器在序列内任何位置的插入和删除速度更快。
	 * 当成员函数必须将矢量对象中所含序列增加到超过其当前存储容量时，将进行矢量重新分配。 
	 * 其他的插入和删除均可能改变序列中的各个存储地址。 在所有此类情况下，指向序列更改部分的迭代器或引用将变为无效。 
	 * 如果未进行重新分配，则只有插入/删除点前的迭代器和引用保持有效。
	 * 
	 * 函数
	 * assign	清除矢量并将指定的元素复制到该空矢量。
	 * at	返回对矢量中指定位置的元素的引用。
	 * back	返回对向量中最后一个元素的引用。
	 * begin	对该向量中第一个元素返回随机访问迭代器。
	 * capacity	返回在不分配更多的存储的情况下向量可以包含的元素数。
	 * cbegin	返回指向向量中第一个元素的随机访问常量迭代器。
	 * cend	返回一个随机访问常量迭代器，它指向刚超过矢量末尾的位置。
	 * crbegin	返回一个指向反向矢量中第一个元素的常量迭代器。
	 * crend	返回一个指向反向矢量末尾的常量迭代器。
	 * clear	清除向量的元素。
	 * data	返回指向向量中第一个元素的指针。
	 * emplace	将就地构造的元素插入到指定位置的向量中。
	 * emplace_back	将一个就地构造的元素添加到向量末尾。
	 * empty	测试矢量容器是否为空。
	 * end	返回指向矢量末尾的随机访问迭代器。
	 * erase	从指定位置删除向量中的一个元素或一系列元素。
	 * front	返回对向量中第一个元素的引用。
	 * get_allocator	将对象返回到矢量使用的 allocator 类。
	 * insert	将一个元素或多个元素插入到指定位置的向量中。
	 * max_size	返回向量的最大长度。
	 * pop_back	删除矢量末尾处的元素。
	 * push_back	在矢量末尾处添加一个元素。
	 * rbegin	返回指向反向向量中第一个元素的迭代器。
	 * rend	返回一个指向反向矢量末尾的迭代器。
	 * reserve	保留向量对象的最小存储长度。
	 * resize	为矢量指定新的大小。
	 * shrink_to_fit	放弃额外容量。
	 * size	返回向量中的元素数量。
	 * swap	交换两个向量的元素。
	 * 
	 * 运算符
	 * operator[]	返回对指定位置的矢量元素的引用。
	 * operator=	用另一个向量的副本替换该向量中的元素。
	*/
    using namespace std;
    vector<int> v1, v2, v3;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "v1 = ";
    for (auto& v : v1){
        cout << v << " ";
    }
    cout << endl;

    v2.assign(v1.begin(), v1.end());
    cout << "v2 = ";
    for (auto& v : v2){
        cout << v << " ";
    }
    cout << endl;

    v3.assign(7, 4);
    cout << "v3 = ";
    for (auto& v : v3){
        cout << v << " ";
    }
    cout << endl;

    v3.assign({ 5, 6, 7 });
    for (auto& v : v3){
        cout << v << " ";
    }
    cout << endl;
}

int msvc_main() {
	cout << "Hello MSVC C++ library!\n";
	header_algorithm();
	header_allocators();
	return -1;
}
