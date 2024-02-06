﻿#pragma once

/**
 * Name: GreedIsGood
 * Version: fodase
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VectorVM.EVectorVMOp
	 */
	enum class EVectorVMOp : uint8_t
	{
		done                      = 0,
		add                       = 1,
		sub                       = 2,
		mul                       = 3,
		div                       = 4,
		mad                       = 5,
		lerp                      = 6,
		rcp                       = 7,
		rsq                       = 8,
		sqrt                      = 9,
		neg                       = 10,
		abs                       = 11,
		exp                       = 12,
		exp2                      = 13,
		log                       = 14,
		log2                      = 15,
		sin                       = 16,
		cos                       = 17,
		tan                       = 18,
		asin                      = 19,
		acos                      = 20,
		atan                      = 21,
		atan2                     = 22,
		ceil                      = 23,
		floor                     = 24,
		fmod                      = 25,
		frac                      = 26,
		trunc                     = 27,
		clamp                     = 28,
		min                       = 29,
		max                       = 30,
		pow                       = 31,
		round                     = 32,
		sign                      = 33,
		step                      = 34,
		random                    = 35,
		noise                     = 36,
		cmplt                     = 37,
		cmple                     = 38,
		cmpgt                     = 39,
		cmpge                     = 40,
		cmpeq                     = 41,
		cmpneq                    = 42,
		select                    = 43,
		addi                      = 44,
		subi                      = 45,
		muli                      = 46,
		divi                      = 47,
		clampi                    = 48,
		mini                      = 49,
		maxi                      = 50,
		absi                      = 51,
		negi                      = 52,
		signi                     = 53,
		randomi                   = 54,
		cmplti                    = 55,
		cmplei                    = 56,
		cmpgti                    = 57,
		cmpgei                    = 58,
		cmpeqi                    = 59,
		cmpneqi                   = 60,
		bit_and                   = 61,
		bit_or                    = 62,
		bit_xor                   = 63,
		bit_not                   = 64,
		bit_lshift                = 65,
		bit_rshift                = 66,
		logic_and                 = 67,
		logic_or                  = 68,
		logic_xor                 = 69,
		logic_not                 = 70,
		f2i                       = 71,
		i2f                       = 72,
		f2b                       = 73,
		b2f                       = 74,
		i2b                       = 75,
		b2i                       = 76,
		inputdata_float           = 77,
		inputdata_int32           = 78,
		inputdata_half            = 79,
		inputdata_noadvance_float = 80,
		inputdata_noadvance_int32 = 81,
		inputdata_noadvance_half  = 82,
		outputdata_float          = 83,
		outputdata_int32          = 84,
		outputdata_half           = 85,
		acquireindex              = 86,
		external_func_call        = 87,
		exec_index                = 88,
		noise2D                   = 89,
		noise3D                   = 90,
		enter_stat_scope          = 91,
		exit_stat_scope           = 92,
		update_id                 = 93,
		acquire_id                = 94,
		NumOpcodes                = 95
	};

	/**
	 * Enum VectorVM.EVectorVMOperandLocation
	 */
	enum class EVectorVMOperandLocation : uint8_t
	{
		Register = 0,
		Constant = 1,
		Num      = 2,
		MAX      = 3
	};

	/**
	 * Enum VectorVM.EVectorVMBaseTypes
	 */
	enum class EVectorVMBaseTypes : uint8_t
	{
		Float = 0,
		Int   = 1,
		Bool  = 2,
		Num   = 3,
		MAX   = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
