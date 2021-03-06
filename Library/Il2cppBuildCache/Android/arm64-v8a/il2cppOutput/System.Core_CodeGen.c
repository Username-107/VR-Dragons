#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000011 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (void);
// 0x00000012 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A (void);
// 0x00000013 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000017 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000019 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000021 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000023 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000025 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000044 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000045 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000046 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000047 System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161 (void);
// 0x00000048 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40 (void);
// 0x00000049 System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE (void);
// 0x0000004A System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646 (void);
// 0x0000004B System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059 (void);
// 0x0000004C System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680 (void);
// 0x0000004D System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94 (void);
// 0x0000004E System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B (void);
// 0x0000004F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000050 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000051 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000052 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000055 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000058 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000059 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000005A System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000005B System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005D System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000005E System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000005F System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000060 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000061 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000062 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000063 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000064 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000065 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000066 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000068 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000069 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000006B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000006C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000006F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000071 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000072 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000073 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000076 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000007A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000007C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000007D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000081 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000082 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000083 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[131] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415,
	Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40,
	U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[131] = 
{
	4009,
	4009,
	4162,
	4162,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3665,
	3665,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2179,
	2676,
	2647,
	2609,
	2676,
	2624,
	2624,
	2624,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[41] = 
{
	{ 0x02000004, { 65, 4 } },
	{ 0x02000005, { 69, 9 } },
	{ 0x02000006, { 80, 7 } },
	{ 0x02000007, { 89, 10 } },
	{ 0x02000008, { 101, 11 } },
	{ 0x02000009, { 115, 9 } },
	{ 0x0200000A, { 127, 12 } },
	{ 0x0200000B, { 142, 1 } },
	{ 0x0200000C, { 143, 2 } },
	{ 0x0200000F, { 145, 3 } },
	{ 0x02000010, { 150, 5 } },
	{ 0x02000011, { 155, 7 } },
	{ 0x02000012, { 162, 3 } },
	{ 0x02000013, { 165, 7 } },
	{ 0x02000014, { 172, 4 } },
	{ 0x02000015, { 176, 21 } },
	{ 0x02000017, { 197, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 2 } },
	{ 0x0600000A, { 32, 1 } },
	{ 0x0600000B, { 33, 3 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 4 } },
	{ 0x0600000E, { 42, 4 } },
	{ 0x0600000F, { 46, 3 } },
	{ 0x06000010, { 49, 3 } },
	{ 0x06000013, { 52, 1 } },
	{ 0x06000014, { 53, 3 } },
	{ 0x06000015, { 56, 2 } },
	{ 0x06000016, { 58, 2 } },
	{ 0x06000017, { 60, 5 } },
	{ 0x06000027, { 78, 2 } },
	{ 0x0600002C, { 87, 2 } },
	{ 0x06000031, { 99, 2 } },
	{ 0x06000037, { 112, 3 } },
	{ 0x0600003C, { 124, 3 } },
	{ 0x06000041, { 139, 3 } },
	{ 0x06000053, { 148, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[199] = 
{
	{ (Il2CppRGCTXDataType)2, 1780 },
	{ (Il2CppRGCTXDataType)3, 7727 },
	{ (Il2CppRGCTXDataType)2, 3118 },
	{ (Il2CppRGCTXDataType)2, 2663 },
	{ (Il2CppRGCTXDataType)3, 14112 },
	{ (Il2CppRGCTXDataType)2, 1887 },
	{ (Il2CppRGCTXDataType)2, 2670 },
	{ (Il2CppRGCTXDataType)3, 14139 },
	{ (Il2CppRGCTXDataType)2, 2665 },
	{ (Il2CppRGCTXDataType)3, 14123 },
	{ (Il2CppRGCTXDataType)2, 1781 },
	{ (Il2CppRGCTXDataType)3, 7728 },
	{ (Il2CppRGCTXDataType)2, 3144 },
	{ (Il2CppRGCTXDataType)2, 2672 },
	{ (Il2CppRGCTXDataType)3, 14150 },
	{ (Il2CppRGCTXDataType)2, 1909 },
	{ (Il2CppRGCTXDataType)2, 2680 },
	{ (Il2CppRGCTXDataType)3, 14180 },
	{ (Il2CppRGCTXDataType)2, 2676 },
	{ (Il2CppRGCTXDataType)3, 14164 },
	{ (Il2CppRGCTXDataType)2, 577 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)3, 65 },
	{ (Il2CppRGCTXDataType)2, 1137 },
	{ (Il2CppRGCTXDataType)3, 5964 },
	{ (Il2CppRGCTXDataType)2, 579 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)2, 1143 },
	{ (Il2CppRGCTXDataType)3, 5966 },
	{ (Il2CppRGCTXDataType)2, 2384 },
	{ (Il2CppRGCTXDataType)3, 11672 },
	{ (Il2CppRGCTXDataType)3, 6384 },
	{ (Il2CppRGCTXDataType)2, 667 },
	{ (Il2CppRGCTXDataType)3, 788 },
	{ (Il2CppRGCTXDataType)3, 789 },
	{ (Il2CppRGCTXDataType)2, 1888 },
	{ (Il2CppRGCTXDataType)3, 8431 },
	{ (Il2CppRGCTXDataType)2, 1662 },
	{ (Il2CppRGCTXDataType)2, 1262 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)2, 1488 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)2, 1263 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)2, 1489 },
	{ (Il2CppRGCTXDataType)2, 1390 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)3, 5965 },
	{ (Il2CppRGCTXDataType)2, 1661 },
	{ (Il2CppRGCTXDataType)2, 1387 },
	{ (Il2CppRGCTXDataType)2, 1487 },
	{ (Il2CppRGCTXDataType)2, 1380 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)2, 1485 },
	{ (Il2CppRGCTXDataType)3, 5963 },
	{ (Il2CppRGCTXDataType)2, 1261 },
	{ (Il2CppRGCTXDataType)2, 1386 },
	{ (Il2CppRGCTXDataType)2, 1260 },
	{ (Il2CppRGCTXDataType)3, 16687 },
	{ (Il2CppRGCTXDataType)3, 5440 },
	{ (Il2CppRGCTXDataType)2, 1039 },
	{ (Il2CppRGCTXDataType)2, 1383 },
	{ (Il2CppRGCTXDataType)2, 1486 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)3, 7729 },
	{ (Il2CppRGCTXDataType)3, 7731 },
	{ (Il2CppRGCTXDataType)2, 388 },
	{ (Il2CppRGCTXDataType)3, 7730 },
	{ (Il2CppRGCTXDataType)3, 7739 },
	{ (Il2CppRGCTXDataType)2, 1784 },
	{ (Il2CppRGCTXDataType)2, 2666 },
	{ (Il2CppRGCTXDataType)3, 14124 },
	{ (Il2CppRGCTXDataType)3, 7740 },
	{ (Il2CppRGCTXDataType)2, 1428 },
	{ (Il2CppRGCTXDataType)2, 1514 },
	{ (Il2CppRGCTXDataType)3, 5972 },
	{ (Il2CppRGCTXDataType)3, 16676 },
	{ (Il2CppRGCTXDataType)2, 2677 },
	{ (Il2CppRGCTXDataType)3, 14165 },
	{ (Il2CppRGCTXDataType)3, 7732 },
	{ (Il2CppRGCTXDataType)2, 1783 },
	{ (Il2CppRGCTXDataType)2, 2664 },
	{ (Il2CppRGCTXDataType)3, 14113 },
	{ (Il2CppRGCTXDataType)3, 5971 },
	{ (Il2CppRGCTXDataType)3, 7733 },
	{ (Il2CppRGCTXDataType)3, 16675 },
	{ (Il2CppRGCTXDataType)2, 2673 },
	{ (Il2CppRGCTXDataType)3, 14151 },
	{ (Il2CppRGCTXDataType)3, 7746 },
	{ (Il2CppRGCTXDataType)2, 1785 },
	{ (Il2CppRGCTXDataType)2, 2671 },
	{ (Il2CppRGCTXDataType)3, 14140 },
	{ (Il2CppRGCTXDataType)3, 8490 },
	{ (Il2CppRGCTXDataType)3, 4351 },
	{ (Il2CppRGCTXDataType)3, 5973 },
	{ (Il2CppRGCTXDataType)3, 4350 },
	{ (Il2CppRGCTXDataType)3, 7747 },
	{ (Il2CppRGCTXDataType)3, 16677 },
	{ (Il2CppRGCTXDataType)2, 2681 },
	{ (Il2CppRGCTXDataType)3, 14181 },
	{ (Il2CppRGCTXDataType)3, 7760 },
	{ (Il2CppRGCTXDataType)2, 1787 },
	{ (Il2CppRGCTXDataType)2, 2679 },
	{ (Il2CppRGCTXDataType)3, 14167 },
	{ (Il2CppRGCTXDataType)3, 7761 },
	{ (Il2CppRGCTXDataType)2, 1431 },
	{ (Il2CppRGCTXDataType)2, 1517 },
	{ (Il2CppRGCTXDataType)3, 5977 },
	{ (Il2CppRGCTXDataType)3, 5976 },
	{ (Il2CppRGCTXDataType)2, 2668 },
	{ (Il2CppRGCTXDataType)3, 14126 },
	{ (Il2CppRGCTXDataType)3, 16681 },
	{ (Il2CppRGCTXDataType)2, 2678 },
	{ (Il2CppRGCTXDataType)3, 14166 },
	{ (Il2CppRGCTXDataType)3, 7753 },
	{ (Il2CppRGCTXDataType)2, 1786 },
	{ (Il2CppRGCTXDataType)2, 2675 },
	{ (Il2CppRGCTXDataType)3, 14153 },
	{ (Il2CppRGCTXDataType)3, 5975 },
	{ (Il2CppRGCTXDataType)3, 5974 },
	{ (Il2CppRGCTXDataType)3, 7754 },
	{ (Il2CppRGCTXDataType)2, 2667 },
	{ (Il2CppRGCTXDataType)3, 14125 },
	{ (Il2CppRGCTXDataType)3, 16680 },
	{ (Il2CppRGCTXDataType)2, 2674 },
	{ (Il2CppRGCTXDataType)3, 14152 },
	{ (Il2CppRGCTXDataType)3, 7767 },
	{ (Il2CppRGCTXDataType)2, 1788 },
	{ (Il2CppRGCTXDataType)2, 2683 },
	{ (Il2CppRGCTXDataType)3, 14183 },
	{ (Il2CppRGCTXDataType)3, 8491 },
	{ (Il2CppRGCTXDataType)3, 4353 },
	{ (Il2CppRGCTXDataType)3, 5979 },
	{ (Il2CppRGCTXDataType)3, 5978 },
	{ (Il2CppRGCTXDataType)3, 4352 },
	{ (Il2CppRGCTXDataType)3, 7768 },
	{ (Il2CppRGCTXDataType)2, 2669 },
	{ (Il2CppRGCTXDataType)3, 14127 },
	{ (Il2CppRGCTXDataType)3, 16682 },
	{ (Il2CppRGCTXDataType)2, 2682 },
	{ (Il2CppRGCTXDataType)3, 14182 },
	{ (Il2CppRGCTXDataType)3, 5969 },
	{ (Il2CppRGCTXDataType)3, 5970 },
	{ (Il2CppRGCTXDataType)3, 5980 },
	{ (Il2CppRGCTXDataType)2, 580 },
	{ (Il2CppRGCTXDataType)3, 82 },
	{ (Il2CppRGCTXDataType)3, 11659 },
	{ (Il2CppRGCTXDataType)2, 2385 },
	{ (Il2CppRGCTXDataType)3, 11673 },
	{ (Il2CppRGCTXDataType)2, 668 },
	{ (Il2CppRGCTXDataType)3, 790 },
	{ (Il2CppRGCTXDataType)3, 11665 },
	{ (Il2CppRGCTXDataType)3, 4321 },
	{ (Il2CppRGCTXDataType)2, 412 },
	{ (Il2CppRGCTXDataType)3, 11660 },
	{ (Il2CppRGCTXDataType)2, 2381 },
	{ (Il2CppRGCTXDataType)3, 854 },
	{ (Il2CppRGCTXDataType)2, 717 },
	{ (Il2CppRGCTXDataType)2, 1008 },
	{ (Il2CppRGCTXDataType)3, 4327 },
	{ (Il2CppRGCTXDataType)3, 11661 },
	{ (Il2CppRGCTXDataType)3, 4316 },
	{ (Il2CppRGCTXDataType)3, 4317 },
	{ (Il2CppRGCTXDataType)3, 4315 },
	{ (Il2CppRGCTXDataType)3, 4318 },
	{ (Il2CppRGCTXDataType)2, 1004 },
	{ (Il2CppRGCTXDataType)2, 3197 },
	{ (Il2CppRGCTXDataType)3, 5968 },
	{ (Il2CppRGCTXDataType)3, 4320 },
	{ (Il2CppRGCTXDataType)2, 1365 },
	{ (Il2CppRGCTXDataType)3, 4319 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)2, 3149 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)3, 5456 },
	{ (Il2CppRGCTXDataType)2, 1047 },
	{ (Il2CppRGCTXDataType)3, 6220 },
	{ (Il2CppRGCTXDataType)3, 6221 },
	{ (Il2CppRGCTXDataType)3, 6226 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)3, 6223 },
	{ (Il2CppRGCTXDataType)3, 17166 },
	{ (Il2CppRGCTXDataType)2, 1013 },
	{ (Il2CppRGCTXDataType)3, 4343 },
	{ (Il2CppRGCTXDataType)1, 1356 },
	{ (Il2CppRGCTXDataType)2, 3160 },
	{ (Il2CppRGCTXDataType)3, 6222 },
	{ (Il2CppRGCTXDataType)1, 3160 },
	{ (Il2CppRGCTXDataType)1, 1571 },
	{ (Il2CppRGCTXDataType)2, 3216 },
	{ (Il2CppRGCTXDataType)2, 3160 },
	{ (Il2CppRGCTXDataType)3, 6227 },
	{ (Il2CppRGCTXDataType)3, 6225 },
	{ (Il2CppRGCTXDataType)3, 6224 },
	{ (Il2CppRGCTXDataType)2, 285 },
	{ (Il2CppRGCTXDataType)3, 4354 },
	{ (Il2CppRGCTXDataType)2, 400 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	131,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	41,
	s_rgctxIndices,
	199,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
