#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_t2152586932;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression>
struct IReadOnlyList_1_t1682844990;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2800740313;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t430650805;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t213319420;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t1796590042;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_t2693004534;
// System.Linq.Expressions.BlockExpressionList
struct BlockExpressionList_t616780428;
// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t3951553093;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3131094331;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1118422084;
// System.Linq.Expressions.SymbolDocumentInfo
struct SymbolDocumentInfo_t3354672670;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_t1870160633;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t2404503487;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ARRAYBUILDEREXTENSIONS_T4259350468_H
#define ARRAYBUILDEREXTENSIONS_T4259350468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ArrayBuilderExtensions
struct  ArrayBuilderExtensions_t4259350468  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYBUILDEREXTENSIONS_T4259350468_H
#ifndef BLOCKEXPRESSIONLIST_T616780428_H
#define BLOCKEXPRESSIONLIST_T616780428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockExpressionList
struct  BlockExpressionList_t616780428  : public RuntimeObject
{
public:
	// System.Linq.Expressions.BlockExpression System.Linq.Expressions.BlockExpressionList::_block
	BlockExpression_t2693004534 * ____block_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpressionList::_arg0
	Expression_t1588164026 * ____arg0_1;

public:
	inline static int32_t get_offset_of__block_0() { return static_cast<int32_t>(offsetof(BlockExpressionList_t616780428, ____block_0)); }
	inline BlockExpression_t2693004534 * get__block_0() const { return ____block_0; }
	inline BlockExpression_t2693004534 ** get_address_of__block_0() { return &____block_0; }
	inline void set__block_0(BlockExpression_t2693004534 * value)
	{
		____block_0 = value;
		Il2CppCodeGenWriteBarrier((&____block_0), value);
	}

	inline static int32_t get_offset_of__arg0_1() { return static_cast<int32_t>(offsetof(BlockExpressionList_t616780428, ____arg0_1)); }
	inline Expression_t1588164026 * get__arg0_1() const { return ____arg0_1; }
	inline Expression_t1588164026 ** get_address_of__arg0_1() { return &____arg0_1; }
	inline void set__arg0_1(Expression_t1588164026 * value)
	{
		____arg0_1 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKEXPRESSIONLIST_T616780428_H
#ifndef U3CGETENUMERATORU3ED__18_T1423670934_H
#define U3CGETENUMERATORU3ED__18_T1423670934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18
struct  U3CGetEnumeratorU3Ed__18_t1423670934  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>2__current
	Expression_t1588164026 * ___U3CU3E2__current_1;
	// System.Linq.Expressions.BlockExpressionList System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<>4__this
	BlockExpressionList_t616780428 * ___U3CU3E4__this_2;
	// System.Int32 System.Linq.Expressions.BlockExpressionList/<GetEnumerator>d__18::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t1423670934, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t1423670934, ___U3CU3E2__current_1)); }
	inline Expression_t1588164026 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Expression_t1588164026 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Expression_t1588164026 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t1423670934, ___U3CU3E4__this_2)); }
	inline BlockExpressionList_t616780428 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BlockExpressionList_t616780428 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BlockExpressionList_t616780428 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_t1423670934, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3ED__18_T1423670934_H
