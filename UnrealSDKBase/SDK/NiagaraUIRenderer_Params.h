#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
	 */
	struct UNiagaraSystemWidget_UpdateTickWhenPaused_Params
	{
	public:
		bool                                                       NewTickWhenPaused;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
	 */
	struct UNiagaraSystemWidget_UpdateNiagaraSystemReference_Params
	{
	public:
		class UNiagaraSystem*                                      NewNiagaraSystem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	 */
	struct UNiagaraSystemWidget_GetNiagaraComponent_Params
	{
	public:
		class UNiagaraUIComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	 */
	struct UNiagaraSystemWidget_DeactivateSystem_Params
	{	};

	/**
	 * Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
	 */
	struct UNiagaraSystemWidget_ActivateSystem_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