#ifndef CATCHBLOCK_T3081142844_H
#define CATCHBLOCK_T3081142844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.CatchBlock
struct  CatchBlock_t3081142844  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::<Variable>k__BackingField
	ParameterExpression_t1118422084 * ___U3CVariableU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.CatchBlock::<Test>k__BackingField
	Type_t * ___U3CTestU3Ek__BackingField_1;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Body>k__BackingField
	Expression_t1588164026 * ___U3CBodyU3Ek__BackingField_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Filter>k__BackingField
	Expression_t1588164026 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CVariableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CatchBlock_t3081142844, ___U3CVariableU3Ek__BackingField_0)); }
	inline ParameterExpression_t1118422084 * get_U3CVariableU3Ek__BackingField_0() const { return ___U3CVariableU3Ek__BackingField_0; }
	inline ParameterExpression_t1118422084 ** get_address_of_U3CVariableU3Ek__BackingField_0() { return &___U3CVariableU3Ek__BackingField_0; }
	inline void set_U3CVariableU3Ek__BackingField_0(ParameterExpression_t1118422084 * value)
	{
		___U3CVariableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVariableU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CatchBlock_t3081142844, ___U3CTestU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTestU3Ek__BackingField_1() const { return ___U3CTestU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTestU3Ek__BackingField_1() { return &___U3CTestU3Ek__BackingField_1; }
	inline void set_U3CTestU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTestU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatchBlock_t3081142844, ___U3CBodyU3Ek__BackingField_2)); }
	inline Expression_t1588164026 * get_U3CBodyU3Ek__BackingField_2() const { return ___U3CBodyU3Ek__BackingField_2; }
	inline Expression_t1588164026 ** get_address_of_U3CBodyU3Ek__BackingField_2() { return &___U3CBodyU3Ek__BackingField_2; }
	inline void set_U3CBodyU3Ek__BackingField_2(Expression_t1588164026 * value)
	{
		___U3CBodyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBodyU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatchBlock_t3081142844, ___U3CFilterU3Ek__BackingField_3)); }
	inline Expression_t1588164026 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline Expression_t1588164026 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(Expression_t1588164026 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFilterU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATCHBLOCK_T3081142844_H
#ifndef CONSTANTCHECK_T1493955187_H
#define CONSTANTCHECK_T1493955187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantCheck
struct  ConstantCheck_t1493955187  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTCHECK_T1493955187_H
#ifndef ELEMENTINIT_T2682486961_H
#define ELEMENTINIT_T2682486961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ElementInit
struct  ElementInit_t2682486961  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::<AddMethod>k__BackingField
	MethodInfo_t * ___U3CAddMethodU3Ek__BackingField_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::<Arguments>k__BackingField
	ReadOnlyCollection_1_t2800740313 * ___U3CArgumentsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAddMethodU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___U3CAddMethodU3Ek__BackingField_0)); }
	inline MethodInfo_t * get_U3CAddMethodU3Ek__BackingField_0() const { return ___U3CAddMethodU3Ek__BackingField_0; }
	inline MethodInfo_t ** get_address_of_U3CAddMethodU3Ek__BackingField_0() { return &___U3CAddMethodU3Ek__BackingField_0; }
	inline void set_U3CAddMethodU3Ek__BackingField_0(MethodInfo_t * value)
	{
		___U3CAddMethodU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAddMethodU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___U3CArgumentsU3Ek__BackingField_1)); }
	inline ReadOnlyCollection_1_t2800740313 * get_U3CArgumentsU3Ek__BackingField_1() const { return ___U3CArgumentsU3Ek__BackingField_1; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_U3CArgumentsU3Ek__BackingField_1() { return &___U3CArgumentsU3Ek__BackingField_1; }
	inline void set_U3CArgumentsU3Ek__BackingField_1(ReadOnlyCollection_1_t2800740313 * value)
	{
		___U3CArgumentsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgumentsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTINIT_T2682486961_H
#ifndef ERROR_T1756498973_H
#define ERROR_T1756498973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Error
struct  Error_t1756498973  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROR_T1756498973_H
#ifndef EXPRESSION_T1588164026_H
#define EXPRESSION_T1588164026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t1588164026  : public RuntimeObject
{
public:

public:
};

struct Expression_t1588164026_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t213319420 * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t430650805 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t2404503487 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t213319420 * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t213319420 ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t213319420 * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lambdaDelegateCache_0), value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t430650805 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t430650805 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t430650805 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_lambdaFactories_1), value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t1588164026_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t2404503487 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t2404503487 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t2404503487 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_legacyCtorSupportTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1588164026_H
#ifndef U3CU3EC_T3755451697_H
#define U3CU3EC_T3755451697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/<>c
struct  U3CU3Ec_t3755451697  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3755451697_StaticFields
{
public:
	// System.Linq.Expressions.Expression/<>c System.Linq.Expressions.Expression/<>c::<>9
	U3CU3Ec_t3755451697 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> System.Linq.Expressions.Expression/<>c::<>9__358_0
	Func_2_t1796590042 * ___U3CU3E9__358_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3755451697_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3755451697 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3755451697 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3755451697 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__358_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3755451697_StaticFields, ___U3CU3E9__358_0_1)); }
	inline Func_2_t1796590042 * get_U3CU3E9__358_0_1() const { return ___U3CU3E9__358_0_1; }
	inline Func_2_t1796590042 ** get_address_of_U3CU3E9__358_0_1() { return &___U3CU3E9__358_0_1; }
	inline void set_U3CU3E9__358_0_1(Func_2_t1796590042 * value)
	{
		___U3CU3E9__358_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__358_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3755451697_H
#ifndef BINARYEXPRESSIONPROXY_T2974803306_H
#define BINARYEXPRESSIONPROXY_T2974803306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/BinaryExpressionProxy
struct  BinaryExpressionProxy_t2974803306  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYEXPRESSIONPROXY_T2974803306_H
#ifndef BLOCKEXPRESSIONPROXY_T135452077_H
#define BLOCKEXPRESSIONPROXY_T135452077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/BlockExpressionProxy
struct  BlockExpressionProxy_t135452077  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKEXPRESSIONPROXY_T135452077_H
#ifndef CATCHBLOCKPROXY_T2867642995_H
#define CATCHBLOCKPROXY_T2867642995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/CatchBlockProxy
struct  CatchBlockProxy_t2867642995  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATCHBLOCKPROXY_T2867642995_H
#ifndef CONDITIONALEXPRESSIONPROXY_T3440623873_H
#define CONDITIONALEXPRESSIONPROXY_T3440623873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ConditionalExpressionProxy
struct  ConditionalExpressionProxy_t3440623873  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALEXPRESSIONPROXY_T3440623873_H
#ifndef CONSTANTEXPRESSIONPROXY_T2781329678_H
#define CONSTANTEXPRESSIONPROXY_T2781329678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ConstantExpressionProxy
struct  ConstantExpressionProxy_t2781329678  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSIONPROXY_T2781329678_H
#ifndef DEBUGINFOEXPRESSIONPROXY_T3441722008_H
#define DEBUGINFOEXPRESSIONPROXY_T3441722008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/DebugInfoExpressionProxy
struct  DebugInfoExpressionProxy_t3441722008  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGINFOEXPRESSIONPROXY_T3441722008_H
#ifndef DEFAULTEXPRESSIONPROXY_T3404437725_H
#define DEFAULTEXPRESSIONPROXY_T3404437725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/DefaultExpressionProxy
struct  DefaultExpressionProxy_t3404437725  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXPRESSIONPROXY_T3404437725_H
#ifndef GOTOEXPRESSIONPROXY_T2147349472_H
#define GOTOEXPRESSIONPROXY_T2147349472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/GotoExpressionProxy
struct  GotoExpressionProxy_t2147349472  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOTOEXPRESSIONPROXY_T2147349472_H
#ifndef INDEXEXPRESSIONPROXY_T3043937733_H
#define INDEXEXPRESSIONPROXY_T3043937733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/IndexExpressionProxy
struct  IndexExpressionProxy_t3043937733  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEXPRESSIONPROXY_T3043937733_H
#ifndef INVOCATIONEXPRESSIONPROXY_T2926000647_H
#define INVOCATIONEXPRESSIONPROXY_T2926000647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/InvocationExpressionProxy
struct  InvocationExpressionProxy_t2926000647  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSIONPROXY_T2926000647_H
#ifndef LABELEXPRESSIONPROXY_T59775327_H
#define LABELEXPRESSIONPROXY_T59775327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/LabelExpressionProxy
struct  LabelExpressionProxy_t59775327  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELEXPRESSIONPROXY_T59775327_H
#ifndef LAMBDAEXPRESSIONPROXY_T3409636026_H
#define LAMBDAEXPRESSIONPROXY_T3409636026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/LambdaExpressionProxy
struct  LambdaExpressionProxy_t3409636026  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSIONPROXY_T3409636026_H
#ifndef LISTINITEXPRESSIONPROXY_T702758702_H
#define LISTINITEXPRESSIONPROXY_T702758702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ListInitExpressionProxy
struct  ListInitExpressionProxy_t702758702  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTINITEXPRESSIONPROXY_T702758702_H
#ifndef LOOPEXPRESSIONPROXY_T3352684455_H
#define LOOPEXPRESSIONPROXY_T3352684455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/LoopExpressionProxy
struct  LoopExpressionProxy_t3352684455  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPEXPRESSIONPROXY_T3352684455_H
#ifndef MEMBEREXPRESSIONPROXY_T3344374960_H
#define MEMBEREXPRESSIONPROXY_T3344374960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/MemberExpressionProxy
struct  MemberExpressionProxy_t3344374960  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBEREXPRESSIONPROXY_T3344374960_H
#ifndef MEMBERINITEXPRESSIONPROXY_T3104580941_H
#define MEMBERINITEXPRESSIONPROXY_T3104580941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/MemberInitExpressionProxy
struct  MemberInitExpressionProxy_t3104580941  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINITEXPRESSIONPROXY_T3104580941_H
#ifndef METHODCALLEXPRESSIONPROXY_T1425002751_H
#define METHODCALLEXPRESSIONPROXY_T1425002751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/MethodCallExpressionProxy
struct  MethodCallExpressionProxy_t1425002751  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSIONPROXY_T1425002751_H
#ifndef NEWARRAYEXPRESSIONPROXY_T1203968586_H
#define NEWARRAYEXPRESSIONPROXY_T1203968586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/NewArrayExpressionProxy
struct  NewArrayExpressionProxy_t1203968586  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYEXPRESSIONPROXY_T1203968586_H
#ifndef NEWEXPRESSIONPROXY_T2538966628_H
#define NEWEXPRESSIONPROXY_T2538966628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/NewExpressionProxy
struct  NewExpressionProxy_t2538966628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWEXPRESSIONPROXY_T2538966628_H
#ifndef PARAMETEREXPRESSIONPROXY_T1879623747_H
#define PARAMETEREXPRESSIONPROXY_T1879623747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ParameterExpressionProxy
struct  ParameterExpressionProxy_t1879623747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSIONPROXY_T1879623747_H
#ifndef RUNTIMEVARIABLESEXPRESSIONPROXY_T501645533_H
#define RUNTIMEVARIABLESEXPRESSIONPROXY_T501645533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/RuntimeVariablesExpressionProxy
struct  RuntimeVariablesExpressionProxy_t501645533  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEVARIABLESEXPRESSIONPROXY_T501645533_H
#ifndef SWITCHCASEPROXY_T1057665750_H
#define SWITCHCASEPROXY_T1057665750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/SwitchCaseProxy
struct  SwitchCaseProxy_t1057665750  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHCASEPROXY_T1057665750_H
#ifndef SWITCHEXPRESSIONPROXY_T1403908011_H
#define SWITCHEXPRESSIONPROXY_T1403908011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/SwitchExpressionProxy
struct  SwitchExpressionProxy_t1403908011  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHEXPRESSIONPROXY_T1403908011_H
#ifndef TRYEXPRESSIONPROXY_T1894481308_H
#define TRYEXPRESSIONPROXY_T1894481308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/TryExpressionProxy
struct  TryExpressionProxy_t1894481308  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYEXPRESSIONPROXY_T1894481308_H
#ifndef TYPEBINARYEXPRESSIONPROXY_T1594820239_H
#define TYPEBINARYEXPRESSIONPROXY_T1594820239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/TypeBinaryExpressionProxy
struct  TypeBinaryExpressionProxy_t1594820239  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBINARYEXPRESSIONPROXY_T1594820239_H
#ifndef UNARYEXPRESSIONPROXY_T2374464895_H
#define UNARYEXPRESSIONPROXY_T2374464895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/UnaryExpressionProxy
struct  UnaryExpressionProxy_t2374464895  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSIONPROXY_T2374464895_H
#ifndef EXPRESSIONEXTENSION_T2364081198_H
#define EXPRESSIONEXTENSION_T2364081198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionExtension
struct  ExpressionExtension_t2364081198  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONEXTENSION_T2364081198_H
#ifndef EXPRESSIONVISITOR_T1561124052_H
#define EXPRESSIONVISITOR_T1561124052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionVisitor
struct  ExpressionVisitor_t1561124052  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONVISITOR_T1561124052_H
#ifndef LABELTARGET_T3951553093_H
#define LABELTARGET_T3951553093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LabelTarget
struct  LabelTarget_t3951553093  : public RuntimeObject
{
public:
	// System.String System.Linq.Expressions.LabelTarget::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.LabelTarget::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LabelTarget_t3951553093, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LabelTarget_t3951553093, ___U3CTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELTARGET_T3951553093_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BINARYEXPRESSION_T77573129_H
#define BINARYEXPRESSION_T77573129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t77573129  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t1588164026 * ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t1588164026 * ___U3CLeftU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___U3CRightU3Ek__BackingField_3)); }
	inline Expression_t1588164026 * get_U3CRightU3Ek__BackingField_3() const { return ___U3CRightU3Ek__BackingField_3; }
	inline Expression_t1588164026 ** get_address_of_U3CRightU3Ek__BackingField_3() { return &___U3CRightU3Ek__BackingField_3; }
	inline void set_U3CRightU3Ek__BackingField_3(Expression_t1588164026 * value)
	{
		___U3CRightU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRightU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___U3CLeftU3Ek__BackingField_4)); }
	inline Expression_t1588164026 * get_U3CLeftU3Ek__BackingField_4() const { return ___U3CLeftU3Ek__BackingField_4; }
	inline Expression_t1588164026 ** get_address_of_U3CLeftU3Ek__BackingField_4() { return &___U3CLeftU3Ek__BackingField_4; }
	inline void set_U3CLeftU3Ek__BackingField_4(Expression_t1588164026 * value)
	{
		___U3CLeftU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLeftU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYEXPRESSION_T77573129_H
#ifndef BLOCKEXPRESSION_T2693004534_H
#define BLOCKEXPRESSION_T2693004534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockExpression
struct  BlockExpression_t2693004534  : public Expression_t1588164026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKEXPRESSION_T2693004534_H
#ifndef CONDITIONALEXPRESSION_T1874387742_H
#define CONDITIONALEXPRESSION_T1874387742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t1874387742  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::<Test>k__BackingField
	Expression_t1588164026 * ___U3CTestU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::<IfTrue>k__BackingField
	Expression_t1588164026 * ___U3CIfTrueU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___U3CTestU3Ek__BackingField_3)); }
	inline Expression_t1588164026 * get_U3CTestU3Ek__BackingField_3() const { return ___U3CTestU3Ek__BackingField_3; }
	inline Expression_t1588164026 ** get_address_of_U3CTestU3Ek__BackingField_3() { return &___U3CTestU3Ek__BackingField_3; }
	inline void set_U3CTestU3Ek__BackingField_3(Expression_t1588164026 * value)
	{
		___U3CTestU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CIfTrueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___U3CIfTrueU3Ek__BackingField_4)); }
	inline Expression_t1588164026 * get_U3CIfTrueU3Ek__BackingField_4() const { return ___U3CIfTrueU3Ek__BackingField_4; }
	inline Expression_t1588164026 ** get_address_of_U3CIfTrueU3Ek__BackingField_4() { return &___U3CIfTrueU3Ek__BackingField_4; }
	inline void set_U3CIfTrueU3Ek__BackingField_4(Expression_t1588164026 * value)
	{
		___U3CIfTrueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIfTrueU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALEXPRESSION_T1874387742_H
#ifndef CONSTANTEXPRESSION_T3613654278_H
#define CONSTANTEXPRESSION_T3613654278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t3613654278  : public Expression_t1588164026
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstantExpression_t3613654278, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSION_T3613654278_H
#ifndef DEBUGINFOEXPRESSION_T4070081118_H
#define DEBUGINFOEXPRESSION_T4070081118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DebugInfoExpression
struct  DebugInfoExpression_t4070081118  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.SymbolDocumentInfo System.Linq.Expressions.DebugInfoExpression::<Document>k__BackingField
	SymbolDocumentInfo_t3354672670 * ___U3CDocumentU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDocumentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebugInfoExpression_t4070081118, ___U3CDocumentU3Ek__BackingField_3)); }
	inline SymbolDocumentInfo_t3354672670 * get_U3CDocumentU3Ek__BackingField_3() const { return ___U3CDocumentU3Ek__BackingField_3; }
	inline SymbolDocumentInfo_t3354672670 ** get_address_of_U3CDocumentU3Ek__BackingField_3() { return &___U3CDocumentU3Ek__BackingField_3; }
	inline void set_U3CDocumentU3Ek__BackingField_3(SymbolDocumentInfo_t3354672670 * value)
	{
		___U3CDocumentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDocumentU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGINFOEXPRESSION_T4070081118_H
#ifndef DEFAULTEXPRESSION_T4154769238_H
#define DEFAULTEXPRESSION_T4154769238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DefaultExpression
struct  DefaultExpression_t4154769238  : public Expression_t1588164026
{
public:
	// System.Type System.Linq.Expressions.DefaultExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DefaultExpression_t4154769238, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXPRESSION_T4154769238_H
#ifndef DYNAMICEXPRESSION_T172270333_H
#define DYNAMICEXPRESSION_T172270333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpression
struct  DynamicExpression_t172270333  : public Expression_t1588164026
{
public:
	// System.Runtime.CompilerServices.CallSiteBinder System.Linq.Expressions.DynamicExpression::<Binder>k__BackingField
	CallSiteBinder_t1870160633 * ___U3CBinderU3Ek__BackingField_3;
	// System.Type System.Linq.Expressions.DynamicExpression::<DelegateType>k__BackingField
	Type_t * ___U3CDelegateTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBinderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DynamicExpression_t172270333, ___U3CBinderU3Ek__BackingField_3)); }
	inline CallSiteBinder_t1870160633 * get_U3CBinderU3Ek__BackingField_3() const { return ___U3CBinderU3Ek__BackingField_3; }
	inline CallSiteBinder_t1870160633 ** get_address_of_U3CBinderU3Ek__BackingField_3() { return &___U3CBinderU3Ek__BackingField_3; }
	inline void set_U3CBinderU3Ek__BackingField_3(CallSiteBinder_t1870160633 * value)
	{
		___U3CBinderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBinderU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDelegateTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DynamicExpression_t172270333, ___U3CDelegateTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CDelegateTypeU3Ek__BackingField_4() const { return ___U3CDelegateTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CDelegateTypeU3Ek__BackingField_4() { return &___U3CDelegateTypeU3Ek__BackingField_4; }
	inline void set_U3CDelegateTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CDelegateTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDelegateTypeU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION_T172270333_H
#ifndef DYNAMICEXPRESSIONVISITOR_T90437957_H
#define DYNAMICEXPRESSIONVISITOR_T90437957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpressionVisitor
struct  DynamicExpressionVisitor_t90437957  : public ExpressionVisitor_t1561124052
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSIONVISITOR_T90437957_H
#ifndef EXPRESSIONSTRINGBUILDER_T2798731315_H
#define EXPRESSIONSTRINGBUILDER_T2798731315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionStringBuilder
struct  ExpressionStringBuilder_t2798731315  : public ExpressionVisitor_t1561124052
{
public:
	// System.Text.StringBuilder System.Linq.Expressions.ExpressionStringBuilder::_out
	StringBuilder_t * ____out_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> System.Linq.Expressions.ExpressionStringBuilder::_ids
	Dictionary_2_t3384741 * ____ids_1;

public:
	inline static int32_t get_offset_of__out_0() { return static_cast<int32_t>(offsetof(ExpressionStringBuilder_t2798731315, ____out_0)); }
	inline StringBuilder_t * get__out_0() const { return ____out_0; }
	inline StringBuilder_t ** get_address_of__out_0() { return &____out_0; }
	inline void set__out_0(StringBuilder_t * value)
	{
		____out_0 = value;
		Il2CppCodeGenWriteBarrier((&____out_0), value);
	}

	inline static int32_t get_offset_of__ids_1() { return static_cast<int32_t>(offsetof(ExpressionStringBuilder_t2798731315, ____ids_1)); }
	inline Dictionary_2_t3384741 * get__ids_1() const { return ____ids_1; }
	inline Dictionary_2_t3384741 ** get_address_of__ids_1() { return &____ids_1; }
	inline void set__ids_1(Dictionary_2_t3384741 * value)
	{
		____ids_1 = value;
		Il2CppCodeGenWriteBarrier((&____ids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONSTRINGBUILDER_T2798731315_H
#ifndef INDEXEXPRESSION_T2884136514_H
#define INDEXEXPRESSION_T2884136514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.IndexExpression
struct  IndexExpression_t2884136514  : public Expression_t1588164026
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t1588164026 * ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t * ___U3CIndexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(IndexExpression_t2884136514, ____arguments_3)); }
	inline RuntimeObject* get__arguments_3() const { return ____arguments_3; }
	inline RuntimeObject** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(RuntimeObject* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_3), value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IndexExpression_t2884136514, ___U3CObjectU3Ek__BackingField_4)); }
	inline Expression_t1588164026 * get_U3CObjectU3Ek__BackingField_4() const { return ___U3CObjectU3Ek__BackingField_4; }
	inline Expression_t1588164026 ** get_address_of_U3CObjectU3Ek__BackingField_4() { return &___U3CObjectU3Ek__BackingField_4; }
	inline void set_U3CObjectU3Ek__BackingField_4(Expression_t1588164026 * value)
	{
		___U3CObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CIndexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IndexExpression_t2884136514, ___U3CIndexerU3Ek__BackingField_5)); }
	inline PropertyInfo_t * get_U3CIndexerU3Ek__BackingField_5() const { return ___U3CIndexerU3Ek__BackingField_5; }
	inline PropertyInfo_t ** get_address_of_U3CIndexerU3Ek__BackingField_5() { return &___U3CIndexerU3Ek__BackingField_5; }
	inline void set_U3CIndexerU3Ek__BackingField_5(PropertyInfo_t * value)
	{
		___U3CIndexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIndexerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEXPRESSION_T2884136514_H
#ifndef INVOCATIONEXPRESSION_T3698930233_H
#define INVOCATIONEXPRESSION_T3698930233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression
struct  InvocationExpression_t3698930233  : public Expression_t1588164026
{
public:
	// System.Type System.Linq.Expressions.InvocationExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::<Expression>k__BackingField
	Expression_t1588164026 * ___U3CExpressionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InvocationExpression_t3698930233, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InvocationExpression_t3698930233, ___U3CExpressionU3Ek__BackingField_4)); }
	inline Expression_t1588164026 * get_U3CExpressionU3Ek__BackingField_4() const { return ___U3CExpressionU3Ek__BackingField_4; }
	inline Expression_t1588164026 ** get_address_of_U3CExpressionU3Ek__BackingField_4() { return &___U3CExpressionU3Ek__BackingField_4; }
	inline void set_U3CExpressionU3Ek__BackingField_4(Expression_t1588164026 * value)
	{
		___U3CExpressionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExpressionU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION_T3698930233_H
#ifndef LABELEXPRESSION_T3391431626_H
#define LABELEXPRESSION_T3391431626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LabelExpression
struct  LabelExpression_t3391431626  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.LabelTarget System.Linq.Expressions.LabelExpression::<Target>k__BackingField
	LabelTarget_t3951553093 * ___U3CTargetU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.LabelExpression::<DefaultValue>k__BackingField
	Expression_t1588164026 * ___U3CDefaultValueU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LabelExpression_t3391431626, ___U3CTargetU3Ek__BackingField_3)); }
	inline LabelTarget_t3951553093 * get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline LabelTarget_t3951553093 ** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(LabelTarget_t3951553093 * value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTargetU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LabelExpression_t3391431626, ___U3CDefaultValueU3Ek__BackingField_4)); }
	inline Expression_t1588164026 * get_U3CDefaultValueU3Ek__BackingField_4() const { return ___U3CDefaultValueU3Ek__BackingField_4; }
	inline Expression_t1588164026 ** get_address_of_U3CDefaultValueU3Ek__BackingField_4() { return &___U3CDefaultValueU3Ek__BackingField_4; }
	inline void set_U3CDefaultValueU3Ek__BackingField_4(Expression_t1588164026 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultValueU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELEXPRESSION_T3391431626_H
#ifndef LAMBDAEXPRESSION_T3131094331_H
#define LAMBDAEXPRESSION_T3131094331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3131094331  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t1588164026 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ____body_3)); }
	inline Expression_t1588164026 * get__body_3() const { return ____body_3; }
	inline Expression_t1588164026 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t1588164026 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((&____body_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T3131094331_H
#ifndef ANALYZETYPEISRESULT_T4190806137_H
#define ANALYZETYPEISRESULT_T4190806137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.AnalyzeTypeIsResult
struct  AnalyzeTypeIsResult_t4190806137 
{
public:
	// System.Int32 System.Linq.Expressions.AnalyzeTypeIsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyzeTypeIsResult_t4190806137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYZETYPEISRESULT_T4190806137_H
#ifndef ASSIGNBINARYEXPRESSION_T2591659520_H
#define ASSIGNBINARYEXPRESSION_T2591659520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.AssignBinaryExpression
struct  AssignBinaryExpression_t2591659520  : public BinaryExpression_t77573129
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSIGNBINARYEXPRESSION_T2591659520_H
#ifndef BLOCK2_T3144990832_H
#define BLOCK2_T3144990832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block2
struct  Block2_t3144990832  : public BlockExpression_t2693004534
{
public:
	// System.Object System.Linq.Expressions.Block2::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block2::_arg1
	Expression_t1588164026 * ____arg1_4;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block2_t3144990832, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block2_t3144990832, ____arg1_4)); }
	inline Expression_t1588164026 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t1588164026 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t1588164026 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK2_T3144990832_H
#ifndef BLOCK3_T3145056368_H
#define BLOCK3_T3145056368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block3
struct  Block3_t3145056368  : public BlockExpression_t2693004534
{
public:
	// System.Object System.Linq.Expressions.Block3::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block3::_arg1
	Expression_t1588164026 * ____arg1_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block3::_arg2
	Expression_t1588164026 * ____arg2_5;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block3_t3145056368, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block3_t3145056368, ____arg1_4)); }
	inline Expression_t1588164026 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t1588164026 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t1588164026 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}

	inline static int32_t get_offset_of__arg2_5() { return static_cast<int32_t>(offsetof(Block3_t3145056368, ____arg2_5)); }
	inline Expression_t1588164026 * get__arg2_5() const { return ____arg2_5; }
	inline Expression_t1588164026 ** get_address_of__arg2_5() { return &____arg2_5; }
	inline void set__arg2_5(Expression_t1588164026 * value)
	{
		____arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK3_T3145056368_H
#ifndef BLOCK4_T3145384048_H
#define BLOCK4_T3145384048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block4
struct  Block4_t3145384048  : public BlockExpression_t2693004534
{
public:
	// System.Object System.Linq.Expressions.Block4::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block4::_arg1
	Expression_t1588164026 * ____arg1_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block4::_arg2
	Expression_t1588164026 * ____arg2_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block4::_arg3
	Expression_t1588164026 * ____arg3_6;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block4_t3145384048, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block4_t3145384048, ____arg1_4)); }
	inline Expression_t1588164026 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t1588164026 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t1588164026 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}

	inline static int32_t get_offset_of__arg2_5() { return static_cast<int32_t>(offsetof(Block4_t3145384048, ____arg2_5)); }
	inline Expression_t1588164026 * get__arg2_5() const { return ____arg2_5; }
	inline Expression_t1588164026 ** get_address_of__arg2_5() { return &____arg2_5; }
	inline void set__arg2_5(Expression_t1588164026 * value)
	{
		____arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_5), value);
	}

	inline static int32_t get_offset_of__arg3_6() { return static_cast<int32_t>(offsetof(Block4_t3145384048, ____arg3_6)); }
	inline Expression_t1588164026 * get__arg3_6() const { return ____arg3_6; }
	inline Expression_t1588164026 ** get_address_of__arg3_6() { return &____arg3_6; }
	inline void set__arg3_6(Expression_t1588164026 * value)
	{
		____arg3_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK4_T3145384048_H
#ifndef BLOCK5_T3145449584_H
#define BLOCK5_T3145449584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Block5
struct  Block5_t3145449584  : public BlockExpression_t2693004534
{
public:
	// System.Object System.Linq.Expressions.Block5::_arg0
	RuntimeObject * ____arg0_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg1
	Expression_t1588164026 * ____arg1_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg2
	Expression_t1588164026 * ____arg2_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg3
	Expression_t1588164026 * ____arg3_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Block5::_arg4
	Expression_t1588164026 * ____arg4_7;

public:
	inline static int32_t get_offset_of__arg0_3() { return static_cast<int32_t>(offsetof(Block5_t3145449584, ____arg0_3)); }
	inline RuntimeObject * get__arg0_3() const { return ____arg0_3; }
	inline RuntimeObject ** get_address_of__arg0_3() { return &____arg0_3; }
	inline void set__arg0_3(RuntimeObject * value)
	{
		____arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_3), value);
	}

	inline static int32_t get_offset_of__arg1_4() { return static_cast<int32_t>(offsetof(Block5_t3145449584, ____arg1_4)); }
	inline Expression_t1588164026 * get__arg1_4() const { return ____arg1_4; }
	inline Expression_t1588164026 ** get_address_of__arg1_4() { return &____arg1_4; }
	inline void set__arg1_4(Expression_t1588164026 * value)
	{
		____arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_4), value);
	}

	inline static int32_t get_offset_of__arg2_5() { return static_cast<int32_t>(offsetof(Block5_t3145449584, ____arg2_5)); }
	inline Expression_t1588164026 * get__arg2_5() const { return ____arg2_5; }
	inline Expression_t1588164026 ** get_address_of__arg2_5() { return &____arg2_5; }
	inline void set__arg2_5(Expression_t1588164026 * value)
	{
		____arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_5), value);
	}

	inline static int32_t get_offset_of__arg3_6() { return static_cast<int32_t>(offsetof(Block5_t3145449584, ____arg3_6)); }
	inline Expression_t1588164026 * get__arg3_6() const { return ____arg3_6; }
	inline Expression_t1588164026 ** get_address_of__arg3_6() { return &____arg3_6; }
	inline void set__arg3_6(Expression_t1588164026 * value)
	{
		____arg3_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_6), value);
	}

	inline static int32_t get_offset_of__arg4_7() { return static_cast<int32_t>(offsetof(Block5_t3145449584, ____arg4_7)); }
	inline Expression_t1588164026 * get__arg4_7() const { return ____arg4_7; }
	inline Expression_t1588164026 ** get_address_of__arg4_7() { return &____arg4_7; }
	inline void set__arg4_7(Expression_t1588164026 * value)
	{
		____arg4_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg4_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK5_T3145449584_H
#ifndef BLOCKN_T3152068720_H
#define BLOCKN_T3152068720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BlockN
struct  BlockN_t3152068720  : public BlockExpression_t2693004534
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.BlockN::_expressions
	RuntimeObject* ____expressions_3;

public:
	inline static int32_t get_offset_of__expressions_3() { return static_cast<int32_t>(offsetof(BlockN_t3152068720, ____expressions_3)); }
	inline RuntimeObject* get__expressions_3() const { return ____expressions_3; }
	inline RuntimeObject** get_address_of__expressions_3() { return &____expressions_3; }
	inline void set__expressions_3(RuntimeObject* value)
	{
		____expressions_3 = value;
		Il2CppCodeGenWriteBarrier((&____expressions_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKN_T3152068720_H
#ifndef COALESCECONVERSIONBINARYEXPRESSION_T1217329768_H
#define COALESCECONVERSIONBINARYEXPRESSION_T1217329768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.CoalesceConversionBinaryExpression
struct  CoalesceConversionBinaryExpression_t1217329768  : public BinaryExpression_t77573129
{
public:
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.CoalesceConversionBinaryExpression::_conversion
	LambdaExpression_t3131094331 * ____conversion_5;

public:
	inline static int32_t get_offset_of__conversion_5() { return static_cast<int32_t>(offsetof(CoalesceConversionBinaryExpression_t1217329768, ____conversion_5)); }
	inline LambdaExpression_t3131094331 * get__conversion_5() const { return ____conversion_5; }
	inline LambdaExpression_t3131094331 ** get_address_of__conversion_5() { return &____conversion_5; }
	inline void set__conversion_5(LambdaExpression_t3131094331 * value)
	{
		____conversion_5 = value;
		Il2CppCodeGenWriteBarrier((&____conversion_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COALESCECONVERSIONBINARYEXPRESSION_T1217329768_H
#ifndef DYNAMICEXPRESSION1_T173384445_H
#define DYNAMICEXPRESSION1_T173384445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpression1
struct  DynamicExpression1_t173384445  : public DynamicExpression_t172270333
{
public:
	// System.Object System.Linq.Expressions.DynamicExpression1::_arg0
	RuntimeObject * ____arg0_5;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(DynamicExpression1_t173384445, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION1_T173384445_H
#ifndef DYNAMICEXPRESSION2_T173449981_H
#define DYNAMICEXPRESSION2_T173449981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpression2
struct  DynamicExpression2_t173449981  : public DynamicExpression_t172270333
{
public:
	// System.Object System.Linq.Expressions.DynamicExpression2::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.DynamicExpression2::_arg1
	Expression_t1588164026 * ____arg1_6;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(DynamicExpression2_t173449981, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(DynamicExpression2_t173449981, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION2_T173449981_H
#ifndef DYNAMICEXPRESSION3_T173515517_H
#define DYNAMICEXPRESSION3_T173515517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpression3
struct  DynamicExpression3_t173515517  : public DynamicExpression_t172270333
{
public:
	// System.Object System.Linq.Expressions.DynamicExpression3::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.DynamicExpression3::_arg1
	Expression_t1588164026 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.DynamicExpression3::_arg2
	Expression_t1588164026 * ____arg2_7;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(DynamicExpression3_t173515517, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(DynamicExpression3_t173515517, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(DynamicExpression3_t173515517, ____arg2_7)); }
	inline Expression_t1588164026 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t1588164026 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t1588164026 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION3_T173515517_H
#ifndef DYNAMICEXPRESSION4_T173056765_H
#define DYNAMICEXPRESSION4_T173056765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpression4
struct  DynamicExpression4_t173056765  : public DynamicExpression_t172270333
{
public:
	// System.Object System.Linq.Expressions.DynamicExpression4::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.DynamicExpression4::_arg1
	Expression_t1588164026 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.DynamicExpression4::_arg2
	Expression_t1588164026 * ____arg2_7;
	// System.Linq.Expressions.Expression System.Linq.Expressions.DynamicExpression4::_arg3
	Expression_t1588164026 * ____arg3_8;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(DynamicExpression4_t173056765, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(DynamicExpression4_t173056765, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(DynamicExpression4_t173056765, ____arg2_7)); }
	inline Expression_t1588164026 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t1588164026 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t1588164026 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}

	inline static int32_t get_offset_of__arg3_8() { return static_cast<int32_t>(offsetof(DynamicExpression4_t173056765, ____arg3_8)); }
	inline Expression_t1588164026 * get__arg3_8() const { return ____arg3_8; }
	inline Expression_t1588164026 ** get_address_of__arg3_8() { return &____arg3_8; }
	inline void set__arg3_8(Expression_t1588164026 * value)
	{
		____arg3_8 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION4_T173056765_H
#ifndef DYNAMICEXPRESSIONN_T175809277_H
#define DYNAMICEXPRESSIONN_T175809277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.DynamicExpressionN
struct  DynamicExpressionN_t175809277  : public DynamicExpression_t172270333
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.DynamicExpressionN::_arguments
	RuntimeObject* ____arguments_5;

public:
	inline static int32_t get_offset_of__arguments_5() { return static_cast<int32_t>(offsetof(DynamicExpressionN_t175809277, ____arguments_5)); }
	inline RuntimeObject* get__arguments_5() const { return ____arguments_5; }
	inline RuntimeObject** get_address_of__arguments_5() { return &____arguments_5; }
	inline void set__arguments_5(RuntimeObject* value)
	{
		____arguments_5 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSIONN_T175809277_H
#ifndef TRYGETFUNCACTIONARGSRESULT_T330309570_H
#define TRYGETFUNCACTIONARGSRESULT_T330309570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/TryGetFuncActionArgsResult
struct  TryGetFuncActionArgsResult_t330309570 
{
public:
	// System.Int32 System.Linq.Expressions.Expression/TryGetFuncActionArgsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TryGetFuncActionArgsResult_t330309570, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYGETFUNCACTIONARGSRESULT_T330309570_H
#ifndef EXPRESSIONTYPE_T2886294549_H
#define EXPRESSIONTYPE_T2886294549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t2886294549 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t2886294549, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONTYPE_T2886294549_H
#ifndef FULLCONDITIONALEXPRESSION_T3311396335_H
#define FULLCONDITIONALEXPRESSION_T3311396335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.FullConditionalExpression
struct  FullConditionalExpression_t3311396335  : public ConditionalExpression_t1874387742
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.FullConditionalExpression::_false
	Expression_t1588164026 * ____false_5;

public:
	inline static int32_t get_offset_of__false_5() { return static_cast<int32_t>(offsetof(FullConditionalExpression_t3311396335, ____false_5)); }
	inline Expression_t1588164026 * get__false_5() const { return ____false_5; }
	inline Expression_t1588164026 ** get_address_of__false_5() { return &____false_5; }
	inline void set__false_5(Expression_t1588164026 * value)
	{
		____false_5 = value;
		Il2CppCodeGenWriteBarrier((&____false_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FULLCONDITIONALEXPRESSION_T3311396335_H
#ifndef GOTOEXPRESSIONKIND_T2105824972_H
#define GOTOEXPRESSIONKIND_T2105824972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.GotoExpressionKind
struct  GotoExpressionKind_t2105824972 
{
public:
	// System.Int32 System.Linq.Expressions.GotoExpressionKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GotoExpressionKind_t2105824972, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOTOEXPRESSIONKIND_T2105824972_H
#ifndef INVOCATIONEXPRESSION0_T4110251767_H
#define INVOCATIONEXPRESSION0_T4110251767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression0
struct  InvocationExpression0_t4110251767  : public InvocationExpression_t3698930233
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION0_T4110251767_H
#ifndef INVOCATIONEXPRESSION1_T4110251766_H
#define INVOCATIONEXPRESSION1_T4110251766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression1
struct  InvocationExpression1_t4110251766  : public InvocationExpression_t3698930233
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression1::_arg0
	RuntimeObject * ____arg0_5;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression1_t4110251766, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION1_T4110251766_H
#ifndef INVOCATIONEXPRESSION2_T4110251765_H
#define INVOCATIONEXPRESSION2_T4110251765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression2
struct  InvocationExpression2_t4110251765  : public InvocationExpression_t3698930233
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression2::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression2::_arg1
	Expression_t1588164026 * ____arg1_6;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression2_t4110251765, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression2_t4110251765, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION2_T4110251765_H
#ifndef INVOCATIONEXPRESSION3_T4110251764_H
#define INVOCATIONEXPRESSION3_T4110251764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression3
struct  InvocationExpression3_t4110251764  : public InvocationExpression_t3698930233
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression3::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression3::_arg1
	Expression_t1588164026 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression3::_arg2
	Expression_t1588164026 * ____arg2_7;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression3_t4110251764, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression3_t4110251764, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InvocationExpression3_t4110251764, ____arg2_7)); }
	inline Expression_t1588164026 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t1588164026 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t1588164026 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION3_T4110251764_H
#ifndef INVOCATIONEXPRESSION4_T4110251771_H
#define INVOCATIONEXPRESSION4_T4110251771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression4
struct  InvocationExpression4_t4110251771  : public InvocationExpression_t3698930233
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression4::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression4::_arg1
	Expression_t1588164026 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression4::_arg2
	Expression_t1588164026 * ____arg2_7;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression4::_arg3
	Expression_t1588164026 * ____arg3_8;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4110251771, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4110251771, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4110251771, ____arg2_7)); }
	inline Expression_t1588164026 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t1588164026 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t1588164026 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}

	inline static int32_t get_offset_of__arg3_8() { return static_cast<int32_t>(offsetof(InvocationExpression4_t4110251771, ____arg3_8)); }
	inline Expression_t1588164026 * get__arg3_8() const { return ____arg3_8; }
	inline Expression_t1588164026 ** get_address_of__arg3_8() { return &____arg3_8; }
	inline void set__arg3_8(Expression_t1588164026 * value)
	{
		____arg3_8 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION4_T4110251771_H
#ifndef INVOCATIONEXPRESSION5_T4110251770_H
#define INVOCATIONEXPRESSION5_T4110251770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression5
struct  InvocationExpression5_t4110251770  : public InvocationExpression_t3698930233
{
public:
	// System.Object System.Linq.Expressions.InvocationExpression5::_arg0
	RuntimeObject * ____arg0_5;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg1
	Expression_t1588164026 * ____arg1_6;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg2
	Expression_t1588164026 * ____arg2_7;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg3
	Expression_t1588164026 * ____arg3_8;
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression5::_arg4
	Expression_t1588164026 * ____arg4_9;

public:
	inline static int32_t get_offset_of__arg0_5() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4110251770, ____arg0_5)); }
	inline RuntimeObject * get__arg0_5() const { return ____arg0_5; }
	inline RuntimeObject ** get_address_of__arg0_5() { return &____arg0_5; }
	inline void set__arg0_5(RuntimeObject * value)
	{
		____arg0_5 = value;
		Il2CppCodeGenWriteBarrier((&____arg0_5), value);
	}

	inline static int32_t get_offset_of__arg1_6() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4110251770, ____arg1_6)); }
	inline Expression_t1588164026 * get__arg1_6() const { return ____arg1_6; }
	inline Expression_t1588164026 ** get_address_of__arg1_6() { return &____arg1_6; }
	inline void set__arg1_6(Expression_t1588164026 * value)
	{
		____arg1_6 = value;
		Il2CppCodeGenWriteBarrier((&____arg1_6), value);
	}

	inline static int32_t get_offset_of__arg2_7() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4110251770, ____arg2_7)); }
	inline Expression_t1588164026 * get__arg2_7() const { return ____arg2_7; }
	inline Expression_t1588164026 ** get_address_of__arg2_7() { return &____arg2_7; }
	inline void set__arg2_7(Expression_t1588164026 * value)
	{
		____arg2_7 = value;
		Il2CppCodeGenWriteBarrier((&____arg2_7), value);
	}

	inline static int32_t get_offset_of__arg3_8() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4110251770, ____arg3_8)); }
	inline Expression_t1588164026 * get__arg3_8() const { return ____arg3_8; }
	inline Expression_t1588164026 ** get_address_of__arg3_8() { return &____arg3_8; }
	inline void set__arg3_8(Expression_t1588164026 * value)
	{
		____arg3_8 = value;
		Il2CppCodeGenWriteBarrier((&____arg3_8), value);
	}

	inline static int32_t get_offset_of__arg4_9() { return static_cast<int32_t>(offsetof(InvocationExpression5_t4110251770, ____arg4_9)); }
	inline Expression_t1588164026 * get__arg4_9() const { return ____arg4_9; }
	inline Expression_t1588164026 ** get_address_of__arg4_9() { return &____arg4_9; }
	inline void set__arg4_9(Expression_t1588164026 * value)
	{
		____arg4_9 = value;
		Il2CppCodeGenWriteBarrier((&____arg4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION5_T4110251770_H
#ifndef INVOCATIONEXPRESSIONN_T4110251697_H
#define INVOCATIONEXPRESSIONN_T4110251697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpressionN
struct  InvocationExpressionN_t4110251697  : public InvocationExpression_t3698930233
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpressionN::_arguments
	RuntimeObject* ____arguments_5;

public:
	inline static int32_t get_offset_of__arguments_5() { return static_cast<int32_t>(offsetof(InvocationExpressionN_t4110251697, ____arguments_5)); }
	inline RuntimeObject* get__arguments_5() const { return ____arguments_5; }
	inline RuntimeObject** get_address_of__arguments_5() { return &____arguments_5; }
	inline void set__arguments_5(RuntimeObject* value)
	{
		____arguments_5 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSIONN_T4110251697_H
#ifndef SCOPEEXPRESSION_T1609007018_H
#define SCOPEEXPRESSION_T1609007018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ScopeExpression
struct  ScopeExpression_t1609007018  : public BlockExpression_t2693004534
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.ScopeExpression::_variables
	RuntimeObject* ____variables_3;

public:
	inline static int32_t get_offset_of__variables_3() { return static_cast<int32_t>(offsetof(ScopeExpression_t1609007018, ____variables_3)); }
	inline RuntimeObject* get__variables_3() const { return ____variables_3; }
	inline RuntimeObject** get_address_of__variables_3() { return &____variables_3; }
	inline void set__variables_3(RuntimeObject* value)
	{
		____variables_3 = value;
		Il2CppCodeGenWriteBarrier((&____variables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPEEXPRESSION_T1609007018_H
#ifndef TYPEDCONSTANTEXPRESSION_T4290712165_H
#define TYPEDCONSTANTEXPRESSION_T4290712165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedConstantExpression
struct  TypedConstantExpression_t4290712165  : public ConstantExpression_t3613654278
{
public:
	// System.Type System.Linq.Expressions.TypedConstantExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TypedConstantExpression_t4290712165, ___U3CTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDCONSTANTEXPRESSION_T4290712165_H
#ifndef BYREFASSIGNBINARYEXPRESSION_T2460840393_H
#define BYREFASSIGNBINARYEXPRESSION_T2460840393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ByRefAssignBinaryExpression
struct  ByRefAssignBinaryExpression_t2460840393  : public AssignBinaryExpression_t2591659520
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYREFASSIGNBINARYEXPRESSION_T2460840393_H
#ifndef EXTENSIONINFO_T2479788887_H
#define EXTENSIONINFO_T2479788887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression/ExtensionInfo
struct  ExtensionInfo_t2479788887  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/ExtensionInfo::NodeType
	int32_t ___NodeType_0;
	// System.Type System.Linq.Expressions.Expression/ExtensionInfo::Type
	Type_t * ___Type_1;

public:
	inline static int32_t get_offset_of_NodeType_0() { return static_cast<int32_t>(offsetof(ExtensionInfo_t2479788887, ___NodeType_0)); }
	inline int32_t get_NodeType_0() const { return ___NodeType_0; }
	inline int32_t* get_address_of_NodeType_0() { return &___NodeType_0; }
	inline void set_NodeType_0(int32_t value)
	{
		___NodeType_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ExtensionInfo_t2479788887, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONINFO_T2479788887_H
#ifndef FULLCONDITIONALEXPRESSIONWITHTYPE_T2471935016_H
#define FULLCONDITIONALEXPRESSIONWITHTYPE_T2471935016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.FullConditionalExpressionWithType
struct  FullConditionalExpressionWithType_t2471935016  : public FullConditionalExpression_t3311396335
{
public:
	// System.Type System.Linq.Expressions.FullConditionalExpressionWithType::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FullConditionalExpressionWithType_t2471935016, ___U3CTypeU3Ek__BackingField_6)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FULLCONDITIONALEXPRESSIONWITHTYPE_T2471935016_H
#ifndef GOTOEXPRESSION_T418474106_H
#define GOTOEXPRESSION_T418474106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.GotoExpression
struct  GotoExpression_t418474106  : public Expression_t1588164026
{
public:
	// System.Type System.Linq.Expressions.GotoExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.GotoExpression::<Value>k__BackingField
	Expression_t1588164026 * ___U3CValueU3Ek__BackingField_4;
	// System.Linq.Expressions.LabelTarget System.Linq.Expressions.GotoExpression::<Target>k__BackingField
	LabelTarget_t3951553093 * ___U3CTargetU3Ek__BackingField_5;
	// System.Linq.Expressions.GotoExpressionKind System.Linq.Expressions.GotoExpression::<Kind>k__BackingField
	int32_t ___U3CKindU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GotoExpression_t418474106, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GotoExpression_t418474106, ___U3CValueU3Ek__BackingField_4)); }
	inline Expression_t1588164026 * get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline Expression_t1588164026 ** get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(Expression_t1588164026 * value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GotoExpression_t418474106, ___U3CTargetU3Ek__BackingField_5)); }
	inline LabelTarget_t3951553093 * get_U3CTargetU3Ek__BackingField_5() const { return ___U3CTargetU3Ek__BackingField_5; }
	inline LabelTarget_t3951553093 ** get_address_of_U3CTargetU3Ek__BackingField_5() { return &___U3CTargetU3Ek__BackingField_5; }
	inline void set_U3CTargetU3Ek__BackingField_5(LabelTarget_t3951553093 * value)
	{
		___U3CTargetU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTargetU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CKindU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GotoExpression_t418474106, ___U3CKindU3Ek__BackingField_6)); }
	inline int32_t get_U3CKindU3Ek__BackingField_6() const { return ___U3CKindU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CKindU3Ek__BackingField_6() { return &___U3CKindU3Ek__BackingField_6; }
	inline void set_U3CKindU3Ek__BackingField_6(int32_t value)
	{
		___U3CKindU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOTOEXPRESSION_T418474106_H
#ifndef SCOPE1_T2027404931_H
#define SCOPE1_T2027404931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Scope1
struct  Scope1_t2027404931  : public ScopeExpression_t1609007018
{
public:
	// System.Object System.Linq.Expressions.Scope1::_body
	RuntimeObject * ____body_4;

public:
	inline static int32_t get_offset_of__body_4() { return static_cast<int32_t>(offsetof(Scope1_t2027404931, ____body_4)); }
	inline RuntimeObject * get__body_4() const { return ____body_4; }
	inline RuntimeObject ** get_address_of__body_4() { return &____body_4; }
	inline void set__body_4(RuntimeObject * value)
	{
		____body_4 = value;
		Il2CppCodeGenWriteBarrier((&____body_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPE1_T2027404931_H
#ifndef SCOPEN_T2031533699_H
#define SCOPEN_T2031533699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ScopeN
struct  ScopeN_t2031533699  : public ScopeExpression_t1609007018
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ScopeN::_body
	RuntimeObject* ____body_4;

public:
	inline static int32_t get_offset_of__body_4() { return static_cast<int32_t>(offsetof(ScopeN_t2031533699, ____body_4)); }
	inline RuntimeObject* get__body_4() const { return ____body_4; }
	inline RuntimeObject** get_address_of__body_4() { return &____body_4; }
	inline void set__body_4(RuntimeObject* value)
	{
		____body_4 = value;
		Il2CppCodeGenWriteBarrier((&____body_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPEN_T2031533699_H
#ifndef SIMPLEBINARYEXPRESSION_T1873369197_H
#define SIMPLEBINARYEXPRESSION_T1873369197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.SimpleBinaryExpression
struct  SimpleBinaryExpression_t1873369197  : public BinaryExpression_t77573129
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.SimpleBinaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_5;
	// System.Type System.Linq.Expressions.SimpleBinaryExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CNodeTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SimpleBinaryExpression_t1873369197, ___U3CNodeTypeU3Ek__BackingField_5)); }
	inline int32_t get_U3CNodeTypeU3Ek__BackingField_5() const { return ___U3CNodeTypeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CNodeTypeU3Ek__BackingField_5() { return &___U3CNodeTypeU3Ek__BackingField_5; }
	inline void set_U3CNodeTypeU3Ek__BackingField_5(int32_t value)
	{
		___U3CNodeTypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SimpleBinaryExpression_t1873369197, ___U3CTypeU3Ek__BackingField_6)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEBINARYEXPRESSION_T1873369197_H
#ifndef TYPEDDYNAMICEXPRESSION1_T2042295150_H
#define TYPEDDYNAMICEXPRESSION1_T2042295150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedDynamicExpression1
struct  TypedDynamicExpression1_t2042295150  : public DynamicExpression1_t173384445
{
public:
	// System.Type System.Linq.Expressions.TypedDynamicExpression1::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TypedDynamicExpression1_t2042295150, ___U3CTypeU3Ek__BackingField_6)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDDYNAMICEXPRESSION1_T2042295150_H
#ifndef TYPEDDYNAMICEXPRESSION2_T2445579677_H
#define TYPEDDYNAMICEXPRESSION2_T2445579677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedDynamicExpression2
struct  TypedDynamicExpression2_t2445579677  : public DynamicExpression2_t173449981
{
public:
	// System.Type System.Linq.Expressions.TypedDynamicExpression2::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TypedDynamicExpression2_t2445579677, ___U3CTypeU3Ek__BackingField_7)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_7() const { return ___U3CTypeU3Ek__BackingField_7; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_7() { return &___U3CTypeU3Ek__BackingField_7; }
	inline void set_U3CTypeU3Ek__BackingField_7(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDDYNAMICEXPRESSION2_T2445579677_H
#ifndef TYPEDDYNAMICEXPRESSION3_T879495736_H
#define TYPEDDYNAMICEXPRESSION3_T879495736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedDynamicExpression3
struct  TypedDynamicExpression3_t879495736  : public DynamicExpression3_t173515517
{
public:
	// System.Type System.Linq.Expressions.TypedDynamicExpression3::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TypedDynamicExpression3_t879495736, ___U3CTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_8() const { return ___U3CTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_8() { return &___U3CTypeU3Ek__BackingField_8; }
	inline void set_U3CTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDDYNAMICEXPRESSION3_T879495736_H
#ifndef TYPEDDYNAMICEXPRESSION4_T1639010623_H
#define TYPEDDYNAMICEXPRESSION4_T1639010623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedDynamicExpression4
struct  TypedDynamicExpression4_t1639010623  : public DynamicExpression4_t173056765
{
public:
	// System.Type System.Linq.Expressions.TypedDynamicExpression4::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TypedDynamicExpression4_t1639010623, ___U3CTypeU3Ek__BackingField_9)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_9() const { return ___U3CTypeU3Ek__BackingField_9; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_9() { return &___U3CTypeU3Ek__BackingField_9; }
	inline void set_U3CTypeU3Ek__BackingField_9(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDDYNAMICEXPRESSION4_T1639010623_H
#ifndef TYPEDDYNAMICEXPRESSIONN_T1524699313_H
#define TYPEDDYNAMICEXPRESSIONN_T1524699313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypedDynamicExpressionN
struct  TypedDynamicExpressionN_t1524699313  : public DynamicExpressionN_t175809277
{
public:
	// System.Type System.Linq.Expressions.TypedDynamicExpressionN::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TypedDynamicExpressionN_t1524699313, ___U3CTypeU3Ek__BackingField_6)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDDYNAMICEXPRESSIONN_T1524699313_H
#ifndef METHODBINARYEXPRESSION_T4129838888_H
#define METHODBINARYEXPRESSION_T4129838888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodBinaryExpression
struct  MethodBinaryExpression_t4129838888  : public SimpleBinaryExpression_t1873369197
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodBinaryExpression::_method
	MethodInfo_t * ____method_7;

public:
	inline static int32_t get_offset_of__method_7() { return static_cast<int32_t>(offsetof(MethodBinaryExpression_t4129838888, ____method_7)); }
	inline MethodInfo_t * get__method_7() const { return ____method_7; }
	inline MethodInfo_t ** get_address_of__method_7() { return &____method_7; }
	inline void set__method_7(MethodInfo_t * value)
	{
		____method_7 = value;
		Il2CppCodeGenWriteBarrier((&____method_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBINARYEXPRESSION_T4129838888_H
#ifndef SCOPEWITHTYPE_T1451513763_H
#define SCOPEWITHTYPE_T1451513763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ScopeWithType
struct  ScopeWithType_t1451513763  : public ScopeN_t2031533699
{
public:
	// System.Type System.Linq.Expressions.ScopeWithType::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScopeWithType_t1451513763, ___U3CTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_5() const { return ___U3CTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_5() { return &___U3CTypeU3Ek__BackingField_5; }
	inline void set_U3CTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPEWITHTYPE_T1451513763_H
#ifndef OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_T393512413_H
#define OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_T393512413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.OpAssignMethodConversionBinaryExpression
struct  OpAssignMethodConversionBinaryExpression_t393512413  : public MethodBinaryExpression_t4129838888
{
public:
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.OpAssignMethodConversionBinaryExpression::_conversion
	LambdaExpression_t3131094331 * ____conversion_8;

public:
	inline static int32_t get_offset_of__conversion_8() { return static_cast<int32_t>(offsetof(OpAssignMethodConversionBinaryExpression_t393512413, ____conversion_8)); }
	inline LambdaExpression_t3131094331 * get__conversion_8() const { return ____conversion_8; }
	inline LambdaExpression_t3131094331 ** get_address_of__conversion_8() { return &____conversion_8; }
	inline void set__conversion_8(LambdaExpression_t3131094331 * value)
	{
		____conversion_8 = value;
		Il2CppCodeGenWriteBarrier((&____conversion_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_T393512413_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3300 = { sizeof (AssignBinaryExpression_t2591659520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3301 = { sizeof (ByRefAssignBinaryExpression_t2460840393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3302 = { sizeof (CoalesceConversionBinaryExpression_t1217329768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3302[1] = 
{
	CoalesceConversionBinaryExpression_t1217329768::get_offset_of__conversion_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3303 = { sizeof (OpAssignMethodConversionBinaryExpression_t393512413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3303[1] = 
{
	OpAssignMethodConversionBinaryExpression_t393512413::get_offset_of__conversion_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3304 = { sizeof (SimpleBinaryExpression_t1873369197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3304[2] = 
{
	SimpleBinaryExpression_t1873369197::get_offset_of_U3CNodeTypeU3Ek__BackingField_5(),
	SimpleBinaryExpression_t1873369197::get_offset_of_U3CTypeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3305 = { sizeof (MethodBinaryExpression_t4129838888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3305[1] = 
{
	MethodBinaryExpression_t4129838888::get_offset_of__method_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3306 = { sizeof (Expression_t1588164026), -1, sizeof(Expression_t1588164026_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3306[3] = 
{
	Expression_t1588164026_StaticFields::get_offset_of_s_lambdaDelegateCache_0(),
	Expression_t1588164026_StaticFields::get_offset_of_s_lambdaFactories_1(),
	Expression_t1588164026_StaticFields::get_offset_of_s_legacyCtorSupportTable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3307 = { sizeof (BinaryExpressionProxy_t2974803306), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3308 = { sizeof (BlockExpressionProxy_t135452077), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3309 = { sizeof (CatchBlockProxy_t2867642995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3310 = { sizeof (ConditionalExpressionProxy_t3440623873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3311 = { sizeof (ConstantExpressionProxy_t2781329678), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3312 = { sizeof (DebugInfoExpressionProxy_t3441722008), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3313 = { sizeof (DefaultExpressionProxy_t3404437725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3314 = { sizeof (GotoExpressionProxy_t2147349472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3315 = { sizeof (IndexExpressionProxy_t3043937733), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3316 = { sizeof (InvocationExpressionProxy_t2926000647), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3317 = { sizeof (LabelExpressionProxy_t59775327), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3318 = { sizeof (LambdaExpressionProxy_t3409636026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3319 = { sizeof (ListInitExpressionProxy_t702758702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3320 = { sizeof (LoopExpressionProxy_t3352684455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3321 = { sizeof (MemberExpressionProxy_t3344374960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3322 = { sizeof (MemberInitExpressionProxy_t3104580941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3323 = { sizeof (MethodCallExpressionProxy_t1425002751), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3324 = { sizeof (NewArrayExpressionProxy_t1203968586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3325 = { sizeof (NewExpressionProxy_t2538966628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3326 = { sizeof (ParameterExpressionProxy_t1879623747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3327 = { sizeof (RuntimeVariablesExpressionProxy_t501645533), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3328 = { sizeof (SwitchCaseProxy_t1057665750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3329 = { sizeof (SwitchExpressionProxy_t1403908011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3330 = { sizeof (TryExpressionProxy_t1894481308), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3331 = { sizeof (TypeBinaryExpressionProxy_t1594820239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3332 = { sizeof (UnaryExpressionProxy_t2374464895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3333 = { sizeof (ExtensionInfo_t2479788887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3333[2] = 
{
	ExtensionInfo_t2479788887::get_offset_of_NodeType_0(),
	ExtensionInfo_t2479788887::get_offset_of_Type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3334 = { sizeof (TryGetFuncActionArgsResult_t330309570)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3334[5] = 
{
	TryGetFuncActionArgsResult_t330309570::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3335 = { sizeof (U3CU3Ec_t3755451697), -1, sizeof(U3CU3Ec_t3755451697_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3335[2] = 
{
	U3CU3Ec_t3755451697_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3755451697_StaticFields::get_offset_of_U3CU3E9__358_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3336 = { sizeof (BlockExpression_t2693004534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3337 = { sizeof (Block2_t3144990832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3337[2] = 
{
	Block2_t3144990832::get_offset_of__arg0_3(),
	Block2_t3144990832::get_offset_of__arg1_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3338 = { sizeof (Block3_t3145056368), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3338[3] = 
{
	Block3_t3145056368::get_offset_of__arg0_3(),
	Block3_t3145056368::get_offset_of__arg1_4(),
	Block3_t3145056368::get_offset_of__arg2_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3339 = { sizeof (Block4_t3145384048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3339[4] = 
{
	Block4_t3145384048::get_offset_of__arg0_3(),
	Block4_t3145384048::get_offset_of__arg1_4(),
	Block4_t3145384048::get_offset_of__arg2_5(),
	Block4_t3145384048::get_offset_of__arg3_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3340 = { sizeof (Block5_t3145449584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3340[5] = 
{
	Block5_t3145449584::get_offset_of__arg0_3(),
	Block5_t3145449584::get_offset_of__arg1_4(),
	Block5_t3145449584::get_offset_of__arg2_5(),
	Block5_t3145449584::get_offset_of__arg3_6(),
	Block5_t3145449584::get_offset_of__arg4_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3341 = { sizeof (BlockN_t3152068720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3341[1] = 
{
	BlockN_t3152068720::get_offset_of__expressions_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3342 = { sizeof (ScopeExpression_t1609007018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3342[1] = 
{
	ScopeExpression_t1609007018::get_offset_of__variables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3343 = { sizeof (Scope1_t2027404931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3343[1] = 
{
	Scope1_t2027404931::get_offset_of__body_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3344 = { sizeof (ScopeN_t2031533699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3344[1] = 
{
	ScopeN_t2031533699::get_offset_of__body_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3345 = { sizeof (ScopeWithType_t1451513763), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3345[1] = 
{
	ScopeWithType_t1451513763::get_offset_of_U3CTypeU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3346 = { sizeof (BlockExpressionList_t616780428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3346[2] = 
{
	BlockExpressionList_t616780428::get_offset_of__block_0(),
	BlockExpressionList_t616780428::get_offset_of__arg0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3347 = { sizeof (U3CGetEnumeratorU3Ed__18_t1423670934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3347[4] = 
{
	U3CGetEnumeratorU3Ed__18_t1423670934::get_offset_of_U3CU3E1__state_0(),
	U3CGetEnumeratorU3Ed__18_t1423670934::get_offset_of_U3CU3E2__current_1(),
	U3CGetEnumeratorU3Ed__18_t1423670934::get_offset_of_U3CU3E4__this_2(),
	U3CGetEnumeratorU3Ed__18_t1423670934::get_offset_of_U3CiU3E5__1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3348 = { sizeof (CatchBlock_t3081142844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3348[4] = 
{
	CatchBlock_t3081142844::get_offset_of_U3CVariableU3Ek__BackingField_0(),
	CatchBlock_t3081142844::get_offset_of_U3CTestU3Ek__BackingField_1(),
	CatchBlock_t3081142844::get_offset_of_U3CBodyU3Ek__BackingField_2(),
	CatchBlock_t3081142844::get_offset_of_U3CFilterU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3349 = { sizeof (ArrayBuilderExtensions_t4259350468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3350 = { sizeof (AnalyzeTypeIsResult_t4190806137)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3350[5] = 
{
	AnalyzeTypeIsResult_t4190806137::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3351 = { sizeof (ConstantCheck_t1493955187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3352 = { sizeof (ConditionalExpression_t1874387742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3352[2] = 
{
	ConditionalExpression_t1874387742::get_offset_of_U3CTestU3Ek__BackingField_3(),
	ConditionalExpression_t1874387742::get_offset_of_U3CIfTrueU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3353 = { sizeof (FullConditionalExpression_t3311396335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3353[1] = 
{
	FullConditionalExpression_t3311396335::get_offset_of__false_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3354 = { sizeof (FullConditionalExpressionWithType_t2471935016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3354[1] = 
{
	FullConditionalExpressionWithType_t2471935016::get_offset_of_U3CTypeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3355 = { sizeof (ConstantExpression_t3613654278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3355[1] = 
{
	ConstantExpression_t3613654278::get_offset_of_U3CValueU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3356 = { sizeof (TypedConstantExpression_t4290712165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3356[1] = 
{
	TypedConstantExpression_t4290712165::get_offset_of_U3CTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3357 = { sizeof (DebugInfoExpression_t4070081118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3357[1] = 
{
	DebugInfoExpression_t4070081118::get_offset_of_U3CDocumentU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3358 = { sizeof (DefaultExpression_t4154769238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3358[1] = 
{
	DefaultExpression_t4154769238::get_offset_of_U3CTypeU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3359 = { sizeof (DynamicExpression_t172270333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3359[2] = 
{
	DynamicExpression_t172270333::get_offset_of_U3CBinderU3Ek__BackingField_3(),
	DynamicExpression_t172270333::get_offset_of_U3CDelegateTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3360 = { sizeof (DynamicExpressionN_t175809277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3360[1] = 
{
	DynamicExpressionN_t175809277::get_offset_of__arguments_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3361 = { sizeof (TypedDynamicExpressionN_t1524699313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3361[1] = 
{
	TypedDynamicExpressionN_t1524699313::get_offset_of_U3CTypeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3362 = { sizeof (DynamicExpression1_t173384445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3362[1] = 
{
	DynamicExpression1_t173384445::get_offset_of__arg0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3363 = { sizeof (TypedDynamicExpression1_t2042295150), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3363[1] = 
{
	TypedDynamicExpression1_t2042295150::get_offset_of_U3CTypeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3364 = { sizeof (DynamicExpression2_t173449981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3364[2] = 
{
	DynamicExpression2_t173449981::get_offset_of__arg0_5(),
	DynamicExpression2_t173449981::get_offset_of__arg1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3365 = { sizeof (TypedDynamicExpression2_t2445579677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3365[1] = 
{
	TypedDynamicExpression2_t2445579677::get_offset_of_U3CTypeU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3366 = { sizeof (DynamicExpression3_t173515517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3366[3] = 
{
	DynamicExpression3_t173515517::get_offset_of__arg0_5(),
	DynamicExpression3_t173515517::get_offset_of__arg1_6(),
	DynamicExpression3_t173515517::get_offset_of__arg2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3367 = { sizeof (TypedDynamicExpression3_t879495736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3367[1] = 
{
	TypedDynamicExpression3_t879495736::get_offset_of_U3CTypeU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3368 = { sizeof (DynamicExpression4_t173056765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3368[4] = 
{
	DynamicExpression4_t173056765::get_offset_of__arg0_5(),
	DynamicExpression4_t173056765::get_offset_of__arg1_6(),
	DynamicExpression4_t173056765::get_offset_of__arg2_7(),
	DynamicExpression4_t173056765::get_offset_of__arg3_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3369 = { sizeof (TypedDynamicExpression4_t1639010623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3369[1] = 
{
	TypedDynamicExpression4_t1639010623::get_offset_of_U3CTypeU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3370 = { sizeof (ExpressionExtension_t2364081198), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3371 = { sizeof (DynamicExpressionVisitor_t90437957), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3372 = { sizeof (ElementInit_t2682486961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3372[2] = 
{
	ElementInit_t2682486961::get_offset_of_U3CAddMethodU3Ek__BackingField_0(),
	ElementInit_t2682486961::get_offset_of_U3CArgumentsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3373 = { sizeof (Error_t1756498973), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3374 = { sizeof (ExpressionStringBuilder_t2798731315), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3374[2] = 
{
	ExpressionStringBuilder_t2798731315::get_offset_of__out_0(),
	ExpressionStringBuilder_t2798731315::get_offset_of__ids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3375 = { sizeof (ExpressionType_t2886294549)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3375[86] = 
{
	ExpressionType_t2886294549::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3376 = { sizeof (ExpressionVisitor_t1561124052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3377 = { sizeof (GotoExpressionKind_t2105824972)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3377[5] = 
{
	GotoExpressionKind_t2105824972::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3378 = { sizeof (GotoExpression_t418474106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3378[4] = 
{
	GotoExpression_t418474106::get_offset_of_U3CTypeU3Ek__BackingField_3(),
	GotoExpression_t418474106::get_offset_of_U3CValueU3Ek__BackingField_4(),
	GotoExpression_t418474106::get_offset_of_U3CTargetU3Ek__BackingField_5(),
	GotoExpression_t418474106::get_offset_of_U3CKindU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3379 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3380 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3381 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3382 = { sizeof (IndexExpression_t2884136514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3382[3] = 
{
	IndexExpression_t2884136514::get_offset_of__arguments_3(),
	IndexExpression_t2884136514::get_offset_of_U3CObjectU3Ek__BackingField_4(),
	IndexExpression_t2884136514::get_offset_of_U3CIndexerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3383 = { sizeof (InvocationExpression_t3698930233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3383[2] = 
{
	InvocationExpression_t3698930233::get_offset_of_U3CTypeU3Ek__BackingField_3(),
	InvocationExpression_t3698930233::get_offset_of_U3CExpressionU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3384 = { sizeof (InvocationExpressionN_t4110251697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3384[1] = 
{
	InvocationExpressionN_t4110251697::get_offset_of__arguments_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3385 = { sizeof (InvocationExpression0_t4110251767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3386 = { sizeof (InvocationExpression1_t4110251766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3386[1] = 
{
	InvocationExpression1_t4110251766::get_offset_of__arg0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3387 = { sizeof (InvocationExpression2_t4110251765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3387[2] = 
{
	InvocationExpression2_t4110251765::get_offset_of__arg0_5(),
	InvocationExpression2_t4110251765::get_offset_of__arg1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3388 = { sizeof (InvocationExpression3_t4110251764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3388[3] = 
{
	InvocationExpression3_t4110251764::get_offset_of__arg0_5(),
	InvocationExpression3_t4110251764::get_offset_of__arg1_6(),
	InvocationExpression3_t4110251764::get_offset_of__arg2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3389 = { sizeof (InvocationExpression4_t4110251771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3389[4] = 
{
	InvocationExpression4_t4110251771::get_offset_of__arg0_5(),
	InvocationExpression4_t4110251771::get_offset_of__arg1_6(),
	InvocationExpression4_t4110251771::get_offset_of__arg2_7(),
	InvocationExpression4_t4110251771::get_offset_of__arg3_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3390 = { sizeof (InvocationExpression5_t4110251770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3390[5] = 
{
	InvocationExpression5_t4110251770::get_offset_of__arg0_5(),
	InvocationExpression5_t4110251770::get_offset_of__arg1_6(),
	InvocationExpression5_t4110251770::get_offset_of__arg2_7(),
	InvocationExpression5_t4110251770::get_offset_of__arg3_8(),
	InvocationExpression5_t4110251770::get_offset_of__arg4_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3391 = { sizeof (LabelExpression_t3391431626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3391[2] = 
{
	LabelExpression_t3391431626::get_offset_of_U3CTargetU3Ek__BackingField_3(),
	LabelExpression_t3391431626::get_offset_of_U3CDefaultValueU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3392 = { sizeof (LabelTarget_t3951553093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3392[2] = 
{
	LabelTarget_t3951553093::get_offset_of_U3CNameU3Ek__BackingField_0(),
	LabelTarget_t3951553093::get_offset_of_U3CTypeU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3393 = { sizeof (LambdaExpression_t3131094331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3393[1] = 
{
	LambdaExpression_t3131094331::get_offset_of__body_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3394 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3395 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3396 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3396[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3397 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3397[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3398 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3398[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3399 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3399[1] = 
{
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
