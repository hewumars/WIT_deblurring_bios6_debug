/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z57
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c62/IntrinsicsSupport.h>
#include <ti/sysbios/family/c62/TaskSupport.h>
#include <ti/sysbios/family/c64p/EventCombiner.h>
#include <ti/sysbios/family/c64p/Exception.h>
#include <ti/sysbios/family/c64p/Hwi.h>
#include <ti/sysbios/family/c64p/TimestampProvider.h>
#include <ti/sysbios/family/c64p/tci6488/TimerSupport.h>
#include <ti/sysbios/family/c66/Cache.h>
#include <ti/sysbios/family/c66/tci66xx/CpIntc.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Cache.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/timer64/Timer.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.EventCombiner INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c64p_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c64p_Hwi_Object__ {
    const ti_sysbios_family_c64p_Hwi_Fxns__* __fxns;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_UArg arg;
    ti_sysbios_family_c64p_Hwi_FuncPtr fxn;
    ti_sysbios_family_c64p_Hwi_Irp irp;
    __TA_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c64p_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c64p_Hwi_Object__ obj;
} ti_sysbios_family_c64p_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_c64p_Hwi___VERS
    #define ti_sysbios_family_c64p_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_c64p_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c66.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c66.tci66xx.CpIntc INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_c64p_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_timer64_Timer_Object__ {
    const ti_sysbios_timers_timer64_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_timers_timer64_Timer_Half half;
    xdc_UInt tcrInit;
    xdc_UInt emumgtInit;
    xdc_UInt gpioIntEn;
    xdc_UInt gpioDatDir;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt prescalar;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
} ti_sysbios_timers_timer64_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_timer64_Timer_Object__ obj;
} ti_sysbios_timers_timer64_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_timer64_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V;

/* <-- ti_sysbios_timers_timer64_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_timer64_Timer___VERS
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__* __fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry* curEntry;
    xdc_runtime_LoggerBuf_Entry* endEntry;
    xdc_runtime_LoggerBuf_Entry* readEntry;
    xdc_Bits32 serial;
    xdc_Int16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerBuf___VERS
    #define xdc_runtime_LoggerBuf___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerBuf___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy___VERS
    #define xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.LoggerBuf INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_c64p_tci6488_TimerSupport_Fxns__ ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_c64p_tci6488_TimerSupport_enable__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8034, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8036, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    (void*)&xdc_runtime_IFilterLogger_Interface__BASE__C, /* base__ */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x8009, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.EventCombiner DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_EventCombiner_Module_State__ {
    __TA_ti_sysbios_family_c64p_EventCombiner_Module_State__dispatchTab dispatchTab;
} ti_sysbios_family_c64p_EventCombiner_Module_State__;

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* Module__state__V */
ti_sysbios_family_c64p_EventCombiner_Module_State__ ti_sysbios_family_c64p_EventCombiner_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Exception_Module_State__ {
    xdc_Bits32 efr;
    xdc_Bits32 nrp;
    xdc_Bits32 ntsr;
    xdc_Bits32 ierr;
    ti_sysbios_family_c64p_Exception_FuncPtr returnHook;
    ti_sysbios_family_c64p_Exception_Context* excContext;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__scratch scratch;
    xdc_Char* isrStack;
} ti_sysbios_family_c64p_Exception_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Hwi DECLARATIONS ========
 */

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[5];

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module_State__ {
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__intEvents intEvents;
    xdc_Bits16 ierMask;
    volatile xdc_Int intNum;
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr vectorTableBase;
    xdc_Ptr bss;
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_c64p_Hwi_Module_State__;

/* --> ti_sysbios_family_c64p_Hwi0 */
extern void* ti_sysbios_family_c64p_Hwi0;

/* --> __TI_STATIC_BASE */
extern void* __TI_STATIC_BASE;

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c66.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c66.tci66xx.CpIntc DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__ {
    __TA_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__controller controller;
    __TA_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__initSIER initSIER;
    __TA_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__hostIntToSysInt hostIntToSysInt;
    __TA_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__dispatchTab dispatchTab;
} ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__;

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_controller__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__controller ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_controller__A[3];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_initSIER__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__initSIER ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_initSIER__A[7];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_hostIntToSysInt__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__hostIntToSysInt ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_hostIntToSysInt__A[48];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_unused */
extern xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused(xdc_UArg);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_dispatchTab__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__dispatchTab ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_dispatchTab__A[208];

/* Module__state__V */
ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__ ti_sysbios_family_c66_tci66xx_CpIntc_Module__state__V;

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A[208];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A[20];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A[20];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A */
const __T2_ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A[2];

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_eventId ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A[20];


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    xdc_Void (*doTickFunc)(xdc_UArg);
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".far:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".far:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    ti_sysbios_knl_Task_Handle idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module_State__ {
    xdc_Bits32 availMask;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__gctrl gctrl;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__handles handles;
} ti_sysbios_timers_timer64_Timer_Module_State__;

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[8];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[8];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[16];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[16];

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V;

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[8];


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_EventCombiner_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_EventCombiner_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_startup__E */
extern xdc_Int ti_sysbios_family_c66_tci66xx_CpIntc_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c66_Cache_Module_startup__E */
extern xdc_Int ti_sysbios_family_c66_Cache_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_timer64_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[15];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[15];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[4718];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[55];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = F:/myproject/git/loc_git/WIT_deblurring_bios6_debug/Debug/configPkg/package/cfg/app_pe66");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 66");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.evm6657");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.elf.C66");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_c64p_EventCombiner_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}
xdc_Bool ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0;
}
xdc_Bool ti_sysbios_family_c66_Cache_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[13] < 0;
}
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[14] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[15];
    xdc_runtime_Startup_startModsFxn__C(state, 15);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi TEMPLATE ========
 */


asm("           .sect \".vecs\"         ");
asm("           .align 0x400            ");
asm("           .nocmp                  ");
asm("           .global ti_sysbios_family_c64p_Hwi0         ");
asm("           .global _c_int00         ");
asm("ti_sysbios_family_c64p_Hwi0:                           ");
asm("           nop                     ");
asm("           nop                     ");
asm("           nop                     ");
asm("           mvkl    _c_int00, b0     ");
asm("           mvkh    _c_int00, b0     ");
asm("           b       b0              ");
asm("           nop                     ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi1         ");
asm("           .global ti_sysbios_family_c64p_Exception_dispatch__E         ");
asm("ti_sysbios_family_c64p_Hwi1:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     1, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi2         ");
asm("           .global ti_sysbios_family_c64p_Hwi2         ");
asm("ti_sysbios_family_c64p_Hwi2:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     2, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi2, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi2, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi3         ");
asm("           .global ti_sysbios_family_c64p_Hwi3         ");
asm("ti_sysbios_family_c64p_Hwi3:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     3, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi3, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi3, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi4         ");
asm("           .global ti_sysbios_family_c64p_Hwi4         ");
asm("ti_sysbios_family_c64p_Hwi4:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     4, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi4, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi4, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi5         ");
asm("           .global ti_sysbios_family_c64p_Hwi5         ");
asm("ti_sysbios_family_c64p_Hwi5:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     5, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi5, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi5, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi6         ");
asm("           .global ti_sysbios_family_c64p_Hwi6         ");
asm("ti_sysbios_family_c64p_Hwi6:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     6, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi6, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi6, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi7         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi7:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     7, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi8         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi8:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     8, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi9         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi9:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     9, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi10         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi10:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     10, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi11         ");
asm("           .global ti_sysbios_family_c64p_Hwi11         ");
asm("ti_sysbios_family_c64p_Hwi11:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     11, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi11, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi11, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi12         ");
asm("           .global ti_sysbios_family_c64p_Hwi12         ");
asm("ti_sysbios_family_c64p_Hwi12:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     12, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi12, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi12, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi13         ");
asm("           .global ti_sysbios_family_c64p_Hwi13         ");
asm("ti_sysbios_family_c64p_Hwi13:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     13, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi13, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi13, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi14         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi14:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     14, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi15         ");
asm("           .global ti_sysbios_family_c64p_Hwi15         ");
asm("ti_sysbios_family_c64p_Hwi15:                           ");
asm("           stw     b0, *b15--      ");
asm("           mvk     15, b0         ");
asm("           stw     b0, *b15        ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi15, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi15, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15, b0      ");
asm("           nop     4               ");




/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
	(xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
	_register_lock(_nop);
	_register_unlock(_nop);
    }
#endif
}




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif

#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>
#include <stdlib.h>
#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
	(SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
	return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
	return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
	(SizeT)alignment, &eb);

    if (tmp == NULL) {
	return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
	(Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
	packet = ((Header *)ptr) - 1;

	xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
	    (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
	retval = malloc(size);
    }
    else if (size == 0) {
	free(ptr);
	retval = NULL;
    }
    else {
	packet = (Header *)ptr - 1;
	retval = malloc(size);
	if (retval != NULL) {
	    oldSize = packet->size - sizeof(Header);
	    (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
	    free(ptr);
	}
    }

    return (retval);
}


/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg) 
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x3b9aca00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x3b9aca00,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__id ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__count ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__heap ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__table ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c62.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj ti_sysbios_family_c62_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__id ti_sysbios_family_c62_TaskSupport_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerDefined ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__count ti_sysbios_family_c62_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__heap ti_sysbios_family_c62_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__sizeof ti_sysbios_family_c62_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__table ti_sysbios_family_c62_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_defaultStackSize ti_sysbios_family_c62_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_stackAlignment ti_sysbios_family_c62_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.c64p.EventCombiner INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_c64p_EventCombiner_Module_State__ ti_sysbios_family_c64p_EventCombiner_Module__state__V = {
    {
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x0)),  /* arg */
        },  /* [0] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1)),  /* arg */
        },  /* [1] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2)),  /* arg */
        },  /* [2] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3)),  /* arg */
        },  /* [3] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4)),  /* arg */
        },  /* [4] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5)),  /* arg */
        },  /* [5] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6)),  /* arg */
        },  /* [6] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7)),  /* arg */
        },  /* [7] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x8)),  /* arg */
        },  /* [8] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x9)),  /* arg */
        },  /* [9] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xa)),  /* arg */
        },  /* [10] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xb)),  /* arg */
        },  /* [11] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xc)),  /* arg */
        },  /* [12] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xd)),  /* arg */
        },  /* [13] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xe)),  /* arg */
        },  /* [14] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xf)),  /* arg */
        },  /* [15] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x10)),  /* arg */
        },  /* [16] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x11)),  /* arg */
        },  /* [17] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x12)),  /* arg */
        },  /* [18] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x13)),  /* arg */
        },  /* [19] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x14)),  /* arg */
        },  /* [20] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x15)),  /* arg */
        },  /* [21] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x16)),  /* arg */
        },  /* [22] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x17)),  /* arg */
        },  /* [23] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x18)),  /* arg */
        },  /* [24] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x19)),  /* arg */
        },  /* [25] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1a)),  /* arg */
        },  /* [26] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1b)),  /* arg */
        },  /* [27] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1c)),  /* arg */
        },  /* [28] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1d)),  /* arg */
        },  /* [29] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1e)),  /* arg */
        },  /* [30] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1f)),  /* arg */
        },  /* [31] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x20)),  /* arg */
        },  /* [32] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x21)),  /* arg */
        },  /* [33] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x22)),  /* arg */
        },  /* [34] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x23)),  /* arg */
        },  /* [35] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x24)),  /* arg */
        },  /* [36] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x25)),  /* arg */
        },  /* [37] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x26)),  /* arg */
        },  /* [38] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x27)),  /* arg */
        },  /* [39] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x28)),  /* arg */
        },  /* [40] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x29)),  /* arg */
        },  /* [41] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2a)),  /* arg */
        },  /* [42] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2b)),  /* arg */
        },  /* [43] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2c)),  /* arg */
        },  /* [44] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2d)),  /* arg */
        },  /* [45] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2e)),  /* arg */
        },  /* [46] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2f)),  /* arg */
        },  /* [47] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x30)),  /* arg */
        },  /* [48] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x31)),  /* arg */
        },  /* [49] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x32)),  /* arg */
        },  /* [50] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x33)),  /* arg */
        },  /* [51] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x34)),  /* arg */
        },  /* [52] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x35)),  /* arg */
        },  /* [53] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x36)),  /* arg */
        },  /* [54] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x37)),  /* arg */
        },  /* [55] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x38)),  /* arg */
        },  /* [56] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x39)),  /* arg */
        },  /* [57] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3a)),  /* arg */
        },  /* [58] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3b)),  /* arg */
        },  /* [59] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3c)),  /* arg */
        },  /* [60] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3d)),  /* arg */
        },  /* [61] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3e)),  /* arg */
        },  /* [62] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3f)),  /* arg */
        },  /* [63] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x40)),  /* arg */
        },  /* [64] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x41)),  /* arg */
        },  /* [65] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x42)),  /* arg */
        },  /* [66] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x43)),  /* arg */
        },  /* [67] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x44)),  /* arg */
        },  /* [68] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x45)),  /* arg */
        },  /* [69] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x46)),  /* arg */
        },  /* [70] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x47)),  /* arg */
        },  /* [71] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x48)),  /* arg */
        },  /* [72] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x49)),  /* arg */
        },  /* [73] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4a)),  /* arg */
        },  /* [74] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4b)),  /* arg */
        },  /* [75] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4c)),  /* arg */
        },  /* [76] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4d)),  /* arg */
        },  /* [77] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4e)),  /* arg */
        },  /* [78] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4f)),  /* arg */
        },  /* [79] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x50)),  /* arg */
        },  /* [80] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x51)),  /* arg */
        },  /* [81] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x52)),  /* arg */
        },  /* [82] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x53)),  /* arg */
        },  /* [83] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x54)),  /* arg */
        },  /* [84] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x55)),  /* arg */
        },  /* [85] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x56)),  /* arg */
        },  /* [86] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x57)),  /* arg */
        },  /* [87] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x58)),  /* arg */
        },  /* [88] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x59)),  /* arg */
        },  /* [89] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5a)),  /* arg */
        },  /* [90] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5b)),  /* arg */
        },  /* [91] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5c)),  /* arg */
        },  /* [92] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5d)),  /* arg */
        },  /* [93] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5e)),  /* arg */
        },  /* [94] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5f)),  /* arg */
        },  /* [95] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x60)),  /* arg */
        },  /* [96] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x61)),  /* arg */
        },  /* [97] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x62)),  /* arg */
        },  /* [98] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x63)),  /* arg */
        },  /* [99] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x64)),  /* arg */
        },  /* [100] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x65)),  /* arg */
        },  /* [101] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x66)),  /* arg */
        },  /* [102] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x67)),  /* arg */
        },  /* [103] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x68)),  /* arg */
        },  /* [104] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x69)),  /* arg */
        },  /* [105] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6a)),  /* arg */
        },  /* [106] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6b)),  /* arg */
        },  /* [107] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6c)),  /* arg */
        },  /* [108] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6d)),  /* arg */
        },  /* [109] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6e)),  /* arg */
        },  /* [110] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6f)),  /* arg */
        },  /* [111] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x70)),  /* arg */
        },  /* [112] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x71)),  /* arg */
        },  /* [113] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x72)),  /* arg */
        },  /* [114] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x73)),  /* arg */
        },  /* [115] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x74)),  /* arg */
        },  /* [116] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x75)),  /* arg */
        },  /* [117] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x76)),  /* arg */
        },  /* [118] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x77)),  /* arg */
        },  /* [119] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x78)),  /* arg */
        },  /* [120] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x79)),  /* arg */
        },  /* [121] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7a)),  /* arg */
        },  /* [122] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7b)),  /* arg */
        },  /* [123] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7c)),  /* arg */
        },  /* [124] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7d)),  /* arg */
        },  /* [125] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7e)),  /* arg */
        },  /* [126] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7f)),  /* arg */
        },  /* [127] */
    },  /* dispatchTab */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsMask ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__gateObj ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__gatePrms ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__id ti_sysbios_family_c64p_EventCombiner_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerObj ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__startupDoneFxn ti_sysbios_family_c64p_EventCombiner_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__count ti_sysbios_family_c64p_EventCombiner_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__heap ti_sysbios_family_c64p_EventCombiner_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__sizeof ti_sysbios_family_c64p_EventCombiner_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__table ti_sysbios_family_c64p_EventCombiner_Object__table__C = 0;

/* E_unpluggedEvent__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent__C = (((xdc_runtime_Error_Id)2687) << 16 | 0);

/* EVTMASK__C */
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_EVTMASK ti_sysbios_family_c64p_EventCombiner_EVTMASK__C = {
    (xdc_Bits32)(-0x0 - 1),  /* [0] */
    (xdc_Bits32)(-0x0 - 1),  /* [1] */
    (xdc_Bits32)(-0x0 - 1),  /* [2] */
    (xdc_Bits32)(-0x0 - 1),  /* [3] */
};


/*
 * ======== ti.sysbios.family.c64p.Exception INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V = {
    (xdc_Bits32)0x0,  /* efr */
    (xdc_Bits32)0x0,  /* nrp */
    (xdc_Bits32)0x0,  /* ntsr */
    (xdc_Bits32)0x0,  /* ierr */
    ((xdc_Void(*)(xdc_Void))0),  /* returnHook */
    ((ti_sysbios_family_c64p_Exception_Context*)0),  /* excContext */
    {
        (xdc_Char)0x0,  /* [0] */
        (xdc_Char)0x0,  /* [1] */
        (xdc_Char)0x0,  /* [2] */
        (xdc_Char)0x0,  /* [3] */
        (xdc_Char)0x0,  /* [4] */
        (xdc_Char)0x0,  /* [5] */
        (xdc_Char)0x0,  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x0,  /* [8] */
        (xdc_Char)0x0,  /* [9] */
        (xdc_Char)0x0,  /* [10] */
        (xdc_Char)0x0,  /* [11] */
        (xdc_Char)0x0,  /* [12] */
        (xdc_Char)0x0,  /* [13] */
        (xdc_Char)0x0,  /* [14] */
        (xdc_Char)0x0,  /* [15] */
    },  /* scratch */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsEnabled ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x190;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsIncluded ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x190;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsMask ti_sysbios_family_c64p_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gateObj ti_sysbios_family_c64p_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gatePrms ti_sysbios_family_c64p_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__id ti_sysbios_family_c64p_Exception_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerDefined ti_sysbios_family_c64p_Exception_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerObj ti_sysbios_family_c64p_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0 ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1 ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2 ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4 ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8 ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__startupDoneFxn ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Exception_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__count ti_sysbios_family_c64p_Exception_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__heap ti_sysbios_family_c64p_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__sizeof ti_sysbios_family_c64p_Exception_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__table ti_sysbios_family_c64p_Exception_Object__table__C = 0;

/* E_exceptionMin__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMin ti_sysbios_family_c64p_Exception_E_exceptionMin__C = (((xdc_runtime_Error_Id)2728) << 16 | 0);

/* E_exceptionMax__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMax ti_sysbios_family_c64p_Exception_E_exceptionMax__C = (((xdc_runtime_Error_Id)2870) << 16 | 0);

/* enableExternalMPC__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enableExternalMPC ti_sysbios_family_c64p_Exception_enableExternalMPC__C = 0;

/* enablePrint__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enablePrint ti_sysbios_family_c64p_Exception_enablePrint__C = 1;

/* exceptionHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_exceptionHook ti_sysbios_family_c64p_Exception_exceptionHook__C = ((CT__ti_sysbios_family_c64p_Exception_exceptionHook)0);

/* internalHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_internalHook ti_sysbios_family_c64p_Exception_internalHook__C = ((CT__ti_sysbios_family_c64p_Exception_internalHook)0);

/* externalHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_externalHook ti_sysbios_family_c64p_Exception_externalHook__C = ((CT__ti_sysbios_family_c64p_Exception_externalHook)0);

/* nmiHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_nmiHook ti_sysbios_family_c64p_Exception_nmiHook__C = ((CT__ti_sysbios_family_c64p_Exception_nmiHook)0);

/* returnHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_returnHook ti_sysbios_family_c64p_Exception_returnHook__C = ((CT__ti_sysbios_family_c64p_Exception_returnHook)0);


/*
 * ======== ti.sysbios.family.c64p.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_c64p_Hwi_Params ti_sysbios_family_c64p_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c64p_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0,  /* disableMask */
    (xdc_Bits16)0x0,  /* restoreMask */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V = {
    {&ti_sysbios_family_c64p_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[5] = {
    {/* instance#0 */
        0,
        (xdc_Bits16)0x80,  /* disableMask */
        (xdc_Bits16)0x80,  /* restoreMask */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        (xdc_Bits16)0x100,  /* disableMask */
        (xdc_Bits16)0x100,  /* restoreMask */
        ((xdc_UArg)(0x1)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#2 */
        0,
        (xdc_Bits16)0x200,  /* disableMask */
        (xdc_Bits16)0x200,  /* restoreMask */
        ((xdc_UArg)(0x2)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#3 */
        0,
        (xdc_Bits16)0x400,  /* disableMask */
        (xdc_Bits16)0x400,  /* restoreMask */
        ((xdc_UArg)(0x3)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#4 */
        0,
        (xdc_Bits16)0x4000,  /* disableMask */
        (xdc_Bits16)0x4000,  /* restoreMask */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V = {
    {
        (xdc_Char)(-0x0 - 1),  /* [0] */
        (xdc_Char)(-0x0 - 1),  /* [1] */
        (xdc_Char)(-0x0 - 1),  /* [2] */
        (xdc_Char)(-0x0 - 1),  /* [3] */
        (xdc_Char)(-0x0 - 1),  /* [4] */
        (xdc_Char)(-0x0 - 1),  /* [5] */
        (xdc_Char)(-0x0 - 1),  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x1,  /* [8] */
        (xdc_Char)0x2,  /* [9] */
        (xdc_Char)0x3,  /* [10] */
        (xdc_Char)(-0x0 - 1),  /* [11] */
        (xdc_Char)(-0x0 - 1),  /* [12] */
        (xdc_Char)(-0x0 - 1),  /* [13] */
        (xdc_Char)0x40,  /* [14] */
        (xdc_Char)(-0x0 - 1),  /* [15] */
    },  /* intEvents */
    (xdc_Bits16)0x4783,  /* ierMask */
    (xdc_Int)0x0,  /* intNum */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&ti_sysbios_family_c64p_Hwi0)),  /* vectorTableBase */
    ((xdc_Ptr)((void*)&__TI_STATIC_BASE)),  /* bss */
    {
        0,  /* [0] */
        0,  /* [1] */
        0,  /* [2] */
        0,  /* [3] */
        0,  /* [4] */
        0,  /* [5] */
        0,  /* [6] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* [7] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[1],  /* [8] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[2],  /* [9] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[3],  /* [10] */
        0,  /* [11] */
        0,  /* [12] */
        0,  /* [13] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[4],  /* [14] */
        0,  /* [15] */
    },  /* dispatchTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsEnabled ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsIncluded ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask ti_sysbios_family_c64p_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gateObj ti_sysbios_family_c64p_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms ti_sysbios_family_c64p_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__id ti_sysbios_family_c64p_Hwi_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerDefined ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj ti_sysbios_family_c64p_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__count ti_sysbios_family_c64p_Hwi_Object__count__C = 5;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__heap ti_sysbios_family_c64p_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__sizeof ti_sysbios_family_c64p_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c64p_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__table ti_sysbios_family_c64p_Hwi_Object__table__C = ti_sysbios_family_c64p_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_alreadyDefined ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)2912) << 16 | 0);

/* E_handleNotFound__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_handleNotFound ti_sysbios_family_c64p_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)2960) << 16 | 0);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LM_begin ti_sysbios_family_c64p_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)3624) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LD_end ti_sysbios_family_c64p_Hwi_LD_end__C = (((xdc_runtime_Log_Event)3694) << 16 | 512);

/* enableException__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_enableException ti_sysbios_family_c64p_Hwi_enableException__C = 1;

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiDisable ti_sysbios_family_c64p_Hwi_swiDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskDisable ti_sysbios_family_c64p_Hwi_taskDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gateObj ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__id ti_sysbios_family_c64p_TimestampProvider_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_c64p_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__count ti_sysbios_family_c64p_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__heap ti_sysbios_family_c64p_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__sizeof ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__table ti_sysbios_family_c64p_TimestampProvider_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c66.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__diagsEnabled ti_sysbios_family_c66_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__diagsIncluded ti_sysbios_family_c66_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__diagsMask ti_sysbios_family_c66_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_c66_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__gateObj ti_sysbios_family_c66_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_c66_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__gatePrms ti_sysbios_family_c66_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_c66_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__id ti_sysbios_family_c66_Cache_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerDefined ti_sysbios_family_c66_Cache_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerObj ti_sysbios_family_c66_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn0 ti_sysbios_family_c66_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn1 ti_sysbios_family_c66_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn2 ti_sysbios_family_c66_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn4 ti_sysbios_family_c66_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn8 ti_sysbios_family_c66_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__startupDoneFxn ti_sysbios_family_c66_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c66_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__count ti_sysbios_family_c66_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__heap ti_sysbios_family_c66_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__sizeof ti_sysbios_family_c66_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__table ti_sysbios_family_c66_Cache_Object__table__C = 0;

/* initSize__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_initSize ti_sysbios_family_c66_Cache_initSize__C = {
    ti_sysbios_family_c66_Cache_L1Size_32K,  /* l1pSize */
    ti_sysbios_family_c66_Cache_L1Size_32K,  /* l1dSize */
    ti_sysbios_family_c66_Cache_L2Size_0K,  /* l2Size */
};

/* atomicBlockSize__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_atomicBlockSize ti_sysbios_family_c66_Cache_atomicBlockSize__C = (xdc_UInt32)0x400;

/* marvalues__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_marvalues ti_sysbios_family_c66_Cache_marvalues__C = {
    (xdc_UInt32)0x1,  /* [0] */
    (xdc_UInt32)0x0,  /* [1] */
    (xdc_UInt32)0x0,  /* [2] */
    (xdc_UInt32)0x0,  /* [3] */
    (xdc_UInt32)0x0,  /* [4] */
    (xdc_UInt32)0x0,  /* [5] */
    (xdc_UInt32)0x0,  /* [6] */
    (xdc_UInt32)0x0,  /* [7] */
    (xdc_UInt32)0x0,  /* [8] */
    (xdc_UInt32)0x0,  /* [9] */
    (xdc_UInt32)0x0,  /* [10] */
    (xdc_UInt32)0x0,  /* [11] */
    (xdc_UInt32)0xd,  /* [12] */
    (xdc_UInt32)0xd,  /* [13] */
    (xdc_UInt32)0xd,  /* [14] */
    (xdc_UInt32)0xd,  /* [15] */
    (xdc_UInt32)0xc,  /* [16] */
    (xdc_UInt32)0xc,  /* [17] */
    (xdc_UInt32)0xc,  /* [18] */
    (xdc_UInt32)0xc,  /* [19] */
    (xdc_UInt32)0xc,  /* [20] */
    (xdc_UInt32)0xc,  /* [21] */
    (xdc_UInt32)0xc,  /* [22] */
    (xdc_UInt32)0xc,  /* [23] */
    (xdc_UInt32)0xc,  /* [24] */
    (xdc_UInt32)0xc,  /* [25] */
    (xdc_UInt32)0xc,  /* [26] */
    (xdc_UInt32)0xc,  /* [27] */
    (xdc_UInt32)0xc,  /* [28] */
    (xdc_UInt32)0xc,  /* [29] */
    (xdc_UInt32)0xc,  /* [30] */
    (xdc_UInt32)0xc,  /* [31] */
    (xdc_UInt32)0xc,  /* [32] */
    (xdc_UInt32)0xc,  /* [33] */
    (xdc_UInt32)0xc,  /* [34] */
    (xdc_UInt32)0xc,  /* [35] */
    (xdc_UInt32)0xc,  /* [36] */
    (xdc_UInt32)0xc,  /* [37] */
    (xdc_UInt32)0xc,  /* [38] */
    (xdc_UInt32)0xc,  /* [39] */
    (xdc_UInt32)0xc,  /* [40] */
    (xdc_UInt32)0xc,  /* [41] */
    (xdc_UInt32)0xc,  /* [42] */
    (xdc_UInt32)0xc,  /* [43] */
    (xdc_UInt32)0xc,  /* [44] */
    (xdc_UInt32)0xc,  /* [45] */
    (xdc_UInt32)0xc,  /* [46] */
    (xdc_UInt32)0xc,  /* [47] */
    (xdc_UInt32)0xc,  /* [48] */
    (xdc_UInt32)0xc,  /* [49] */
    (xdc_UInt32)0xc,  /* [50] */
    (xdc_UInt32)0xc,  /* [51] */
    (xdc_UInt32)0xc,  /* [52] */
    (xdc_UInt32)0xc,  /* [53] */
    (xdc_UInt32)0xc,  /* [54] */
    (xdc_UInt32)0xc,  /* [55] */
    (xdc_UInt32)0xc,  /* [56] */
    (xdc_UInt32)0xc,  /* [57] */
    (xdc_UInt32)0xc,  /* [58] */
    (xdc_UInt32)0xc,  /* [59] */
    (xdc_UInt32)0xc,  /* [60] */
    (xdc_UInt32)0xc,  /* [61] */
    (xdc_UInt32)0xc,  /* [62] */
    (xdc_UInt32)0xc,  /* [63] */
    (xdc_UInt32)0xc,  /* [64] */
    (xdc_UInt32)0xc,  /* [65] */
    (xdc_UInt32)0xc,  /* [66] */
    (xdc_UInt32)0xc,  /* [67] */
    (xdc_UInt32)0xc,  /* [68] */
    (xdc_UInt32)0xc,  /* [69] */
    (xdc_UInt32)0xc,  /* [70] */
    (xdc_UInt32)0xc,  /* [71] */
    (xdc_UInt32)0xc,  /* [72] */
    (xdc_UInt32)0xc,  /* [73] */
    (xdc_UInt32)0xc,  /* [74] */
    (xdc_UInt32)0xc,  /* [75] */
    (xdc_UInt32)0xc,  /* [76] */
    (xdc_UInt32)0xc,  /* [77] */
    (xdc_UInt32)0xc,  /* [78] */
    (xdc_UInt32)0xc,  /* [79] */
    (xdc_UInt32)0xc,  /* [80] */
    (xdc_UInt32)0xc,  /* [81] */
    (xdc_UInt32)0xc,  /* [82] */
    (xdc_UInt32)0xc,  /* [83] */
    (xdc_UInt32)0xc,  /* [84] */
    (xdc_UInt32)0xc,  /* [85] */
    (xdc_UInt32)0xc,  /* [86] */
    (xdc_UInt32)0xc,  /* [87] */
    (xdc_UInt32)0xc,  /* [88] */
    (xdc_UInt32)0xc,  /* [89] */
    (xdc_UInt32)0xc,  /* [90] */
    (xdc_UInt32)0xc,  /* [91] */
    (xdc_UInt32)0xc,  /* [92] */
    (xdc_UInt32)0xc,  /* [93] */
    (xdc_UInt32)0xc,  /* [94] */
    (xdc_UInt32)0xc,  /* [95] */
    (xdc_UInt32)0xc,  /* [96] */
    (xdc_UInt32)0xc,  /* [97] */
    (xdc_UInt32)0xc,  /* [98] */
    (xdc_UInt32)0xc,  /* [99] */
    (xdc_UInt32)0xc,  /* [100] */
    (xdc_UInt32)0xc,  /* [101] */
    (xdc_UInt32)0xc,  /* [102] */
    (xdc_UInt32)0xc,  /* [103] */
    (xdc_UInt32)0xc,  /* [104] */
    (xdc_UInt32)0xc,  /* [105] */
    (xdc_UInt32)0xc,  /* [106] */
    (xdc_UInt32)0xc,  /* [107] */
    (xdc_UInt32)0xc,  /* [108] */
    (xdc_UInt32)0xc,  /* [109] */
    (xdc_UInt32)0xc,  /* [110] */
    (xdc_UInt32)0xc,  /* [111] */
    (xdc_UInt32)0xc,  /* [112] */
    (xdc_UInt32)0xc,  /* [113] */
    (xdc_UInt32)0xc,  /* [114] */
    (xdc_UInt32)0xc,  /* [115] */
    (xdc_UInt32)0xc,  /* [116] */
    (xdc_UInt32)0xc,  /* [117] */
    (xdc_UInt32)0xc,  /* [118] */
    (xdc_UInt32)0xc,  /* [119] */
    (xdc_UInt32)0xc,  /* [120] */
    (xdc_UInt32)0xc,  /* [121] */
    (xdc_UInt32)0xc,  /* [122] */
    (xdc_UInt32)0xc,  /* [123] */
    (xdc_UInt32)0xc,  /* [124] */
    (xdc_UInt32)0xc,  /* [125] */
    (xdc_UInt32)0xc,  /* [126] */
    (xdc_UInt32)0xc,  /* [127] */
    (xdc_UInt32)0xd,  /* [128] */
    (xdc_UInt32)0xd,  /* [129] */
    (xdc_UInt32)0xd,  /* [130] */
    (xdc_UInt32)0xd,  /* [131] */
    (xdc_UInt32)0xd,  /* [132] */
    (xdc_UInt32)0xd,  /* [133] */
    (xdc_UInt32)0xd,  /* [134] */
    (xdc_UInt32)0xd,  /* [135] */
    (xdc_UInt32)0xd,  /* [136] */
    (xdc_UInt32)0xd,  /* [137] */
    (xdc_UInt32)0xd,  /* [138] */
    (xdc_UInt32)0xd,  /* [139] */
    (xdc_UInt32)0xd,  /* [140] */
    (xdc_UInt32)0xd,  /* [141] */
    (xdc_UInt32)0xd,  /* [142] */
    (xdc_UInt32)0xd,  /* [143] */
    (xdc_UInt32)0xd,  /* [144] */
    (xdc_UInt32)0xd,  /* [145] */
    (xdc_UInt32)0xd,  /* [146] */
    (xdc_UInt32)0xd,  /* [147] */
    (xdc_UInt32)0xd,  /* [148] */
    (xdc_UInt32)0xd,  /* [149] */
    (xdc_UInt32)0xd,  /* [150] */
    (xdc_UInt32)0xd,  /* [151] */
    (xdc_UInt32)0xd,  /* [152] */
    (xdc_UInt32)0xd,  /* [153] */
    (xdc_UInt32)0xd,  /* [154] */
    (xdc_UInt32)0xd,  /* [155] */
    (xdc_UInt32)0xd,  /* [156] */
    (xdc_UInt32)0xd,  /* [157] */
    (xdc_UInt32)0xd,  /* [158] */
    (xdc_UInt32)0xd,  /* [159] */
    (xdc_UInt32)0xc,  /* [160] */
    (xdc_UInt32)0xc,  /* [161] */
    (xdc_UInt32)0xc,  /* [162] */
    (xdc_UInt32)0xc,  /* [163] */
    (xdc_UInt32)0xc,  /* [164] */
    (xdc_UInt32)0xc,  /* [165] */
    (xdc_UInt32)0xc,  /* [166] */
    (xdc_UInt32)0xc,  /* [167] */
    (xdc_UInt32)0xc,  /* [168] */
    (xdc_UInt32)0xc,  /* [169] */
    (xdc_UInt32)0xc,  /* [170] */
    (xdc_UInt32)0xc,  /* [171] */
    (xdc_UInt32)0xc,  /* [172] */
    (xdc_UInt32)0xc,  /* [173] */
    (xdc_UInt32)0xc,  /* [174] */
    (xdc_UInt32)0xc,  /* [175] */
    (xdc_UInt32)0xc,  /* [176] */
    (xdc_UInt32)0xc,  /* [177] */
    (xdc_UInt32)0xc,  /* [178] */
    (xdc_UInt32)0xc,  /* [179] */
    (xdc_UInt32)0xc,  /* [180] */
    (xdc_UInt32)0xc,  /* [181] */
    (xdc_UInt32)0xc,  /* [182] */
    (xdc_UInt32)0xc,  /* [183] */
    (xdc_UInt32)0xc,  /* [184] */
    (xdc_UInt32)0xc,  /* [185] */
    (xdc_UInt32)0xc,  /* [186] */
    (xdc_UInt32)0xc,  /* [187] */
    (xdc_UInt32)0xc,  /* [188] */
    (xdc_UInt32)0xc,  /* [189] */
    (xdc_UInt32)0xc,  /* [190] */
    (xdc_UInt32)0xc,  /* [191] */
    (xdc_UInt32)0xc,  /* [192] */
    (xdc_UInt32)0xc,  /* [193] */
    (xdc_UInt32)0xc,  /* [194] */
    (xdc_UInt32)0xc,  /* [195] */
    (xdc_UInt32)0xc,  /* [196] */
    (xdc_UInt32)0xc,  /* [197] */
    (xdc_UInt32)0xc,  /* [198] */
    (xdc_UInt32)0xc,  /* [199] */
    (xdc_UInt32)0xc,  /* [200] */
    (xdc_UInt32)0xc,  /* [201] */
    (xdc_UInt32)0xc,  /* [202] */
    (xdc_UInt32)0xc,  /* [203] */
    (xdc_UInt32)0xc,  /* [204] */
    (xdc_UInt32)0xc,  /* [205] */
    (xdc_UInt32)0xc,  /* [206] */
    (xdc_UInt32)0xc,  /* [207] */
    (xdc_UInt32)0xc,  /* [208] */
    (xdc_UInt32)0xc,  /* [209] */
    (xdc_UInt32)0xc,  /* [210] */
    (xdc_UInt32)0xc,  /* [211] */
    (xdc_UInt32)0xc,  /* [212] */
    (xdc_UInt32)0xc,  /* [213] */
    (xdc_UInt32)0xc,  /* [214] */
    (xdc_UInt32)0xc,  /* [215] */
    (xdc_UInt32)0xc,  /* [216] */
    (xdc_UInt32)0xc,  /* [217] */
    (xdc_UInt32)0xc,  /* [218] */
    (xdc_UInt32)0xc,  /* [219] */
    (xdc_UInt32)0xc,  /* [220] */
    (xdc_UInt32)0xc,  /* [221] */
    (xdc_UInt32)0xc,  /* [222] */
    (xdc_UInt32)0xc,  /* [223] */
    (xdc_UInt32)0xc,  /* [224] */
    (xdc_UInt32)0xc,  /* [225] */
    (xdc_UInt32)0xc,  /* [226] */
    (xdc_UInt32)0xc,  /* [227] */
    (xdc_UInt32)0xc,  /* [228] */
    (xdc_UInt32)0xc,  /* [229] */
    (xdc_UInt32)0xc,  /* [230] */
    (xdc_UInt32)0xc,  /* [231] */
    (xdc_UInt32)0xc,  /* [232] */
    (xdc_UInt32)0xc,  /* [233] */
    (xdc_UInt32)0xc,  /* [234] */
    (xdc_UInt32)0xc,  /* [235] */
    (xdc_UInt32)0xc,  /* [236] */
    (xdc_UInt32)0xc,  /* [237] */
    (xdc_UInt32)0xc,  /* [238] */
    (xdc_UInt32)0xc,  /* [239] */
    (xdc_UInt32)0xc,  /* [240] */
    (xdc_UInt32)0xc,  /* [241] */
    (xdc_UInt32)0xc,  /* [242] */
    (xdc_UInt32)0xc,  /* [243] */
    (xdc_UInt32)0xc,  /* [244] */
    (xdc_UInt32)0xc,  /* [245] */
    (xdc_UInt32)0xc,  /* [246] */
    (xdc_UInt32)0xc,  /* [247] */
    (xdc_UInt32)0xc,  /* [248] */
    (xdc_UInt32)0xc,  /* [249] */
    (xdc_UInt32)0xc,  /* [250] */
    (xdc_UInt32)0xc,  /* [251] */
    (xdc_UInt32)0xc,  /* [252] */
    (xdc_UInt32)0xc,  /* [253] */
    (xdc_UInt32)0xc,  /* [254] */
    (xdc_UInt32)0xc,  /* [255] */
};


/*
 * ======== ti.sysbios.family.c66.tci66xx.CpIntc INITIALIZERS ========
 */

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_controller__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__controller ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_controller__A[3] = {
    ((ti_sysbios_family_c66_tci66xx_CpIntc_RegisterMap*)((void*)0x2600000)),  /* [0] */
    ((ti_sysbios_family_c66_tci66xx_CpIntc_RegisterMap*)((void*)0x2604000)),  /* [1] */
    ((ti_sysbios_family_c66_tci66xx_CpIntc_RegisterMap*)((void*)0x2608000)),  /* [2] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_initSIER__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__initSIER ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_initSIER__A[7] = {
    (xdc_Bits32)0x0,  /* [0] */
    (xdc_Bits32)0x0,  /* [1] */
    (xdc_Bits32)0x0,  /* [2] */
    (xdc_Bits32)0x0,  /* [3] */
    (xdc_Bits32)0x0,  /* [4] */
    (xdc_Bits32)0x0,  /* [5] */
    (xdc_Bits32)0x0,  /* [6] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_hostIntToSysInt__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__hostIntToSysInt ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_hostIntToSysInt__A[48] = {
    (xdc_UInt8)(-0x0 - 1),  /* [0] */
    (xdc_UInt8)(-0x0 - 1),  /* [1] */
    (xdc_UInt8)(-0x0 - 1),  /* [2] */
    (xdc_UInt8)(-0x0 - 1),  /* [3] */
    (xdc_UInt8)(-0x0 - 1),  /* [4] */
    (xdc_UInt8)(-0x0 - 1),  /* [5] */
    (xdc_UInt8)(-0x0 - 1),  /* [6] */
    (xdc_UInt8)(-0x0 - 1),  /* [7] */
    (xdc_UInt8)(-0x0 - 1),  /* [8] */
    (xdc_UInt8)(-0x0 - 1),  /* [9] */
    (xdc_UInt8)(-0x0 - 1),  /* [10] */
    (xdc_UInt8)(-0x0 - 1),  /* [11] */
    (xdc_UInt8)(-0x0 - 1),  /* [12] */
    (xdc_UInt8)(-0x0 - 1),  /* [13] */
    (xdc_UInt8)(-0x0 - 1),  /* [14] */
    (xdc_UInt8)(-0x0 - 1),  /* [15] */
    (xdc_UInt8)(-0x0 - 1),  /* [16] */
    (xdc_UInt8)(-0x0 - 1),  /* [17] */
    (xdc_UInt8)(-0x0 - 1),  /* [18] */
    (xdc_UInt8)(-0x0 - 1),  /* [19] */
    (xdc_UInt8)(-0x0 - 1),  /* [20] */
    (xdc_UInt8)(-0x0 - 1),  /* [21] */
    (xdc_UInt8)(-0x0 - 1),  /* [22] */
    (xdc_UInt8)(-0x0 - 1),  /* [23] */
    (xdc_UInt8)(-0x0 - 1),  /* [24] */
    (xdc_UInt8)(-0x0 - 1),  /* [25] */
    (xdc_UInt8)(-0x0 - 1),  /* [26] */
    (xdc_UInt8)(-0x0 - 1),  /* [27] */
    (xdc_UInt8)(-0x0 - 1),  /* [28] */
    (xdc_UInt8)(-0x0 - 1),  /* [29] */
    (xdc_UInt8)(-0x0 - 1),  /* [30] */
    (xdc_UInt8)(-0x0 - 1),  /* [31] */
    (xdc_UInt8)(-0x0 - 1),  /* [32] */
    (xdc_UInt8)(-0x0 - 1),  /* [33] */
    (xdc_UInt8)(-0x0 - 1),  /* [34] */
    (xdc_UInt8)(-0x0 - 1),  /* [35] */
    (xdc_UInt8)(-0x0 - 1),  /* [36] */
    (xdc_UInt8)(-0x0 - 1),  /* [37] */
    (xdc_UInt8)(-0x0 - 1),  /* [38] */
    (xdc_UInt8)(-0x0 - 1),  /* [39] */
    (xdc_UInt8)(-0x0 - 1),  /* [40] */
    (xdc_UInt8)(-0x0 - 1),  /* [41] */
    (xdc_UInt8)(-0x0 - 1),  /* [42] */
    (xdc_UInt8)(-0x0 - 1),  /* [43] */
    (xdc_UInt8)(-0x0 - 1),  /* [44] */
    (xdc_UInt8)(-0x0 - 1),  /* [45] */
    (xdc_UInt8)(-0x0 - 1),  /* [46] */
    (xdc_UInt8)(-0x0 - 1),  /* [47] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_dispatchTab__A */
__T1_ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__dispatchTab ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_dispatchTab__A[208] = {
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg */
    },  /* [0] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1)),  /* arg */
    },  /* [1] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2)),  /* arg */
    },  /* [2] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* arg */
    },  /* [3] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4)),  /* arg */
    },  /* [4] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5)),  /* arg */
    },  /* [5] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6)),  /* arg */
    },  /* [6] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7)),  /* arg */
    },  /* [7] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8)),  /* arg */
    },  /* [8] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9)),  /* arg */
    },  /* [9] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa)),  /* arg */
    },  /* [10] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb)),  /* arg */
    },  /* [11] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc)),  /* arg */
    },  /* [12] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xd)),  /* arg */
    },  /* [13] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xe)),  /* arg */
    },  /* [14] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xf)),  /* arg */
    },  /* [15] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x10)),  /* arg */
    },  /* [16] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x11)),  /* arg */
    },  /* [17] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x12)),  /* arg */
    },  /* [18] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x13)),  /* arg */
    },  /* [19] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x14)),  /* arg */
    },  /* [20] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x15)),  /* arg */
    },  /* [21] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x16)),  /* arg */
    },  /* [22] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x17)),  /* arg */
    },  /* [23] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x18)),  /* arg */
    },  /* [24] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x19)),  /* arg */
    },  /* [25] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1a)),  /* arg */
    },  /* [26] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1b)),  /* arg */
    },  /* [27] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1c)),  /* arg */
    },  /* [28] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1d)),  /* arg */
    },  /* [29] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1e)),  /* arg */
    },  /* [30] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x1f)),  /* arg */
    },  /* [31] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x20)),  /* arg */
    },  /* [32] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x21)),  /* arg */
    },  /* [33] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x22)),  /* arg */
    },  /* [34] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x23)),  /* arg */
    },  /* [35] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x24)),  /* arg */
    },  /* [36] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x25)),  /* arg */
    },  /* [37] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x26)),  /* arg */
    },  /* [38] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x27)),  /* arg */
    },  /* [39] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x28)),  /* arg */
    },  /* [40] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x29)),  /* arg */
    },  /* [41] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2a)),  /* arg */
    },  /* [42] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2b)),  /* arg */
    },  /* [43] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2c)),  /* arg */
    },  /* [44] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2d)),  /* arg */
    },  /* [45] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2e)),  /* arg */
    },  /* [46] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x2f)),  /* arg */
    },  /* [47] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x30)),  /* arg */
    },  /* [48] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x31)),  /* arg */
    },  /* [49] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x32)),  /* arg */
    },  /* [50] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x33)),  /* arg */
    },  /* [51] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x34)),  /* arg */
    },  /* [52] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x35)),  /* arg */
    },  /* [53] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x36)),  /* arg */
    },  /* [54] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x37)),  /* arg */
    },  /* [55] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x38)),  /* arg */
    },  /* [56] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x39)),  /* arg */
    },  /* [57] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3a)),  /* arg */
    },  /* [58] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3b)),  /* arg */
    },  /* [59] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3c)),  /* arg */
    },  /* [60] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3d)),  /* arg */
    },  /* [61] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3e)),  /* arg */
    },  /* [62] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x3f)),  /* arg */
    },  /* [63] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x40)),  /* arg */
    },  /* [64] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x41)),  /* arg */
    },  /* [65] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x42)),  /* arg */
    },  /* [66] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x43)),  /* arg */
    },  /* [67] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x44)),  /* arg */
    },  /* [68] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x45)),  /* arg */
    },  /* [69] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x46)),  /* arg */
    },  /* [70] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x47)),  /* arg */
    },  /* [71] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x48)),  /* arg */
    },  /* [72] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x49)),  /* arg */
    },  /* [73] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4a)),  /* arg */
    },  /* [74] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4b)),  /* arg */
    },  /* [75] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4c)),  /* arg */
    },  /* [76] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4d)),  /* arg */
    },  /* [77] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4e)),  /* arg */
    },  /* [78] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x4f)),  /* arg */
    },  /* [79] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x50)),  /* arg */
    },  /* [80] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x51)),  /* arg */
    },  /* [81] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x52)),  /* arg */
    },  /* [82] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x53)),  /* arg */
    },  /* [83] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x54)),  /* arg */
    },  /* [84] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x55)),  /* arg */
    },  /* [85] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x56)),  /* arg */
    },  /* [86] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x57)),  /* arg */
    },  /* [87] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x58)),  /* arg */
    },  /* [88] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x59)),  /* arg */
    },  /* [89] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5a)),  /* arg */
    },  /* [90] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5b)),  /* arg */
    },  /* [91] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5c)),  /* arg */
    },  /* [92] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5d)),  /* arg */
    },  /* [93] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5e)),  /* arg */
    },  /* [94] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x5f)),  /* arg */
    },  /* [95] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x60)),  /* arg */
    },  /* [96] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x61)),  /* arg */
    },  /* [97] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x62)),  /* arg */
    },  /* [98] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x63)),  /* arg */
    },  /* [99] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x64)),  /* arg */
    },  /* [100] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x65)),  /* arg */
    },  /* [101] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x66)),  /* arg */
    },  /* [102] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x67)),  /* arg */
    },  /* [103] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x68)),  /* arg */
    },  /* [104] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x69)),  /* arg */
    },  /* [105] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6a)),  /* arg */
    },  /* [106] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6b)),  /* arg */
    },  /* [107] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6c)),  /* arg */
    },  /* [108] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6d)),  /* arg */
    },  /* [109] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6e)),  /* arg */
    },  /* [110] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x6f)),  /* arg */
    },  /* [111] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x70)),  /* arg */
    },  /* [112] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x71)),  /* arg */
    },  /* [113] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x72)),  /* arg */
    },  /* [114] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x73)),  /* arg */
    },  /* [115] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x74)),  /* arg */
    },  /* [116] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x75)),  /* arg */
    },  /* [117] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x76)),  /* arg */
    },  /* [118] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x77)),  /* arg */
    },  /* [119] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x78)),  /* arg */
    },  /* [120] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x79)),  /* arg */
    },  /* [121] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7a)),  /* arg */
    },  /* [122] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7b)),  /* arg */
    },  /* [123] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7c)),  /* arg */
    },  /* [124] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7d)),  /* arg */
    },  /* [125] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7e)),  /* arg */
    },  /* [126] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x7f)),  /* arg */
    },  /* [127] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x80)),  /* arg */
    },  /* [128] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x81)),  /* arg */
    },  /* [129] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x82)),  /* arg */
    },  /* [130] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x83)),  /* arg */
    },  /* [131] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x84)),  /* arg */
    },  /* [132] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x85)),  /* arg */
    },  /* [133] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x86)),  /* arg */
    },  /* [134] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x87)),  /* arg */
    },  /* [135] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x88)),  /* arg */
    },  /* [136] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x89)),  /* arg */
    },  /* [137] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8a)),  /* arg */
    },  /* [138] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8b)),  /* arg */
    },  /* [139] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8c)),  /* arg */
    },  /* [140] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8d)),  /* arg */
    },  /* [141] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8e)),  /* arg */
    },  /* [142] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x8f)),  /* arg */
    },  /* [143] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x90)),  /* arg */
    },  /* [144] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x91)),  /* arg */
    },  /* [145] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x92)),  /* arg */
    },  /* [146] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x93)),  /* arg */
    },  /* [147] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x94)),  /* arg */
    },  /* [148] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x95)),  /* arg */
    },  /* [149] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x96)),  /* arg */
    },  /* [150] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x97)),  /* arg */
    },  /* [151] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x98)),  /* arg */
    },  /* [152] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x99)),  /* arg */
    },  /* [153] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9a)),  /* arg */
    },  /* [154] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9b)),  /* arg */
    },  /* [155] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9c)),  /* arg */
    },  /* [156] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9d)),  /* arg */
    },  /* [157] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9e)),  /* arg */
    },  /* [158] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0x9f)),  /* arg */
    },  /* [159] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa0)),  /* arg */
    },  /* [160] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa1)),  /* arg */
    },  /* [161] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa2)),  /* arg */
    },  /* [162] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa3)),  /* arg */
    },  /* [163] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa4)),  /* arg */
    },  /* [164] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa5)),  /* arg */
    },  /* [165] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa6)),  /* arg */
    },  /* [166] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa7)),  /* arg */
    },  /* [167] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa8)),  /* arg */
    },  /* [168] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xa9)),  /* arg */
    },  /* [169] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xaa)),  /* arg */
    },  /* [170] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xab)),  /* arg */
    },  /* [171] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xac)),  /* arg */
    },  /* [172] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xad)),  /* arg */
    },  /* [173] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xae)),  /* arg */
    },  /* [174] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xaf)),  /* arg */
    },  /* [175] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb0)),  /* arg */
    },  /* [176] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb1)),  /* arg */
    },  /* [177] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb2)),  /* arg */
    },  /* [178] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb3)),  /* arg */
    },  /* [179] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb4)),  /* arg */
    },  /* [180] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb5)),  /* arg */
    },  /* [181] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb6)),  /* arg */
    },  /* [182] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb7)),  /* arg */
    },  /* [183] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb8)),  /* arg */
    },  /* [184] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xb9)),  /* arg */
    },  /* [185] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xba)),  /* arg */
    },  /* [186] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xbb)),  /* arg */
    },  /* [187] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xbc)),  /* arg */
    },  /* [188] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xbd)),  /* arg */
    },  /* [189] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xbe)),  /* arg */
    },  /* [190] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xbf)),  /* arg */
    },  /* [191] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc0)),  /* arg */
    },  /* [192] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc1)),  /* arg */
    },  /* [193] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc2)),  /* arg */
    },  /* [194] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc3)),  /* arg */
    },  /* [195] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc4)),  /* arg */
    },  /* [196] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc5)),  /* arg */
    },  /* [197] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc6)),  /* arg */
    },  /* [198] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc7)),  /* arg */
    },  /* [199] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc8)),  /* arg */
    },  /* [200] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xc9)),  /* arg */
    },  /* [201] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xca)),  /* arg */
    },  /* [202] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xcb)),  /* arg */
    },  /* [203] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xcc)),  /* arg */
    },  /* [204] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xcd)),  /* arg */
    },  /* [205] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xce)),  /* arg */
    },  /* [206] */
    {
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_unused)),  /* fxn */
        ((xdc_UArg)(0xcf)),  /* arg */
    },  /* [207] */
};

/* Module__state__V */
ti_sysbios_family_c66_tci66xx_CpIntc_Module_State__ ti_sysbios_family_c66_tci66xx_CpIntc_Module__state__V = {
    ((void*)ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_controller__A),  /* controller */
    ((void*)ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_initSIER__A),  /* initSIER */
    ((void*)ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_hostIntToSysInt__A),  /* hostIntToSysInt */
    ((void*)ti_sysbios_family_c66_tci66xx_CpIntc_Module_State_0_dispatchTab__A),  /* dispatchTab */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A[208] = {
    (xdc_UInt8)(-0x0 - 1),  /* [0] */
    (xdc_UInt8)(-0x0 - 1),  /* [1] */
    (xdc_UInt8)(-0x0 - 1),  /* [2] */
    (xdc_UInt8)(-0x0 - 1),  /* [3] */
    (xdc_UInt8)(-0x0 - 1),  /* [4] */
    (xdc_UInt8)(-0x0 - 1),  /* [5] */
    (xdc_UInt8)(-0x0 - 1),  /* [6] */
    (xdc_UInt8)(-0x0 - 1),  /* [7] */
    (xdc_UInt8)(-0x0 - 1),  /* [8] */
    (xdc_UInt8)(-0x0 - 1),  /* [9] */
    (xdc_UInt8)(-0x0 - 1),  /* [10] */
    (xdc_UInt8)(-0x0 - 1),  /* [11] */
    (xdc_UInt8)(-0x0 - 1),  /* [12] */
    (xdc_UInt8)(-0x0 - 1),  /* [13] */
    (xdc_UInt8)(-0x0 - 1),  /* [14] */
    (xdc_UInt8)(-0x0 - 1),  /* [15] */
    (xdc_UInt8)(-0x0 - 1),  /* [16] */
    (xdc_UInt8)(-0x0 - 1),  /* [17] */
    (xdc_UInt8)(-0x0 - 1),  /* [18] */
    (xdc_UInt8)(-0x0 - 1),  /* [19] */
    (xdc_UInt8)(-0x0 - 1),  /* [20] */
    (xdc_UInt8)(-0x0 - 1),  /* [21] */
    (xdc_UInt8)(-0x0 - 1),  /* [22] */
    (xdc_UInt8)(-0x0 - 1),  /* [23] */
    (xdc_UInt8)(-0x0 - 1),  /* [24] */
    (xdc_UInt8)(-0x0 - 1),  /* [25] */
    (xdc_UInt8)(-0x0 - 1),  /* [26] */
    (xdc_UInt8)(-0x0 - 1),  /* [27] */
    (xdc_UInt8)(-0x0 - 1),  /* [28] */
    (xdc_UInt8)(-0x0 - 1),  /* [29] */
    (xdc_UInt8)(-0x0 - 1),  /* [30] */
    (xdc_UInt8)(-0x0 - 1),  /* [31] */
    (xdc_UInt8)(-0x0 - 1),  /* [32] */
    (xdc_UInt8)(-0x0 - 1),  /* [33] */
    (xdc_UInt8)(-0x0 - 1),  /* [34] */
    (xdc_UInt8)(-0x0 - 1),  /* [35] */
    (xdc_UInt8)(-0x0 - 1),  /* [36] */
    (xdc_UInt8)(-0x0 - 1),  /* [37] */
    (xdc_UInt8)(-0x0 - 1),  /* [38] */
    (xdc_UInt8)(-0x0 - 1),  /* [39] */
    (xdc_UInt8)(-0x0 - 1),  /* [40] */
    (xdc_UInt8)(-0x0 - 1),  /* [41] */
    (xdc_UInt8)(-0x0 - 1),  /* [42] */
    (xdc_UInt8)(-0x0 - 1),  /* [43] */
    (xdc_UInt8)(-0x0 - 1),  /* [44] */
    (xdc_UInt8)(-0x0 - 1),  /* [45] */
    (xdc_UInt8)(-0x0 - 1),  /* [46] */
    (xdc_UInt8)(-0x0 - 1),  /* [47] */
    (xdc_UInt8)(-0x0 - 1),  /* [48] */
    (xdc_UInt8)(-0x0 - 1),  /* [49] */
    (xdc_UInt8)(-0x0 - 1),  /* [50] */
    (xdc_UInt8)(-0x0 - 1),  /* [51] */
    (xdc_UInt8)(-0x0 - 1),  /* [52] */
    (xdc_UInt8)(-0x0 - 1),  /* [53] */
    (xdc_UInt8)(-0x0 - 1),  /* [54] */
    (xdc_UInt8)(-0x0 - 1),  /* [55] */
    (xdc_UInt8)(-0x0 - 1),  /* [56] */
    (xdc_UInt8)(-0x0 - 1),  /* [57] */
    (xdc_UInt8)(-0x0 - 1),  /* [58] */
    (xdc_UInt8)(-0x0 - 1),  /* [59] */
    (xdc_UInt8)(-0x0 - 1),  /* [60] */
    (xdc_UInt8)(-0x0 - 1),  /* [61] */
    (xdc_UInt8)(-0x0 - 1),  /* [62] */
    (xdc_UInt8)(-0x0 - 1),  /* [63] */
    (xdc_UInt8)(-0x0 - 1),  /* [64] */
    (xdc_UInt8)(-0x0 - 1),  /* [65] */
    (xdc_UInt8)(-0x0 - 1),  /* [66] */
    (xdc_UInt8)(-0x0 - 1),  /* [67] */
    (xdc_UInt8)(-0x0 - 1),  /* [68] */
    (xdc_UInt8)(-0x0 - 1),  /* [69] */
    (xdc_UInt8)(-0x0 - 1),  /* [70] */
    (xdc_UInt8)(-0x0 - 1),  /* [71] */
    (xdc_UInt8)(-0x0 - 1),  /* [72] */
    (xdc_UInt8)(-0x0 - 1),  /* [73] */
    (xdc_UInt8)(-0x0 - 1),  /* [74] */
    (xdc_UInt8)(-0x0 - 1),  /* [75] */
    (xdc_UInt8)(-0x0 - 1),  /* [76] */
    (xdc_UInt8)(-0x0 - 1),  /* [77] */
    (xdc_UInt8)(-0x0 - 1),  /* [78] */
    (xdc_UInt8)(-0x0 - 1),  /* [79] */
    (xdc_UInt8)(-0x0 - 1),  /* [80] */
    (xdc_UInt8)(-0x0 - 1),  /* [81] */
    (xdc_UInt8)(-0x0 - 1),  /* [82] */
    (xdc_UInt8)(-0x0 - 1),  /* [83] */
    (xdc_UInt8)(-0x0 - 1),  /* [84] */
    (xdc_UInt8)(-0x0 - 1),  /* [85] */
    (xdc_UInt8)(-0x0 - 1),  /* [86] */
    (xdc_UInt8)(-0x0 - 1),  /* [87] */
    (xdc_UInt8)(-0x0 - 1),  /* [88] */
    (xdc_UInt8)(-0x0 - 1),  /* [89] */
    (xdc_UInt8)(-0x0 - 1),  /* [90] */
    (xdc_UInt8)(-0x0 - 1),  /* [91] */
    (xdc_UInt8)(-0x0 - 1),  /* [92] */
    (xdc_UInt8)(-0x0 - 1),  /* [93] */
    (xdc_UInt8)(-0x0 - 1),  /* [94] */
    (xdc_UInt8)(-0x0 - 1),  /* [95] */
    (xdc_UInt8)(-0x0 - 1),  /* [96] */
    (xdc_UInt8)(-0x0 - 1),  /* [97] */
    (xdc_UInt8)(-0x0 - 1),  /* [98] */
    (xdc_UInt8)(-0x0 - 1),  /* [99] */
    (xdc_UInt8)(-0x0 - 1),  /* [100] */
    (xdc_UInt8)(-0x0 - 1),  /* [101] */
    (xdc_UInt8)(-0x0 - 1),  /* [102] */
    (xdc_UInt8)(-0x0 - 1),  /* [103] */
    (xdc_UInt8)(-0x0 - 1),  /* [104] */
    (xdc_UInt8)(-0x0 - 1),  /* [105] */
    (xdc_UInt8)(-0x0 - 1),  /* [106] */
    (xdc_UInt8)(-0x0 - 1),  /* [107] */
    (xdc_UInt8)(-0x0 - 1),  /* [108] */
    (xdc_UInt8)(-0x0 - 1),  /* [109] */
    (xdc_UInt8)(-0x0 - 1),  /* [110] */
    (xdc_UInt8)(-0x0 - 1),  /* [111] */
    (xdc_UInt8)(-0x0 - 1),  /* [112] */
    (xdc_UInt8)(-0x0 - 1),  /* [113] */
    (xdc_UInt8)(-0x0 - 1),  /* [114] */
    (xdc_UInt8)(-0x0 - 1),  /* [115] */
    (xdc_UInt8)(-0x0 - 1),  /* [116] */
    (xdc_UInt8)(-0x0 - 1),  /* [117] */
    (xdc_UInt8)(-0x0 - 1),  /* [118] */
    (xdc_UInt8)(-0x0 - 1),  /* [119] */
    (xdc_UInt8)(-0x0 - 1),  /* [120] */
    (xdc_UInt8)(-0x0 - 1),  /* [121] */
    (xdc_UInt8)(-0x0 - 1),  /* [122] */
    (xdc_UInt8)(-0x0 - 1),  /* [123] */
    (xdc_UInt8)(-0x0 - 1),  /* [124] */
    (xdc_UInt8)(-0x0 - 1),  /* [125] */
    (xdc_UInt8)(-0x0 - 1),  /* [126] */
    (xdc_UInt8)(-0x0 - 1),  /* [127] */
    (xdc_UInt8)(-0x0 - 1),  /* [128] */
    (xdc_UInt8)(-0x0 - 1),  /* [129] */
    (xdc_UInt8)(-0x0 - 1),  /* [130] */
    (xdc_UInt8)(-0x0 - 1),  /* [131] */
    (xdc_UInt8)(-0x0 - 1),  /* [132] */
    (xdc_UInt8)(-0x0 - 1),  /* [133] */
    (xdc_UInt8)(-0x0 - 1),  /* [134] */
    (xdc_UInt8)(-0x0 - 1),  /* [135] */
    (xdc_UInt8)(-0x0 - 1),  /* [136] */
    (xdc_UInt8)(-0x0 - 1),  /* [137] */
    (xdc_UInt8)(-0x0 - 1),  /* [138] */
    (xdc_UInt8)(-0x0 - 1),  /* [139] */
    (xdc_UInt8)(-0x0 - 1),  /* [140] */
    (xdc_UInt8)(-0x0 - 1),  /* [141] */
    (xdc_UInt8)(-0x0 - 1),  /* [142] */
    (xdc_UInt8)(-0x0 - 1),  /* [143] */
    (xdc_UInt8)(-0x0 - 1),  /* [144] */
    (xdc_UInt8)(-0x0 - 1),  /* [145] */
    (xdc_UInt8)(-0x0 - 1),  /* [146] */
    (xdc_UInt8)(-0x0 - 1),  /* [147] */
    (xdc_UInt8)(-0x0 - 1),  /* [148] */
    (xdc_UInt8)(-0x0 - 1),  /* [149] */
    (xdc_UInt8)(-0x0 - 1),  /* [150] */
    (xdc_UInt8)(-0x0 - 1),  /* [151] */
    (xdc_UInt8)(-0x0 - 1),  /* [152] */
    (xdc_UInt8)(-0x0 - 1),  /* [153] */
    (xdc_UInt8)(-0x0 - 1),  /* [154] */
    (xdc_UInt8)(-0x0 - 1),  /* [155] */
    (xdc_UInt8)(-0x0 - 1),  /* [156] */
    (xdc_UInt8)(-0x0 - 1),  /* [157] */
    (xdc_UInt8)(-0x0 - 1),  /* [158] */
    (xdc_UInt8)(-0x0 - 1),  /* [159] */
    (xdc_UInt8)(-0x0 - 1),  /* [160] */
    (xdc_UInt8)(-0x0 - 1),  /* [161] */
    (xdc_UInt8)(-0x0 - 1),  /* [162] */
    (xdc_UInt8)(-0x0 - 1),  /* [163] */
    (xdc_UInt8)(-0x0 - 1),  /* [164] */
    (xdc_UInt8)(-0x0 - 1),  /* [165] */
    (xdc_UInt8)(-0x0 - 1),  /* [166] */
    (xdc_UInt8)(-0x0 - 1),  /* [167] */
    (xdc_UInt8)(-0x0 - 1),  /* [168] */
    (xdc_UInt8)(-0x0 - 1),  /* [169] */
    (xdc_UInt8)(-0x0 - 1),  /* [170] */
    (xdc_UInt8)(-0x0 - 1),  /* [171] */
    (xdc_UInt8)(-0x0 - 1),  /* [172] */
    (xdc_UInt8)(-0x0 - 1),  /* [173] */
    (xdc_UInt8)(-0x0 - 1),  /* [174] */
    (xdc_UInt8)(-0x0 - 1),  /* [175] */
    (xdc_UInt8)(-0x0 - 1),  /* [176] */
    (xdc_UInt8)(-0x0 - 1),  /* [177] */
    (xdc_UInt8)(-0x0 - 1),  /* [178] */
    (xdc_UInt8)(-0x0 - 1),  /* [179] */
    (xdc_UInt8)(-0x0 - 1),  /* [180] */
    (xdc_UInt8)(-0x0 - 1),  /* [181] */
    (xdc_UInt8)(-0x0 - 1),  /* [182] */
    (xdc_UInt8)(-0x0 - 1),  /* [183] */
    (xdc_UInt8)(-0x0 - 1),  /* [184] */
    (xdc_UInt8)(-0x0 - 1),  /* [185] */
    (xdc_UInt8)(-0x0 - 1),  /* [186] */
    (xdc_UInt8)(-0x0 - 1),  /* [187] */
    (xdc_UInt8)(-0x0 - 1),  /* [188] */
    (xdc_UInt8)(-0x0 - 1),  /* [189] */
    (xdc_UInt8)(-0x0 - 1),  /* [190] */
    (xdc_UInt8)(-0x0 - 1),  /* [191] */
    (xdc_UInt8)(-0x0 - 1),  /* [192] */
    (xdc_UInt8)(-0x0 - 1),  /* [193] */
    (xdc_UInt8)(-0x0 - 1),  /* [194] */
    (xdc_UInt8)(-0x0 - 1),  /* [195] */
    (xdc_UInt8)(-0x0 - 1),  /* [196] */
    (xdc_UInt8)(-0x0 - 1),  /* [197] */
    (xdc_UInt8)(-0x0 - 1),  /* [198] */
    (xdc_UInt8)(-0x0 - 1),  /* [199] */
    (xdc_UInt8)(-0x0 - 1),  /* [200] */
    (xdc_UInt8)(-0x0 - 1),  /* [201] */
    (xdc_UInt8)(-0x0 - 1),  /* [202] */
    (xdc_UInt8)(-0x0 - 1),  /* [203] */
    (xdc_UInt8)(-0x0 - 1),  /* [204] */
    (xdc_UInt8)(-0x0 - 1),  /* [205] */
    (xdc_UInt8)(-0x0 - 1),  /* [206] */
    (xdc_UInt8)(-0x0 - 1),  /* [207] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A[20] = {
    (xdc_UInt8)0x0,  /* [0] */
    (xdc_UInt8)0x1,  /* [1] */
    (xdc_UInt8)0x2,  /* [2] */
    (xdc_UInt8)0x3,  /* [3] */
    (xdc_UInt8)0x4,  /* [4] */
    (xdc_UInt8)0x5,  /* [5] */
    (xdc_UInt8)0x6,  /* [6] */
    (xdc_UInt8)0x7,  /* [7] */
    (xdc_UInt8)0x8,  /* [8] */
    (xdc_UInt8)0x9,  /* [9] */
    (xdc_UInt8)0x28,  /* [10] */
    (xdc_UInt8)0x29,  /* [11] */
    (xdc_UInt8)0x2a,  /* [12] */
    (xdc_UInt8)0x2b,  /* [13] */
    (xdc_UInt8)0x2c,  /* [14] */
    (xdc_UInt8)0x2d,  /* [15] */
    (xdc_UInt8)0x2e,  /* [16] */
    (xdc_UInt8)0x2f,  /* [17] */
    (xdc_UInt8)0xa,  /* [18] */
    (xdc_UInt8)0xb,  /* [19] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A[20] = {
    (xdc_UInt8)0x14,  /* [0] */
    (xdc_UInt8)0x15,  /* [1] */
    (xdc_UInt8)0x16,  /* [2] */
    (xdc_UInt8)0x17,  /* [3] */
    (xdc_UInt8)0x18,  /* [4] */
    (xdc_UInt8)0x19,  /* [5] */
    (xdc_UInt8)0x1a,  /* [6] */
    (xdc_UInt8)0x1b,  /* [7] */
    (xdc_UInt8)0x1c,  /* [8] */
    (xdc_UInt8)0x1d,  /* [9] */
    (xdc_UInt8)0x28,  /* [10] */
    (xdc_UInt8)0x29,  /* [11] */
    (xdc_UInt8)0x2a,  /* [12] */
    (xdc_UInt8)0x2b,  /* [13] */
    (xdc_UInt8)0x2c,  /* [14] */
    (xdc_UInt8)0x2d,  /* [15] */
    (xdc_UInt8)0x2e,  /* [16] */
    (xdc_UInt8)0x2f,  /* [17] */
    (xdc_UInt8)0x1e,  /* [18] */
    (xdc_UInt8)0x1f,  /* [19] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A */
const __T2_ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A[2] = {
    ((void*)ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A),  /* [0] */
    ((void*)ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A),  /* [1] */
};

/* --> ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A */
const __T1_ti_sysbios_family_c66_tci66xx_CpIntc_eventId ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A[20] = {
    (xdc_UInt8)0x16,  /* [0] */
    (xdc_UInt8)0x17,  /* [1] */
    (xdc_UInt8)0x18,  /* [2] */
    (xdc_UInt8)0x19,  /* [3] */
    (xdc_UInt8)0x1a,  /* [4] */
    (xdc_UInt8)0x1b,  /* [5] */
    (xdc_UInt8)0x1c,  /* [6] */
    (xdc_UInt8)0x1d,  /* [7] */
    (xdc_UInt8)0x1e,  /* [8] */
    (xdc_UInt8)0x1f,  /* [9] */
    (xdc_UInt8)0x38,  /* [10] */
    (xdc_UInt8)0x39,  /* [11] */
    (xdc_UInt8)0x3a,  /* [12] */
    (xdc_UInt8)0x3b,  /* [13] */
    (xdc_UInt8)0x3c,  /* [14] */
    (xdc_UInt8)0x3d,  /* [15] */
    (xdc_UInt8)0x3e,  /* [16] */
    (xdc_UInt8)0x3f,  /* [17] */
    (xdc_UInt8)0x5c,  /* [18] */
    (xdc_UInt8)0x5d,  /* [19] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsEnabled ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsIncluded ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsMask ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsMask__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__gateObj ti_sysbios_family_c66_tci66xx_CpIntc_Module__gateObj__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__gatePrms ti_sysbios_family_c66_tci66xx_CpIntc_Module__gatePrms__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__id ti_sysbios_family_c66_tci66xx_CpIntc_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerDefined ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerObj ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerObj__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn0 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn1 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn2 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn4 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn8 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDoneFxn ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Object__count ti_sysbios_family_c66_tci66xx_CpIntc_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Object__heap ti_sysbios_family_c66_tci66xx_CpIntc_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Object__sizeof ti_sysbios_family_c66_tci66xx_CpIntc_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_Object__table ti_sysbios_family_c66_tci66xx_CpIntc_Object__table__C = 0;

/* E_unpluggedSysInt__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_E_unpluggedSysInt ti_sysbios_family_c66_tci66xx_CpIntc_E_unpluggedSysInt__C = (((xdc_runtime_Error_Id)3136) << 16 | 0);

/* numSysInts__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_numSysInts ti_sysbios_family_c66_tci66xx_CpIntc_numSysInts__C = (xdc_UInt32)0xd0;

/* numEvents__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_numEvents ti_sysbios_family_c66_tci66xx_CpIntc_numEvents__C = (xdc_UInt32)0x14;

/* numStatusRegs__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_numStatusRegs ti_sysbios_family_c66_tci66xx_CpIntc_numStatusRegs__C = (xdc_Int)7.46875;

/* sysIntToHostInt__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt)ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A);

/* hostIntToEventId__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId)ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A);

/* eventId__C */
__FAR__ const CT__ti_sysbios_family_c66_tci66xx_CpIntc_eventId ti_sysbios_family_c66_tci66xx_CpIntc_eventId__C = ((CT__ti_sysbios_family_c66_tci66xx_CpIntc_eventId)ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A);


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1767) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsEnabled ti_sysbios_hal_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsIncluded ti_sysbios_hal_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsMask ti_sysbios_hal_Cache_Module__diagsMask__C = ((CT__ti_sysbios_hal_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gateObj ti_sysbios_hal_Cache_Module__gateObj__C = ((CT__ti_sysbios_hal_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gatePrms ti_sysbios_hal_Cache_Module__gatePrms__C = ((CT__ti_sysbios_hal_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerDefined ti_sysbios_hal_Cache_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerObj ti_sysbios_hal_Cache_Module__loggerObj__C = ((CT__ti_sysbios_hal_Cache_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn0 ti_sysbios_hal_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn1 ti_sysbios_hal_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn2 ti_sysbios_hal_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn4 ti_sysbios_hal_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn8 ti_sysbios_hal_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__startupDoneFxn ti_sysbios_hal_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__count ti_sysbios_hal_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__heap ti_sysbios_hal_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__sizeof ti_sysbios_hal_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__table ti_sysbios_hal_Cache_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[4],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3005) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2251) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2287) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2332) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)3412) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2223) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x8;

/* reqAlignMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlignMask ti_sysbios_heaps_HeapMem_reqAlignMask__C = (xdc_Int)0x7;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* doTickFunc */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)3712) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)3734) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)3752) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)481) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)3784) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)3814) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)801) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)856) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)680) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)921) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)3857) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)3904) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)3922) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)975) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1032) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)3962) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4030) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4075) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4116) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4148) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4196) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4252) << 16 | 512);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3042) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3085) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1081) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1150) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1204) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1258) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1321) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1371) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)((xdc_Fxn)ti_sysbios_knl_Task_allBlockedFunction__I));

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_timers_timer64_Timer_Params ti_sysbios_timers_timer64_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_timer64_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0,  /* tien */
        (xdc_Bits8)0x0,  /* invout */
        (xdc_Bits8)0x0,  /* invin */
        (xdc_UInt8)0x1,  /* pwid */
        (xdc_Bits8)0x0,  /* cp */
    },  /* controlInit */
    {
        0,  /* free */
        0,  /* soft */
    },  /* emuMgtInit */
    {
        (xdc_Bits8)0x0,  /* gpint12_eni */
        (xdc_Bits8)0x0,  /* gpint12_eno */
        (xdc_Bits8)0x0,  /* gpint12_invi */
        (xdc_Bits8)0x0,  /* gpint12_invo */
        (xdc_Bits8)0x0,  /* gpint34_eni */
        (xdc_Bits8)0x0,  /* gpint34_eno */
        (xdc_Bits8)0x0,  /* gpint34_invi */
        (xdc_Bits8)0x0,  /* gpint34_invo */
        (xdc_Bits8)0x0,  /* gpio_eni12 */
        (xdc_Bits8)0x0,  /* gpio_eno12 */
        (xdc_Bits8)0x0,  /* gpio_eni34 */
        (xdc_Bits8)0x0,  /* gpio_eno34 */
    },  /* gpioIntEn */
    {
        (xdc_Bits8)0x0,  /* gpio_dati12 */
        (xdc_Bits8)0x0,  /* gpio_dato12 */
        (xdc_Bits8)0x0,  /* gpio_dati34 */
        (xdc_Bits8)0x0,  /* gpio_dato34 */
        (xdc_Bits8)0x0,  /* gpio_diri12 */
        (xdc_Bits8)0x0,  /* gpio_diro12 */
        (xdc_Bits8)0x0,  /* gpio_diri34 */
        (xdc_Bits8)0x0,  /* gpio_diro34 */
    },  /* gpioDatDir */
    ti_sysbios_timers_timer64_Timer_Half_DEFAULT,  /* half */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_UInt)0x0,  /* prescalar */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V = {
    {&ti_sysbios_timers_timer64_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)(-0x0 - 1),  /* id */
        ti_sysbios_timers_timer64_Timer_Half_LOWER,  /* half */
        (xdc_UInt)0x10,  /* tcrInit */
        (xdc_UInt)0x0,  /* emumgtInit */
        (xdc_UInt)0x0,  /* gpioIntEn */
        (xdc_UInt)0x0,  /* gpioDatDir */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x0,  /* prescalar */
        (xdc_UInt)0xe,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[8] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [1] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [2] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [3] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [4] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [5] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [6] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [7] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[8] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [2] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [3] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [4] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [5] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [6] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [7] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[16] = {
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2200000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2200000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2210000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2210000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x42,  /* eventId */
        ((xdc_Ptr)((void*)0x2220000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x43,  /* eventId */
        ((xdc_Ptr)((void*)0x2220000)),  /* baseAddr */
    },  /* [5] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x44,  /* eventId */
        ((xdc_Ptr)((void*)0x2230000)),  /* baseAddr */
    },  /* [6] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x45,  /* eventId */
        ((xdc_Ptr)((void*)0x2230000)),  /* baseAddr */
    },  /* [7] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x18,  /* eventId */
        ((xdc_Ptr)((void*)0x2240000)),  /* baseAddr */
    },  /* [8] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x19,  /* eventId */
        ((xdc_Ptr)((void*)0x2240000)),  /* baseAddr */
    },  /* [9] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x18,  /* eventId */
        ((xdc_Ptr)((void*)0x2250000)),  /* baseAddr */
    },  /* [10] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x19,  /* eventId */
        ((xdc_Ptr)((void*)0x2250000)),  /* baseAddr */
    },  /* [11] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x18,  /* eventId */
        ((xdc_Ptr)((void*)0x2260000)),  /* baseAddr */
    },  /* [12] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x19,  /* eventId */
        ((xdc_Ptr)((void*)0x2260000)),  /* baseAddr */
    },  /* [13] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x18,  /* eventId */
        ((xdc_Ptr)((void*)0x2270000)),  /* baseAddr */
    },  /* [14] */
    {
        (xdc_UInt)(-0x0 - 1),  /* intNum */
        (xdc_UInt)0x19,  /* eventId */
        ((xdc_Ptr)((void*)0x2270000)),  /* baseAddr */
    },  /* [15] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[16] = {
    (ti_sysbios_timers_timer64_Timer_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
};

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V = {
    (xdc_Bits32)0xff,  /* availMask */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A),  /* gctrl */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A),  /* handles */
};

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[8] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [2] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [3] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [4] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [5] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [6] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [7] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsEnabled ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsIncluded ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask ti_sysbios_timers_timer64_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gateObj ti_sysbios_timers_timer64_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms ti_sysbios_timers_timer64_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__id ti_sysbios_timers_timer64_Timer_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerDefined ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj ti_sysbios_timers_timer64_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__count ti_sysbios_timers_timer64_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__heap ti_sysbios_timers_timer64_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__sizeof ti_sysbios_timers_timer64_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_timer64_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__table ti_sysbios_timers_timer64_Timer_Object__table__C = ti_sysbios_timers_timer64_Timer_Object__table__V;

/* A_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_A_notAvailable ti_sysbios_timers_timer64_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)1837) << 16 | 16);

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_invalidTimer ti_sysbios_timers_timer64_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3231) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_notAvailable ti_sysbios_timers_timer64_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3267) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_cannotSupport ti_sysbios_timers_timer64_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)3306) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_anyMask ti_sysbios_timers_timer64_Timer_anyMask__C = (xdc_Bits32)0xff;

/* defaultHalf__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_defaultHalf ti_sysbios_timers_timer64_Timer_defaultHalf__C = ti_sysbios_timers_timer64_Timer_Half_LOWER;

/* timerSettings__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__C = ((CT__ti_sysbios_timers_timer64_Timer_timerSettings)ti_sysbios_timers_timer64_Timer_timerSettings__A);

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_startupNeeded ti_sysbios_timers_timer64_Timer_startupNeeded__C = 1;

/* freqDivisor__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_freqDivisor ti_sysbios_timers_timer64_Timer_freqDivisor__C = (xdc_UInt)0x6;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numTimerDevices ti_sysbios_timers_timer64_Timer_numTimerDevices__C = (xdc_Int)0x10;

/* numLocalTimers__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numLocalTimers ti_sysbios_timers_timer64_Timer_numLocalTimers__C = (xdc_Int)0x2;


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2447) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2469) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2473) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2507) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3448) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3472) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3493) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3512) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3529) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)3543) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)3559) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)3566) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)3577) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)3587) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)3606) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_Int)0x40,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)((void*)&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1,  /* serial */
        (xdc_Int16)0x10,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((CT__xdc_runtime_LoggerBuf_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((CT__xdc_runtime_LoggerBuf_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__startupDoneFxn xdc_runtime_LoggerBuf_Module__startupDoneFxn__C = ((CT__xdc_runtime_LoggerBuf_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)2515) << 16 | 0);

/* enableFlush__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[15] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Exception_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_TimestampProvider_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c66_tci66xx_CpIntc_Module_startup__E)),  /* [12] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c66_Cache_Module_startup__E)),  /* [13] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_timer64_Timer_Module_startup__E)),  /* [14] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[15] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    1,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[4718] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x63,  /* [402] */
    (xdc_Char)0x6c,  /* [403] */
    (xdc_Char)0x6f,  /* [404] */
    (xdc_Char)0x63,  /* [405] */
    (xdc_Char)0x6b,  /* [406] */
    (xdc_Char)0x44,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x73,  /* [409] */
    (xdc_Char)0x61,  /* [410] */
    (xdc_Char)0x62,  /* [411] */
    (xdc_Char)0x6c,  /* [412] */
    (xdc_Char)0x65,  /* [413] */
    (xdc_Char)0x64,  /* [414] */
    (xdc_Char)0x3a,  /* [415] */
    (xdc_Char)0x20,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x61,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x6e,  /* [420] */
    (xdc_Char)0x6f,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x20,  /* [423] */
    (xdc_Char)0x63,  /* [424] */
    (xdc_Char)0x72,  /* [425] */
    (xdc_Char)0x65,  /* [426] */
    (xdc_Char)0x61,  /* [427] */
    (xdc_Char)0x74,  /* [428] */
    (xdc_Char)0x65,  /* [429] */
    (xdc_Char)0x20,  /* [430] */
    (xdc_Char)0x61,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x63,  /* [433] */
    (xdc_Char)0x6c,  /* [434] */
    (xdc_Char)0x6f,  /* [435] */
    (xdc_Char)0x63,  /* [436] */
    (xdc_Char)0x6b,  /* [437] */
    (xdc_Char)0x20,  /* [438] */
    (xdc_Char)0x69,  /* [439] */
    (xdc_Char)0x6e,  /* [440] */
    (xdc_Char)0x73,  /* [441] */
    (xdc_Char)0x74,  /* [442] */
    (xdc_Char)0x61,  /* [443] */
    (xdc_Char)0x6e,  /* [444] */
    (xdc_Char)0x63,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x20,  /* [447] */
    (xdc_Char)0x77,  /* [448] */
    (xdc_Char)0x68,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x6e,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x42,  /* [453] */
    (xdc_Char)0x49,  /* [454] */
    (xdc_Char)0x4f,  /* [455] */
    (xdc_Char)0x53,  /* [456] */
    (xdc_Char)0x2e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x6c,  /* [459] */
    (xdc_Char)0x6f,  /* [460] */
    (xdc_Char)0x63,  /* [461] */
    (xdc_Char)0x6b,  /* [462] */
    (xdc_Char)0x45,  /* [463] */
    (xdc_Char)0x6e,  /* [464] */
    (xdc_Char)0x61,  /* [465] */
    (xdc_Char)0x62,  /* [466] */
    (xdc_Char)0x6c,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x64,  /* [469] */
    (xdc_Char)0x20,  /* [470] */
    (xdc_Char)0x69,  /* [471] */
    (xdc_Char)0x73,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x66,  /* [474] */
    (xdc_Char)0x61,  /* [475] */
    (xdc_Char)0x6c,  /* [476] */
    (xdc_Char)0x73,  /* [477] */
    (xdc_Char)0x65,  /* [478] */
    (xdc_Char)0x2e,  /* [479] */
    (xdc_Char)0x0,  /* [480] */
    (xdc_Char)0x41,  /* [481] */
    (xdc_Char)0x5f,  /* [482] */
    (xdc_Char)0x62,  /* [483] */
    (xdc_Char)0x61,  /* [484] */
    (xdc_Char)0x64,  /* [485] */
    (xdc_Char)0x54,  /* [486] */
    (xdc_Char)0x68,  /* [487] */
    (xdc_Char)0x72,  /* [488] */
    (xdc_Char)0x65,  /* [489] */
    (xdc_Char)0x61,  /* [490] */
    (xdc_Char)0x64,  /* [491] */
    (xdc_Char)0x54,  /* [492] */
    (xdc_Char)0x79,  /* [493] */
    (xdc_Char)0x70,  /* [494] */
    (xdc_Char)0x65,  /* [495] */
    (xdc_Char)0x3a,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x43,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x6e,  /* [500] */
    (xdc_Char)0x6e,  /* [501] */
    (xdc_Char)0x6f,  /* [502] */
    (xdc_Char)0x74,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x63,  /* [505] */
    (xdc_Char)0x72,  /* [506] */
    (xdc_Char)0x65,  /* [507] */
    (xdc_Char)0x61,  /* [508] */
    (xdc_Char)0x74,  /* [509] */
    (xdc_Char)0x65,  /* [510] */
    (xdc_Char)0x2f,  /* [511] */
    (xdc_Char)0x64,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x6c,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x65,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x61,  /* [519] */
    (xdc_Char)0x20,  /* [520] */
    (xdc_Char)0x43,  /* [521] */
    (xdc_Char)0x6c,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x63,  /* [524] */
    (xdc_Char)0x6b,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x66,  /* [527] */
    (xdc_Char)0x72,  /* [528] */
    (xdc_Char)0x6f,  /* [529] */
    (xdc_Char)0x6d,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x48,  /* [532] */
    (xdc_Char)0x77,  /* [533] */
    (xdc_Char)0x69,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x6f,  /* [536] */
    (xdc_Char)0x72,  /* [537] */
    (xdc_Char)0x20,  /* [538] */
    (xdc_Char)0x53,  /* [539] */
    (xdc_Char)0x77,  /* [540] */
    (xdc_Char)0x69,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x74,  /* [543] */
    (xdc_Char)0x68,  /* [544] */
    (xdc_Char)0x72,  /* [545] */
    (xdc_Char)0x65,  /* [546] */
    (xdc_Char)0x61,  /* [547] */
    (xdc_Char)0x64,  /* [548] */
    (xdc_Char)0x2e,  /* [549] */
    (xdc_Char)0x0,  /* [550] */
    (xdc_Char)0x41,  /* [551] */
    (xdc_Char)0x5f,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x75,  /* [554] */
    (xdc_Char)0x6c,  /* [555] */
    (xdc_Char)0x6c,  /* [556] */
    (xdc_Char)0x45,  /* [557] */
    (xdc_Char)0x76,  /* [558] */
    (xdc_Char)0x65,  /* [559] */
    (xdc_Char)0x6e,  /* [560] */
    (xdc_Char)0x74,  /* [561] */
    (xdc_Char)0x4d,  /* [562] */
    (xdc_Char)0x61,  /* [563] */
    (xdc_Char)0x73,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x73,  /* [566] */
    (xdc_Char)0x3a,  /* [567] */
    (xdc_Char)0x20,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x72,  /* [570] */
    (xdc_Char)0x4d,  /* [571] */
    (xdc_Char)0x61,  /* [572] */
    (xdc_Char)0x73,  /* [573] */
    (xdc_Char)0x6b,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x61,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x64,  /* [578] */
    (xdc_Char)0x20,  /* [579] */
    (xdc_Char)0x61,  /* [580] */
    (xdc_Char)0x6e,  /* [581] */
    (xdc_Char)0x64,  /* [582] */
    (xdc_Char)0x4d,  /* [583] */
    (xdc_Char)0x61,  /* [584] */
    (xdc_Char)0x73,  /* [585] */
    (xdc_Char)0x6b,  /* [586] */
    (xdc_Char)0x20,  /* [587] */
    (xdc_Char)0x61,  /* [588] */
    (xdc_Char)0x72,  /* [589] */
    (xdc_Char)0x65,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x6e,  /* [592] */
    (xdc_Char)0x75,  /* [593] */
    (xdc_Char)0x6c,  /* [594] */
    (xdc_Char)0x6c,  /* [595] */
    (xdc_Char)0x2e,  /* [596] */
    (xdc_Char)0x0,  /* [597] */
    (xdc_Char)0x41,  /* [598] */
    (xdc_Char)0x5f,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x75,  /* [601] */
    (xdc_Char)0x6c,  /* [602] */
    (xdc_Char)0x6c,  /* [603] */
    (xdc_Char)0x45,  /* [604] */
    (xdc_Char)0x76,  /* [605] */
    (xdc_Char)0x65,  /* [606] */
    (xdc_Char)0x6e,  /* [607] */
    (xdc_Char)0x74,  /* [608] */
    (xdc_Char)0x49,  /* [609] */
    (xdc_Char)0x64,  /* [610] */
    (xdc_Char)0x3a,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x70,  /* [613] */
    (xdc_Char)0x6f,  /* [614] */
    (xdc_Char)0x73,  /* [615] */
    (xdc_Char)0x74,  /* [616] */
    (xdc_Char)0x65,  /* [617] */
    (xdc_Char)0x64,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x65,  /* [620] */
    (xdc_Char)0x76,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x74,  /* [624] */
    (xdc_Char)0x49,  /* [625] */
    (xdc_Char)0x64,  /* [626] */
    (xdc_Char)0x20,  /* [627] */
    (xdc_Char)0x69,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x20,  /* [630] */
    (xdc_Char)0x6e,  /* [631] */
    (xdc_Char)0x75,  /* [632] */
    (xdc_Char)0x6c,  /* [633] */
    (xdc_Char)0x6c,  /* [634] */
    (xdc_Char)0x2e,  /* [635] */
    (xdc_Char)0x0,  /* [636] */
    (xdc_Char)0x41,  /* [637] */
    (xdc_Char)0x5f,  /* [638] */
    (xdc_Char)0x65,  /* [639] */
    (xdc_Char)0x76,  /* [640] */
    (xdc_Char)0x65,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x49,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x55,  /* [646] */
    (xdc_Char)0x73,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x3a,  /* [649] */
    (xdc_Char)0x20,  /* [650] */
    (xdc_Char)0x45,  /* [651] */
    (xdc_Char)0x76,  /* [652] */
    (xdc_Char)0x65,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x74,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x6f,  /* [657] */
    (xdc_Char)0x62,  /* [658] */
    (xdc_Char)0x6a,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x61,  /* [664] */
    (xdc_Char)0x6c,  /* [665] */
    (xdc_Char)0x72,  /* [666] */
    (xdc_Char)0x65,  /* [667] */
    (xdc_Char)0x61,  /* [668] */
    (xdc_Char)0x64,  /* [669] */
    (xdc_Char)0x79,  /* [670] */
    (xdc_Char)0x20,  /* [671] */
    (xdc_Char)0x69,  /* [672] */
    (xdc_Char)0x6e,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x75,  /* [675] */
    (xdc_Char)0x73,  /* [676] */
    (xdc_Char)0x65,  /* [677] */
    (xdc_Char)0x2e,  /* [678] */
    (xdc_Char)0x0,  /* [679] */
    (xdc_Char)0x41,  /* [680] */
    (xdc_Char)0x5f,  /* [681] */
    (xdc_Char)0x62,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x43,  /* [685] */
    (xdc_Char)0x6f,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x74,  /* [688] */
    (xdc_Char)0x65,  /* [689] */
    (xdc_Char)0x78,  /* [690] */
    (xdc_Char)0x74,  /* [691] */
    (xdc_Char)0x3a,  /* [692] */
    (xdc_Char)0x20,  /* [693] */
    (xdc_Char)0x62,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x64,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x63,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x6c,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x69,  /* [702] */
    (xdc_Char)0x6e,  /* [703] */
    (xdc_Char)0x67,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x6f,  /* [707] */
    (xdc_Char)0x6e,  /* [708] */
    (xdc_Char)0x74,  /* [709] */
    (xdc_Char)0x65,  /* [710] */
    (xdc_Char)0x78,  /* [711] */
    (xdc_Char)0x74,  /* [712] */
    (xdc_Char)0x2e,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x4d,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x73,  /* [717] */
    (xdc_Char)0x74,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x62,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x63,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x6c,  /* [725] */
    (xdc_Char)0x6c,  /* [726] */
    (xdc_Char)0x65,  /* [727] */
    (xdc_Char)0x64,  /* [728] */
    (xdc_Char)0x20,  /* [729] */
    (xdc_Char)0x66,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x6f,  /* [732] */
    (xdc_Char)0x6d,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x20,  /* [736] */
    (xdc_Char)0x54,  /* [737] */
    (xdc_Char)0x61,  /* [738] */
    (xdc_Char)0x73,  /* [739] */
    (xdc_Char)0x6b,  /* [740] */
    (xdc_Char)0x2e,  /* [741] */
    (xdc_Char)0x0,  /* [742] */
    (xdc_Char)0x4d,  /* [743] */
    (xdc_Char)0x61,  /* [744] */
    (xdc_Char)0x69,  /* [745] */
    (xdc_Char)0x6c,  /* [746] */
    (xdc_Char)0x62,  /* [747] */
    (xdc_Char)0x6f,  /* [748] */
    (xdc_Char)0x78,  /* [749] */
    (xdc_Char)0x5f,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x72,  /* [752] */
    (xdc_Char)0x65,  /* [753] */
    (xdc_Char)0x61,  /* [754] */
    (xdc_Char)0x74,  /* [755] */
    (xdc_Char)0x65,  /* [756] */
    (xdc_Char)0x27,  /* [757] */
    (xdc_Char)0x73,  /* [758] */
    (xdc_Char)0x20,  /* [759] */
    (xdc_Char)0x62,  /* [760] */
    (xdc_Char)0x75,  /* [761] */
    (xdc_Char)0x66,  /* [762] */
    (xdc_Char)0x53,  /* [763] */
    (xdc_Char)0x69,  /* [764] */
    (xdc_Char)0x7a,  /* [765] */
    (xdc_Char)0x65,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x70,  /* [768] */
    (xdc_Char)0x61,  /* [769] */
    (xdc_Char)0x72,  /* [770] */
    (xdc_Char)0x61,  /* [771] */
    (xdc_Char)0x6d,  /* [772] */
    (xdc_Char)0x65,  /* [773] */
    (xdc_Char)0x74,  /* [774] */
    (xdc_Char)0x65,  /* [775] */
    (xdc_Char)0x72,  /* [776] */
    (xdc_Char)0x20,  /* [777] */
    (xdc_Char)0x69,  /* [778] */
    (xdc_Char)0x73,  /* [779] */
    (xdc_Char)0x20,  /* [780] */
    (xdc_Char)0x69,  /* [781] */
    (xdc_Char)0x6e,  /* [782] */
    (xdc_Char)0x76,  /* [783] */
    (xdc_Char)0x61,  /* [784] */
    (xdc_Char)0x6c,  /* [785] */
    (xdc_Char)0x69,  /* [786] */
    (xdc_Char)0x64,  /* [787] */
    (xdc_Char)0x20,  /* [788] */
    (xdc_Char)0x28,  /* [789] */
    (xdc_Char)0x74,  /* [790] */
    (xdc_Char)0x6f,  /* [791] */
    (xdc_Char)0x6f,  /* [792] */
    (xdc_Char)0x20,  /* [793] */
    (xdc_Char)0x73,  /* [794] */
    (xdc_Char)0x6d,  /* [795] */
    (xdc_Char)0x61,  /* [796] */
    (xdc_Char)0x6c,  /* [797] */
    (xdc_Char)0x6c,  /* [798] */
    (xdc_Char)0x29,  /* [799] */
    (xdc_Char)0x0,  /* [800] */
    (xdc_Char)0x41,  /* [801] */
    (xdc_Char)0x5f,  /* [802] */
    (xdc_Char)0x6e,  /* [803] */
    (xdc_Char)0x6f,  /* [804] */
    (xdc_Char)0x45,  /* [805] */
    (xdc_Char)0x76,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x6e,  /* [808] */
    (xdc_Char)0x74,  /* [809] */
    (xdc_Char)0x73,  /* [810] */
    (xdc_Char)0x3a,  /* [811] */
    (xdc_Char)0x20,  /* [812] */
    (xdc_Char)0x54,  /* [813] */
    (xdc_Char)0x68,  /* [814] */
    (xdc_Char)0x65,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x45,  /* [817] */
    (xdc_Char)0x76,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x6e,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x2e,  /* [822] */
    (xdc_Char)0x73,  /* [823] */
    (xdc_Char)0x75,  /* [824] */
    (xdc_Char)0x70,  /* [825] */
    (xdc_Char)0x70,  /* [826] */
    (xdc_Char)0x6f,  /* [827] */
    (xdc_Char)0x72,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x73,  /* [830] */
    (xdc_Char)0x45,  /* [831] */
    (xdc_Char)0x76,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x6e,  /* [834] */
    (xdc_Char)0x74,  /* [835] */
    (xdc_Char)0x73,  /* [836] */
    (xdc_Char)0x20,  /* [837] */
    (xdc_Char)0x66,  /* [838] */
    (xdc_Char)0x6c,  /* [839] */
    (xdc_Char)0x61,  /* [840] */
    (xdc_Char)0x67,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x73,  /* [844] */
    (xdc_Char)0x20,  /* [845] */
    (xdc_Char)0x64,  /* [846] */
    (xdc_Char)0x69,  /* [847] */
    (xdc_Char)0x73,  /* [848] */
    (xdc_Char)0x61,  /* [849] */
    (xdc_Char)0x62,  /* [850] */
    (xdc_Char)0x6c,  /* [851] */
    (xdc_Char)0x65,  /* [852] */
    (xdc_Char)0x64,  /* [853] */
    (xdc_Char)0x2e,  /* [854] */
    (xdc_Char)0x0,  /* [855] */
    (xdc_Char)0x41,  /* [856] */
    (xdc_Char)0x5f,  /* [857] */
    (xdc_Char)0x69,  /* [858] */
    (xdc_Char)0x6e,  /* [859] */
    (xdc_Char)0x76,  /* [860] */
    (xdc_Char)0x54,  /* [861] */
    (xdc_Char)0x69,  /* [862] */
    (xdc_Char)0x6d,  /* [863] */
    (xdc_Char)0x65,  /* [864] */
    (xdc_Char)0x6f,  /* [865] */
    (xdc_Char)0x75,  /* [866] */
    (xdc_Char)0x74,  /* [867] */
    (xdc_Char)0x3a,  /* [868] */
    (xdc_Char)0x20,  /* [869] */
    (xdc_Char)0x43,  /* [870] */
    (xdc_Char)0x61,  /* [871] */
    (xdc_Char)0x6e,  /* [872] */
    (xdc_Char)0x27,  /* [873] */
    (xdc_Char)0x74,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x75,  /* [876] */
    (xdc_Char)0x73,  /* [877] */
    (xdc_Char)0x65,  /* [878] */
    (xdc_Char)0x20,  /* [879] */
    (xdc_Char)0x42,  /* [880] */
    (xdc_Char)0x49,  /* [881] */
    (xdc_Char)0x4f,  /* [882] */
    (xdc_Char)0x53,  /* [883] */
    (xdc_Char)0x5f,  /* [884] */
    (xdc_Char)0x45,  /* [885] */
    (xdc_Char)0x56,  /* [886] */
    (xdc_Char)0x45,  /* [887] */
    (xdc_Char)0x4e,  /* [888] */
    (xdc_Char)0x54,  /* [889] */
    (xdc_Char)0x5f,  /* [890] */
    (xdc_Char)0x41,  /* [891] */
    (xdc_Char)0x43,  /* [892] */
    (xdc_Char)0x51,  /* [893] */
    (xdc_Char)0x55,  /* [894] */
    (xdc_Char)0x49,  /* [895] */
    (xdc_Char)0x52,  /* [896] */
    (xdc_Char)0x45,  /* [897] */
    (xdc_Char)0x44,  /* [898] */
    (xdc_Char)0x20,  /* [899] */
    (xdc_Char)0x77,  /* [900] */
    (xdc_Char)0x69,  /* [901] */
    (xdc_Char)0x74,  /* [902] */
    (xdc_Char)0x68,  /* [903] */
    (xdc_Char)0x20,  /* [904] */
    (xdc_Char)0x74,  /* [905] */
    (xdc_Char)0x68,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x73,  /* [908] */
    (xdc_Char)0x20,  /* [909] */
    (xdc_Char)0x53,  /* [910] */
    (xdc_Char)0x65,  /* [911] */
    (xdc_Char)0x6d,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x70,  /* [914] */
    (xdc_Char)0x68,  /* [915] */
    (xdc_Char)0x6f,  /* [916] */
    (xdc_Char)0x72,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x2e,  /* [919] */
    (xdc_Char)0x0,  /* [920] */
    (xdc_Char)0x41,  /* [921] */
    (xdc_Char)0x5f,  /* [922] */
    (xdc_Char)0x6f,  /* [923] */
    (xdc_Char)0x76,  /* [924] */
    (xdc_Char)0x65,  /* [925] */
    (xdc_Char)0x72,  /* [926] */
    (xdc_Char)0x66,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x6f,  /* [929] */
    (xdc_Char)0x77,  /* [930] */
    (xdc_Char)0x3a,  /* [931] */
    (xdc_Char)0x20,  /* [932] */
    (xdc_Char)0x43,  /* [933] */
    (xdc_Char)0x6f,  /* [934] */
    (xdc_Char)0x75,  /* [935] */
    (xdc_Char)0x6e,  /* [936] */
    (xdc_Char)0x74,  /* [937] */
    (xdc_Char)0x20,  /* [938] */
    (xdc_Char)0x68,  /* [939] */
    (xdc_Char)0x61,  /* [940] */
    (xdc_Char)0x73,  /* [941] */
    (xdc_Char)0x20,  /* [942] */
    (xdc_Char)0x65,  /* [943] */
    (xdc_Char)0x78,  /* [944] */
    (xdc_Char)0x63,  /* [945] */
    (xdc_Char)0x65,  /* [946] */
    (xdc_Char)0x65,  /* [947] */
    (xdc_Char)0x64,  /* [948] */
    (xdc_Char)0x65,  /* [949] */
    (xdc_Char)0x64,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x36,  /* [952] */
    (xdc_Char)0x35,  /* [953] */
    (xdc_Char)0x35,  /* [954] */
    (xdc_Char)0x33,  /* [955] */
    (xdc_Char)0x35,  /* [956] */
    (xdc_Char)0x20,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x6e,  /* [959] */
    (xdc_Char)0x64,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x72,  /* [962] */
    (xdc_Char)0x6f,  /* [963] */
    (xdc_Char)0x6c,  /* [964] */
    (xdc_Char)0x6c,  /* [965] */
    (xdc_Char)0x65,  /* [966] */
    (xdc_Char)0x64,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x6f,  /* [969] */
    (xdc_Char)0x76,  /* [970] */
    (xdc_Char)0x65,  /* [971] */
    (xdc_Char)0x72,  /* [972] */
    (xdc_Char)0x2e,  /* [973] */
    (xdc_Char)0x0,  /* [974] */
    (xdc_Char)0x41,  /* [975] */
    (xdc_Char)0x5f,  /* [976] */
    (xdc_Char)0x73,  /* [977] */
    (xdc_Char)0x77,  /* [978] */
    (xdc_Char)0x69,  /* [979] */
    (xdc_Char)0x44,  /* [980] */
    (xdc_Char)0x69,  /* [981] */
    (xdc_Char)0x73,  /* [982] */
    (xdc_Char)0x61,  /* [983] */
    (xdc_Char)0x62,  /* [984] */
    (xdc_Char)0x6c,  /* [985] */
    (xdc_Char)0x65,  /* [986] */
    (xdc_Char)0x64,  /* [987] */
    (xdc_Char)0x3a,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x43,  /* [990] */
    (xdc_Char)0x61,  /* [991] */
    (xdc_Char)0x6e,  /* [992] */
    (xdc_Char)0x6e,  /* [993] */
    (xdc_Char)0x6f,  /* [994] */
    (xdc_Char)0x74,  /* [995] */
    (xdc_Char)0x20,  /* [996] */
    (xdc_Char)0x63,  /* [997] */
    (xdc_Char)0x72,  /* [998] */
    (xdc_Char)0x65,  /* [999] */
    (xdc_Char)0x61,  /* [1000] */
    (xdc_Char)0x74,  /* [1001] */
    (xdc_Char)0x65,  /* [1002] */
    (xdc_Char)0x20,  /* [1003] */
    (xdc_Char)0x61,  /* [1004] */
    (xdc_Char)0x20,  /* [1005] */
    (xdc_Char)0x53,  /* [1006] */
    (xdc_Char)0x77,  /* [1007] */
    (xdc_Char)0x69,  /* [1008] */
    (xdc_Char)0x20,  /* [1009] */
    (xdc_Char)0x77,  /* [1010] */
    (xdc_Char)0x68,  /* [1011] */
    (xdc_Char)0x65,  /* [1012] */
    (xdc_Char)0x6e,  /* [1013] */
    (xdc_Char)0x20,  /* [1014] */
    (xdc_Char)0x53,  /* [1015] */
    (xdc_Char)0x77,  /* [1016] */
    (xdc_Char)0x69,  /* [1017] */
    (xdc_Char)0x20,  /* [1018] */
    (xdc_Char)0x69,  /* [1019] */
    (xdc_Char)0x73,  /* [1020] */
    (xdc_Char)0x20,  /* [1021] */
    (xdc_Char)0x64,  /* [1022] */
    (xdc_Char)0x69,  /* [1023] */
    (xdc_Char)0x73,  /* [1024] */
    (xdc_Char)0x61,  /* [1025] */
    (xdc_Char)0x62,  /* [1026] */
    (xdc_Char)0x6c,  /* [1027] */
    (xdc_Char)0x65,  /* [1028] */
    (xdc_Char)0x64,  /* [1029] */
    (xdc_Char)0x2e,  /* [1030] */
    (xdc_Char)0x0,  /* [1031] */
    (xdc_Char)0x41,  /* [1032] */
    (xdc_Char)0x5f,  /* [1033] */
    (xdc_Char)0x62,  /* [1034] */
    (xdc_Char)0x61,  /* [1035] */
    (xdc_Char)0x64,  /* [1036] */
    (xdc_Char)0x50,  /* [1037] */
    (xdc_Char)0x72,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x6f,  /* [1040] */
    (xdc_Char)0x72,  /* [1041] */
    (xdc_Char)0x69,  /* [1042] */
    (xdc_Char)0x74,  /* [1043] */
    (xdc_Char)0x79,  /* [1044] */
    (xdc_Char)0x3a,  /* [1045] */
    (xdc_Char)0x20,  /* [1046] */
    (xdc_Char)0x41,  /* [1047] */
    (xdc_Char)0x6e,  /* [1048] */
    (xdc_Char)0x20,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x6e,  /* [1051] */
    (xdc_Char)0x76,  /* [1052] */
    (xdc_Char)0x61,  /* [1053] */
    (xdc_Char)0x6c,  /* [1054] */
    (xdc_Char)0x69,  /* [1055] */
    (xdc_Char)0x64,  /* [1056] */
    (xdc_Char)0x20,  /* [1057] */
    (xdc_Char)0x53,  /* [1058] */
    (xdc_Char)0x77,  /* [1059] */
    (xdc_Char)0x69,  /* [1060] */
    (xdc_Char)0x20,  /* [1061] */
    (xdc_Char)0x70,  /* [1062] */
    (xdc_Char)0x72,  /* [1063] */
    (xdc_Char)0x69,  /* [1064] */
    (xdc_Char)0x6f,  /* [1065] */
    (xdc_Char)0x72,  /* [1066] */
    (xdc_Char)0x69,  /* [1067] */
    (xdc_Char)0x74,  /* [1068] */
    (xdc_Char)0x79,  /* [1069] */
    (xdc_Char)0x20,  /* [1070] */
    (xdc_Char)0x77,  /* [1071] */
    (xdc_Char)0x61,  /* [1072] */
    (xdc_Char)0x73,  /* [1073] */
    (xdc_Char)0x20,  /* [1074] */
    (xdc_Char)0x75,  /* [1075] */
    (xdc_Char)0x73,  /* [1076] */
    (xdc_Char)0x65,  /* [1077] */
    (xdc_Char)0x64,  /* [1078] */
    (xdc_Char)0x2e,  /* [1079] */
    (xdc_Char)0x0,  /* [1080] */
    (xdc_Char)0x41,  /* [1081] */
    (xdc_Char)0x5f,  /* [1082] */
    (xdc_Char)0x62,  /* [1083] */
    (xdc_Char)0x61,  /* [1084] */
    (xdc_Char)0x64,  /* [1085] */
    (xdc_Char)0x54,  /* [1086] */
    (xdc_Char)0x68,  /* [1087] */
    (xdc_Char)0x72,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x61,  /* [1090] */
    (xdc_Char)0x64,  /* [1091] */
    (xdc_Char)0x54,  /* [1092] */
    (xdc_Char)0x79,  /* [1093] */
    (xdc_Char)0x70,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x3a,  /* [1096] */
    (xdc_Char)0x20,  /* [1097] */
    (xdc_Char)0x43,  /* [1098] */
    (xdc_Char)0x61,  /* [1099] */
    (xdc_Char)0x6e,  /* [1100] */
    (xdc_Char)0x6e,  /* [1101] */
    (xdc_Char)0x6f,  /* [1102] */
    (xdc_Char)0x74,  /* [1103] */
    (xdc_Char)0x20,  /* [1104] */
    (xdc_Char)0x63,  /* [1105] */
    (xdc_Char)0x72,  /* [1106] */
    (xdc_Char)0x65,  /* [1107] */
    (xdc_Char)0x61,  /* [1108] */
    (xdc_Char)0x74,  /* [1109] */
    (xdc_Char)0x65,  /* [1110] */
    (xdc_Char)0x2f,  /* [1111] */
    (xdc_Char)0x64,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6c,  /* [1114] */
    (xdc_Char)0x65,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x65,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x61,  /* [1119] */
    (xdc_Char)0x20,  /* [1120] */
    (xdc_Char)0x74,  /* [1121] */
    (xdc_Char)0x61,  /* [1122] */
    (xdc_Char)0x73,  /* [1123] */
    (xdc_Char)0x6b,  /* [1124] */
    (xdc_Char)0x20,  /* [1125] */
    (xdc_Char)0x66,  /* [1126] */
    (xdc_Char)0x72,  /* [1127] */
    (xdc_Char)0x6f,  /* [1128] */
    (xdc_Char)0x6d,  /* [1129] */
    (xdc_Char)0x20,  /* [1130] */
    (xdc_Char)0x48,  /* [1131] */
    (xdc_Char)0x77,  /* [1132] */
    (xdc_Char)0x69,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x6f,  /* [1135] */
    (xdc_Char)0x72,  /* [1136] */
    (xdc_Char)0x20,  /* [1137] */
    (xdc_Char)0x53,  /* [1138] */
    (xdc_Char)0x77,  /* [1139] */
    (xdc_Char)0x69,  /* [1140] */
    (xdc_Char)0x20,  /* [1141] */
    (xdc_Char)0x74,  /* [1142] */
    (xdc_Char)0x68,  /* [1143] */
    (xdc_Char)0x72,  /* [1144] */
    (xdc_Char)0x65,  /* [1145] */
    (xdc_Char)0x61,  /* [1146] */
    (xdc_Char)0x64,  /* [1147] */
    (xdc_Char)0x2e,  /* [1148] */
    (xdc_Char)0x0,  /* [1149] */
    (xdc_Char)0x41,  /* [1150] */
    (xdc_Char)0x5f,  /* [1151] */
    (xdc_Char)0x62,  /* [1152] */
    (xdc_Char)0x61,  /* [1153] */
    (xdc_Char)0x64,  /* [1154] */
    (xdc_Char)0x54,  /* [1155] */
    (xdc_Char)0x61,  /* [1156] */
    (xdc_Char)0x73,  /* [1157] */
    (xdc_Char)0x6b,  /* [1158] */
    (xdc_Char)0x53,  /* [1159] */
    (xdc_Char)0x74,  /* [1160] */
    (xdc_Char)0x61,  /* [1161] */
    (xdc_Char)0x74,  /* [1162] */
    (xdc_Char)0x65,  /* [1163] */
    (xdc_Char)0x3a,  /* [1164] */
    (xdc_Char)0x20,  /* [1165] */
    (xdc_Char)0x43,  /* [1166] */
    (xdc_Char)0x61,  /* [1167] */
    (xdc_Char)0x6e,  /* [1168] */
    (xdc_Char)0x27,  /* [1169] */
    (xdc_Char)0x74,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x64,  /* [1172] */
    (xdc_Char)0x65,  /* [1173] */
    (xdc_Char)0x6c,  /* [1174] */
    (xdc_Char)0x65,  /* [1175] */
    (xdc_Char)0x74,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x20,  /* [1178] */
    (xdc_Char)0x61,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x74,  /* [1181] */
    (xdc_Char)0x61,  /* [1182] */
    (xdc_Char)0x73,  /* [1183] */
    (xdc_Char)0x6b,  /* [1184] */
    (xdc_Char)0x20,  /* [1185] */
    (xdc_Char)0x69,  /* [1186] */
    (xdc_Char)0x6e,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x52,  /* [1189] */
    (xdc_Char)0x55,  /* [1190] */
    (xdc_Char)0x4e,  /* [1191] */
    (xdc_Char)0x4e,  /* [1192] */
    (xdc_Char)0x49,  /* [1193] */
    (xdc_Char)0x4e,  /* [1194] */
    (xdc_Char)0x47,  /* [1195] */
    (xdc_Char)0x20,  /* [1196] */
    (xdc_Char)0x73,  /* [1197] */
    (xdc_Char)0x74,  /* [1198] */
    (xdc_Char)0x61,  /* [1199] */
    (xdc_Char)0x74,  /* [1200] */
    (xdc_Char)0x65,  /* [1201] */
    (xdc_Char)0x2e,  /* [1202] */
    (xdc_Char)0x0,  /* [1203] */
    (xdc_Char)0x41,  /* [1204] */
    (xdc_Char)0x5f,  /* [1205] */
    (xdc_Char)0x6e,  /* [1206] */
    (xdc_Char)0x6f,  /* [1207] */
    (xdc_Char)0x50,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x6e,  /* [1210] */
    (xdc_Char)0x64,  /* [1211] */
    (xdc_Char)0x45,  /* [1212] */
    (xdc_Char)0x6c,  /* [1213] */
    (xdc_Char)0x65,  /* [1214] */
    (xdc_Char)0x6d,  /* [1215] */
    (xdc_Char)0x3a,  /* [1216] */
    (xdc_Char)0x20,  /* [1217] */
    (xdc_Char)0x4e,  /* [1218] */
    (xdc_Char)0x6f,  /* [1219] */
    (xdc_Char)0x74,  /* [1220] */
    (xdc_Char)0x20,  /* [1221] */
    (xdc_Char)0x65,  /* [1222] */
    (xdc_Char)0x6e,  /* [1223] */
    (xdc_Char)0x6f,  /* [1224] */
    (xdc_Char)0x75,  /* [1225] */
    (xdc_Char)0x67,  /* [1226] */
    (xdc_Char)0x68,  /* [1227] */
    (xdc_Char)0x20,  /* [1228] */
    (xdc_Char)0x69,  /* [1229] */
    (xdc_Char)0x6e,  /* [1230] */
    (xdc_Char)0x66,  /* [1231] */
    (xdc_Char)0x6f,  /* [1232] */
    (xdc_Char)0x20,  /* [1233] */
    (xdc_Char)0x74,  /* [1234] */
    (xdc_Char)0x6f,  /* [1235] */
    (xdc_Char)0x20,  /* [1236] */
    (xdc_Char)0x64,  /* [1237] */
    (xdc_Char)0x65,  /* [1238] */
    (xdc_Char)0x6c,  /* [1239] */
    (xdc_Char)0x65,  /* [1240] */
    (xdc_Char)0x74,  /* [1241] */
    (xdc_Char)0x65,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x42,  /* [1244] */
    (xdc_Char)0x4c,  /* [1245] */
    (xdc_Char)0x4f,  /* [1246] */
    (xdc_Char)0x43,  /* [1247] */
    (xdc_Char)0x4b,  /* [1248] */
    (xdc_Char)0x45,  /* [1249] */
    (xdc_Char)0x44,  /* [1250] */
    (xdc_Char)0x20,  /* [1251] */
    (xdc_Char)0x74,  /* [1252] */
    (xdc_Char)0x61,  /* [1253] */
    (xdc_Char)0x73,  /* [1254] */
    (xdc_Char)0x6b,  /* [1255] */
    (xdc_Char)0x2e,  /* [1256] */
    (xdc_Char)0x0,  /* [1257] */
    (xdc_Char)0x41,  /* [1258] */
    (xdc_Char)0x5f,  /* [1259] */
    (xdc_Char)0x74,  /* [1260] */
    (xdc_Char)0x61,  /* [1261] */
    (xdc_Char)0x73,  /* [1262] */
    (xdc_Char)0x6b,  /* [1263] */
    (xdc_Char)0x44,  /* [1264] */
    (xdc_Char)0x69,  /* [1265] */
    (xdc_Char)0x73,  /* [1266] */
    (xdc_Char)0x61,  /* [1267] */
    (xdc_Char)0x62,  /* [1268] */
    (xdc_Char)0x6c,  /* [1269] */
    (xdc_Char)0x65,  /* [1270] */
    (xdc_Char)0x64,  /* [1271] */
    (xdc_Char)0x3a,  /* [1272] */
    (xdc_Char)0x20,  /* [1273] */
    (xdc_Char)0x43,  /* [1274] */
    (xdc_Char)0x61,  /* [1275] */
    (xdc_Char)0x6e,  /* [1276] */
    (xdc_Char)0x6e,  /* [1277] */
    (xdc_Char)0x6f,  /* [1278] */
    (xdc_Char)0x74,  /* [1279] */
    (xdc_Char)0x20,  /* [1280] */
    (xdc_Char)0x63,  /* [1281] */
    (xdc_Char)0x72,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x61,  /* [1284] */
    (xdc_Char)0x74,  /* [1285] */
    (xdc_Char)0x65,  /* [1286] */
    (xdc_Char)0x20,  /* [1287] */
    (xdc_Char)0x61,  /* [1288] */
    (xdc_Char)0x20,  /* [1289] */
    (xdc_Char)0x74,  /* [1290] */
    (xdc_Char)0x61,  /* [1291] */
    (xdc_Char)0x73,  /* [1292] */
    (xdc_Char)0x6b,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x77,  /* [1295] */
    (xdc_Char)0x68,  /* [1296] */
    (xdc_Char)0x65,  /* [1297] */
    (xdc_Char)0x6e,  /* [1298] */
    (xdc_Char)0x20,  /* [1299] */
    (xdc_Char)0x74,  /* [1300] */
    (xdc_Char)0x61,  /* [1301] */
    (xdc_Char)0x73,  /* [1302] */
    (xdc_Char)0x6b,  /* [1303] */
    (xdc_Char)0x69,  /* [1304] */
    (xdc_Char)0x6e,  /* [1305] */
    (xdc_Char)0x67,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x69,  /* [1308] */
    (xdc_Char)0x73,  /* [1309] */
    (xdc_Char)0x20,  /* [1310] */
    (xdc_Char)0x64,  /* [1311] */
    (xdc_Char)0x69,  /* [1312] */
    (xdc_Char)0x73,  /* [1313] */
    (xdc_Char)0x61,  /* [1314] */
    (xdc_Char)0x62,  /* [1315] */
    (xdc_Char)0x6c,  /* [1316] */
    (xdc_Char)0x65,  /* [1317] */
    (xdc_Char)0x64,  /* [1318] */
    (xdc_Char)0x2e,  /* [1319] */
    (xdc_Char)0x0,  /* [1320] */
    (xdc_Char)0x41,  /* [1321] */
    (xdc_Char)0x5f,  /* [1322] */
    (xdc_Char)0x62,  /* [1323] */
    (xdc_Char)0x61,  /* [1324] */
    (xdc_Char)0x64,  /* [1325] */
    (xdc_Char)0x50,  /* [1326] */
    (xdc_Char)0x72,  /* [1327] */
    (xdc_Char)0x69,  /* [1328] */
    (xdc_Char)0x6f,  /* [1329] */
    (xdc_Char)0x72,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x74,  /* [1332] */
    (xdc_Char)0x79,  /* [1333] */
    (xdc_Char)0x3a,  /* [1334] */
    (xdc_Char)0x20,  /* [1335] */
    (xdc_Char)0x41,  /* [1336] */
    (xdc_Char)0x6e,  /* [1337] */
    (xdc_Char)0x20,  /* [1338] */
    (xdc_Char)0x69,  /* [1339] */
    (xdc_Char)0x6e,  /* [1340] */
    (xdc_Char)0x76,  /* [1341] */
    (xdc_Char)0x61,  /* [1342] */
    (xdc_Char)0x6c,  /* [1343] */
    (xdc_Char)0x69,  /* [1344] */
    (xdc_Char)0x64,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x74,  /* [1347] */
    (xdc_Char)0x61,  /* [1348] */
    (xdc_Char)0x73,  /* [1349] */
    (xdc_Char)0x6b,  /* [1350] */
    (xdc_Char)0x20,  /* [1351] */
    (xdc_Char)0x70,  /* [1352] */
    (xdc_Char)0x72,  /* [1353] */
    (xdc_Char)0x69,  /* [1354] */
    (xdc_Char)0x6f,  /* [1355] */
    (xdc_Char)0x72,  /* [1356] */
    (xdc_Char)0x69,  /* [1357] */
    (xdc_Char)0x74,  /* [1358] */
    (xdc_Char)0x79,  /* [1359] */
    (xdc_Char)0x20,  /* [1360] */
    (xdc_Char)0x77,  /* [1361] */
    (xdc_Char)0x61,  /* [1362] */
    (xdc_Char)0x73,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x75,  /* [1365] */
    (xdc_Char)0x73,  /* [1366] */
    (xdc_Char)0x65,  /* [1367] */
    (xdc_Char)0x64,  /* [1368] */
    (xdc_Char)0x2e,  /* [1369] */
    (xdc_Char)0x0,  /* [1370] */
    (xdc_Char)0x41,  /* [1371] */
    (xdc_Char)0x5f,  /* [1372] */
    (xdc_Char)0x62,  /* [1373] */
    (xdc_Char)0x61,  /* [1374] */
    (xdc_Char)0x64,  /* [1375] */
    (xdc_Char)0x54,  /* [1376] */
    (xdc_Char)0x69,  /* [1377] */
    (xdc_Char)0x6d,  /* [1378] */
    (xdc_Char)0x65,  /* [1379] */
    (xdc_Char)0x6f,  /* [1380] */
    (xdc_Char)0x75,  /* [1381] */
    (xdc_Char)0x74,  /* [1382] */
    (xdc_Char)0x3a,  /* [1383] */
    (xdc_Char)0x20,  /* [1384] */
    (xdc_Char)0x43,  /* [1385] */
    (xdc_Char)0x61,  /* [1386] */
    (xdc_Char)0x6e,  /* [1387] */
    (xdc_Char)0x27,  /* [1388] */
    (xdc_Char)0x74,  /* [1389] */
    (xdc_Char)0x20,  /* [1390] */
    (xdc_Char)0x73,  /* [1391] */
    (xdc_Char)0x6c,  /* [1392] */
    (xdc_Char)0x65,  /* [1393] */
    (xdc_Char)0x65,  /* [1394] */
    (xdc_Char)0x70,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x46,  /* [1397] */
    (xdc_Char)0x4f,  /* [1398] */
    (xdc_Char)0x52,  /* [1399] */
    (xdc_Char)0x45,  /* [1400] */
    (xdc_Char)0x56,  /* [1401] */
    (xdc_Char)0x45,  /* [1402] */
    (xdc_Char)0x52,  /* [1403] */
    (xdc_Char)0x2e,  /* [1404] */
    (xdc_Char)0x0,  /* [1405] */
    (xdc_Char)0x41,  /* [1406] */
    (xdc_Char)0x5f,  /* [1407] */
    (xdc_Char)0x7a,  /* [1408] */
    (xdc_Char)0x65,  /* [1409] */
    (xdc_Char)0x72,  /* [1410] */
    (xdc_Char)0x6f,  /* [1411] */
    (xdc_Char)0x54,  /* [1412] */
    (xdc_Char)0x69,  /* [1413] */
    (xdc_Char)0x6d,  /* [1414] */
    (xdc_Char)0x65,  /* [1415] */
    (xdc_Char)0x6f,  /* [1416] */
    (xdc_Char)0x75,  /* [1417] */
    (xdc_Char)0x74,  /* [1418] */
    (xdc_Char)0x3a,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x54,  /* [1421] */
    (xdc_Char)0x69,  /* [1422] */
    (xdc_Char)0x6d,  /* [1423] */
    (xdc_Char)0x65,  /* [1424] */
    (xdc_Char)0x6f,  /* [1425] */
    (xdc_Char)0x75,  /* [1426] */
    (xdc_Char)0x74,  /* [1427] */
    (xdc_Char)0x20,  /* [1428] */
    (xdc_Char)0x76,  /* [1429] */
    (xdc_Char)0x61,  /* [1430] */
    (xdc_Char)0x6c,  /* [1431] */
    (xdc_Char)0x75,  /* [1432] */
    (xdc_Char)0x65,  /* [1433] */
    (xdc_Char)0x20,  /* [1434] */
    (xdc_Char)0x61,  /* [1435] */
    (xdc_Char)0x6e,  /* [1436] */
    (xdc_Char)0x6e,  /* [1437] */
    (xdc_Char)0x6f,  /* [1438] */
    (xdc_Char)0x74,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x62,  /* [1441] */
    (xdc_Char)0x65,  /* [1442] */
    (xdc_Char)0x20,  /* [1443] */
    (xdc_Char)0x7a,  /* [1444] */
    (xdc_Char)0x65,  /* [1445] */
    (xdc_Char)0x72,  /* [1446] */
    (xdc_Char)0x6f,  /* [1447] */
    (xdc_Char)0x0,  /* [1448] */
    (xdc_Char)0x41,  /* [1449] */
    (xdc_Char)0x5f,  /* [1450] */
    (xdc_Char)0x69,  /* [1451] */
    (xdc_Char)0x6e,  /* [1452] */
    (xdc_Char)0x76,  /* [1453] */
    (xdc_Char)0x61,  /* [1454] */
    (xdc_Char)0x6c,  /* [1455] */
    (xdc_Char)0x69,  /* [1456] */
    (xdc_Char)0x64,  /* [1457] */
    (xdc_Char)0x4b,  /* [1458] */
    (xdc_Char)0x65,  /* [1459] */
    (xdc_Char)0x79,  /* [1460] */
    (xdc_Char)0x3a,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x74,  /* [1463] */
    (xdc_Char)0x68,  /* [1464] */
    (xdc_Char)0x65,  /* [1465] */
    (xdc_Char)0x20,  /* [1466] */
    (xdc_Char)0x6b,  /* [1467] */
    (xdc_Char)0x65,  /* [1468] */
    (xdc_Char)0x79,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x6d,  /* [1471] */
    (xdc_Char)0x75,  /* [1472] */
    (xdc_Char)0x73,  /* [1473] */
    (xdc_Char)0x74,  /* [1474] */
    (xdc_Char)0x20,  /* [1475] */
    (xdc_Char)0x62,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x20,  /* [1478] */
    (xdc_Char)0x73,  /* [1479] */
    (xdc_Char)0x65,  /* [1480] */
    (xdc_Char)0x74,  /* [1481] */
    (xdc_Char)0x20,  /* [1482] */
    (xdc_Char)0x74,  /* [1483] */
    (xdc_Char)0x6f,  /* [1484] */
    (xdc_Char)0x20,  /* [1485] */
    (xdc_Char)0x61,  /* [1486] */
    (xdc_Char)0x20,  /* [1487] */
    (xdc_Char)0x6e,  /* [1488] */
    (xdc_Char)0x6f,  /* [1489] */
    (xdc_Char)0x6e,  /* [1490] */
    (xdc_Char)0x2d,  /* [1491] */
    (xdc_Char)0x64,  /* [1492] */
    (xdc_Char)0x65,  /* [1493] */
    (xdc_Char)0x66,  /* [1494] */
    (xdc_Char)0x61,  /* [1495] */
    (xdc_Char)0x75,  /* [1496] */
    (xdc_Char)0x6c,  /* [1497] */
    (xdc_Char)0x74,  /* [1498] */
    (xdc_Char)0x20,  /* [1499] */
    (xdc_Char)0x76,  /* [1500] */
    (xdc_Char)0x61,  /* [1501] */
    (xdc_Char)0x6c,  /* [1502] */
    (xdc_Char)0x75,  /* [1503] */
    (xdc_Char)0x65,  /* [1504] */
    (xdc_Char)0x0,  /* [1505] */
    (xdc_Char)0x41,  /* [1506] */
    (xdc_Char)0x5f,  /* [1507] */
    (xdc_Char)0x62,  /* [1508] */
    (xdc_Char)0x61,  /* [1509] */
    (xdc_Char)0x64,  /* [1510] */
    (xdc_Char)0x43,  /* [1511] */
    (xdc_Char)0x6f,  /* [1512] */
    (xdc_Char)0x6e,  /* [1513] */
    (xdc_Char)0x74,  /* [1514] */
    (xdc_Char)0x65,  /* [1515] */
    (xdc_Char)0x78,  /* [1516] */
    (xdc_Char)0x74,  /* [1517] */
    (xdc_Char)0x3a,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x62,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x64,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x63,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x6c,  /* [1526] */
    (xdc_Char)0x6c,  /* [1527] */
    (xdc_Char)0x69,  /* [1528] */
    (xdc_Char)0x6e,  /* [1529] */
    (xdc_Char)0x67,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x63,  /* [1532] */
    (xdc_Char)0x6f,  /* [1533] */
    (xdc_Char)0x6e,  /* [1534] */
    (xdc_Char)0x74,  /* [1535] */
    (xdc_Char)0x65,  /* [1536] */
    (xdc_Char)0x78,  /* [1537] */
    (xdc_Char)0x74,  /* [1538] */
    (xdc_Char)0x2e,  /* [1539] */
    (xdc_Char)0x20,  /* [1540] */
    (xdc_Char)0x4d,  /* [1541] */
    (xdc_Char)0x61,  /* [1542] */
    (xdc_Char)0x79,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x6e,  /* [1545] */
    (xdc_Char)0x6f,  /* [1546] */
    (xdc_Char)0x74,  /* [1547] */
    (xdc_Char)0x20,  /* [1548] */
    (xdc_Char)0x62,  /* [1549] */
    (xdc_Char)0x65,  /* [1550] */
    (xdc_Char)0x20,  /* [1551] */
    (xdc_Char)0x65,  /* [1552] */
    (xdc_Char)0x6e,  /* [1553] */
    (xdc_Char)0x74,  /* [1554] */
    (xdc_Char)0x65,  /* [1555] */
    (xdc_Char)0x72,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x64,  /* [1558] */
    (xdc_Char)0x20,  /* [1559] */
    (xdc_Char)0x66,  /* [1560] */
    (xdc_Char)0x72,  /* [1561] */
    (xdc_Char)0x6f,  /* [1562] */
    (xdc_Char)0x6d,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x61,  /* [1565] */
    (xdc_Char)0x20,  /* [1566] */
    (xdc_Char)0x68,  /* [1567] */
    (xdc_Char)0x61,  /* [1568] */
    (xdc_Char)0x72,  /* [1569] */
    (xdc_Char)0x64,  /* [1570] */
    (xdc_Char)0x77,  /* [1571] */
    (xdc_Char)0x61,  /* [1572] */
    (xdc_Char)0x72,  /* [1573] */
    (xdc_Char)0x65,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x69,  /* [1576] */
    (xdc_Char)0x6e,  /* [1577] */
    (xdc_Char)0x74,  /* [1578] */
    (xdc_Char)0x65,  /* [1579] */
    (xdc_Char)0x72,  /* [1580] */
    (xdc_Char)0x72,  /* [1581] */
    (xdc_Char)0x75,  /* [1582] */
    (xdc_Char)0x70,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x20,  /* [1585] */
    (xdc_Char)0x74,  /* [1586] */
    (xdc_Char)0x68,  /* [1587] */
    (xdc_Char)0x72,  /* [1588] */
    (xdc_Char)0x65,  /* [1589] */
    (xdc_Char)0x61,  /* [1590] */
    (xdc_Char)0x64,  /* [1591] */
    (xdc_Char)0x2e,  /* [1592] */
    (xdc_Char)0x0,  /* [1593] */
    (xdc_Char)0x41,  /* [1594] */
    (xdc_Char)0x5f,  /* [1595] */
    (xdc_Char)0x62,  /* [1596] */
    (xdc_Char)0x61,  /* [1597] */
    (xdc_Char)0x64,  /* [1598] */
    (xdc_Char)0x43,  /* [1599] */
    (xdc_Char)0x6f,  /* [1600] */
    (xdc_Char)0x6e,  /* [1601] */
    (xdc_Char)0x74,  /* [1602] */
    (xdc_Char)0x65,  /* [1603] */
    (xdc_Char)0x78,  /* [1604] */
    (xdc_Char)0x74,  /* [1605] */
    (xdc_Char)0x3a,  /* [1606] */
    (xdc_Char)0x20,  /* [1607] */
    (xdc_Char)0x62,  /* [1608] */
    (xdc_Char)0x61,  /* [1609] */
    (xdc_Char)0x64,  /* [1610] */
    (xdc_Char)0x20,  /* [1611] */
    (xdc_Char)0x63,  /* [1612] */
    (xdc_Char)0x61,  /* [1613] */
    (xdc_Char)0x6c,  /* [1614] */
    (xdc_Char)0x6c,  /* [1615] */
    (xdc_Char)0x69,  /* [1616] */
    (xdc_Char)0x6e,  /* [1617] */
    (xdc_Char)0x67,  /* [1618] */
    (xdc_Char)0x20,  /* [1619] */
    (xdc_Char)0x63,  /* [1620] */
    (xdc_Char)0x6f,  /* [1621] */
    (xdc_Char)0x6e,  /* [1622] */
    (xdc_Char)0x74,  /* [1623] */
    (xdc_Char)0x65,  /* [1624] */
    (xdc_Char)0x78,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x2e,  /* [1627] */
    (xdc_Char)0x20,  /* [1628] */
    (xdc_Char)0x4d,  /* [1629] */
    (xdc_Char)0x61,  /* [1630] */
    (xdc_Char)0x79,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x6e,  /* [1633] */
    (xdc_Char)0x6f,  /* [1634] */
    (xdc_Char)0x74,  /* [1635] */
    (xdc_Char)0x20,  /* [1636] */
    (xdc_Char)0x62,  /* [1637] */
    (xdc_Char)0x65,  /* [1638] */
    (xdc_Char)0x20,  /* [1639] */
    (xdc_Char)0x65,  /* [1640] */
    (xdc_Char)0x6e,  /* [1641] */
    (xdc_Char)0x74,  /* [1642] */
    (xdc_Char)0x65,  /* [1643] */
    (xdc_Char)0x72,  /* [1644] */
    (xdc_Char)0x65,  /* [1645] */
    (xdc_Char)0x64,  /* [1646] */
    (xdc_Char)0x20,  /* [1647] */
    (xdc_Char)0x66,  /* [1648] */
    (xdc_Char)0x72,  /* [1649] */
    (xdc_Char)0x6f,  /* [1650] */
    (xdc_Char)0x6d,  /* [1651] */
    (xdc_Char)0x20,  /* [1652] */
    (xdc_Char)0x61,  /* [1653] */
    (xdc_Char)0x20,  /* [1654] */
    (xdc_Char)0x73,  /* [1655] */
    (xdc_Char)0x6f,  /* [1656] */
    (xdc_Char)0x66,  /* [1657] */
    (xdc_Char)0x74,  /* [1658] */
    (xdc_Char)0x77,  /* [1659] */
    (xdc_Char)0x61,  /* [1660] */
    (xdc_Char)0x72,  /* [1661] */
    (xdc_Char)0x65,  /* [1662] */
    (xdc_Char)0x20,  /* [1663] */
    (xdc_Char)0x6f,  /* [1664] */
    (xdc_Char)0x72,  /* [1665] */
    (xdc_Char)0x20,  /* [1666] */
    (xdc_Char)0x68,  /* [1667] */
    (xdc_Char)0x61,  /* [1668] */
    (xdc_Char)0x72,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x77,  /* [1671] */
    (xdc_Char)0x61,  /* [1672] */
    (xdc_Char)0x72,  /* [1673] */
    (xdc_Char)0x65,  /* [1674] */
    (xdc_Char)0x20,  /* [1675] */
    (xdc_Char)0x69,  /* [1676] */
    (xdc_Char)0x6e,  /* [1677] */
    (xdc_Char)0x74,  /* [1678] */
    (xdc_Char)0x65,  /* [1679] */
    (xdc_Char)0x72,  /* [1680] */
    (xdc_Char)0x72,  /* [1681] */
    (xdc_Char)0x75,  /* [1682] */
    (xdc_Char)0x70,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x20,  /* [1685] */
    (xdc_Char)0x74,  /* [1686] */
    (xdc_Char)0x68,  /* [1687] */
    (xdc_Char)0x72,  /* [1688] */
    (xdc_Char)0x65,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x64,  /* [1691] */
    (xdc_Char)0x2e,  /* [1692] */
    (xdc_Char)0x0,  /* [1693] */
    (xdc_Char)0x41,  /* [1694] */
    (xdc_Char)0x5f,  /* [1695] */
    (xdc_Char)0x62,  /* [1696] */
    (xdc_Char)0x61,  /* [1697] */
    (xdc_Char)0x64,  /* [1698] */
    (xdc_Char)0x43,  /* [1699] */
    (xdc_Char)0x6f,  /* [1700] */
    (xdc_Char)0x6e,  /* [1701] */
    (xdc_Char)0x74,  /* [1702] */
    (xdc_Char)0x65,  /* [1703] */
    (xdc_Char)0x78,  /* [1704] */
    (xdc_Char)0x74,  /* [1705] */
    (xdc_Char)0x3a,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x62,  /* [1708] */
    (xdc_Char)0x61,  /* [1709] */
    (xdc_Char)0x64,  /* [1710] */
    (xdc_Char)0x20,  /* [1711] */
    (xdc_Char)0x63,  /* [1712] */
    (xdc_Char)0x61,  /* [1713] */
    (xdc_Char)0x6c,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x69,  /* [1716] */
    (xdc_Char)0x6e,  /* [1717] */
    (xdc_Char)0x67,  /* [1718] */
    (xdc_Char)0x20,  /* [1719] */
    (xdc_Char)0x63,  /* [1720] */
    (xdc_Char)0x6f,  /* [1721] */
    (xdc_Char)0x6e,  /* [1722] */
    (xdc_Char)0x74,  /* [1723] */
    (xdc_Char)0x65,  /* [1724] */
    (xdc_Char)0x78,  /* [1725] */
    (xdc_Char)0x74,  /* [1726] */
    (xdc_Char)0x2e,  /* [1727] */
    (xdc_Char)0x20,  /* [1728] */
    (xdc_Char)0x53,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x20,  /* [1732] */
    (xdc_Char)0x47,  /* [1733] */
    (xdc_Char)0x61,  /* [1734] */
    (xdc_Char)0x74,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x4d,  /* [1737] */
    (xdc_Char)0x75,  /* [1738] */
    (xdc_Char)0x74,  /* [1739] */
    (xdc_Char)0x65,  /* [1740] */
    (xdc_Char)0x78,  /* [1741] */
    (xdc_Char)0x50,  /* [1742] */
    (xdc_Char)0x72,  /* [1743] */
    (xdc_Char)0x69,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x41,  /* [1746] */
    (xdc_Char)0x50,  /* [1747] */
    (xdc_Char)0x49,  /* [1748] */
    (xdc_Char)0x20,  /* [1749] */
    (xdc_Char)0x64,  /* [1750] */
    (xdc_Char)0x6f,  /* [1751] */
    (xdc_Char)0x63,  /* [1752] */
    (xdc_Char)0x20,  /* [1753] */
    (xdc_Char)0x66,  /* [1754] */
    (xdc_Char)0x6f,  /* [1755] */
    (xdc_Char)0x72,  /* [1756] */
    (xdc_Char)0x20,  /* [1757] */
    (xdc_Char)0x64,  /* [1758] */
    (xdc_Char)0x65,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x69,  /* [1762] */
    (xdc_Char)0x6c,  /* [1763] */
    (xdc_Char)0x73,  /* [1764] */
    (xdc_Char)0x2e,  /* [1765] */
    (xdc_Char)0x0,  /* [1766] */
    (xdc_Char)0x41,  /* [1767] */
    (xdc_Char)0x5f,  /* [1768] */
    (xdc_Char)0x62,  /* [1769] */
    (xdc_Char)0x61,  /* [1770] */
    (xdc_Char)0x64,  /* [1771] */
    (xdc_Char)0x43,  /* [1772] */
    (xdc_Char)0x6f,  /* [1773] */
    (xdc_Char)0x6e,  /* [1774] */
    (xdc_Char)0x74,  /* [1775] */
    (xdc_Char)0x65,  /* [1776] */
    (xdc_Char)0x78,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x3a,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x62,  /* [1781] */
    (xdc_Char)0x61,  /* [1782] */
    (xdc_Char)0x64,  /* [1783] */
    (xdc_Char)0x20,  /* [1784] */
    (xdc_Char)0x63,  /* [1785] */
    (xdc_Char)0x61,  /* [1786] */
    (xdc_Char)0x6c,  /* [1787] */
    (xdc_Char)0x6c,  /* [1788] */
    (xdc_Char)0x69,  /* [1789] */
    (xdc_Char)0x6e,  /* [1790] */
    (xdc_Char)0x67,  /* [1791] */
    (xdc_Char)0x20,  /* [1792] */
    (xdc_Char)0x63,  /* [1793] */
    (xdc_Char)0x6f,  /* [1794] */
    (xdc_Char)0x6e,  /* [1795] */
    (xdc_Char)0x74,  /* [1796] */
    (xdc_Char)0x65,  /* [1797] */
    (xdc_Char)0x78,  /* [1798] */
    (xdc_Char)0x74,  /* [1799] */
    (xdc_Char)0x2e,  /* [1800] */
    (xdc_Char)0x20,  /* [1801] */
    (xdc_Char)0x53,  /* [1802] */
    (xdc_Char)0x65,  /* [1803] */
    (xdc_Char)0x65,  /* [1804] */
    (xdc_Char)0x20,  /* [1805] */
    (xdc_Char)0x47,  /* [1806] */
    (xdc_Char)0x61,  /* [1807] */
    (xdc_Char)0x74,  /* [1808] */
    (xdc_Char)0x65,  /* [1809] */
    (xdc_Char)0x4d,  /* [1810] */
    (xdc_Char)0x75,  /* [1811] */
    (xdc_Char)0x74,  /* [1812] */
    (xdc_Char)0x65,  /* [1813] */
    (xdc_Char)0x78,  /* [1814] */
    (xdc_Char)0x20,  /* [1815] */
    (xdc_Char)0x41,  /* [1816] */
    (xdc_Char)0x50,  /* [1817] */
    (xdc_Char)0x49,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x64,  /* [1820] */
    (xdc_Char)0x6f,  /* [1821] */
    (xdc_Char)0x63,  /* [1822] */
    (xdc_Char)0x20,  /* [1823] */
    (xdc_Char)0x66,  /* [1824] */
    (xdc_Char)0x6f,  /* [1825] */
    (xdc_Char)0x72,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x64,  /* [1828] */
    (xdc_Char)0x65,  /* [1829] */
    (xdc_Char)0x74,  /* [1830] */
    (xdc_Char)0x61,  /* [1831] */
    (xdc_Char)0x69,  /* [1832] */
    (xdc_Char)0x6c,  /* [1833] */
    (xdc_Char)0x73,  /* [1834] */
    (xdc_Char)0x2e,  /* [1835] */
    (xdc_Char)0x0,  /* [1836] */
    (xdc_Char)0x41,  /* [1837] */
    (xdc_Char)0x5f,  /* [1838] */
    (xdc_Char)0x6e,  /* [1839] */
    (xdc_Char)0x6f,  /* [1840] */
    (xdc_Char)0x74,  /* [1841] */
    (xdc_Char)0x41,  /* [1842] */
    (xdc_Char)0x76,  /* [1843] */
    (xdc_Char)0x61,  /* [1844] */
    (xdc_Char)0x69,  /* [1845] */
    (xdc_Char)0x6c,  /* [1846] */
    (xdc_Char)0x61,  /* [1847] */
    (xdc_Char)0x62,  /* [1848] */
    (xdc_Char)0x6c,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x3a,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x73,  /* [1853] */
    (xdc_Char)0x74,  /* [1854] */
    (xdc_Char)0x61,  /* [1855] */
    (xdc_Char)0x74,  /* [1856] */
    (xdc_Char)0x69,  /* [1857] */
    (xdc_Char)0x63,  /* [1858] */
    (xdc_Char)0x20,  /* [1859] */
    (xdc_Char)0x63,  /* [1860] */
    (xdc_Char)0x72,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x61,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x65,  /* [1865] */
    (xdc_Char)0x64,  /* [1866] */
    (xdc_Char)0x20,  /* [1867] */
    (xdc_Char)0x74,  /* [1868] */
    (xdc_Char)0x69,  /* [1869] */
    (xdc_Char)0x6d,  /* [1870] */
    (xdc_Char)0x65,  /* [1871] */
    (xdc_Char)0x72,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x6e,  /* [1874] */
    (xdc_Char)0x6f,  /* [1875] */
    (xdc_Char)0x74,  /* [1876] */
    (xdc_Char)0x20,  /* [1877] */
    (xdc_Char)0x61,  /* [1878] */
    (xdc_Char)0x76,  /* [1879] */
    (xdc_Char)0x61,  /* [1880] */
    (xdc_Char)0x69,  /* [1881] */
    (xdc_Char)0x6c,  /* [1882] */
    (xdc_Char)0x61,  /* [1883] */
    (xdc_Char)0x62,  /* [1884] */
    (xdc_Char)0x6c,  /* [1885] */
    (xdc_Char)0x65,  /* [1886] */
    (xdc_Char)0x0,  /* [1887] */
    (xdc_Char)0x62,  /* [1888] */
    (xdc_Char)0x75,  /* [1889] */
    (xdc_Char)0x66,  /* [1890] */
    (xdc_Char)0x20,  /* [1891] */
    (xdc_Char)0x70,  /* [1892] */
    (xdc_Char)0x61,  /* [1893] */
    (xdc_Char)0x72,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x6d,  /* [1896] */
    (xdc_Char)0x65,  /* [1897] */
    (xdc_Char)0x74,  /* [1898] */
    (xdc_Char)0x65,  /* [1899] */
    (xdc_Char)0x72,  /* [1900] */
    (xdc_Char)0x20,  /* [1901] */
    (xdc_Char)0x63,  /* [1902] */
    (xdc_Char)0x61,  /* [1903] */
    (xdc_Char)0x6e,  /* [1904] */
    (xdc_Char)0x6e,  /* [1905] */
    (xdc_Char)0x6f,  /* [1906] */
    (xdc_Char)0x74,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x62,  /* [1909] */
    (xdc_Char)0x65,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x6e,  /* [1912] */
    (xdc_Char)0x75,  /* [1913] */
    (xdc_Char)0x6c,  /* [1914] */
    (xdc_Char)0x6c,  /* [1915] */
    (xdc_Char)0x0,  /* [1916] */
    (xdc_Char)0x62,  /* [1917] */
    (xdc_Char)0x75,  /* [1918] */
    (xdc_Char)0x66,  /* [1919] */
    (xdc_Char)0x20,  /* [1920] */
    (xdc_Char)0x6e,  /* [1921] */
    (xdc_Char)0x6f,  /* [1922] */
    (xdc_Char)0x74,  /* [1923] */
    (xdc_Char)0x20,  /* [1924] */
    (xdc_Char)0x70,  /* [1925] */
    (xdc_Char)0x72,  /* [1926] */
    (xdc_Char)0x6f,  /* [1927] */
    (xdc_Char)0x70,  /* [1928] */
    (xdc_Char)0x65,  /* [1929] */
    (xdc_Char)0x72,  /* [1930] */
    (xdc_Char)0x6c,  /* [1931] */
    (xdc_Char)0x79,  /* [1932] */
    (xdc_Char)0x20,  /* [1933] */
    (xdc_Char)0x61,  /* [1934] */
    (xdc_Char)0x6c,  /* [1935] */
    (xdc_Char)0x69,  /* [1936] */
    (xdc_Char)0x67,  /* [1937] */
    (xdc_Char)0x6e,  /* [1938] */
    (xdc_Char)0x65,  /* [1939] */
    (xdc_Char)0x64,  /* [1940] */
    (xdc_Char)0x0,  /* [1941] */
    (xdc_Char)0x61,  /* [1942] */
    (xdc_Char)0x6c,  /* [1943] */
    (xdc_Char)0x69,  /* [1944] */
    (xdc_Char)0x67,  /* [1945] */
    (xdc_Char)0x6e,  /* [1946] */
    (xdc_Char)0x20,  /* [1947] */
    (xdc_Char)0x70,  /* [1948] */
    (xdc_Char)0x61,  /* [1949] */
    (xdc_Char)0x72,  /* [1950] */
    (xdc_Char)0x61,  /* [1951] */
    (xdc_Char)0x6d,  /* [1952] */
    (xdc_Char)0x65,  /* [1953] */
    (xdc_Char)0x74,  /* [1954] */
    (xdc_Char)0x65,  /* [1955] */
    (xdc_Char)0x72,  /* [1956] */
    (xdc_Char)0x20,  /* [1957] */
    (xdc_Char)0x6d,  /* [1958] */
    (xdc_Char)0x75,  /* [1959] */
    (xdc_Char)0x73,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x20,  /* [1962] */
    (xdc_Char)0x62,  /* [1963] */
    (xdc_Char)0x65,  /* [1964] */
    (xdc_Char)0x20,  /* [1965] */
    (xdc_Char)0x30,  /* [1966] */
    (xdc_Char)0x20,  /* [1967] */
    (xdc_Char)0x6f,  /* [1968] */
    (xdc_Char)0x72,  /* [1969] */
    (xdc_Char)0x20,  /* [1970] */
    (xdc_Char)0x61,  /* [1971] */
    (xdc_Char)0x20,  /* [1972] */
    (xdc_Char)0x70,  /* [1973] */
    (xdc_Char)0x6f,  /* [1974] */
    (xdc_Char)0x77,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x72,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x6f,  /* [1979] */
    (xdc_Char)0x66,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x32,  /* [1982] */
    (xdc_Char)0x20,  /* [1983] */
    (xdc_Char)0x3e,  /* [1984] */
    (xdc_Char)0x3d,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x74,  /* [1987] */
    (xdc_Char)0x68,  /* [1988] */
    (xdc_Char)0x65,  /* [1989] */
    (xdc_Char)0x20,  /* [1990] */
    (xdc_Char)0x76,  /* [1991] */
    (xdc_Char)0x61,  /* [1992] */
    (xdc_Char)0x6c,  /* [1993] */
    (xdc_Char)0x75,  /* [1994] */
    (xdc_Char)0x65,  /* [1995] */
    (xdc_Char)0x20,  /* [1996] */
    (xdc_Char)0x6f,  /* [1997] */
    (xdc_Char)0x66,  /* [1998] */
    (xdc_Char)0x20,  /* [1999] */
    (xdc_Char)0x4d,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x6d,  /* [2002] */
    (xdc_Char)0x6f,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x79,  /* [2005] */
    (xdc_Char)0x5f,  /* [2006] */
    (xdc_Char)0x67,  /* [2007] */
    (xdc_Char)0x65,  /* [2008] */
    (xdc_Char)0x74,  /* [2009] */
    (xdc_Char)0x4d,  /* [2010] */
    (xdc_Char)0x61,  /* [2011] */
    (xdc_Char)0x78,  /* [2012] */
    (xdc_Char)0x44,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x66,  /* [2015] */
    (xdc_Char)0x61,  /* [2016] */
    (xdc_Char)0x75,  /* [2017] */
    (xdc_Char)0x6c,  /* [2018] */
    (xdc_Char)0x74,  /* [2019] */
    (xdc_Char)0x54,  /* [2020] */
    (xdc_Char)0x79,  /* [2021] */
    (xdc_Char)0x70,  /* [2022] */
    (xdc_Char)0x65,  /* [2023] */
    (xdc_Char)0x41,  /* [2024] */
    (xdc_Char)0x6c,  /* [2025] */
    (xdc_Char)0x69,  /* [2026] */
    (xdc_Char)0x67,  /* [2027] */
    (xdc_Char)0x6e,  /* [2028] */
    (xdc_Char)0x28,  /* [2029] */
    (xdc_Char)0x29,  /* [2030] */
    (xdc_Char)0x0,  /* [2031] */
    (xdc_Char)0x62,  /* [2032] */
    (xdc_Char)0x6c,  /* [2033] */
    (xdc_Char)0x6f,  /* [2034] */
    (xdc_Char)0x63,  /* [2035] */
    (xdc_Char)0x6b,  /* [2036] */
    (xdc_Char)0x53,  /* [2037] */
    (xdc_Char)0x69,  /* [2038] */
    (xdc_Char)0x7a,  /* [2039] */
    (xdc_Char)0x65,  /* [2040] */
    (xdc_Char)0x20,  /* [2041] */
    (xdc_Char)0x63,  /* [2042] */
    (xdc_Char)0x61,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x6e,  /* [2045] */
    (xdc_Char)0x6f,  /* [2046] */
    (xdc_Char)0x74,  /* [2047] */
    (xdc_Char)0x20,  /* [2048] */
    (xdc_Char)0x62,  /* [2049] */
    (xdc_Char)0x65,  /* [2050] */
    (xdc_Char)0x20,  /* [2051] */
    (xdc_Char)0x7a,  /* [2052] */
    (xdc_Char)0x65,  /* [2053] */
    (xdc_Char)0x72,  /* [2054] */
    (xdc_Char)0x6f,  /* [2055] */
    (xdc_Char)0x0,  /* [2056] */
    (xdc_Char)0x6e,  /* [2057] */
    (xdc_Char)0x75,  /* [2058] */
    (xdc_Char)0x6d,  /* [2059] */
    (xdc_Char)0x42,  /* [2060] */
    (xdc_Char)0x6c,  /* [2061] */
    (xdc_Char)0x6f,  /* [2062] */
    (xdc_Char)0x63,  /* [2063] */
    (xdc_Char)0x6b,  /* [2064] */
    (xdc_Char)0x73,  /* [2065] */
    (xdc_Char)0x20,  /* [2066] */
    (xdc_Char)0x63,  /* [2067] */
    (xdc_Char)0x61,  /* [2068] */
    (xdc_Char)0x6e,  /* [2069] */
    (xdc_Char)0x6e,  /* [2070] */
    (xdc_Char)0x6f,  /* [2071] */
    (xdc_Char)0x74,  /* [2072] */
    (xdc_Char)0x20,  /* [2073] */
    (xdc_Char)0x62,  /* [2074] */
    (xdc_Char)0x65,  /* [2075] */
    (xdc_Char)0x20,  /* [2076] */
    (xdc_Char)0x7a,  /* [2077] */
    (xdc_Char)0x65,  /* [2078] */
    (xdc_Char)0x72,  /* [2079] */
    (xdc_Char)0x6f,  /* [2080] */
    (xdc_Char)0x0,  /* [2081] */
    (xdc_Char)0x62,  /* [2082] */
    (xdc_Char)0x75,  /* [2083] */
    (xdc_Char)0x66,  /* [2084] */
    (xdc_Char)0x53,  /* [2085] */
    (xdc_Char)0x69,  /* [2086] */
    (xdc_Char)0x7a,  /* [2087] */
    (xdc_Char)0x65,  /* [2088] */
    (xdc_Char)0x20,  /* [2089] */
    (xdc_Char)0x63,  /* [2090] */
    (xdc_Char)0x61,  /* [2091] */
    (xdc_Char)0x6e,  /* [2092] */
    (xdc_Char)0x6e,  /* [2093] */
    (xdc_Char)0x6f,  /* [2094] */
    (xdc_Char)0x74,  /* [2095] */
    (xdc_Char)0x20,  /* [2096] */
    (xdc_Char)0x62,  /* [2097] */
    (xdc_Char)0x65,  /* [2098] */
    (xdc_Char)0x20,  /* [2099] */
    (xdc_Char)0x7a,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x72,  /* [2102] */
    (xdc_Char)0x6f,  /* [2103] */
    (xdc_Char)0x0,  /* [2104] */
    (xdc_Char)0x48,  /* [2105] */
    (xdc_Char)0x65,  /* [2106] */
    (xdc_Char)0x61,  /* [2107] */
    (xdc_Char)0x70,  /* [2108] */
    (xdc_Char)0x42,  /* [2109] */
    (xdc_Char)0x75,  /* [2110] */
    (xdc_Char)0x66,  /* [2111] */
    (xdc_Char)0x5f,  /* [2112] */
    (xdc_Char)0x63,  /* [2113] */
    (xdc_Char)0x72,  /* [2114] */
    (xdc_Char)0x65,  /* [2115] */
    (xdc_Char)0x61,  /* [2116] */
    (xdc_Char)0x74,  /* [2117] */
    (xdc_Char)0x65,  /* [2118] */
    (xdc_Char)0x27,  /* [2119] */
    (xdc_Char)0x73,  /* [2120] */
    (xdc_Char)0x20,  /* [2121] */
    (xdc_Char)0x62,  /* [2122] */
    (xdc_Char)0x75,  /* [2123] */
    (xdc_Char)0x66,  /* [2124] */
    (xdc_Char)0x53,  /* [2125] */
    (xdc_Char)0x69,  /* [2126] */
    (xdc_Char)0x7a,  /* [2127] */
    (xdc_Char)0x65,  /* [2128] */
    (xdc_Char)0x20,  /* [2129] */
    (xdc_Char)0x70,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x72,  /* [2132] */
    (xdc_Char)0x61,  /* [2133] */
    (xdc_Char)0x6d,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x74,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x72,  /* [2138] */
    (xdc_Char)0x20,  /* [2139] */
    (xdc_Char)0x69,  /* [2140] */
    (xdc_Char)0x73,  /* [2141] */
    (xdc_Char)0x20,  /* [2142] */
    (xdc_Char)0x69,  /* [2143] */
    (xdc_Char)0x6e,  /* [2144] */
    (xdc_Char)0x76,  /* [2145] */
    (xdc_Char)0x61,  /* [2146] */
    (xdc_Char)0x6c,  /* [2147] */
    (xdc_Char)0x69,  /* [2148] */
    (xdc_Char)0x64,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x28,  /* [2151] */
    (xdc_Char)0x74,  /* [2152] */
    (xdc_Char)0x6f,  /* [2153] */
    (xdc_Char)0x6f,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x73,  /* [2156] */
    (xdc_Char)0x6d,  /* [2157] */
    (xdc_Char)0x61,  /* [2158] */
    (xdc_Char)0x6c,  /* [2159] */
    (xdc_Char)0x6c,  /* [2160] */
    (xdc_Char)0x29,  /* [2161] */
    (xdc_Char)0x0,  /* [2162] */
    (xdc_Char)0x43,  /* [2163] */
    (xdc_Char)0x61,  /* [2164] */
    (xdc_Char)0x6e,  /* [2165] */
    (xdc_Char)0x6e,  /* [2166] */
    (xdc_Char)0x6f,  /* [2167] */
    (xdc_Char)0x74,  /* [2168] */
    (xdc_Char)0x20,  /* [2169] */
    (xdc_Char)0x63,  /* [2170] */
    (xdc_Char)0x61,  /* [2171] */
    (xdc_Char)0x6c,  /* [2172] */
    (xdc_Char)0x6c,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x48,  /* [2175] */
    (xdc_Char)0x65,  /* [2176] */
    (xdc_Char)0x61,  /* [2177] */
    (xdc_Char)0x70,  /* [2178] */
    (xdc_Char)0x42,  /* [2179] */
    (xdc_Char)0x75,  /* [2180] */
    (xdc_Char)0x66,  /* [2181] */
    (xdc_Char)0x5f,  /* [2182] */
    (xdc_Char)0x66,  /* [2183] */
    (xdc_Char)0x72,  /* [2184] */
    (xdc_Char)0x65,  /* [2185] */
    (xdc_Char)0x65,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x77,  /* [2188] */
    (xdc_Char)0x68,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x6e,  /* [2191] */
    (xdc_Char)0x20,  /* [2192] */
    (xdc_Char)0x6e,  /* [2193] */
    (xdc_Char)0x6f,  /* [2194] */
    (xdc_Char)0x20,  /* [2195] */
    (xdc_Char)0x62,  /* [2196] */
    (xdc_Char)0x6c,  /* [2197] */
    (xdc_Char)0x6f,  /* [2198] */
    (xdc_Char)0x63,  /* [2199] */
    (xdc_Char)0x6b,  /* [2200] */
    (xdc_Char)0x73,  /* [2201] */
    (xdc_Char)0x20,  /* [2202] */
    (xdc_Char)0x68,  /* [2203] */
    (xdc_Char)0x61,  /* [2204] */
    (xdc_Char)0x76,  /* [2205] */
    (xdc_Char)0x65,  /* [2206] */
    (xdc_Char)0x20,  /* [2207] */
    (xdc_Char)0x62,  /* [2208] */
    (xdc_Char)0x65,  /* [2209] */
    (xdc_Char)0x65,  /* [2210] */
    (xdc_Char)0x6e,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x61,  /* [2213] */
    (xdc_Char)0x6c,  /* [2214] */
    (xdc_Char)0x6c,  /* [2215] */
    (xdc_Char)0x6f,  /* [2216] */
    (xdc_Char)0x63,  /* [2217] */
    (xdc_Char)0x61,  /* [2218] */
    (xdc_Char)0x74,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x64,  /* [2221] */
    (xdc_Char)0x0,  /* [2222] */
    (xdc_Char)0x41,  /* [2223] */
    (xdc_Char)0x5f,  /* [2224] */
    (xdc_Char)0x69,  /* [2225] */
    (xdc_Char)0x6e,  /* [2226] */
    (xdc_Char)0x76,  /* [2227] */
    (xdc_Char)0x61,  /* [2228] */
    (xdc_Char)0x6c,  /* [2229] */
    (xdc_Char)0x69,  /* [2230] */
    (xdc_Char)0x64,  /* [2231] */
    (xdc_Char)0x46,  /* [2232] */
    (xdc_Char)0x72,  /* [2233] */
    (xdc_Char)0x65,  /* [2234] */
    (xdc_Char)0x65,  /* [2235] */
    (xdc_Char)0x3a,  /* [2236] */
    (xdc_Char)0x20,  /* [2237] */
    (xdc_Char)0x49,  /* [2238] */
    (xdc_Char)0x6e,  /* [2239] */
    (xdc_Char)0x76,  /* [2240] */
    (xdc_Char)0x61,  /* [2241] */
    (xdc_Char)0x6c,  /* [2242] */
    (xdc_Char)0x69,  /* [2243] */
    (xdc_Char)0x64,  /* [2244] */
    (xdc_Char)0x20,  /* [2245] */
    (xdc_Char)0x66,  /* [2246] */
    (xdc_Char)0x72,  /* [2247] */
    (xdc_Char)0x65,  /* [2248] */
    (xdc_Char)0x65,  /* [2249] */
    (xdc_Char)0x0,  /* [2250] */
    (xdc_Char)0x41,  /* [2251] */
    (xdc_Char)0x5f,  /* [2252] */
    (xdc_Char)0x7a,  /* [2253] */
    (xdc_Char)0x65,  /* [2254] */
    (xdc_Char)0x72,  /* [2255] */
    (xdc_Char)0x6f,  /* [2256] */
    (xdc_Char)0x42,  /* [2257] */
    (xdc_Char)0x6c,  /* [2258] */
    (xdc_Char)0x6f,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x6b,  /* [2261] */
    (xdc_Char)0x3a,  /* [2262] */
    (xdc_Char)0x20,  /* [2263] */
    (xdc_Char)0x43,  /* [2264] */
    (xdc_Char)0x61,  /* [2265] */
    (xdc_Char)0x6e,  /* [2266] */
    (xdc_Char)0x6e,  /* [2267] */
    (xdc_Char)0x6f,  /* [2268] */
    (xdc_Char)0x74,  /* [2269] */
    (xdc_Char)0x20,  /* [2270] */
    (xdc_Char)0x61,  /* [2271] */
    (xdc_Char)0x6c,  /* [2272] */
    (xdc_Char)0x6c,  /* [2273] */
    (xdc_Char)0x6f,  /* [2274] */
    (xdc_Char)0x63,  /* [2275] */
    (xdc_Char)0x61,  /* [2276] */
    (xdc_Char)0x74,  /* [2277] */
    (xdc_Char)0x65,  /* [2278] */
    (xdc_Char)0x20,  /* [2279] */
    (xdc_Char)0x73,  /* [2280] */
    (xdc_Char)0x69,  /* [2281] */
    (xdc_Char)0x7a,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x20,  /* [2284] */
    (xdc_Char)0x30,  /* [2285] */
    (xdc_Char)0x0,  /* [2286] */
    (xdc_Char)0x41,  /* [2287] */
    (xdc_Char)0x5f,  /* [2288] */
    (xdc_Char)0x68,  /* [2289] */
    (xdc_Char)0x65,  /* [2290] */
    (xdc_Char)0x61,  /* [2291] */
    (xdc_Char)0x70,  /* [2292] */
    (xdc_Char)0x53,  /* [2293] */
    (xdc_Char)0x69,  /* [2294] */
    (xdc_Char)0x7a,  /* [2295] */
    (xdc_Char)0x65,  /* [2296] */
    (xdc_Char)0x3a,  /* [2297] */
    (xdc_Char)0x20,  /* [2298] */
    (xdc_Char)0x52,  /* [2299] */
    (xdc_Char)0x65,  /* [2300] */
    (xdc_Char)0x71,  /* [2301] */
    (xdc_Char)0x75,  /* [2302] */
    (xdc_Char)0x65,  /* [2303] */
    (xdc_Char)0x73,  /* [2304] */
    (xdc_Char)0x74,  /* [2305] */
    (xdc_Char)0x65,  /* [2306] */
    (xdc_Char)0x64,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x68,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x61,  /* [2311] */
    (xdc_Char)0x70,  /* [2312] */
    (xdc_Char)0x20,  /* [2313] */
    (xdc_Char)0x73,  /* [2314] */
    (xdc_Char)0x69,  /* [2315] */
    (xdc_Char)0x7a,  /* [2316] */
    (xdc_Char)0x65,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x69,  /* [2319] */
    (xdc_Char)0x73,  /* [2320] */
    (xdc_Char)0x20,  /* [2321] */
    (xdc_Char)0x74,  /* [2322] */
    (xdc_Char)0x6f,  /* [2323] */
    (xdc_Char)0x6f,  /* [2324] */
    (xdc_Char)0x20,  /* [2325] */
    (xdc_Char)0x73,  /* [2326] */
    (xdc_Char)0x6d,  /* [2327] */
    (xdc_Char)0x61,  /* [2328] */
    (xdc_Char)0x6c,  /* [2329] */
    (xdc_Char)0x6c,  /* [2330] */
    (xdc_Char)0x0,  /* [2331] */
    (xdc_Char)0x41,  /* [2332] */
    (xdc_Char)0x5f,  /* [2333] */
    (xdc_Char)0x61,  /* [2334] */
    (xdc_Char)0x6c,  /* [2335] */
    (xdc_Char)0x69,  /* [2336] */
    (xdc_Char)0x67,  /* [2337] */
    (xdc_Char)0x6e,  /* [2338] */
    (xdc_Char)0x3a,  /* [2339] */
    (xdc_Char)0x20,  /* [2340] */
    (xdc_Char)0x52,  /* [2341] */
    (xdc_Char)0x65,  /* [2342] */
    (xdc_Char)0x71,  /* [2343] */
    (xdc_Char)0x75,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x73,  /* [2346] */
    (xdc_Char)0x74,  /* [2347] */
    (xdc_Char)0x65,  /* [2348] */
    (xdc_Char)0x64,  /* [2349] */
    (xdc_Char)0x20,  /* [2350] */
    (xdc_Char)0x61,  /* [2351] */
    (xdc_Char)0x6c,  /* [2352] */
    (xdc_Char)0x69,  /* [2353] */
    (xdc_Char)0x67,  /* [2354] */
    (xdc_Char)0x6e,  /* [2355] */
    (xdc_Char)0x20,  /* [2356] */
    (xdc_Char)0x69,  /* [2357] */
    (xdc_Char)0x73,  /* [2358] */
    (xdc_Char)0x20,  /* [2359] */
    (xdc_Char)0x6e,  /* [2360] */
    (xdc_Char)0x6f,  /* [2361] */
    (xdc_Char)0x74,  /* [2362] */
    (xdc_Char)0x20,  /* [2363] */
    (xdc_Char)0x61,  /* [2364] */
    (xdc_Char)0x20,  /* [2365] */
    (xdc_Char)0x70,  /* [2366] */
    (xdc_Char)0x6f,  /* [2367] */
    (xdc_Char)0x77,  /* [2368] */
    (xdc_Char)0x65,  /* [2369] */
    (xdc_Char)0x72,  /* [2370] */
    (xdc_Char)0x20,  /* [2371] */
    (xdc_Char)0x6f,  /* [2372] */
    (xdc_Char)0x66,  /* [2373] */
    (xdc_Char)0x20,  /* [2374] */
    (xdc_Char)0x32,  /* [2375] */
    (xdc_Char)0x0,  /* [2376] */
    (xdc_Char)0x49,  /* [2377] */
    (xdc_Char)0x6e,  /* [2378] */
    (xdc_Char)0x76,  /* [2379] */
    (xdc_Char)0x61,  /* [2380] */
    (xdc_Char)0x6c,  /* [2381] */
    (xdc_Char)0x69,  /* [2382] */
    (xdc_Char)0x64,  /* [2383] */
    (xdc_Char)0x20,  /* [2384] */
    (xdc_Char)0x62,  /* [2385] */
    (xdc_Char)0x6c,  /* [2386] */
    (xdc_Char)0x6f,  /* [2387] */
    (xdc_Char)0x63,  /* [2388] */
    (xdc_Char)0x6b,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x61,  /* [2391] */
    (xdc_Char)0x64,  /* [2392] */
    (xdc_Char)0x64,  /* [2393] */
    (xdc_Char)0x72,  /* [2394] */
    (xdc_Char)0x65,  /* [2395] */
    (xdc_Char)0x73,  /* [2396] */
    (xdc_Char)0x73,  /* [2397] */
    (xdc_Char)0x20,  /* [2398] */
    (xdc_Char)0x6f,  /* [2399] */
    (xdc_Char)0x6e,  /* [2400] */
    (xdc_Char)0x20,  /* [2401] */
    (xdc_Char)0x74,  /* [2402] */
    (xdc_Char)0x68,  /* [2403] */
    (xdc_Char)0x65,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x66,  /* [2406] */
    (xdc_Char)0x72,  /* [2407] */
    (xdc_Char)0x65,  /* [2408] */
    (xdc_Char)0x65,  /* [2409] */
    (xdc_Char)0x2e,  /* [2410] */
    (xdc_Char)0x20,  /* [2411] */
    (xdc_Char)0x46,  /* [2412] */
    (xdc_Char)0x61,  /* [2413] */
    (xdc_Char)0x69,  /* [2414] */
    (xdc_Char)0x6c,  /* [2415] */
    (xdc_Char)0x65,  /* [2416] */
    (xdc_Char)0x64,  /* [2417] */
    (xdc_Char)0x20,  /* [2418] */
    (xdc_Char)0x74,  /* [2419] */
    (xdc_Char)0x6f,  /* [2420] */
    (xdc_Char)0x20,  /* [2421] */
    (xdc_Char)0x66,  /* [2422] */
    (xdc_Char)0x72,  /* [2423] */
    (xdc_Char)0x65,  /* [2424] */
    (xdc_Char)0x65,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x62,  /* [2427] */
    (xdc_Char)0x6c,  /* [2428] */
    (xdc_Char)0x6f,  /* [2429] */
    (xdc_Char)0x63,  /* [2430] */
    (xdc_Char)0x6b,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x62,  /* [2433] */
    (xdc_Char)0x61,  /* [2434] */
    (xdc_Char)0x63,  /* [2435] */
    (xdc_Char)0x6b,  /* [2436] */
    (xdc_Char)0x20,  /* [2437] */
    (xdc_Char)0x74,  /* [2438] */
    (xdc_Char)0x6f,  /* [2439] */
    (xdc_Char)0x20,  /* [2440] */
    (xdc_Char)0x68,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x61,  /* [2443] */
    (xdc_Char)0x70,  /* [2444] */
    (xdc_Char)0x2e,  /* [2445] */
    (xdc_Char)0x0,  /* [2446] */
    (xdc_Char)0x61,  /* [2447] */
    (xdc_Char)0x73,  /* [2448] */
    (xdc_Char)0x73,  /* [2449] */
    (xdc_Char)0x65,  /* [2450] */
    (xdc_Char)0x72,  /* [2451] */
    (xdc_Char)0x74,  /* [2452] */
    (xdc_Char)0x69,  /* [2453] */
    (xdc_Char)0x6f,  /* [2454] */
    (xdc_Char)0x6e,  /* [2455] */
    (xdc_Char)0x20,  /* [2456] */
    (xdc_Char)0x66,  /* [2457] */
    (xdc_Char)0x61,  /* [2458] */
    (xdc_Char)0x69,  /* [2459] */
    (xdc_Char)0x6c,  /* [2460] */
    (xdc_Char)0x75,  /* [2461] */
    (xdc_Char)0x72,  /* [2462] */
    (xdc_Char)0x65,  /* [2463] */
    (xdc_Char)0x25,  /* [2464] */
    (xdc_Char)0x73,  /* [2465] */
    (xdc_Char)0x25,  /* [2466] */
    (xdc_Char)0x73,  /* [2467] */
    (xdc_Char)0x0,  /* [2468] */
    (xdc_Char)0x25,  /* [2469] */
    (xdc_Char)0x24,  /* [2470] */
    (xdc_Char)0x53,  /* [2471] */
    (xdc_Char)0x0,  /* [2472] */
    (xdc_Char)0x6f,  /* [2473] */
    (xdc_Char)0x75,  /* [2474] */
    (xdc_Char)0x74,  /* [2475] */
    (xdc_Char)0x20,  /* [2476] */
    (xdc_Char)0x6f,  /* [2477] */
    (xdc_Char)0x66,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x6d,  /* [2480] */
    (xdc_Char)0x65,  /* [2481] */
    (xdc_Char)0x6d,  /* [2482] */
    (xdc_Char)0x6f,  /* [2483] */
    (xdc_Char)0x72,  /* [2484] */
    (xdc_Char)0x79,  /* [2485] */
    (xdc_Char)0x3a,  /* [2486] */
    (xdc_Char)0x20,  /* [2487] */
    (xdc_Char)0x68,  /* [2488] */
    (xdc_Char)0x65,  /* [2489] */
    (xdc_Char)0x61,  /* [2490] */
    (xdc_Char)0x70,  /* [2491] */
    (xdc_Char)0x3d,  /* [2492] */
    (xdc_Char)0x30,  /* [2493] */
    (xdc_Char)0x78,  /* [2494] */
    (xdc_Char)0x25,  /* [2495] */
    (xdc_Char)0x78,  /* [2496] */
    (xdc_Char)0x2c,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x73,  /* [2499] */
    (xdc_Char)0x69,  /* [2500] */
    (xdc_Char)0x7a,  /* [2501] */
    (xdc_Char)0x65,  /* [2502] */
    (xdc_Char)0x3d,  /* [2503] */
    (xdc_Char)0x25,  /* [2504] */
    (xdc_Char)0x75,  /* [2505] */
    (xdc_Char)0x0,  /* [2506] */
    (xdc_Char)0x25,  /* [2507] */
    (xdc_Char)0x73,  /* [2508] */
    (xdc_Char)0x20,  /* [2509] */
    (xdc_Char)0x30,  /* [2510] */
    (xdc_Char)0x78,  /* [2511] */
    (xdc_Char)0x25,  /* [2512] */
    (xdc_Char)0x78,  /* [2513] */
    (xdc_Char)0x0,  /* [2514] */
    (xdc_Char)0x45,  /* [2515] */
    (xdc_Char)0x5f,  /* [2516] */
    (xdc_Char)0x62,  /* [2517] */
    (xdc_Char)0x61,  /* [2518] */
    (xdc_Char)0x64,  /* [2519] */
    (xdc_Char)0x4c,  /* [2520] */
    (xdc_Char)0x65,  /* [2521] */
    (xdc_Char)0x76,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x6c,  /* [2524] */
    (xdc_Char)0x3a,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x42,  /* [2527] */
    (xdc_Char)0x61,  /* [2528] */
    (xdc_Char)0x64,  /* [2529] */
    (xdc_Char)0x20,  /* [2530] */
    (xdc_Char)0x66,  /* [2531] */
    (xdc_Char)0x69,  /* [2532] */
    (xdc_Char)0x6c,  /* [2533] */
    (xdc_Char)0x74,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x72,  /* [2536] */
    (xdc_Char)0x20,  /* [2537] */
    (xdc_Char)0x6c,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x76,  /* [2540] */
    (xdc_Char)0x65,  /* [2541] */
    (xdc_Char)0x6c,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x76,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x6c,  /* [2546] */
    (xdc_Char)0x75,  /* [2547] */
    (xdc_Char)0x65,  /* [2548] */
    (xdc_Char)0x3a,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x25,  /* [2551] */
    (xdc_Char)0x64,  /* [2552] */
    (xdc_Char)0x0,  /* [2553] */
    (xdc_Char)0x66,  /* [2554] */
    (xdc_Char)0x72,  /* [2555] */
    (xdc_Char)0x65,  /* [2556] */
    (xdc_Char)0x65,  /* [2557] */
    (xdc_Char)0x28,  /* [2558] */
    (xdc_Char)0x29,  /* [2559] */
    (xdc_Char)0x20,  /* [2560] */
    (xdc_Char)0x69,  /* [2561] */
    (xdc_Char)0x6e,  /* [2562] */
    (xdc_Char)0x76,  /* [2563] */
    (xdc_Char)0x61,  /* [2564] */
    (xdc_Char)0x6c,  /* [2565] */
    (xdc_Char)0x69,  /* [2566] */
    (xdc_Char)0x64,  /* [2567] */
    (xdc_Char)0x20,  /* [2568] */
    (xdc_Char)0x69,  /* [2569] */
    (xdc_Char)0x6e,  /* [2570] */
    (xdc_Char)0x20,  /* [2571] */
    (xdc_Char)0x67,  /* [2572] */
    (xdc_Char)0x72,  /* [2573] */
    (xdc_Char)0x6f,  /* [2574] */
    (xdc_Char)0x77,  /* [2575] */
    (xdc_Char)0x74,  /* [2576] */
    (xdc_Char)0x68,  /* [2577] */
    (xdc_Char)0x2d,  /* [2578] */
    (xdc_Char)0x6f,  /* [2579] */
    (xdc_Char)0x6e,  /* [2580] */
    (xdc_Char)0x6c,  /* [2581] */
    (xdc_Char)0x79,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x48,  /* [2584] */
    (xdc_Char)0x65,  /* [2585] */
    (xdc_Char)0x61,  /* [2586] */
    (xdc_Char)0x70,  /* [2587] */
    (xdc_Char)0x4d,  /* [2588] */
    (xdc_Char)0x69,  /* [2589] */
    (xdc_Char)0x6e,  /* [2590] */
    (xdc_Char)0x0,  /* [2591] */
    (xdc_Char)0x54,  /* [2592] */
    (xdc_Char)0x68,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x52,  /* [2596] */
    (xdc_Char)0x54,  /* [2597] */
    (xdc_Char)0x53,  /* [2598] */
    (xdc_Char)0x20,  /* [2599] */
    (xdc_Char)0x68,  /* [2600] */
    (xdc_Char)0x65,  /* [2601] */
    (xdc_Char)0x61,  /* [2602] */
    (xdc_Char)0x70,  /* [2603] */
    (xdc_Char)0x20,  /* [2604] */
    (xdc_Char)0x69,  /* [2605] */
    (xdc_Char)0x73,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x75,  /* [2608] */
    (xdc_Char)0x73,  /* [2609] */
    (xdc_Char)0x65,  /* [2610] */
    (xdc_Char)0x64,  /* [2611] */
    (xdc_Char)0x20,  /* [2612] */
    (xdc_Char)0x75,  /* [2613] */
    (xdc_Char)0x70,  /* [2614] */
    (xdc_Char)0x2e,  /* [2615] */
    (xdc_Char)0x20,  /* [2616] */
    (xdc_Char)0x45,  /* [2617] */
    (xdc_Char)0x78,  /* [2618] */
    (xdc_Char)0x61,  /* [2619] */
    (xdc_Char)0x6d,  /* [2620] */
    (xdc_Char)0x69,  /* [2621] */
    (xdc_Char)0x6e,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x20,  /* [2624] */
    (xdc_Char)0x50,  /* [2625] */
    (xdc_Char)0x72,  /* [2626] */
    (xdc_Char)0x6f,  /* [2627] */
    (xdc_Char)0x67,  /* [2628] */
    (xdc_Char)0x72,  /* [2629] */
    (xdc_Char)0x61,  /* [2630] */
    (xdc_Char)0x6d,  /* [2631] */
    (xdc_Char)0x2e,  /* [2632] */
    (xdc_Char)0x68,  /* [2633] */
    (xdc_Char)0x65,  /* [2634] */
    (xdc_Char)0x61,  /* [2635] */
    (xdc_Char)0x70,  /* [2636] */
    (xdc_Char)0x2e,  /* [2637] */
    (xdc_Char)0x0,  /* [2638] */
    (xdc_Char)0x45,  /* [2639] */
    (xdc_Char)0x5f,  /* [2640] */
    (xdc_Char)0x62,  /* [2641] */
    (xdc_Char)0x61,  /* [2642] */
    (xdc_Char)0x64,  /* [2643] */
    (xdc_Char)0x43,  /* [2644] */
    (xdc_Char)0x6f,  /* [2645] */
    (xdc_Char)0x6d,  /* [2646] */
    (xdc_Char)0x6d,  /* [2647] */
    (xdc_Char)0x61,  /* [2648] */
    (xdc_Char)0x6e,  /* [2649] */
    (xdc_Char)0x64,  /* [2650] */
    (xdc_Char)0x3a,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x52,  /* [2653] */
    (xdc_Char)0x65,  /* [2654] */
    (xdc_Char)0x63,  /* [2655] */
    (xdc_Char)0x65,  /* [2656] */
    (xdc_Char)0x69,  /* [2657] */
    (xdc_Char)0x76,  /* [2658] */
    (xdc_Char)0x65,  /* [2659] */
    (xdc_Char)0x64,  /* [2660] */
    (xdc_Char)0x20,  /* [2661] */
    (xdc_Char)0x69,  /* [2662] */
    (xdc_Char)0x6e,  /* [2663] */
    (xdc_Char)0x76,  /* [2664] */
    (xdc_Char)0x61,  /* [2665] */
    (xdc_Char)0x6c,  /* [2666] */
    (xdc_Char)0x69,  /* [2667] */
    (xdc_Char)0x64,  /* [2668] */
    (xdc_Char)0x20,  /* [2669] */
    (xdc_Char)0x63,  /* [2670] */
    (xdc_Char)0x6f,  /* [2671] */
    (xdc_Char)0x6d,  /* [2672] */
    (xdc_Char)0x6d,  /* [2673] */
    (xdc_Char)0x61,  /* [2674] */
    (xdc_Char)0x6e,  /* [2675] */
    (xdc_Char)0x64,  /* [2676] */
    (xdc_Char)0x2c,  /* [2677] */
    (xdc_Char)0x20,  /* [2678] */
    (xdc_Char)0x69,  /* [2679] */
    (xdc_Char)0x64,  /* [2680] */
    (xdc_Char)0x3a,  /* [2681] */
    (xdc_Char)0x20,  /* [2682] */
    (xdc_Char)0x25,  /* [2683] */
    (xdc_Char)0x64,  /* [2684] */
    (xdc_Char)0x2e,  /* [2685] */
    (xdc_Char)0x0,  /* [2686] */
    (xdc_Char)0x45,  /* [2687] */
    (xdc_Char)0x5f,  /* [2688] */
    (xdc_Char)0x75,  /* [2689] */
    (xdc_Char)0x6e,  /* [2690] */
    (xdc_Char)0x70,  /* [2691] */
    (xdc_Char)0x6c,  /* [2692] */
    (xdc_Char)0x75,  /* [2693] */
    (xdc_Char)0x67,  /* [2694] */
    (xdc_Char)0x67,  /* [2695] */
    (xdc_Char)0x65,  /* [2696] */
    (xdc_Char)0x64,  /* [2697] */
    (xdc_Char)0x45,  /* [2698] */
    (xdc_Char)0x76,  /* [2699] */
    (xdc_Char)0x65,  /* [2700] */
    (xdc_Char)0x6e,  /* [2701] */
    (xdc_Char)0x74,  /* [2702] */
    (xdc_Char)0x3a,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x45,  /* [2705] */
    (xdc_Char)0x76,  /* [2706] */
    (xdc_Char)0x65,  /* [2707] */
    (xdc_Char)0x6e,  /* [2708] */
    (xdc_Char)0x74,  /* [2709] */
    (xdc_Char)0x23,  /* [2710] */
    (xdc_Char)0x20,  /* [2711] */
    (xdc_Char)0x25,  /* [2712] */
    (xdc_Char)0x64,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x69,  /* [2715] */
    (xdc_Char)0x73,  /* [2716] */
    (xdc_Char)0x20,  /* [2717] */
    (xdc_Char)0x75,  /* [2718] */
    (xdc_Char)0x6e,  /* [2719] */
    (xdc_Char)0x70,  /* [2720] */
    (xdc_Char)0x6c,  /* [2721] */
    (xdc_Char)0x75,  /* [2722] */
    (xdc_Char)0x67,  /* [2723] */
    (xdc_Char)0x67,  /* [2724] */
    (xdc_Char)0x65,  /* [2725] */
    (xdc_Char)0x64,  /* [2726] */
    (xdc_Char)0x0,  /* [2727] */
    (xdc_Char)0x45,  /* [2728] */
    (xdc_Char)0x5f,  /* [2729] */
    (xdc_Char)0x65,  /* [2730] */
    (xdc_Char)0x78,  /* [2731] */
    (xdc_Char)0x63,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x70,  /* [2734] */
    (xdc_Char)0x74,  /* [2735] */
    (xdc_Char)0x69,  /* [2736] */
    (xdc_Char)0x6f,  /* [2737] */
    (xdc_Char)0x6e,  /* [2738] */
    (xdc_Char)0x4d,  /* [2739] */
    (xdc_Char)0x69,  /* [2740] */
    (xdc_Char)0x6e,  /* [2741] */
    (xdc_Char)0x3a,  /* [2742] */
    (xdc_Char)0x20,  /* [2743] */
    (xdc_Char)0x70,  /* [2744] */
    (xdc_Char)0x63,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x3d,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x30,  /* [2749] */
    (xdc_Char)0x78,  /* [2750] */
    (xdc_Char)0x25,  /* [2751] */
    (xdc_Char)0x30,  /* [2752] */
    (xdc_Char)0x38,  /* [2753] */
    (xdc_Char)0x78,  /* [2754] */
    (xdc_Char)0x2c,  /* [2755] */
    (xdc_Char)0x20,  /* [2756] */
    (xdc_Char)0x73,  /* [2757] */
    (xdc_Char)0x70,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x3d,  /* [2760] */
    (xdc_Char)0x20,  /* [2761] */
    (xdc_Char)0x30,  /* [2762] */
    (xdc_Char)0x78,  /* [2763] */
    (xdc_Char)0x25,  /* [2764] */
    (xdc_Char)0x30,  /* [2765] */
    (xdc_Char)0x38,  /* [2766] */
    (xdc_Char)0x78,  /* [2767] */
    (xdc_Char)0x2e,  /* [2768] */
    (xdc_Char)0xa,  /* [2769] */
    (xdc_Char)0x54,  /* [2770] */
    (xdc_Char)0x6f,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x73,  /* [2773] */
    (xdc_Char)0x65,  /* [2774] */
    (xdc_Char)0x65,  /* [2775] */
    (xdc_Char)0x20,  /* [2776] */
    (xdc_Char)0x6d,  /* [2777] */
    (xdc_Char)0x6f,  /* [2778] */
    (xdc_Char)0x72,  /* [2779] */
    (xdc_Char)0x65,  /* [2780] */
    (xdc_Char)0x20,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x78,  /* [2783] */
    (xdc_Char)0x63,  /* [2784] */
    (xdc_Char)0x65,  /* [2785] */
    (xdc_Char)0x70,  /* [2786] */
    (xdc_Char)0x74,  /* [2787] */
    (xdc_Char)0x69,  /* [2788] */
    (xdc_Char)0x6f,  /* [2789] */
    (xdc_Char)0x6e,  /* [2790] */
    (xdc_Char)0x20,  /* [2791] */
    (xdc_Char)0x64,  /* [2792] */
    (xdc_Char)0x65,  /* [2793] */
    (xdc_Char)0x74,  /* [2794] */
    (xdc_Char)0x61,  /* [2795] */
    (xdc_Char)0x69,  /* [2796] */
    (xdc_Char)0x6c,  /* [2797] */
    (xdc_Char)0x2c,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x75,  /* [2800] */
    (xdc_Char)0x73,  /* [2801] */
    (xdc_Char)0x65,  /* [2802] */
    (xdc_Char)0x20,  /* [2803] */
    (xdc_Char)0x52,  /* [2804] */
    (xdc_Char)0x4f,  /* [2805] */
    (xdc_Char)0x56,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x6f,  /* [2808] */
    (xdc_Char)0x72,  /* [2809] */
    (xdc_Char)0x20,  /* [2810] */
    (xdc_Char)0x73,  /* [2811] */
    (xdc_Char)0x65,  /* [2812] */
    (xdc_Char)0x74,  /* [2813] */
    (xdc_Char)0x20,  /* [2814] */
    (xdc_Char)0x27,  /* [2815] */
    (xdc_Char)0x74,  /* [2816] */
    (xdc_Char)0x69,  /* [2817] */
    (xdc_Char)0x2e,  /* [2818] */
    (xdc_Char)0x73,  /* [2819] */
    (xdc_Char)0x79,  /* [2820] */
    (xdc_Char)0x73,  /* [2821] */
    (xdc_Char)0x62,  /* [2822] */
    (xdc_Char)0x69,  /* [2823] */
    (xdc_Char)0x6f,  /* [2824] */
    (xdc_Char)0x73,  /* [2825] */
    (xdc_Char)0x2e,  /* [2826] */
    (xdc_Char)0x66,  /* [2827] */
    (xdc_Char)0x61,  /* [2828] */
    (xdc_Char)0x6d,  /* [2829] */
    (xdc_Char)0x69,  /* [2830] */
    (xdc_Char)0x6c,  /* [2831] */
    (xdc_Char)0x79,  /* [2832] */
    (xdc_Char)0x2e,  /* [2833] */
    (xdc_Char)0x63,  /* [2834] */
    (xdc_Char)0x36,  /* [2835] */
    (xdc_Char)0x34,  /* [2836] */
    (xdc_Char)0x70,  /* [2837] */
    (xdc_Char)0x2e,  /* [2838] */
    (xdc_Char)0x45,  /* [2839] */
    (xdc_Char)0x78,  /* [2840] */
    (xdc_Char)0x63,  /* [2841] */
    (xdc_Char)0x65,  /* [2842] */
    (xdc_Char)0x70,  /* [2843] */
    (xdc_Char)0x74,  /* [2844] */
    (xdc_Char)0x69,  /* [2845] */
    (xdc_Char)0x6f,  /* [2846] */
    (xdc_Char)0x6e,  /* [2847] */
    (xdc_Char)0x2e,  /* [2848] */
    (xdc_Char)0x65,  /* [2849] */
    (xdc_Char)0x6e,  /* [2850] */
    (xdc_Char)0x61,  /* [2851] */
    (xdc_Char)0x62,  /* [2852] */
    (xdc_Char)0x6c,  /* [2853] */
    (xdc_Char)0x65,  /* [2854] */
    (xdc_Char)0x50,  /* [2855] */
    (xdc_Char)0x72,  /* [2856] */
    (xdc_Char)0x69,  /* [2857] */
    (xdc_Char)0x6e,  /* [2858] */
    (xdc_Char)0x74,  /* [2859] */
    (xdc_Char)0x20,  /* [2860] */
    (xdc_Char)0x3d,  /* [2861] */
    (xdc_Char)0x20,  /* [2862] */
    (xdc_Char)0x74,  /* [2863] */
    (xdc_Char)0x72,  /* [2864] */
    (xdc_Char)0x75,  /* [2865] */
    (xdc_Char)0x65,  /* [2866] */
    (xdc_Char)0x3b,  /* [2867] */
    (xdc_Char)0x27,  /* [2868] */
    (xdc_Char)0x0,  /* [2869] */
    (xdc_Char)0x45,  /* [2870] */
    (xdc_Char)0x5f,  /* [2871] */
    (xdc_Char)0x65,  /* [2872] */
    (xdc_Char)0x78,  /* [2873] */
    (xdc_Char)0x63,  /* [2874] */
    (xdc_Char)0x65,  /* [2875] */
    (xdc_Char)0x70,  /* [2876] */
    (xdc_Char)0x74,  /* [2877] */
    (xdc_Char)0x69,  /* [2878] */
    (xdc_Char)0x6f,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x4d,  /* [2881] */
    (xdc_Char)0x61,  /* [2882] */
    (xdc_Char)0x78,  /* [2883] */
    (xdc_Char)0x3a,  /* [2884] */
    (xdc_Char)0x20,  /* [2885] */
    (xdc_Char)0x70,  /* [2886] */
    (xdc_Char)0x63,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x3d,  /* [2889] */
    (xdc_Char)0x20,  /* [2890] */
    (xdc_Char)0x30,  /* [2891] */
    (xdc_Char)0x78,  /* [2892] */
    (xdc_Char)0x25,  /* [2893] */
    (xdc_Char)0x30,  /* [2894] */
    (xdc_Char)0x38,  /* [2895] */
    (xdc_Char)0x78,  /* [2896] */
    (xdc_Char)0x2c,  /* [2897] */
    (xdc_Char)0x20,  /* [2898] */
    (xdc_Char)0x73,  /* [2899] */
    (xdc_Char)0x70,  /* [2900] */
    (xdc_Char)0x20,  /* [2901] */
    (xdc_Char)0x3d,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x30,  /* [2904] */
    (xdc_Char)0x78,  /* [2905] */
    (xdc_Char)0x25,  /* [2906] */
    (xdc_Char)0x30,  /* [2907] */
    (xdc_Char)0x38,  /* [2908] */
    (xdc_Char)0x78,  /* [2909] */
    (xdc_Char)0x2e,  /* [2910] */
    (xdc_Char)0x0,  /* [2911] */
    (xdc_Char)0x45,  /* [2912] */
    (xdc_Char)0x5f,  /* [2913] */
    (xdc_Char)0x61,  /* [2914] */
    (xdc_Char)0x6c,  /* [2915] */
    (xdc_Char)0x72,  /* [2916] */
    (xdc_Char)0x65,  /* [2917] */
    (xdc_Char)0x61,  /* [2918] */
    (xdc_Char)0x64,  /* [2919] */
    (xdc_Char)0x79,  /* [2920] */
    (xdc_Char)0x44,  /* [2921] */
    (xdc_Char)0x65,  /* [2922] */
    (xdc_Char)0x66,  /* [2923] */
    (xdc_Char)0x69,  /* [2924] */
    (xdc_Char)0x6e,  /* [2925] */
    (xdc_Char)0x65,  /* [2926] */
    (xdc_Char)0x64,  /* [2927] */
    (xdc_Char)0x3a,  /* [2928] */
    (xdc_Char)0x20,  /* [2929] */
    (xdc_Char)0x48,  /* [2930] */
    (xdc_Char)0x77,  /* [2931] */
    (xdc_Char)0x69,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x61,  /* [2934] */
    (xdc_Char)0x6c,  /* [2935] */
    (xdc_Char)0x72,  /* [2936] */
    (xdc_Char)0x65,  /* [2937] */
    (xdc_Char)0x61,  /* [2938] */
    (xdc_Char)0x64,  /* [2939] */
    (xdc_Char)0x79,  /* [2940] */
    (xdc_Char)0x20,  /* [2941] */
    (xdc_Char)0x64,  /* [2942] */
    (xdc_Char)0x65,  /* [2943] */
    (xdc_Char)0x66,  /* [2944] */
    (xdc_Char)0x69,  /* [2945] */
    (xdc_Char)0x6e,  /* [2946] */
    (xdc_Char)0x65,  /* [2947] */
    (xdc_Char)0x64,  /* [2948] */
    (xdc_Char)0x3a,  /* [2949] */
    (xdc_Char)0x20,  /* [2950] */
    (xdc_Char)0x69,  /* [2951] */
    (xdc_Char)0x6e,  /* [2952] */
    (xdc_Char)0x74,  /* [2953] */
    (xdc_Char)0x72,  /* [2954] */
    (xdc_Char)0x23,  /* [2955] */
    (xdc_Char)0x20,  /* [2956] */
    (xdc_Char)0x25,  /* [2957] */
    (xdc_Char)0x64,  /* [2958] */
    (xdc_Char)0x0,  /* [2959] */
    (xdc_Char)0x45,  /* [2960] */
    (xdc_Char)0x5f,  /* [2961] */
    (xdc_Char)0x68,  /* [2962] */
    (xdc_Char)0x61,  /* [2963] */
    (xdc_Char)0x6e,  /* [2964] */
    (xdc_Char)0x64,  /* [2965] */
    (xdc_Char)0x6c,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x4e,  /* [2968] */
    (xdc_Char)0x6f,  /* [2969] */
    (xdc_Char)0x74,  /* [2970] */
    (xdc_Char)0x46,  /* [2971] */
    (xdc_Char)0x6f,  /* [2972] */
    (xdc_Char)0x75,  /* [2973] */
    (xdc_Char)0x6e,  /* [2974] */
    (xdc_Char)0x64,  /* [2975] */
    (xdc_Char)0x3a,  /* [2976] */
    (xdc_Char)0x20,  /* [2977] */
    (xdc_Char)0x48,  /* [2978] */
    (xdc_Char)0x77,  /* [2979] */
    (xdc_Char)0x69,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x68,  /* [2982] */
    (xdc_Char)0x61,  /* [2983] */
    (xdc_Char)0x6e,  /* [2984] */
    (xdc_Char)0x64,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x65,  /* [2987] */
    (xdc_Char)0x20,  /* [2988] */
    (xdc_Char)0x6e,  /* [2989] */
    (xdc_Char)0x6f,  /* [2990] */
    (xdc_Char)0x74,  /* [2991] */
    (xdc_Char)0x20,  /* [2992] */
    (xdc_Char)0x66,  /* [2993] */
    (xdc_Char)0x6f,  /* [2994] */
    (xdc_Char)0x75,  /* [2995] */
    (xdc_Char)0x6e,  /* [2996] */
    (xdc_Char)0x64,  /* [2997] */
    (xdc_Char)0x3a,  /* [2998] */
    (xdc_Char)0x20,  /* [2999] */
    (xdc_Char)0x30,  /* [3000] */
    (xdc_Char)0x78,  /* [3001] */
    (xdc_Char)0x25,  /* [3002] */
    (xdc_Char)0x78,  /* [3003] */
    (xdc_Char)0x0,  /* [3004] */
    (xdc_Char)0x45,  /* [3005] */
    (xdc_Char)0x5f,  /* [3006] */
    (xdc_Char)0x73,  /* [3007] */
    (xdc_Char)0x74,  /* [3008] */
    (xdc_Char)0x61,  /* [3009] */
    (xdc_Char)0x63,  /* [3010] */
    (xdc_Char)0x6b,  /* [3011] */
    (xdc_Char)0x4f,  /* [3012] */
    (xdc_Char)0x76,  /* [3013] */
    (xdc_Char)0x65,  /* [3014] */
    (xdc_Char)0x72,  /* [3015] */
    (xdc_Char)0x66,  /* [3016] */
    (xdc_Char)0x6c,  /* [3017] */
    (xdc_Char)0x6f,  /* [3018] */
    (xdc_Char)0x77,  /* [3019] */
    (xdc_Char)0x3a,  /* [3020] */
    (xdc_Char)0x20,  /* [3021] */
    (xdc_Char)0x49,  /* [3022] */
    (xdc_Char)0x53,  /* [3023] */
    (xdc_Char)0x52,  /* [3024] */
    (xdc_Char)0x20,  /* [3025] */
    (xdc_Char)0x73,  /* [3026] */
    (xdc_Char)0x74,  /* [3027] */
    (xdc_Char)0x61,  /* [3028] */
    (xdc_Char)0x63,  /* [3029] */
    (xdc_Char)0x6b,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x6f,  /* [3032] */
    (xdc_Char)0x76,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x72,  /* [3035] */
    (xdc_Char)0x66,  /* [3036] */
    (xdc_Char)0x6c,  /* [3037] */
    (xdc_Char)0x6f,  /* [3038] */
    (xdc_Char)0x77,  /* [3039] */
    (xdc_Char)0x2e,  /* [3040] */
    (xdc_Char)0x0,  /* [3041] */
    (xdc_Char)0x45,  /* [3042] */
    (xdc_Char)0x5f,  /* [3043] */
    (xdc_Char)0x73,  /* [3044] */
    (xdc_Char)0x74,  /* [3045] */
    (xdc_Char)0x61,  /* [3046] */
    (xdc_Char)0x63,  /* [3047] */
    (xdc_Char)0x6b,  /* [3048] */
    (xdc_Char)0x4f,  /* [3049] */
    (xdc_Char)0x76,  /* [3050] */
    (xdc_Char)0x65,  /* [3051] */
    (xdc_Char)0x72,  /* [3052] */
    (xdc_Char)0x66,  /* [3053] */
    (xdc_Char)0x6c,  /* [3054] */
    (xdc_Char)0x6f,  /* [3055] */
    (xdc_Char)0x77,  /* [3056] */
    (xdc_Char)0x3a,  /* [3057] */
    (xdc_Char)0x20,  /* [3058] */
    (xdc_Char)0x54,  /* [3059] */
    (xdc_Char)0x61,  /* [3060] */
    (xdc_Char)0x73,  /* [3061] */
    (xdc_Char)0x6b,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x30,  /* [3064] */
    (xdc_Char)0x78,  /* [3065] */
    (xdc_Char)0x25,  /* [3066] */
    (xdc_Char)0x78,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x73,  /* [3069] */
    (xdc_Char)0x74,  /* [3070] */
    (xdc_Char)0x61,  /* [3071] */
    (xdc_Char)0x63,  /* [3072] */
    (xdc_Char)0x6b,  /* [3073] */
    (xdc_Char)0x20,  /* [3074] */
    (xdc_Char)0x6f,  /* [3075] */
    (xdc_Char)0x76,  /* [3076] */
    (xdc_Char)0x65,  /* [3077] */
    (xdc_Char)0x72,  /* [3078] */
    (xdc_Char)0x66,  /* [3079] */
    (xdc_Char)0x6c,  /* [3080] */
    (xdc_Char)0x6f,  /* [3081] */
    (xdc_Char)0x77,  /* [3082] */
    (xdc_Char)0x2e,  /* [3083] */
    (xdc_Char)0x0,  /* [3084] */
    (xdc_Char)0x45,  /* [3085] */
    (xdc_Char)0x5f,  /* [3086] */
    (xdc_Char)0x73,  /* [3087] */
    (xdc_Char)0x70,  /* [3088] */
    (xdc_Char)0x4f,  /* [3089] */
    (xdc_Char)0x75,  /* [3090] */
    (xdc_Char)0x74,  /* [3091] */
    (xdc_Char)0x4f,  /* [3092] */
    (xdc_Char)0x66,  /* [3093] */
    (xdc_Char)0x42,  /* [3094] */
    (xdc_Char)0x6f,  /* [3095] */
    (xdc_Char)0x75,  /* [3096] */
    (xdc_Char)0x6e,  /* [3097] */
    (xdc_Char)0x64,  /* [3098] */
    (xdc_Char)0x73,  /* [3099] */
    (xdc_Char)0x3a,  /* [3100] */
    (xdc_Char)0x20,  /* [3101] */
    (xdc_Char)0x54,  /* [3102] */
    (xdc_Char)0x61,  /* [3103] */
    (xdc_Char)0x73,  /* [3104] */
    (xdc_Char)0x6b,  /* [3105] */
    (xdc_Char)0x20,  /* [3106] */
    (xdc_Char)0x30,  /* [3107] */
    (xdc_Char)0x78,  /* [3108] */
    (xdc_Char)0x25,  /* [3109] */
    (xdc_Char)0x78,  /* [3110] */
    (xdc_Char)0x20,  /* [3111] */
    (xdc_Char)0x73,  /* [3112] */
    (xdc_Char)0x74,  /* [3113] */
    (xdc_Char)0x61,  /* [3114] */
    (xdc_Char)0x63,  /* [3115] */
    (xdc_Char)0x6b,  /* [3116] */
    (xdc_Char)0x20,  /* [3117] */
    (xdc_Char)0x65,  /* [3118] */
    (xdc_Char)0x72,  /* [3119] */
    (xdc_Char)0x72,  /* [3120] */
    (xdc_Char)0x6f,  /* [3121] */
    (xdc_Char)0x72,  /* [3122] */
    (xdc_Char)0x2c,  /* [3123] */
    (xdc_Char)0x20,  /* [3124] */
    (xdc_Char)0x53,  /* [3125] */
    (xdc_Char)0x50,  /* [3126] */
    (xdc_Char)0x20,  /* [3127] */
    (xdc_Char)0x3d,  /* [3128] */
    (xdc_Char)0x20,  /* [3129] */
    (xdc_Char)0x30,  /* [3130] */
    (xdc_Char)0x78,  /* [3131] */
    (xdc_Char)0x25,  /* [3132] */
    (xdc_Char)0x78,  /* [3133] */
    (xdc_Char)0x2e,  /* [3134] */
    (xdc_Char)0x0,  /* [3135] */
    (xdc_Char)0x45,  /* [3136] */
    (xdc_Char)0x5f,  /* [3137] */
    (xdc_Char)0x75,  /* [3138] */
    (xdc_Char)0x6e,  /* [3139] */
    (xdc_Char)0x70,  /* [3140] */
    (xdc_Char)0x6c,  /* [3141] */
    (xdc_Char)0x75,  /* [3142] */
    (xdc_Char)0x67,  /* [3143] */
    (xdc_Char)0x67,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x64,  /* [3146] */
    (xdc_Char)0x53,  /* [3147] */
    (xdc_Char)0x79,  /* [3148] */
    (xdc_Char)0x73,  /* [3149] */
    (xdc_Char)0x49,  /* [3150] */
    (xdc_Char)0x6e,  /* [3151] */
    (xdc_Char)0x74,  /* [3152] */
    (xdc_Char)0x3a,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x53,  /* [3155] */
    (xdc_Char)0x79,  /* [3156] */
    (xdc_Char)0x73,  /* [3157] */
    (xdc_Char)0x74,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x6d,  /* [3160] */
    (xdc_Char)0x20,  /* [3161] */
    (xdc_Char)0x49,  /* [3162] */
    (xdc_Char)0x6e,  /* [3163] */
    (xdc_Char)0x74,  /* [3164] */
    (xdc_Char)0x65,  /* [3165] */
    (xdc_Char)0x72,  /* [3166] */
    (xdc_Char)0x72,  /* [3167] */
    (xdc_Char)0x75,  /* [3168] */
    (xdc_Char)0x70,  /* [3169] */
    (xdc_Char)0x74,  /* [3170] */
    (xdc_Char)0x23,  /* [3171] */
    (xdc_Char)0x20,  /* [3172] */
    (xdc_Char)0x25,  /* [3173] */
    (xdc_Char)0x64,  /* [3174] */
    (xdc_Char)0x20,  /* [3175] */
    (xdc_Char)0x69,  /* [3176] */
    (xdc_Char)0x73,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x75,  /* [3179] */
    (xdc_Char)0x6e,  /* [3180] */
    (xdc_Char)0x70,  /* [3181] */
    (xdc_Char)0x6c,  /* [3182] */
    (xdc_Char)0x75,  /* [3183] */
    (xdc_Char)0x67,  /* [3184] */
    (xdc_Char)0x67,  /* [3185] */
    (xdc_Char)0x65,  /* [3186] */
    (xdc_Char)0x64,  /* [3187] */
    (xdc_Char)0x0,  /* [3188] */
    (xdc_Char)0x45,  /* [3189] */
    (xdc_Char)0x5f,  /* [3190] */
    (xdc_Char)0x70,  /* [3191] */
    (xdc_Char)0x72,  /* [3192] */
    (xdc_Char)0x69,  /* [3193] */
    (xdc_Char)0x6f,  /* [3194] */
    (xdc_Char)0x72,  /* [3195] */
    (xdc_Char)0x69,  /* [3196] */
    (xdc_Char)0x74,  /* [3197] */
    (xdc_Char)0x79,  /* [3198] */
    (xdc_Char)0x3a,  /* [3199] */
    (xdc_Char)0x20,  /* [3200] */
    (xdc_Char)0x54,  /* [3201] */
    (xdc_Char)0x68,  /* [3202] */
    (xdc_Char)0x72,  /* [3203] */
    (xdc_Char)0x65,  /* [3204] */
    (xdc_Char)0x61,  /* [3205] */
    (xdc_Char)0x64,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x70,  /* [3208] */
    (xdc_Char)0x72,  /* [3209] */
    (xdc_Char)0x69,  /* [3210] */
    (xdc_Char)0x6f,  /* [3211] */
    (xdc_Char)0x72,  /* [3212] */
    (xdc_Char)0x69,  /* [3213] */
    (xdc_Char)0x74,  /* [3214] */
    (xdc_Char)0x79,  /* [3215] */
    (xdc_Char)0x20,  /* [3216] */
    (xdc_Char)0x69,  /* [3217] */
    (xdc_Char)0x73,  /* [3218] */
    (xdc_Char)0x20,  /* [3219] */
    (xdc_Char)0x69,  /* [3220] */
    (xdc_Char)0x6e,  /* [3221] */
    (xdc_Char)0x76,  /* [3222] */
    (xdc_Char)0x61,  /* [3223] */
    (xdc_Char)0x6c,  /* [3224] */
    (xdc_Char)0x69,  /* [3225] */
    (xdc_Char)0x64,  /* [3226] */
    (xdc_Char)0x20,  /* [3227] */
    (xdc_Char)0x25,  /* [3228] */
    (xdc_Char)0x64,  /* [3229] */
    (xdc_Char)0x0,  /* [3230] */
    (xdc_Char)0x45,  /* [3231] */
    (xdc_Char)0x5f,  /* [3232] */
    (xdc_Char)0x69,  /* [3233] */
    (xdc_Char)0x6e,  /* [3234] */
    (xdc_Char)0x76,  /* [3235] */
    (xdc_Char)0x61,  /* [3236] */
    (xdc_Char)0x6c,  /* [3237] */
    (xdc_Char)0x69,  /* [3238] */
    (xdc_Char)0x64,  /* [3239] */
    (xdc_Char)0x54,  /* [3240] */
    (xdc_Char)0x69,  /* [3241] */
    (xdc_Char)0x6d,  /* [3242] */
    (xdc_Char)0x65,  /* [3243] */
    (xdc_Char)0x72,  /* [3244] */
    (xdc_Char)0x3a,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x49,  /* [3247] */
    (xdc_Char)0x6e,  /* [3248] */
    (xdc_Char)0x76,  /* [3249] */
    (xdc_Char)0x61,  /* [3250] */
    (xdc_Char)0x6c,  /* [3251] */
    (xdc_Char)0x69,  /* [3252] */
    (xdc_Char)0x64,  /* [3253] */
    (xdc_Char)0x20,  /* [3254] */
    (xdc_Char)0x54,  /* [3255] */
    (xdc_Char)0x69,  /* [3256] */
    (xdc_Char)0x6d,  /* [3257] */
    (xdc_Char)0x65,  /* [3258] */
    (xdc_Char)0x72,  /* [3259] */
    (xdc_Char)0x20,  /* [3260] */
    (xdc_Char)0x49,  /* [3261] */
    (xdc_Char)0x64,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x25,  /* [3264] */
    (xdc_Char)0x64,  /* [3265] */
    (xdc_Char)0x0,  /* [3266] */
    (xdc_Char)0x45,  /* [3267] */
    (xdc_Char)0x5f,  /* [3268] */
    (xdc_Char)0x6e,  /* [3269] */
    (xdc_Char)0x6f,  /* [3270] */
    (xdc_Char)0x74,  /* [3271] */
    (xdc_Char)0x41,  /* [3272] */
    (xdc_Char)0x76,  /* [3273] */
    (xdc_Char)0x61,  /* [3274] */
    (xdc_Char)0x69,  /* [3275] */
    (xdc_Char)0x6c,  /* [3276] */
    (xdc_Char)0x61,  /* [3277] */
    (xdc_Char)0x62,  /* [3278] */
    (xdc_Char)0x6c,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x3a,  /* [3281] */
    (xdc_Char)0x20,  /* [3282] */
    (xdc_Char)0x54,  /* [3283] */
    (xdc_Char)0x69,  /* [3284] */
    (xdc_Char)0x6d,  /* [3285] */
    (xdc_Char)0x65,  /* [3286] */
    (xdc_Char)0x72,  /* [3287] */
    (xdc_Char)0x20,  /* [3288] */
    (xdc_Char)0x6e,  /* [3289] */
    (xdc_Char)0x6f,  /* [3290] */
    (xdc_Char)0x74,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x61,  /* [3293] */
    (xdc_Char)0x76,  /* [3294] */
    (xdc_Char)0x61,  /* [3295] */
    (xdc_Char)0x69,  /* [3296] */
    (xdc_Char)0x6c,  /* [3297] */
    (xdc_Char)0x61,  /* [3298] */
    (xdc_Char)0x62,  /* [3299] */
    (xdc_Char)0x6c,  /* [3300] */
    (xdc_Char)0x65,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x25,  /* [3303] */
    (xdc_Char)0x64,  /* [3304] */
    (xdc_Char)0x0,  /* [3305] */
    (xdc_Char)0x45,  /* [3306] */
    (xdc_Char)0x5f,  /* [3307] */
    (xdc_Char)0x63,  /* [3308] */
    (xdc_Char)0x61,  /* [3309] */
    (xdc_Char)0x6e,  /* [3310] */
    (xdc_Char)0x6e,  /* [3311] */
    (xdc_Char)0x6f,  /* [3312] */
    (xdc_Char)0x74,  /* [3313] */
    (xdc_Char)0x53,  /* [3314] */
    (xdc_Char)0x75,  /* [3315] */
    (xdc_Char)0x70,  /* [3316] */
    (xdc_Char)0x70,  /* [3317] */
    (xdc_Char)0x6f,  /* [3318] */
    (xdc_Char)0x72,  /* [3319] */
    (xdc_Char)0x74,  /* [3320] */
    (xdc_Char)0x3a,  /* [3321] */
    (xdc_Char)0x20,  /* [3322] */
    (xdc_Char)0x54,  /* [3323] */
    (xdc_Char)0x69,  /* [3324] */
    (xdc_Char)0x6d,  /* [3325] */
    (xdc_Char)0x65,  /* [3326] */
    (xdc_Char)0x72,  /* [3327] */
    (xdc_Char)0x20,  /* [3328] */
    (xdc_Char)0x63,  /* [3329] */
    (xdc_Char)0x61,  /* [3330] */
    (xdc_Char)0x6e,  /* [3331] */
    (xdc_Char)0x6e,  /* [3332] */
    (xdc_Char)0x6f,  /* [3333] */
    (xdc_Char)0x74,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x73,  /* [3336] */
    (xdc_Char)0x75,  /* [3337] */
    (xdc_Char)0x70,  /* [3338] */
    (xdc_Char)0x70,  /* [3339] */
    (xdc_Char)0x6f,  /* [3340] */
    (xdc_Char)0x72,  /* [3341] */
    (xdc_Char)0x74,  /* [3342] */
    (xdc_Char)0x20,  /* [3343] */
    (xdc_Char)0x72,  /* [3344] */
    (xdc_Char)0x65,  /* [3345] */
    (xdc_Char)0x71,  /* [3346] */
    (xdc_Char)0x75,  /* [3347] */
    (xdc_Char)0x65,  /* [3348] */
    (xdc_Char)0x73,  /* [3349] */
    (xdc_Char)0x74,  /* [3350] */
    (xdc_Char)0x65,  /* [3351] */
    (xdc_Char)0x64,  /* [3352] */
    (xdc_Char)0x20,  /* [3353] */
    (xdc_Char)0x70,  /* [3354] */
    (xdc_Char)0x65,  /* [3355] */
    (xdc_Char)0x72,  /* [3356] */
    (xdc_Char)0x69,  /* [3357] */
    (xdc_Char)0x6f,  /* [3358] */
    (xdc_Char)0x64,  /* [3359] */
    (xdc_Char)0x20,  /* [3360] */
    (xdc_Char)0x25,  /* [3361] */
    (xdc_Char)0x64,  /* [3362] */
    (xdc_Char)0x0,  /* [3363] */
    (xdc_Char)0x72,  /* [3364] */
    (xdc_Char)0x65,  /* [3365] */
    (xdc_Char)0x71,  /* [3366] */
    (xdc_Char)0x75,  /* [3367] */
    (xdc_Char)0x65,  /* [3368] */
    (xdc_Char)0x73,  /* [3369] */
    (xdc_Char)0x74,  /* [3370] */
    (xdc_Char)0x65,  /* [3371] */
    (xdc_Char)0x64,  /* [3372] */
    (xdc_Char)0x20,  /* [3373] */
    (xdc_Char)0x73,  /* [3374] */
    (xdc_Char)0x69,  /* [3375] */
    (xdc_Char)0x7a,  /* [3376] */
    (xdc_Char)0x65,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x69,  /* [3379] */
    (xdc_Char)0x73,  /* [3380] */
    (xdc_Char)0x20,  /* [3381] */
    (xdc_Char)0x74,  /* [3382] */
    (xdc_Char)0x6f,  /* [3383] */
    (xdc_Char)0x6f,  /* [3384] */
    (xdc_Char)0x20,  /* [3385] */
    (xdc_Char)0x62,  /* [3386] */
    (xdc_Char)0x69,  /* [3387] */
    (xdc_Char)0x67,  /* [3388] */
    (xdc_Char)0x3a,  /* [3389] */
    (xdc_Char)0x20,  /* [3390] */
    (xdc_Char)0x68,  /* [3391] */
    (xdc_Char)0x61,  /* [3392] */
    (xdc_Char)0x6e,  /* [3393] */
    (xdc_Char)0x64,  /* [3394] */
    (xdc_Char)0x6c,  /* [3395] */
    (xdc_Char)0x65,  /* [3396] */
    (xdc_Char)0x3d,  /* [3397] */
    (xdc_Char)0x30,  /* [3398] */
    (xdc_Char)0x78,  /* [3399] */
    (xdc_Char)0x25,  /* [3400] */
    (xdc_Char)0x78,  /* [3401] */
    (xdc_Char)0x2c,  /* [3402] */
    (xdc_Char)0x20,  /* [3403] */
    (xdc_Char)0x73,  /* [3404] */
    (xdc_Char)0x69,  /* [3405] */
    (xdc_Char)0x7a,  /* [3406] */
    (xdc_Char)0x65,  /* [3407] */
    (xdc_Char)0x3d,  /* [3408] */
    (xdc_Char)0x25,  /* [3409] */
    (xdc_Char)0x75,  /* [3410] */
    (xdc_Char)0x0,  /* [3411] */
    (xdc_Char)0x6f,  /* [3412] */
    (xdc_Char)0x75,  /* [3413] */
    (xdc_Char)0x74,  /* [3414] */
    (xdc_Char)0x20,  /* [3415] */
    (xdc_Char)0x6f,  /* [3416] */
    (xdc_Char)0x66,  /* [3417] */
    (xdc_Char)0x20,  /* [3418] */
    (xdc_Char)0x6d,  /* [3419] */
    (xdc_Char)0x65,  /* [3420] */
    (xdc_Char)0x6d,  /* [3421] */
    (xdc_Char)0x6f,  /* [3422] */
    (xdc_Char)0x72,  /* [3423] */
    (xdc_Char)0x79,  /* [3424] */
    (xdc_Char)0x3a,  /* [3425] */
    (xdc_Char)0x20,  /* [3426] */
    (xdc_Char)0x68,  /* [3427] */
    (xdc_Char)0x61,  /* [3428] */
    (xdc_Char)0x6e,  /* [3429] */
    (xdc_Char)0x64,  /* [3430] */
    (xdc_Char)0x6c,  /* [3431] */
    (xdc_Char)0x65,  /* [3432] */
    (xdc_Char)0x3d,  /* [3433] */
    (xdc_Char)0x30,  /* [3434] */
    (xdc_Char)0x78,  /* [3435] */
    (xdc_Char)0x25,  /* [3436] */
    (xdc_Char)0x78,  /* [3437] */
    (xdc_Char)0x2c,  /* [3438] */
    (xdc_Char)0x20,  /* [3439] */
    (xdc_Char)0x73,  /* [3440] */
    (xdc_Char)0x69,  /* [3441] */
    (xdc_Char)0x7a,  /* [3442] */
    (xdc_Char)0x65,  /* [3443] */
    (xdc_Char)0x3d,  /* [3444] */
    (xdc_Char)0x25,  /* [3445] */
    (xdc_Char)0x75,  /* [3446] */
    (xdc_Char)0x0,  /* [3447] */
    (xdc_Char)0x3c,  /* [3448] */
    (xdc_Char)0x2d,  /* [3449] */
    (xdc_Char)0x2d,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x63,  /* [3452] */
    (xdc_Char)0x6f,  /* [3453] */
    (xdc_Char)0x6e,  /* [3454] */
    (xdc_Char)0x73,  /* [3455] */
    (xdc_Char)0x74,  /* [3456] */
    (xdc_Char)0x72,  /* [3457] */
    (xdc_Char)0x75,  /* [3458] */
    (xdc_Char)0x63,  /* [3459] */
    (xdc_Char)0x74,  /* [3460] */
    (xdc_Char)0x3a,  /* [3461] */
    (xdc_Char)0x20,  /* [3462] */
    (xdc_Char)0x25,  /* [3463] */
    (xdc_Char)0x70,  /* [3464] */
    (xdc_Char)0x28,  /* [3465] */
    (xdc_Char)0x27,  /* [3466] */
    (xdc_Char)0x25,  /* [3467] */
    (xdc_Char)0x73,  /* [3468] */
    (xdc_Char)0x27,  /* [3469] */
    (xdc_Char)0x29,  /* [3470] */
    (xdc_Char)0x0,  /* [3471] */
    (xdc_Char)0x3c,  /* [3472] */
    (xdc_Char)0x2d,  /* [3473] */
    (xdc_Char)0x2d,  /* [3474] */
    (xdc_Char)0x20,  /* [3475] */
    (xdc_Char)0x63,  /* [3476] */
    (xdc_Char)0x72,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x61,  /* [3479] */
    (xdc_Char)0x74,  /* [3480] */
    (xdc_Char)0x65,  /* [3481] */
    (xdc_Char)0x3a,  /* [3482] */
    (xdc_Char)0x20,  /* [3483] */
    (xdc_Char)0x25,  /* [3484] */
    (xdc_Char)0x70,  /* [3485] */
    (xdc_Char)0x28,  /* [3486] */
    (xdc_Char)0x27,  /* [3487] */
    (xdc_Char)0x25,  /* [3488] */
    (xdc_Char)0x73,  /* [3489] */
    (xdc_Char)0x27,  /* [3490] */
    (xdc_Char)0x29,  /* [3491] */
    (xdc_Char)0x0,  /* [3492] */
    (xdc_Char)0x2d,  /* [3493] */
    (xdc_Char)0x2d,  /* [3494] */
    (xdc_Char)0x3e,  /* [3495] */
    (xdc_Char)0x20,  /* [3496] */
    (xdc_Char)0x64,  /* [3497] */
    (xdc_Char)0x65,  /* [3498] */
    (xdc_Char)0x73,  /* [3499] */
    (xdc_Char)0x74,  /* [3500] */
    (xdc_Char)0x72,  /* [3501] */
    (xdc_Char)0x75,  /* [3502] */
    (xdc_Char)0x63,  /* [3503] */
    (xdc_Char)0x74,  /* [3504] */
    (xdc_Char)0x3a,  /* [3505] */
    (xdc_Char)0x20,  /* [3506] */
    (xdc_Char)0x28,  /* [3507] */
    (xdc_Char)0x25,  /* [3508] */
    (xdc_Char)0x70,  /* [3509] */
    (xdc_Char)0x29,  /* [3510] */
    (xdc_Char)0x0,  /* [3511] */
    (xdc_Char)0x2d,  /* [3512] */
    (xdc_Char)0x2d,  /* [3513] */
    (xdc_Char)0x3e,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x64,  /* [3516] */
    (xdc_Char)0x65,  /* [3517] */
    (xdc_Char)0x6c,  /* [3518] */
    (xdc_Char)0x65,  /* [3519] */
    (xdc_Char)0x74,  /* [3520] */
    (xdc_Char)0x65,  /* [3521] */
    (xdc_Char)0x3a,  /* [3522] */
    (xdc_Char)0x20,  /* [3523] */
    (xdc_Char)0x28,  /* [3524] */
    (xdc_Char)0x25,  /* [3525] */
    (xdc_Char)0x70,  /* [3526] */
    (xdc_Char)0x29,  /* [3527] */
    (xdc_Char)0x0,  /* [3528] */
    (xdc_Char)0x45,  /* [3529] */
    (xdc_Char)0x52,  /* [3530] */
    (xdc_Char)0x52,  /* [3531] */
    (xdc_Char)0x4f,  /* [3532] */
    (xdc_Char)0x52,  /* [3533] */
    (xdc_Char)0x3a,  /* [3534] */
    (xdc_Char)0x20,  /* [3535] */
    (xdc_Char)0x25,  /* [3536] */
    (xdc_Char)0x24,  /* [3537] */
    (xdc_Char)0x46,  /* [3538] */
    (xdc_Char)0x25,  /* [3539] */
    (xdc_Char)0x24,  /* [3540] */
    (xdc_Char)0x53,  /* [3541] */
    (xdc_Char)0x0,  /* [3542] */
    (xdc_Char)0x57,  /* [3543] */
    (xdc_Char)0x41,  /* [3544] */
    (xdc_Char)0x52,  /* [3545] */
    (xdc_Char)0x4e,  /* [3546] */
    (xdc_Char)0x49,  /* [3547] */
    (xdc_Char)0x4e,  /* [3548] */
    (xdc_Char)0x47,  /* [3549] */
    (xdc_Char)0x3a,  /* [3550] */
    (xdc_Char)0x20,  /* [3551] */
    (xdc_Char)0x25,  /* [3552] */
    (xdc_Char)0x24,  /* [3553] */
    (xdc_Char)0x46,  /* [3554] */
    (xdc_Char)0x25,  /* [3555] */
    (xdc_Char)0x24,  /* [3556] */
    (xdc_Char)0x53,  /* [3557] */
    (xdc_Char)0x0,  /* [3558] */
    (xdc_Char)0x25,  /* [3559] */
    (xdc_Char)0x24,  /* [3560] */
    (xdc_Char)0x46,  /* [3561] */
    (xdc_Char)0x25,  /* [3562] */
    (xdc_Char)0x24,  /* [3563] */
    (xdc_Char)0x53,  /* [3564] */
    (xdc_Char)0x0,  /* [3565] */
    (xdc_Char)0x53,  /* [3566] */
    (xdc_Char)0x74,  /* [3567] */
    (xdc_Char)0x61,  /* [3568] */
    (xdc_Char)0x72,  /* [3569] */
    (xdc_Char)0x74,  /* [3570] */
    (xdc_Char)0x3a,  /* [3571] */
    (xdc_Char)0x20,  /* [3572] */
    (xdc_Char)0x25,  /* [3573] */
    (xdc_Char)0x24,  /* [3574] */
    (xdc_Char)0x53,  /* [3575] */
    (xdc_Char)0x0,  /* [3576] */
    (xdc_Char)0x53,  /* [3577] */
    (xdc_Char)0x74,  /* [3578] */
    (xdc_Char)0x6f,  /* [3579] */
    (xdc_Char)0x70,  /* [3580] */
    (xdc_Char)0x3a,  /* [3581] */
    (xdc_Char)0x20,  /* [3582] */
    (xdc_Char)0x25,  /* [3583] */
    (xdc_Char)0x24,  /* [3584] */
    (xdc_Char)0x53,  /* [3585] */
    (xdc_Char)0x0,  /* [3586] */
    (xdc_Char)0x53,  /* [3587] */
    (xdc_Char)0x74,  /* [3588] */
    (xdc_Char)0x61,  /* [3589] */
    (xdc_Char)0x72,  /* [3590] */
    (xdc_Char)0x74,  /* [3591] */
    (xdc_Char)0x49,  /* [3592] */
    (xdc_Char)0x6e,  /* [3593] */
    (xdc_Char)0x73,  /* [3594] */
    (xdc_Char)0x74,  /* [3595] */
    (xdc_Char)0x61,  /* [3596] */
    (xdc_Char)0x6e,  /* [3597] */
    (xdc_Char)0x63,  /* [3598] */
    (xdc_Char)0x65,  /* [3599] */
    (xdc_Char)0x3a,  /* [3600] */
    (xdc_Char)0x20,  /* [3601] */
    (xdc_Char)0x25,  /* [3602] */
    (xdc_Char)0x24,  /* [3603] */
    (xdc_Char)0x53,  /* [3604] */
    (xdc_Char)0x0,  /* [3605] */
    (xdc_Char)0x53,  /* [3606] */
    (xdc_Char)0x74,  /* [3607] */
    (xdc_Char)0x6f,  /* [3608] */
    (xdc_Char)0x70,  /* [3609] */
    (xdc_Char)0x49,  /* [3610] */
    (xdc_Char)0x6e,  /* [3611] */
    (xdc_Char)0x73,  /* [3612] */
    (xdc_Char)0x74,  /* [3613] */
    (xdc_Char)0x61,  /* [3614] */
    (xdc_Char)0x6e,  /* [3615] */
    (xdc_Char)0x63,  /* [3616] */
    (xdc_Char)0x65,  /* [3617] */
    (xdc_Char)0x3a,  /* [3618] */
    (xdc_Char)0x20,  /* [3619] */
    (xdc_Char)0x25,  /* [3620] */
    (xdc_Char)0x24,  /* [3621] */
    (xdc_Char)0x53,  /* [3622] */
    (xdc_Char)0x0,  /* [3623] */
    (xdc_Char)0x4c,  /* [3624] */
    (xdc_Char)0x4d,  /* [3625] */
    (xdc_Char)0x5f,  /* [3626] */
    (xdc_Char)0x62,  /* [3627] */
    (xdc_Char)0x65,  /* [3628] */
    (xdc_Char)0x67,  /* [3629] */
    (xdc_Char)0x69,  /* [3630] */
    (xdc_Char)0x6e,  /* [3631] */
    (xdc_Char)0x3a,  /* [3632] */
    (xdc_Char)0x20,  /* [3633] */
    (xdc_Char)0x68,  /* [3634] */
    (xdc_Char)0x77,  /* [3635] */
    (xdc_Char)0x69,  /* [3636] */
    (xdc_Char)0x3a,  /* [3637] */
    (xdc_Char)0x20,  /* [3638] */
    (xdc_Char)0x30,  /* [3639] */
    (xdc_Char)0x78,  /* [3640] */
    (xdc_Char)0x25,  /* [3641] */
    (xdc_Char)0x78,  /* [3642] */
    (xdc_Char)0x2c,  /* [3643] */
    (xdc_Char)0x20,  /* [3644] */
    (xdc_Char)0x66,  /* [3645] */
    (xdc_Char)0x75,  /* [3646] */
    (xdc_Char)0x6e,  /* [3647] */
    (xdc_Char)0x63,  /* [3648] */
    (xdc_Char)0x3a,  /* [3649] */
    (xdc_Char)0x20,  /* [3650] */
    (xdc_Char)0x30,  /* [3651] */
    (xdc_Char)0x78,  /* [3652] */
    (xdc_Char)0x25,  /* [3653] */
    (xdc_Char)0x78,  /* [3654] */
    (xdc_Char)0x2c,  /* [3655] */
    (xdc_Char)0x20,  /* [3656] */
    (xdc_Char)0x70,  /* [3657] */
    (xdc_Char)0x72,  /* [3658] */
    (xdc_Char)0x65,  /* [3659] */
    (xdc_Char)0x54,  /* [3660] */
    (xdc_Char)0x68,  /* [3661] */
    (xdc_Char)0x72,  /* [3662] */
    (xdc_Char)0x65,  /* [3663] */
    (xdc_Char)0x61,  /* [3664] */
    (xdc_Char)0x64,  /* [3665] */
    (xdc_Char)0x3a,  /* [3666] */
    (xdc_Char)0x20,  /* [3667] */
    (xdc_Char)0x25,  /* [3668] */
    (xdc_Char)0x64,  /* [3669] */
    (xdc_Char)0x2c,  /* [3670] */
    (xdc_Char)0x20,  /* [3671] */
    (xdc_Char)0x69,  /* [3672] */
    (xdc_Char)0x6e,  /* [3673] */
    (xdc_Char)0x74,  /* [3674] */
    (xdc_Char)0x4e,  /* [3675] */
    (xdc_Char)0x75,  /* [3676] */
    (xdc_Char)0x6d,  /* [3677] */
    (xdc_Char)0x3a,  /* [3678] */
    (xdc_Char)0x20,  /* [3679] */
    (xdc_Char)0x25,  /* [3680] */
    (xdc_Char)0x64,  /* [3681] */
    (xdc_Char)0x2c,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x69,  /* [3684] */
    (xdc_Char)0x72,  /* [3685] */
    (xdc_Char)0x70,  /* [3686] */
    (xdc_Char)0x3a,  /* [3687] */
    (xdc_Char)0x20,  /* [3688] */
    (xdc_Char)0x30,  /* [3689] */
    (xdc_Char)0x78,  /* [3690] */
    (xdc_Char)0x25,  /* [3691] */
    (xdc_Char)0x78,  /* [3692] */
    (xdc_Char)0x0,  /* [3693] */
    (xdc_Char)0x4c,  /* [3694] */
    (xdc_Char)0x44,  /* [3695] */
    (xdc_Char)0x5f,  /* [3696] */
    (xdc_Char)0x65,  /* [3697] */
    (xdc_Char)0x6e,  /* [3698] */
    (xdc_Char)0x64,  /* [3699] */
    (xdc_Char)0x3a,  /* [3700] */
    (xdc_Char)0x20,  /* [3701] */
    (xdc_Char)0x68,  /* [3702] */
    (xdc_Char)0x77,  /* [3703] */
    (xdc_Char)0x69,  /* [3704] */
    (xdc_Char)0x3a,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x30,  /* [3707] */
    (xdc_Char)0x78,  /* [3708] */
    (xdc_Char)0x25,  /* [3709] */
    (xdc_Char)0x78,  /* [3710] */
    (xdc_Char)0x0,  /* [3711] */
    (xdc_Char)0x4c,  /* [3712] */
    (xdc_Char)0x57,  /* [3713] */
    (xdc_Char)0x5f,  /* [3714] */
    (xdc_Char)0x64,  /* [3715] */
    (xdc_Char)0x65,  /* [3716] */
    (xdc_Char)0x6c,  /* [3717] */
    (xdc_Char)0x61,  /* [3718] */
    (xdc_Char)0x79,  /* [3719] */
    (xdc_Char)0x65,  /* [3720] */
    (xdc_Char)0x64,  /* [3721] */
    (xdc_Char)0x3a,  /* [3722] */
    (xdc_Char)0x20,  /* [3723] */
    (xdc_Char)0x64,  /* [3724] */
    (xdc_Char)0x65,  /* [3725] */
    (xdc_Char)0x6c,  /* [3726] */
    (xdc_Char)0x61,  /* [3727] */
    (xdc_Char)0x79,  /* [3728] */
    (xdc_Char)0x3a,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x25,  /* [3731] */
    (xdc_Char)0x64,  /* [3732] */
    (xdc_Char)0x0,  /* [3733] */
    (xdc_Char)0x4c,  /* [3734] */
    (xdc_Char)0x4d,  /* [3735] */
    (xdc_Char)0x5f,  /* [3736] */
    (xdc_Char)0x74,  /* [3737] */
    (xdc_Char)0x69,  /* [3738] */
    (xdc_Char)0x63,  /* [3739] */
    (xdc_Char)0x6b,  /* [3740] */
    (xdc_Char)0x3a,  /* [3741] */
    (xdc_Char)0x20,  /* [3742] */
    (xdc_Char)0x74,  /* [3743] */
    (xdc_Char)0x69,  /* [3744] */
    (xdc_Char)0x63,  /* [3745] */
    (xdc_Char)0x6b,  /* [3746] */
    (xdc_Char)0x3a,  /* [3747] */
    (xdc_Char)0x20,  /* [3748] */
    (xdc_Char)0x25,  /* [3749] */
    (xdc_Char)0x64,  /* [3750] */
    (xdc_Char)0x0,  /* [3751] */
    (xdc_Char)0x4c,  /* [3752] */
    (xdc_Char)0x4d,  /* [3753] */
    (xdc_Char)0x5f,  /* [3754] */
    (xdc_Char)0x62,  /* [3755] */
    (xdc_Char)0x65,  /* [3756] */
    (xdc_Char)0x67,  /* [3757] */
    (xdc_Char)0x69,  /* [3758] */
    (xdc_Char)0x6e,  /* [3759] */
    (xdc_Char)0x3a,  /* [3760] */
    (xdc_Char)0x20,  /* [3761] */
    (xdc_Char)0x63,  /* [3762] */
    (xdc_Char)0x6c,  /* [3763] */
    (xdc_Char)0x6b,  /* [3764] */
    (xdc_Char)0x3a,  /* [3765] */
    (xdc_Char)0x20,  /* [3766] */
    (xdc_Char)0x30,  /* [3767] */
    (xdc_Char)0x78,  /* [3768] */
    (xdc_Char)0x25,  /* [3769] */
    (xdc_Char)0x78,  /* [3770] */
    (xdc_Char)0x2c,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x66,  /* [3773] */
    (xdc_Char)0x75,  /* [3774] */
    (xdc_Char)0x6e,  /* [3775] */
    (xdc_Char)0x63,  /* [3776] */
    (xdc_Char)0x3a,  /* [3777] */
    (xdc_Char)0x20,  /* [3778] */
    (xdc_Char)0x30,  /* [3779] */
    (xdc_Char)0x78,  /* [3780] */
    (xdc_Char)0x25,  /* [3781] */
    (xdc_Char)0x78,  /* [3782] */
    (xdc_Char)0x0,  /* [3783] */
    (xdc_Char)0x4c,  /* [3784] */
    (xdc_Char)0x4d,  /* [3785] */
    (xdc_Char)0x5f,  /* [3786] */
    (xdc_Char)0x70,  /* [3787] */
    (xdc_Char)0x6f,  /* [3788] */
    (xdc_Char)0x73,  /* [3789] */
    (xdc_Char)0x74,  /* [3790] */
    (xdc_Char)0x3a,  /* [3791] */
    (xdc_Char)0x20,  /* [3792] */
    (xdc_Char)0x73,  /* [3793] */
    (xdc_Char)0x65,  /* [3794] */
    (xdc_Char)0x6d,  /* [3795] */
    (xdc_Char)0x3a,  /* [3796] */
    (xdc_Char)0x20,  /* [3797] */
    (xdc_Char)0x30,  /* [3798] */
    (xdc_Char)0x78,  /* [3799] */
    (xdc_Char)0x25,  /* [3800] */
    (xdc_Char)0x78,  /* [3801] */
    (xdc_Char)0x2c,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x63,  /* [3804] */
    (xdc_Char)0x6f,  /* [3805] */
    (xdc_Char)0x75,  /* [3806] */
    (xdc_Char)0x6e,  /* [3807] */
    (xdc_Char)0x74,  /* [3808] */
    (xdc_Char)0x3a,  /* [3809] */
    (xdc_Char)0x20,  /* [3810] */
    (xdc_Char)0x25,  /* [3811] */
    (xdc_Char)0x64,  /* [3812] */
    (xdc_Char)0x0,  /* [3813] */
    (xdc_Char)0x4c,  /* [3814] */
    (xdc_Char)0x4d,  /* [3815] */
    (xdc_Char)0x5f,  /* [3816] */
    (xdc_Char)0x70,  /* [3817] */
    (xdc_Char)0x65,  /* [3818] */
    (xdc_Char)0x6e,  /* [3819] */
    (xdc_Char)0x64,  /* [3820] */
    (xdc_Char)0x3a,  /* [3821] */
    (xdc_Char)0x20,  /* [3822] */
    (xdc_Char)0x73,  /* [3823] */
    (xdc_Char)0x65,  /* [3824] */
    (xdc_Char)0x6d,  /* [3825] */
    (xdc_Char)0x3a,  /* [3826] */
    (xdc_Char)0x20,  /* [3827] */
    (xdc_Char)0x30,  /* [3828] */
    (xdc_Char)0x78,  /* [3829] */
    (xdc_Char)0x25,  /* [3830] */
    (xdc_Char)0x78,  /* [3831] */
    (xdc_Char)0x2c,  /* [3832] */
    (xdc_Char)0x20,  /* [3833] */
    (xdc_Char)0x63,  /* [3834] */
    (xdc_Char)0x6f,  /* [3835] */
    (xdc_Char)0x75,  /* [3836] */
    (xdc_Char)0x6e,  /* [3837] */
    (xdc_Char)0x74,  /* [3838] */
    (xdc_Char)0x3a,  /* [3839] */
    (xdc_Char)0x20,  /* [3840] */
    (xdc_Char)0x25,  /* [3841] */
    (xdc_Char)0x64,  /* [3842] */
    (xdc_Char)0x2c,  /* [3843] */
    (xdc_Char)0x20,  /* [3844] */
    (xdc_Char)0x74,  /* [3845] */
    (xdc_Char)0x69,  /* [3846] */
    (xdc_Char)0x6d,  /* [3847] */
    (xdc_Char)0x65,  /* [3848] */
    (xdc_Char)0x6f,  /* [3849] */
    (xdc_Char)0x75,  /* [3850] */
    (xdc_Char)0x74,  /* [3851] */
    (xdc_Char)0x3a,  /* [3852] */
    (xdc_Char)0x20,  /* [3853] */
    (xdc_Char)0x25,  /* [3854] */
    (xdc_Char)0x64,  /* [3855] */
    (xdc_Char)0x0,  /* [3856] */
    (xdc_Char)0x4c,  /* [3857] */
    (xdc_Char)0x4d,  /* [3858] */
    (xdc_Char)0x5f,  /* [3859] */
    (xdc_Char)0x62,  /* [3860] */
    (xdc_Char)0x65,  /* [3861] */
    (xdc_Char)0x67,  /* [3862] */
    (xdc_Char)0x69,  /* [3863] */
    (xdc_Char)0x6e,  /* [3864] */
    (xdc_Char)0x3a,  /* [3865] */
    (xdc_Char)0x20,  /* [3866] */
    (xdc_Char)0x73,  /* [3867] */
    (xdc_Char)0x77,  /* [3868] */
    (xdc_Char)0x69,  /* [3869] */
    (xdc_Char)0x3a,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x30,  /* [3872] */
    (xdc_Char)0x78,  /* [3873] */
    (xdc_Char)0x25,  /* [3874] */
    (xdc_Char)0x78,  /* [3875] */
    (xdc_Char)0x2c,  /* [3876] */
    (xdc_Char)0x20,  /* [3877] */
    (xdc_Char)0x66,  /* [3878] */
    (xdc_Char)0x75,  /* [3879] */
    (xdc_Char)0x6e,  /* [3880] */
    (xdc_Char)0x63,  /* [3881] */
    (xdc_Char)0x3a,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x30,  /* [3884] */
    (xdc_Char)0x78,  /* [3885] */
    (xdc_Char)0x25,  /* [3886] */
    (xdc_Char)0x78,  /* [3887] */
    (xdc_Char)0x2c,  /* [3888] */
    (xdc_Char)0x20,  /* [3889] */
    (xdc_Char)0x70,  /* [3890] */
    (xdc_Char)0x72,  /* [3891] */
    (xdc_Char)0x65,  /* [3892] */
    (xdc_Char)0x54,  /* [3893] */
    (xdc_Char)0x68,  /* [3894] */
    (xdc_Char)0x72,  /* [3895] */
    (xdc_Char)0x65,  /* [3896] */
    (xdc_Char)0x61,  /* [3897] */
    (xdc_Char)0x64,  /* [3898] */
    (xdc_Char)0x3a,  /* [3899] */
    (xdc_Char)0x20,  /* [3900] */
    (xdc_Char)0x25,  /* [3901] */
    (xdc_Char)0x64,  /* [3902] */
    (xdc_Char)0x0,  /* [3903] */
    (xdc_Char)0x4c,  /* [3904] */
    (xdc_Char)0x44,  /* [3905] */
    (xdc_Char)0x5f,  /* [3906] */
    (xdc_Char)0x65,  /* [3907] */
    (xdc_Char)0x6e,  /* [3908] */
    (xdc_Char)0x64,  /* [3909] */
    (xdc_Char)0x3a,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x73,  /* [3912] */
    (xdc_Char)0x77,  /* [3913] */
    (xdc_Char)0x69,  /* [3914] */
    (xdc_Char)0x3a,  /* [3915] */
    (xdc_Char)0x20,  /* [3916] */
    (xdc_Char)0x30,  /* [3917] */
    (xdc_Char)0x78,  /* [3918] */
    (xdc_Char)0x25,  /* [3919] */
    (xdc_Char)0x78,  /* [3920] */
    (xdc_Char)0x0,  /* [3921] */
    (xdc_Char)0x4c,  /* [3922] */
    (xdc_Char)0x4d,  /* [3923] */
    (xdc_Char)0x5f,  /* [3924] */
    (xdc_Char)0x70,  /* [3925] */
    (xdc_Char)0x6f,  /* [3926] */
    (xdc_Char)0x73,  /* [3927] */
    (xdc_Char)0x74,  /* [3928] */
    (xdc_Char)0x3a,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x73,  /* [3931] */
    (xdc_Char)0x77,  /* [3932] */
    (xdc_Char)0x69,  /* [3933] */
    (xdc_Char)0x3a,  /* [3934] */
    (xdc_Char)0x20,  /* [3935] */
    (xdc_Char)0x30,  /* [3936] */
    (xdc_Char)0x78,  /* [3937] */
    (xdc_Char)0x25,  /* [3938] */
    (xdc_Char)0x78,  /* [3939] */
    (xdc_Char)0x2c,  /* [3940] */
    (xdc_Char)0x20,  /* [3941] */
    (xdc_Char)0x66,  /* [3942] */
    (xdc_Char)0x75,  /* [3943] */
    (xdc_Char)0x6e,  /* [3944] */
    (xdc_Char)0x63,  /* [3945] */
    (xdc_Char)0x3a,  /* [3946] */
    (xdc_Char)0x20,  /* [3947] */
    (xdc_Char)0x30,  /* [3948] */
    (xdc_Char)0x78,  /* [3949] */
    (xdc_Char)0x25,  /* [3950] */
    (xdc_Char)0x78,  /* [3951] */
    (xdc_Char)0x2c,  /* [3952] */
    (xdc_Char)0x20,  /* [3953] */
    (xdc_Char)0x70,  /* [3954] */
    (xdc_Char)0x72,  /* [3955] */
    (xdc_Char)0x69,  /* [3956] */
    (xdc_Char)0x3a,  /* [3957] */
    (xdc_Char)0x20,  /* [3958] */
    (xdc_Char)0x25,  /* [3959] */
    (xdc_Char)0x64,  /* [3960] */
    (xdc_Char)0x0,  /* [3961] */
    (xdc_Char)0x4c,  /* [3962] */
    (xdc_Char)0x4d,  /* [3963] */
    (xdc_Char)0x5f,  /* [3964] */
    (xdc_Char)0x73,  /* [3965] */
    (xdc_Char)0x77,  /* [3966] */
    (xdc_Char)0x69,  /* [3967] */
    (xdc_Char)0x74,  /* [3968] */
    (xdc_Char)0x63,  /* [3969] */
    (xdc_Char)0x68,  /* [3970] */
    (xdc_Char)0x3a,  /* [3971] */
    (xdc_Char)0x20,  /* [3972] */
    (xdc_Char)0x6f,  /* [3973] */
    (xdc_Char)0x6c,  /* [3974] */
    (xdc_Char)0x64,  /* [3975] */
    (xdc_Char)0x74,  /* [3976] */
    (xdc_Char)0x73,  /* [3977] */
    (xdc_Char)0x6b,  /* [3978] */
    (xdc_Char)0x3a,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x30,  /* [3981] */
    (xdc_Char)0x78,  /* [3982] */
    (xdc_Char)0x25,  /* [3983] */
    (xdc_Char)0x78,  /* [3984] */
    (xdc_Char)0x2c,  /* [3985] */
    (xdc_Char)0x20,  /* [3986] */
    (xdc_Char)0x6f,  /* [3987] */
    (xdc_Char)0x6c,  /* [3988] */
    (xdc_Char)0x64,  /* [3989] */
    (xdc_Char)0x66,  /* [3990] */
    (xdc_Char)0x75,  /* [3991] */
    (xdc_Char)0x6e,  /* [3992] */
    (xdc_Char)0x63,  /* [3993] */
    (xdc_Char)0x3a,  /* [3994] */
    (xdc_Char)0x20,  /* [3995] */
    (xdc_Char)0x30,  /* [3996] */
    (xdc_Char)0x78,  /* [3997] */
    (xdc_Char)0x25,  /* [3998] */
    (xdc_Char)0x78,  /* [3999] */
    (xdc_Char)0x2c,  /* [4000] */
    (xdc_Char)0x20,  /* [4001] */
    (xdc_Char)0x6e,  /* [4002] */
    (xdc_Char)0x65,  /* [4003] */
    (xdc_Char)0x77,  /* [4004] */
    (xdc_Char)0x74,  /* [4005] */
    (xdc_Char)0x73,  /* [4006] */
    (xdc_Char)0x6b,  /* [4007] */
    (xdc_Char)0x3a,  /* [4008] */
    (xdc_Char)0x20,  /* [4009] */
    (xdc_Char)0x30,  /* [4010] */
    (xdc_Char)0x78,  /* [4011] */
    (xdc_Char)0x25,  /* [4012] */
    (xdc_Char)0x78,  /* [4013] */
    (xdc_Char)0x2c,  /* [4014] */
    (xdc_Char)0x20,  /* [4015] */
    (xdc_Char)0x6e,  /* [4016] */
    (xdc_Char)0x65,  /* [4017] */
    (xdc_Char)0x77,  /* [4018] */
    (xdc_Char)0x66,  /* [4019] */
    (xdc_Char)0x75,  /* [4020] */
    (xdc_Char)0x6e,  /* [4021] */
    (xdc_Char)0x63,  /* [4022] */
    (xdc_Char)0x3a,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x30,  /* [4025] */
    (xdc_Char)0x78,  /* [4026] */
    (xdc_Char)0x25,  /* [4027] */
    (xdc_Char)0x78,  /* [4028] */
    (xdc_Char)0x0,  /* [4029] */
    (xdc_Char)0x4c,  /* [4030] */
    (xdc_Char)0x4d,  /* [4031] */
    (xdc_Char)0x5f,  /* [4032] */
    (xdc_Char)0x73,  /* [4033] */
    (xdc_Char)0x6c,  /* [4034] */
    (xdc_Char)0x65,  /* [4035] */
    (xdc_Char)0x65,  /* [4036] */
    (xdc_Char)0x70,  /* [4037] */
    (xdc_Char)0x3a,  /* [4038] */
    (xdc_Char)0x20,  /* [4039] */
    (xdc_Char)0x74,  /* [4040] */
    (xdc_Char)0x73,  /* [4041] */
    (xdc_Char)0x6b,  /* [4042] */
    (xdc_Char)0x3a,  /* [4043] */
    (xdc_Char)0x20,  /* [4044] */
    (xdc_Char)0x30,  /* [4045] */
    (xdc_Char)0x78,  /* [4046] */
    (xdc_Char)0x25,  /* [4047] */
    (xdc_Char)0x78,  /* [4048] */
    (xdc_Char)0x2c,  /* [4049] */
    (xdc_Char)0x20,  /* [4050] */
    (xdc_Char)0x66,  /* [4051] */
    (xdc_Char)0x75,  /* [4052] */
    (xdc_Char)0x6e,  /* [4053] */
    (xdc_Char)0x63,  /* [4054] */
    (xdc_Char)0x3a,  /* [4055] */
    (xdc_Char)0x20,  /* [4056] */
    (xdc_Char)0x30,  /* [4057] */
    (xdc_Char)0x78,  /* [4058] */
    (xdc_Char)0x25,  /* [4059] */
    (xdc_Char)0x78,  /* [4060] */
    (xdc_Char)0x2c,  /* [4061] */
    (xdc_Char)0x20,  /* [4062] */
    (xdc_Char)0x74,  /* [4063] */
    (xdc_Char)0x69,  /* [4064] */
    (xdc_Char)0x6d,  /* [4065] */
    (xdc_Char)0x65,  /* [4066] */
    (xdc_Char)0x6f,  /* [4067] */
    (xdc_Char)0x75,  /* [4068] */
    (xdc_Char)0x74,  /* [4069] */
    (xdc_Char)0x3a,  /* [4070] */
    (xdc_Char)0x20,  /* [4071] */
    (xdc_Char)0x25,  /* [4072] */
    (xdc_Char)0x64,  /* [4073] */
    (xdc_Char)0x0,  /* [4074] */
    (xdc_Char)0x4c,  /* [4075] */
    (xdc_Char)0x44,  /* [4076] */
    (xdc_Char)0x5f,  /* [4077] */
    (xdc_Char)0x72,  /* [4078] */
    (xdc_Char)0x65,  /* [4079] */
    (xdc_Char)0x61,  /* [4080] */
    (xdc_Char)0x64,  /* [4081] */
    (xdc_Char)0x79,  /* [4082] */
    (xdc_Char)0x3a,  /* [4083] */
    (xdc_Char)0x20,  /* [4084] */
    (xdc_Char)0x74,  /* [4085] */
    (xdc_Char)0x73,  /* [4086] */
    (xdc_Char)0x6b,  /* [4087] */
    (xdc_Char)0x3a,  /* [4088] */
    (xdc_Char)0x20,  /* [4089] */
    (xdc_Char)0x30,  /* [4090] */
    (xdc_Char)0x78,  /* [4091] */
    (xdc_Char)0x25,  /* [4092] */
    (xdc_Char)0x78,  /* [4093] */
    (xdc_Char)0x2c,  /* [4094] */
    (xdc_Char)0x20,  /* [4095] */
    (xdc_Char)0x66,  /* [4096] */
    (xdc_Char)0x75,  /* [4097] */
    (xdc_Char)0x6e,  /* [4098] */
    (xdc_Char)0x63,  /* [4099] */
    (xdc_Char)0x3a,  /* [4100] */
    (xdc_Char)0x20,  /* [4101] */
    (xdc_Char)0x30,  /* [4102] */
    (xdc_Char)0x78,  /* [4103] */
    (xdc_Char)0x25,  /* [4104] */
    (xdc_Char)0x78,  /* [4105] */
    (xdc_Char)0x2c,  /* [4106] */
    (xdc_Char)0x20,  /* [4107] */
    (xdc_Char)0x70,  /* [4108] */
    (xdc_Char)0x72,  /* [4109] */
    (xdc_Char)0x69,  /* [4110] */
    (xdc_Char)0x3a,  /* [4111] */
    (xdc_Char)0x20,  /* [4112] */
    (xdc_Char)0x25,  /* [4113] */
    (xdc_Char)0x64,  /* [4114] */
    (xdc_Char)0x0,  /* [4115] */
    (xdc_Char)0x4c,  /* [4116] */
    (xdc_Char)0x44,  /* [4117] */
    (xdc_Char)0x5f,  /* [4118] */
    (xdc_Char)0x62,  /* [4119] */
    (xdc_Char)0x6c,  /* [4120] */
    (xdc_Char)0x6f,  /* [4121] */
    (xdc_Char)0x63,  /* [4122] */
    (xdc_Char)0x6b,  /* [4123] */
    (xdc_Char)0x3a,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x74,  /* [4126] */
    (xdc_Char)0x73,  /* [4127] */
    (xdc_Char)0x6b,  /* [4128] */
    (xdc_Char)0x3a,  /* [4129] */
    (xdc_Char)0x20,  /* [4130] */
    (xdc_Char)0x30,  /* [4131] */
    (xdc_Char)0x78,  /* [4132] */
    (xdc_Char)0x25,  /* [4133] */
    (xdc_Char)0x78,  /* [4134] */
    (xdc_Char)0x2c,  /* [4135] */
    (xdc_Char)0x20,  /* [4136] */
    (xdc_Char)0x66,  /* [4137] */
    (xdc_Char)0x75,  /* [4138] */
    (xdc_Char)0x6e,  /* [4139] */
    (xdc_Char)0x63,  /* [4140] */
    (xdc_Char)0x3a,  /* [4141] */
    (xdc_Char)0x20,  /* [4142] */
    (xdc_Char)0x30,  /* [4143] */
    (xdc_Char)0x78,  /* [4144] */
    (xdc_Char)0x25,  /* [4145] */
    (xdc_Char)0x78,  /* [4146] */
    (xdc_Char)0x0,  /* [4147] */
    (xdc_Char)0x4c,  /* [4148] */
    (xdc_Char)0x4d,  /* [4149] */
    (xdc_Char)0x5f,  /* [4150] */
    (xdc_Char)0x79,  /* [4151] */
    (xdc_Char)0x69,  /* [4152] */
    (xdc_Char)0x65,  /* [4153] */
    (xdc_Char)0x6c,  /* [4154] */
    (xdc_Char)0x64,  /* [4155] */
    (xdc_Char)0x3a,  /* [4156] */
    (xdc_Char)0x20,  /* [4157] */
    (xdc_Char)0x74,  /* [4158] */
    (xdc_Char)0x73,  /* [4159] */
    (xdc_Char)0x6b,  /* [4160] */
    (xdc_Char)0x3a,  /* [4161] */
    (xdc_Char)0x20,  /* [4162] */
    (xdc_Char)0x30,  /* [4163] */
    (xdc_Char)0x78,  /* [4164] */
    (xdc_Char)0x25,  /* [4165] */
    (xdc_Char)0x78,  /* [4166] */
    (xdc_Char)0x2c,  /* [4167] */
    (xdc_Char)0x20,  /* [4168] */
    (xdc_Char)0x66,  /* [4169] */
    (xdc_Char)0x75,  /* [4170] */
    (xdc_Char)0x6e,  /* [4171] */
    (xdc_Char)0x63,  /* [4172] */
    (xdc_Char)0x3a,  /* [4173] */
    (xdc_Char)0x20,  /* [4174] */
    (xdc_Char)0x30,  /* [4175] */
    (xdc_Char)0x78,  /* [4176] */
    (xdc_Char)0x25,  /* [4177] */
    (xdc_Char)0x78,  /* [4178] */
    (xdc_Char)0x2c,  /* [4179] */
    (xdc_Char)0x20,  /* [4180] */
    (xdc_Char)0x63,  /* [4181] */
    (xdc_Char)0x75,  /* [4182] */
    (xdc_Char)0x72,  /* [4183] */
    (xdc_Char)0x72,  /* [4184] */
    (xdc_Char)0x54,  /* [4185] */
    (xdc_Char)0x68,  /* [4186] */
    (xdc_Char)0x72,  /* [4187] */
    (xdc_Char)0x65,  /* [4188] */
    (xdc_Char)0x61,  /* [4189] */
    (xdc_Char)0x64,  /* [4190] */
    (xdc_Char)0x3a,  /* [4191] */
    (xdc_Char)0x20,  /* [4192] */
    (xdc_Char)0x25,  /* [4193] */
    (xdc_Char)0x64,  /* [4194] */
    (xdc_Char)0x0,  /* [4195] */
    (xdc_Char)0x4c,  /* [4196] */
    (xdc_Char)0x4d,  /* [4197] */
    (xdc_Char)0x5f,  /* [4198] */
    (xdc_Char)0x73,  /* [4199] */
    (xdc_Char)0x65,  /* [4200] */
    (xdc_Char)0x74,  /* [4201] */
    (xdc_Char)0x50,  /* [4202] */
    (xdc_Char)0x72,  /* [4203] */
    (xdc_Char)0x69,  /* [4204] */
    (xdc_Char)0x3a,  /* [4205] */
    (xdc_Char)0x20,  /* [4206] */
    (xdc_Char)0x74,  /* [4207] */
    (xdc_Char)0x73,  /* [4208] */
    (xdc_Char)0x6b,  /* [4209] */
    (xdc_Char)0x3a,  /* [4210] */
    (xdc_Char)0x20,  /* [4211] */
    (xdc_Char)0x30,  /* [4212] */
    (xdc_Char)0x78,  /* [4213] */
    (xdc_Char)0x25,  /* [4214] */
    (xdc_Char)0x78,  /* [4215] */
    (xdc_Char)0x2c,  /* [4216] */
    (xdc_Char)0x20,  /* [4217] */
    (xdc_Char)0x66,  /* [4218] */
    (xdc_Char)0x75,  /* [4219] */
    (xdc_Char)0x6e,  /* [4220] */
    (xdc_Char)0x63,  /* [4221] */
    (xdc_Char)0x3a,  /* [4222] */
    (xdc_Char)0x20,  /* [4223] */
    (xdc_Char)0x30,  /* [4224] */
    (xdc_Char)0x78,  /* [4225] */
    (xdc_Char)0x25,  /* [4226] */
    (xdc_Char)0x78,  /* [4227] */
    (xdc_Char)0x2c,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x6f,  /* [4230] */
    (xdc_Char)0x6c,  /* [4231] */
    (xdc_Char)0x64,  /* [4232] */
    (xdc_Char)0x50,  /* [4233] */
    (xdc_Char)0x72,  /* [4234] */
    (xdc_Char)0x69,  /* [4235] */
    (xdc_Char)0x3a,  /* [4236] */
    (xdc_Char)0x20,  /* [4237] */
    (xdc_Char)0x25,  /* [4238] */
    (xdc_Char)0x64,  /* [4239] */
    (xdc_Char)0x2c,  /* [4240] */
    (xdc_Char)0x20,  /* [4241] */
    (xdc_Char)0x6e,  /* [4242] */
    (xdc_Char)0x65,  /* [4243] */
    (xdc_Char)0x77,  /* [4244] */
    (xdc_Char)0x50,  /* [4245] */
    (xdc_Char)0x72,  /* [4246] */
    (xdc_Char)0x69,  /* [4247] */
    (xdc_Char)0x20,  /* [4248] */
    (xdc_Char)0x25,  /* [4249] */
    (xdc_Char)0x64,  /* [4250] */
    (xdc_Char)0x0,  /* [4251] */
    (xdc_Char)0x4c,  /* [4252] */
    (xdc_Char)0x44,  /* [4253] */
    (xdc_Char)0x5f,  /* [4254] */
    (xdc_Char)0x65,  /* [4255] */
    (xdc_Char)0x78,  /* [4256] */
    (xdc_Char)0x69,  /* [4257] */
    (xdc_Char)0x74,  /* [4258] */
    (xdc_Char)0x3a,  /* [4259] */
    (xdc_Char)0x20,  /* [4260] */
    (xdc_Char)0x74,  /* [4261] */
    (xdc_Char)0x73,  /* [4262] */
    (xdc_Char)0x6b,  /* [4263] */
    (xdc_Char)0x3a,  /* [4264] */
    (xdc_Char)0x20,  /* [4265] */
    (xdc_Char)0x30,  /* [4266] */
    (xdc_Char)0x78,  /* [4267] */
    (xdc_Char)0x25,  /* [4268] */
    (xdc_Char)0x78,  /* [4269] */
    (xdc_Char)0x2c,  /* [4270] */
    (xdc_Char)0x20,  /* [4271] */
    (xdc_Char)0x66,  /* [4272] */
    (xdc_Char)0x75,  /* [4273] */
    (xdc_Char)0x6e,  /* [4274] */
    (xdc_Char)0x63,  /* [4275] */
    (xdc_Char)0x3a,  /* [4276] */
    (xdc_Char)0x20,  /* [4277] */
    (xdc_Char)0x30,  /* [4278] */
    (xdc_Char)0x78,  /* [4279] */
    (xdc_Char)0x25,  /* [4280] */
    (xdc_Char)0x78,  /* [4281] */
    (xdc_Char)0x0,  /* [4282] */
    (xdc_Char)0x78,  /* [4283] */
    (xdc_Char)0x64,  /* [4284] */
    (xdc_Char)0x63,  /* [4285] */
    (xdc_Char)0x2e,  /* [4286] */
    (xdc_Char)0x0,  /* [4287] */
    (xdc_Char)0x72,  /* [4288] */
    (xdc_Char)0x75,  /* [4289] */
    (xdc_Char)0x6e,  /* [4290] */
    (xdc_Char)0x74,  /* [4291] */
    (xdc_Char)0x69,  /* [4292] */
    (xdc_Char)0x6d,  /* [4293] */
    (xdc_Char)0x65,  /* [4294] */
    (xdc_Char)0x2e,  /* [4295] */
    (xdc_Char)0x0,  /* [4296] */
    (xdc_Char)0x41,  /* [4297] */
    (xdc_Char)0x73,  /* [4298] */
    (xdc_Char)0x73,  /* [4299] */
    (xdc_Char)0x65,  /* [4300] */
    (xdc_Char)0x72,  /* [4301] */
    (xdc_Char)0x74,  /* [4302] */
    (xdc_Char)0x0,  /* [4303] */
    (xdc_Char)0x43,  /* [4304] */
    (xdc_Char)0x6f,  /* [4305] */
    (xdc_Char)0x72,  /* [4306] */
    (xdc_Char)0x65,  /* [4307] */
    (xdc_Char)0x0,  /* [4308] */
    (xdc_Char)0x44,  /* [4309] */
    (xdc_Char)0x65,  /* [4310] */
    (xdc_Char)0x66,  /* [4311] */
    (xdc_Char)0x61,  /* [4312] */
    (xdc_Char)0x75,  /* [4313] */
    (xdc_Char)0x6c,  /* [4314] */
    (xdc_Char)0x74,  /* [4315] */
    (xdc_Char)0x73,  /* [4316] */
    (xdc_Char)0x0,  /* [4317] */
    (xdc_Char)0x44,  /* [4318] */
    (xdc_Char)0x69,  /* [4319] */
    (xdc_Char)0x61,  /* [4320] */
    (xdc_Char)0x67,  /* [4321] */
    (xdc_Char)0x73,  /* [4322] */
    (xdc_Char)0x0,  /* [4323] */
    (xdc_Char)0x45,  /* [4324] */
    (xdc_Char)0x72,  /* [4325] */
    (xdc_Char)0x72,  /* [4326] */
    (xdc_Char)0x6f,  /* [4327] */
    (xdc_Char)0x72,  /* [4328] */
    (xdc_Char)0x0,  /* [4329] */
    (xdc_Char)0x47,  /* [4330] */
    (xdc_Char)0x61,  /* [4331] */
    (xdc_Char)0x74,  /* [4332] */
    (xdc_Char)0x65,  /* [4333] */
    (xdc_Char)0x0,  /* [4334] */
    (xdc_Char)0x4c,  /* [4335] */
    (xdc_Char)0x6f,  /* [4336] */
    (xdc_Char)0x67,  /* [4337] */
    (xdc_Char)0x0,  /* [4338] */
    (xdc_Char)0x4c,  /* [4339] */
    (xdc_Char)0x6f,  /* [4340] */
    (xdc_Char)0x67,  /* [4341] */
    (xdc_Char)0x67,  /* [4342] */
    (xdc_Char)0x65,  /* [4343] */
    (xdc_Char)0x72,  /* [4344] */
    (xdc_Char)0x42,  /* [4345] */
    (xdc_Char)0x75,  /* [4346] */
    (xdc_Char)0x66,  /* [4347] */
    (xdc_Char)0x0,  /* [4348] */
    (xdc_Char)0x4d,  /* [4349] */
    (xdc_Char)0x61,  /* [4350] */
    (xdc_Char)0x69,  /* [4351] */
    (xdc_Char)0x6e,  /* [4352] */
    (xdc_Char)0x0,  /* [4353] */
    (xdc_Char)0x4d,  /* [4354] */
    (xdc_Char)0x65,  /* [4355] */
    (xdc_Char)0x6d,  /* [4356] */
    (xdc_Char)0x6f,  /* [4357] */
    (xdc_Char)0x72,  /* [4358] */
    (xdc_Char)0x79,  /* [4359] */
    (xdc_Char)0x0,  /* [4360] */
    (xdc_Char)0x52,  /* [4361] */
    (xdc_Char)0x65,  /* [4362] */
    (xdc_Char)0x67,  /* [4363] */
    (xdc_Char)0x69,  /* [4364] */
    (xdc_Char)0x73,  /* [4365] */
    (xdc_Char)0x74,  /* [4366] */
    (xdc_Char)0x72,  /* [4367] */
    (xdc_Char)0x79,  /* [4368] */
    (xdc_Char)0x0,  /* [4369] */
    (xdc_Char)0x53,  /* [4370] */
    (xdc_Char)0x74,  /* [4371] */
    (xdc_Char)0x61,  /* [4372] */
    (xdc_Char)0x72,  /* [4373] */
    (xdc_Char)0x74,  /* [4374] */
    (xdc_Char)0x75,  /* [4375] */
    (xdc_Char)0x70,  /* [4376] */
    (xdc_Char)0x0,  /* [4377] */
    (xdc_Char)0x53,  /* [4378] */
    (xdc_Char)0x79,  /* [4379] */
    (xdc_Char)0x73,  /* [4380] */
    (xdc_Char)0x74,  /* [4381] */
    (xdc_Char)0x65,  /* [4382] */
    (xdc_Char)0x6d,  /* [4383] */
    (xdc_Char)0x0,  /* [4384] */
    (xdc_Char)0x53,  /* [4385] */
    (xdc_Char)0x79,  /* [4386] */
    (xdc_Char)0x73,  /* [4387] */
    (xdc_Char)0x4d,  /* [4388] */
    (xdc_Char)0x69,  /* [4389] */
    (xdc_Char)0x6e,  /* [4390] */
    (xdc_Char)0x0,  /* [4391] */
    (xdc_Char)0x54,  /* [4392] */
    (xdc_Char)0x65,  /* [4393] */
    (xdc_Char)0x78,  /* [4394] */
    (xdc_Char)0x74,  /* [4395] */
    (xdc_Char)0x0,  /* [4396] */
    (xdc_Char)0x54,  /* [4397] */
    (xdc_Char)0x69,  /* [4398] */
    (xdc_Char)0x6d,  /* [4399] */
    (xdc_Char)0x65,  /* [4400] */
    (xdc_Char)0x73,  /* [4401] */
    (xdc_Char)0x74,  /* [4402] */
    (xdc_Char)0x61,  /* [4403] */
    (xdc_Char)0x6d,  /* [4404] */
    (xdc_Char)0x70,  /* [4405] */
    (xdc_Char)0x0,  /* [4406] */
    (xdc_Char)0x74,  /* [4407] */
    (xdc_Char)0x69,  /* [4408] */
    (xdc_Char)0x2e,  /* [4409] */
    (xdc_Char)0x0,  /* [4410] */
    (xdc_Char)0x73,  /* [4411] */
    (xdc_Char)0x79,  /* [4412] */
    (xdc_Char)0x73,  /* [4413] */
    (xdc_Char)0x62,  /* [4414] */
    (xdc_Char)0x69,  /* [4415] */
    (xdc_Char)0x6f,  /* [4416] */
    (xdc_Char)0x73,  /* [4417] */
    (xdc_Char)0x2e,  /* [4418] */
    (xdc_Char)0x0,  /* [4419] */
    (xdc_Char)0x66,  /* [4420] */
    (xdc_Char)0x61,  /* [4421] */
    (xdc_Char)0x6d,  /* [4422] */
    (xdc_Char)0x69,  /* [4423] */
    (xdc_Char)0x6c,  /* [4424] */
    (xdc_Char)0x79,  /* [4425] */
    (xdc_Char)0x2e,  /* [4426] */
    (xdc_Char)0x0,  /* [4427] */
    (xdc_Char)0x63,  /* [4428] */
    (xdc_Char)0x36,  /* [4429] */
    (xdc_Char)0x34,  /* [4430] */
    (xdc_Char)0x70,  /* [4431] */
    (xdc_Char)0x2e,  /* [4432] */
    (xdc_Char)0x0,  /* [4433] */
    (xdc_Char)0x45,  /* [4434] */
    (xdc_Char)0x76,  /* [4435] */
    (xdc_Char)0x65,  /* [4436] */
    (xdc_Char)0x6e,  /* [4437] */
    (xdc_Char)0x74,  /* [4438] */
    (xdc_Char)0x43,  /* [4439] */
    (xdc_Char)0x6f,  /* [4440] */
    (xdc_Char)0x6d,  /* [4441] */
    (xdc_Char)0x62,  /* [4442] */
    (xdc_Char)0x69,  /* [4443] */
    (xdc_Char)0x6e,  /* [4444] */
    (xdc_Char)0x65,  /* [4445] */
    (xdc_Char)0x72,  /* [4446] */
    (xdc_Char)0x0,  /* [4447] */
    (xdc_Char)0x45,  /* [4448] */
    (xdc_Char)0x78,  /* [4449] */
    (xdc_Char)0x63,  /* [4450] */
    (xdc_Char)0x65,  /* [4451] */
    (xdc_Char)0x70,  /* [4452] */
    (xdc_Char)0x74,  /* [4453] */
    (xdc_Char)0x69,  /* [4454] */
    (xdc_Char)0x6f,  /* [4455] */
    (xdc_Char)0x6e,  /* [4456] */
    (xdc_Char)0x0,  /* [4457] */
    (xdc_Char)0x48,  /* [4458] */
    (xdc_Char)0x77,  /* [4459] */
    (xdc_Char)0x69,  /* [4460] */
    (xdc_Char)0x0,  /* [4461] */
    (xdc_Char)0x54,  /* [4462] */
    (xdc_Char)0x69,  /* [4463] */
    (xdc_Char)0x6d,  /* [4464] */
    (xdc_Char)0x65,  /* [4465] */
    (xdc_Char)0x73,  /* [4466] */
    (xdc_Char)0x74,  /* [4467] */
    (xdc_Char)0x61,  /* [4468] */
    (xdc_Char)0x6d,  /* [4469] */
    (xdc_Char)0x70,  /* [4470] */
    (xdc_Char)0x50,  /* [4471] */
    (xdc_Char)0x72,  /* [4472] */
    (xdc_Char)0x6f,  /* [4473] */
    (xdc_Char)0x76,  /* [4474] */
    (xdc_Char)0x69,  /* [4475] */
    (xdc_Char)0x64,  /* [4476] */
    (xdc_Char)0x65,  /* [4477] */
    (xdc_Char)0x72,  /* [4478] */
    (xdc_Char)0x0,  /* [4479] */
    (xdc_Char)0x42,  /* [4480] */
    (xdc_Char)0x49,  /* [4481] */
    (xdc_Char)0x4f,  /* [4482] */
    (xdc_Char)0x53,  /* [4483] */
    (xdc_Char)0x0,  /* [4484] */
    (xdc_Char)0x68,  /* [4485] */
    (xdc_Char)0x61,  /* [4486] */
    (xdc_Char)0x6c,  /* [4487] */
    (xdc_Char)0x2e,  /* [4488] */
    (xdc_Char)0x0,  /* [4489] */
    (xdc_Char)0x54,  /* [4490] */
    (xdc_Char)0x69,  /* [4491] */
    (xdc_Char)0x6d,  /* [4492] */
    (xdc_Char)0x65,  /* [4493] */
    (xdc_Char)0x72,  /* [4494] */
    (xdc_Char)0x0,  /* [4495] */
    (xdc_Char)0x43,  /* [4496] */
    (xdc_Char)0x61,  /* [4497] */
    (xdc_Char)0x63,  /* [4498] */
    (xdc_Char)0x68,  /* [4499] */
    (xdc_Char)0x65,  /* [4500] */
    (xdc_Char)0x0,  /* [4501] */
    (xdc_Char)0x6b,  /* [4502] */
    (xdc_Char)0x6e,  /* [4503] */
    (xdc_Char)0x6c,  /* [4504] */
    (xdc_Char)0x2e,  /* [4505] */
    (xdc_Char)0x0,  /* [4506] */
    (xdc_Char)0x43,  /* [4507] */
    (xdc_Char)0x6c,  /* [4508] */
    (xdc_Char)0x6f,  /* [4509] */
    (xdc_Char)0x63,  /* [4510] */
    (xdc_Char)0x6b,  /* [4511] */
    (xdc_Char)0x0,  /* [4512] */
    (xdc_Char)0x49,  /* [4513] */
    (xdc_Char)0x64,  /* [4514] */
    (xdc_Char)0x6c,  /* [4515] */
    (xdc_Char)0x65,  /* [4516] */
    (xdc_Char)0x0,  /* [4517] */
    (xdc_Char)0x49,  /* [4518] */
    (xdc_Char)0x6e,  /* [4519] */
    (xdc_Char)0x74,  /* [4520] */
    (xdc_Char)0x72,  /* [4521] */
    (xdc_Char)0x69,  /* [4522] */
    (xdc_Char)0x6e,  /* [4523] */
    (xdc_Char)0x73,  /* [4524] */
    (xdc_Char)0x69,  /* [4525] */
    (xdc_Char)0x63,  /* [4526] */
    (xdc_Char)0x73,  /* [4527] */
    (xdc_Char)0x0,  /* [4528] */
    (xdc_Char)0x51,  /* [4529] */
    (xdc_Char)0x75,  /* [4530] */
    (xdc_Char)0x65,  /* [4531] */
    (xdc_Char)0x75,  /* [4532] */
    (xdc_Char)0x65,  /* [4533] */
    (xdc_Char)0x0,  /* [4534] */
    (xdc_Char)0x53,  /* [4535] */
    (xdc_Char)0x65,  /* [4536] */
    (xdc_Char)0x6d,  /* [4537] */
    (xdc_Char)0x61,  /* [4538] */
    (xdc_Char)0x70,  /* [4539] */
    (xdc_Char)0x68,  /* [4540] */
    (xdc_Char)0x6f,  /* [4541] */
    (xdc_Char)0x72,  /* [4542] */
    (xdc_Char)0x65,  /* [4543] */
    (xdc_Char)0x0,  /* [4544] */
    (xdc_Char)0x53,  /* [4545] */
    (xdc_Char)0x77,  /* [4546] */
    (xdc_Char)0x69,  /* [4547] */
    (xdc_Char)0x0,  /* [4548] */
    (xdc_Char)0x54,  /* [4549] */
    (xdc_Char)0x61,  /* [4550] */
    (xdc_Char)0x73,  /* [4551] */
    (xdc_Char)0x6b,  /* [4552] */
    (xdc_Char)0x0,  /* [4553] */
    (xdc_Char)0x63,  /* [4554] */
    (xdc_Char)0x36,  /* [4555] */
    (xdc_Char)0x36,  /* [4556] */
    (xdc_Char)0x2e,  /* [4557] */
    (xdc_Char)0x0,  /* [4558] */
    (xdc_Char)0x74,  /* [4559] */
    (xdc_Char)0x63,  /* [4560] */
    (xdc_Char)0x69,  /* [4561] */
    (xdc_Char)0x36,  /* [4562] */
    (xdc_Char)0x36,  /* [4563] */
    (xdc_Char)0x78,  /* [4564] */
    (xdc_Char)0x78,  /* [4565] */
    (xdc_Char)0x2e,  /* [4566] */
    (xdc_Char)0x0,  /* [4567] */
    (xdc_Char)0x43,  /* [4568] */
    (xdc_Char)0x70,  /* [4569] */
    (xdc_Char)0x49,  /* [4570] */
    (xdc_Char)0x6e,  /* [4571] */
    (xdc_Char)0x74,  /* [4572] */
    (xdc_Char)0x63,  /* [4573] */
    (xdc_Char)0x0,  /* [4574] */
    (xdc_Char)0x67,  /* [4575] */
    (xdc_Char)0x61,  /* [4576] */
    (xdc_Char)0x74,  /* [4577] */
    (xdc_Char)0x65,  /* [4578] */
    (xdc_Char)0x73,  /* [4579] */
    (xdc_Char)0x2e,  /* [4580] */
    (xdc_Char)0x0,  /* [4581] */
    (xdc_Char)0x47,  /* [4582] */
    (xdc_Char)0x61,  /* [4583] */
    (xdc_Char)0x74,  /* [4584] */
    (xdc_Char)0x65,  /* [4585] */
    (xdc_Char)0x48,  /* [4586] */
    (xdc_Char)0x77,  /* [4587] */
    (xdc_Char)0x69,  /* [4588] */
    (xdc_Char)0x0,  /* [4589] */
    (xdc_Char)0x47,  /* [4590] */
    (xdc_Char)0x61,  /* [4591] */
    (xdc_Char)0x74,  /* [4592] */
    (xdc_Char)0x65,  /* [4593] */
    (xdc_Char)0x4d,  /* [4594] */
    (xdc_Char)0x75,  /* [4595] */
    (xdc_Char)0x74,  /* [4596] */
    (xdc_Char)0x65,  /* [4597] */
    (xdc_Char)0x78,  /* [4598] */
    (xdc_Char)0x0,  /* [4599] */
    (xdc_Char)0x63,  /* [4600] */
    (xdc_Char)0x36,  /* [4601] */
    (xdc_Char)0x32,  /* [4602] */
    (xdc_Char)0x2e,  /* [4603] */
    (xdc_Char)0x0,  /* [4604] */
    (xdc_Char)0x54,  /* [4605] */
    (xdc_Char)0x61,  /* [4606] */
    (xdc_Char)0x73,  /* [4607] */
    (xdc_Char)0x6b,  /* [4608] */
    (xdc_Char)0x53,  /* [4609] */
    (xdc_Char)0x75,  /* [4610] */
    (xdc_Char)0x70,  /* [4611] */
    (xdc_Char)0x70,  /* [4612] */
    (xdc_Char)0x6f,  /* [4613] */
    (xdc_Char)0x72,  /* [4614] */
    (xdc_Char)0x74,  /* [4615] */
    (xdc_Char)0x0,  /* [4616] */
    (xdc_Char)0x49,  /* [4617] */
    (xdc_Char)0x6e,  /* [4618] */
    (xdc_Char)0x74,  /* [4619] */
    (xdc_Char)0x72,  /* [4620] */
    (xdc_Char)0x69,  /* [4621] */
    (xdc_Char)0x6e,  /* [4622] */
    (xdc_Char)0x73,  /* [4623] */
    (xdc_Char)0x69,  /* [4624] */
    (xdc_Char)0x63,  /* [4625] */
    (xdc_Char)0x73,  /* [4626] */
    (xdc_Char)0x53,  /* [4627] */
    (xdc_Char)0x75,  /* [4628] */
    (xdc_Char)0x70,  /* [4629] */
    (xdc_Char)0x70,  /* [4630] */
    (xdc_Char)0x6f,  /* [4631] */
    (xdc_Char)0x72,  /* [4632] */
    (xdc_Char)0x74,  /* [4633] */
    (xdc_Char)0x0,  /* [4634] */
    (xdc_Char)0x74,  /* [4635] */
    (xdc_Char)0x69,  /* [4636] */
    (xdc_Char)0x6d,  /* [4637] */
    (xdc_Char)0x65,  /* [4638] */
    (xdc_Char)0x72,  /* [4639] */
    (xdc_Char)0x73,  /* [4640] */
    (xdc_Char)0x2e,  /* [4641] */
    (xdc_Char)0x0,  /* [4642] */
    (xdc_Char)0x74,  /* [4643] */
    (xdc_Char)0x69,  /* [4644] */
    (xdc_Char)0x6d,  /* [4645] */
    (xdc_Char)0x65,  /* [4646] */
    (xdc_Char)0x72,  /* [4647] */
    (xdc_Char)0x36,  /* [4648] */
    (xdc_Char)0x34,  /* [4649] */
    (xdc_Char)0x2e,  /* [4650] */
    (xdc_Char)0x0,  /* [4651] */
    (xdc_Char)0x74,  /* [4652] */
    (xdc_Char)0x63,  /* [4653] */
    (xdc_Char)0x69,  /* [4654] */
    (xdc_Char)0x36,  /* [4655] */
    (xdc_Char)0x34,  /* [4656] */
    (xdc_Char)0x38,  /* [4657] */
    (xdc_Char)0x38,  /* [4658] */
    (xdc_Char)0x2e,  /* [4659] */
    (xdc_Char)0x0,  /* [4660] */
    (xdc_Char)0x54,  /* [4661] */
    (xdc_Char)0x69,  /* [4662] */
    (xdc_Char)0x6d,  /* [4663] */
    (xdc_Char)0x65,  /* [4664] */
    (xdc_Char)0x72,  /* [4665] */
    (xdc_Char)0x53,  /* [4666] */
    (xdc_Char)0x75,  /* [4667] */
    (xdc_Char)0x70,  /* [4668] */
    (xdc_Char)0x70,  /* [4669] */
    (xdc_Char)0x6f,  /* [4670] */
    (xdc_Char)0x72,  /* [4671] */
    (xdc_Char)0x74,  /* [4672] */
    (xdc_Char)0x0,  /* [4673] */
    (xdc_Char)0x68,  /* [4674] */
    (xdc_Char)0x65,  /* [4675] */
    (xdc_Char)0x61,  /* [4676] */
    (xdc_Char)0x70,  /* [4677] */
    (xdc_Char)0x73,  /* [4678] */
    (xdc_Char)0x2e,  /* [4679] */
    (xdc_Char)0x0,  /* [4680] */
    (xdc_Char)0x48,  /* [4681] */
    (xdc_Char)0x65,  /* [4682] */
    (xdc_Char)0x61,  /* [4683] */
    (xdc_Char)0x70,  /* [4684] */
    (xdc_Char)0x4d,  /* [4685] */
    (xdc_Char)0x65,  /* [4686] */
    (xdc_Char)0x6d,  /* [4687] */
    (xdc_Char)0x0,  /* [4688] */
    (xdc_Char)0x74,  /* [4689] */
    (xdc_Char)0x69,  /* [4690] */
    (xdc_Char)0x2e,  /* [4691] */
    (xdc_Char)0x73,  /* [4692] */
    (xdc_Char)0x79,  /* [4693] */
    (xdc_Char)0x73,  /* [4694] */
    (xdc_Char)0x62,  /* [4695] */
    (xdc_Char)0x69,  /* [4696] */
    (xdc_Char)0x6f,  /* [4697] */
    (xdc_Char)0x73,  /* [4698] */
    (xdc_Char)0x2e,  /* [4699] */
    (xdc_Char)0x6b,  /* [4700] */
    (xdc_Char)0x6e,  /* [4701] */
    (xdc_Char)0x6c,  /* [4702] */
    (xdc_Char)0x2e,  /* [4703] */
    (xdc_Char)0x54,  /* [4704] */
    (xdc_Char)0x61,  /* [4705] */
    (xdc_Char)0x73,  /* [4706] */
    (xdc_Char)0x6b,  /* [4707] */
    (xdc_Char)0x2e,  /* [4708] */
    (xdc_Char)0x49,  /* [4709] */
    (xdc_Char)0x64,  /* [4710] */
    (xdc_Char)0x6c,  /* [4711] */
    (xdc_Char)0x65,  /* [4712] */
    (xdc_Char)0x54,  /* [4713] */
    (xdc_Char)0x61,  /* [4714] */
    (xdc_Char)0x73,  /* [4715] */
    (xdc_Char)0x6b,  /* [4716] */
    (xdc_Char)0x0,  /* [4717] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[55] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x10bb,  /* left */
        (xdc_Bits16)0x10c0,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10c9,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10d0,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10d5,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10de,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10e4,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10ea,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10ef,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10f3,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x10fd,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1102,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1109,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1112,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x111a,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1121,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1128,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x112d,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x1137,  /* left */
        (xdc_Bits16)0x113b,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1144,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x114c,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1152,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1160,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x116a,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x116e,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1180,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1185,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x116a,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x118a,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1190,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1196,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x119b,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x11a1,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x11a6,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x11b1,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x11b7,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x11c1,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x11c5,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x11ca,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x11cf,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x11d8,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1190,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x11df,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x11e6,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x11ee,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x11f8,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x11fd,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x1209,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x121b,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x1223,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x118a,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x122c,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x1235,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1242,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1249,  /* right */
    },  /* [54] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x126e;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x37;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c64p.EventCombiner FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c64p_EventCombiner_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_EventCombiner_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_EventCombiner_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_EventCombiner_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_EventCombiner_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_EventCombiner_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_family_c64p_EventCombiner_disableEvent__ENTRY_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_disableEvent__EXIT_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_enableEvent__ENTRY_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_enableEvent__EXIT_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_dispatch__ENTRY_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_dispatch__EXIT_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_dispatchPlug__ENTRY_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_dispatchPlug__EXIT_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_unused__ENTRY_EVT 0x0
#define ti_sysbios_family_c64p_EventCombiner_unused__EXIT_EVT 0x0

/* disableEvent__E */
xdc_Void ti_sysbios_family_c64p_EventCombiner_disableEvent__E( xdc_UInt evt ) 
{
    ti_sysbios_family_c64p_EventCombiner_disableEvent__F(evt);
}

/* enableEvent__E */
xdc_Void ti_sysbios_family_c64p_EventCombiner_enableEvent__E( xdc_UInt evt ) 
{
    ti_sysbios_family_c64p_EventCombiner_enableEvent__F(evt);
}

/* dispatch__E */
xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch__E( xdc_UInt evt ) 
{
    ti_sysbios_family_c64p_EventCombiner_dispatch__F(evt);
}

/* dispatchPlug__E */
xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatchPlug__E( xdc_UInt evt, ti_sysbios_family_c64p_EventCombiner_FuncPtr fxn, xdc_UArg arg, xdc_Bool unmask ) 
{
    ti_sysbios_family_c64p_EventCombiner_dispatchPlug__F(evt, fxn, arg, unmask);
}

/* unused__E */
xdc_Void ti_sysbios_family_c64p_EventCombiner_unused__E( xdc_UArg arg ) 
{
    ti_sysbios_family_c64p_EventCombiner_unused__F(arg);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_EventCombiner_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_EventCombiner_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Exception_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c64p_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c64p_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c64p_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c64p_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_Hwi_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_family_c64p_Hwi_getStackInfo__ENTRY_EVT 0x0
#define ti_sysbios_family_c64p_Hwi_getStackInfo__EXIT_EVT 0x0

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_c64p_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_TimestampProvider_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c66_Cache_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c66_Cache_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.c66.tci66xx.CpIntc FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c66_tci66xx_CpIntc_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c66_tci66xx_CpIntc_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c66_tci66xx_CpIntc_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c66_tci66xx_CpIntc_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c66_tci66xx_CpIntc_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c66_tci66xx_CpIntc_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c66_tci66xx_CpIntc_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c66_tci66xx_CpIntc_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_family_c66_tci66xx_CpIntc_clearSysInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_clearSysInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_disableAllHostInts__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_disableAllHostInts__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_disableHostInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_disableHostInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_disableSysInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_disableSysInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_dispatch__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_dispatch__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_dispatchPlug__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_dispatchPlug__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_enableAllHostInts__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_enableAllHostInts__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_enableHostInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_enableHostInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_enableSysInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_enableSysInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_getEventId__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_getEventId__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_getHostInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_getHostInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_mapSysIntToHostInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_mapSysIntToHostInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_postSysInt__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_postSysInt__EXIT_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_unused__ENTRY_EVT 0x0
#define ti_sysbios_family_c66_tci66xx_CpIntc_unused__EXIT_EVT 0x0

/* clearSysInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_clearSysInt__E( xdc_UInt id, xdc_UInt sysInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_clearSysInt__F(id, sysInt);
}

/* disableAllHostInts__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_disableAllHostInts__E( xdc_UInt id ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_disableAllHostInts__F(id);
}

/* disableHostInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_disableHostInt__E( xdc_UInt id, xdc_UInt hostInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_disableHostInt__F(id, hostInt);
}

/* disableSysInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_disableSysInt__E( xdc_UInt id, xdc_UInt sysInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_disableSysInt__F(id, sysInt);
}

/* dispatch__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_dispatch__E( xdc_UInt hostInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_dispatch__F(hostInt);
}

/* dispatchPlug__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_dispatchPlug__E( xdc_UInt sysInt, ti_sysbios_family_c66_tci66xx_CpIntc_FuncPtr fxn, xdc_UArg arg, xdc_Bool unmask ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_dispatchPlug__F(sysInt, fxn, arg, unmask);
}

/* enableAllHostInts__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_enableAllHostInts__E( xdc_UInt id ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_enableAllHostInts__F(id);
}

/* enableHostInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_enableHostInt__E( xdc_UInt id, xdc_UInt hostInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_enableHostInt__F(id, hostInt);
}

/* enableSysInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_enableSysInt__E( xdc_UInt id, xdc_UInt sysInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_enableSysInt__F(id, sysInt);
}

/* getEventId__E */
xdc_Int ti_sysbios_family_c66_tci66xx_CpIntc_getEventId__E( xdc_UInt hostInt ) 
{
    return ti_sysbios_family_c66_tci66xx_CpIntc_getEventId__F(hostInt);
}

/* getHostInt__E */
xdc_Int ti_sysbios_family_c66_tci66xx_CpIntc_getHostInt__E( xdc_UInt eventId ) 
{
    return ti_sysbios_family_c66_tci66xx_CpIntc_getHostInt__F(eventId);
}

/* mapSysIntToHostInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_mapSysIntToHostInt__E( xdc_UInt id, xdc_UInt sysInt, xdc_UInt hostInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_mapSysIntToHostInt__F(id, sysInt, hostInt);
}

/* postSysInt__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_postSysInt__E( xdc_UInt id, xdc_UInt sysInt ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_postSysInt__F(id, sysInt);
}

/* unused__E */
xdc_Void ti_sysbios_family_c66_tci66xx_CpIntc_unused__E( xdc_UArg arg ) 
{
    ti_sysbios_family_c66_tci66xx_CpIntc_unused__F(arg);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c66_tci66xx_CpIntc_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c66_tci66xx_CpIntc_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_gates_GateHwi_query__ENTRY_EVT 0x0
#define ti_sysbios_gates_GateHwi_query__EXIT_EVT 0x0

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_gates_GateMutex_query__ENTRY_EVT 0x0
#define ti_sysbios_gates_GateMutex_query__EXIT_EVT 0x0

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* entry/exit Log events */
#define ti_sysbios_hal_Hwi_getStackInfo__ENTRY_EVT 0x0
#define ti_sysbios_hal_Hwi_getStackInfo__EXIT_EVT 0x0

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_timers_timer64_Timer_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_CString control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Error_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Error_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Error_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Error_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Error_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Error_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Error_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Error_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Error_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Error_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Error_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Error_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Error_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Error_check__ENTRY_EVT 0x0
#define xdc_runtime_Error_check__EXIT_EVT 0x0
#define xdc_runtime_Error_getData__ENTRY_EVT 0x0
#define xdc_runtime_Error_getData__EXIT_EVT 0x0
#define xdc_runtime_Error_getCode__ENTRY_EVT 0x0
#define xdc_runtime_Error_getCode__EXIT_EVT 0x0
#define xdc_runtime_Error_getId__ENTRY_EVT 0x0
#define xdc_runtime_Error_getId__EXIT_EVT 0x0
#define xdc_runtime_Error_getMsg__ENTRY_EVT 0x0
#define xdc_runtime_Error_getMsg__EXIT_EVT 0x0
#define xdc_runtime_Error_getSite__ENTRY_EVT 0x0
#define xdc_runtime_Error_getSite__EXIT_EVT 0x0
#define xdc_runtime_Error_init__ENTRY_EVT 0x0
#define xdc_runtime_Error_init__EXIT_EVT 0x0
#define xdc_runtime_Error_print__ENTRY_EVT 0x0
#define xdc_runtime_Error_print__EXIT_EVT 0x0
#define xdc_runtime_Error_raiseX__ENTRY_EVT 0x0
#define xdc_runtime_Error_raiseX__EXIT_EVT 0x0

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_CString file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.LoggerBuf FUNCTION STUBS ========
 */

/* enable__E */
xdc_Bool xdc_runtime_LoggerBuf_enable__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    return xdc_runtime_LoggerBuf_enable__F((void*)__inst);
}

/* disable__E */
xdc_Bool xdc_runtime_LoggerBuf_disable__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    return xdc_runtime_LoggerBuf_disable__F((void*)__inst);
}

/* write0__E */
xdc_Void xdc_runtime_LoggerBuf_write0__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid ) 
{
    xdc_runtime_LoggerBuf_write0__F((void*)__inst, evt, mid);
}

/* write1__E */
xdc_Void xdc_runtime_LoggerBuf_write1__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1 ) 
{
    xdc_runtime_LoggerBuf_write1__F((void*)__inst, evt, mid, a1);
}

/* write2__E */
xdc_Void xdc_runtime_LoggerBuf_write2__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2 ) 
{
    xdc_runtime_LoggerBuf_write2__F((void*)__inst, evt, mid, a1, a2);
}

/* write4__E */
xdc_Void xdc_runtime_LoggerBuf_write4__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4 ) 
{
    xdc_runtime_LoggerBuf_write4__F((void*)__inst, evt, mid, a1, a2, a3, a4);
}

/* write8__E */
xdc_Void xdc_runtime_LoggerBuf_write8__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid, xdc_IArg a1, xdc_IArg a2, xdc_IArg a3, xdc_IArg a4, xdc_IArg a5, xdc_IArg a6, xdc_IArg a7, xdc_IArg a8 ) 
{
    xdc_runtime_LoggerBuf_write8__F((void*)__inst, evt, mid, a1, a2, a3, a4, a5, a6, a7, a8);
}

/* setFilterLevel__E */
xdc_Void xdc_runtime_LoggerBuf_setFilterLevel__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Diags_Mask mask, xdc_runtime_Diags_EventLevel filterLevel ) 
{
    xdc_runtime_LoggerBuf_setFilterLevel__F((void*)__inst, mask, filterLevel);
}

/* getFilterLevel__E */
xdc_runtime_Diags_Mask xdc_runtime_LoggerBuf_getFilterLevel__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Diags_EventLevel level ) 
{
    return xdc_runtime_LoggerBuf_getFilterLevel__F((void*)__inst, level);
}

/* flushAll__E */
xdc_Void xdc_runtime_LoggerBuf_flushAll__E( void ) 
{
    xdc_runtime_LoggerBuf_flushAll__F();
}

/* flushAllInternal__E */
xdc_Void xdc_runtime_LoggerBuf_flushAllInternal__E( xdc_Int stat ) 
{
    xdc_runtime_LoggerBuf_flushAllInternal__F(stat);
}

/* reset__E */
xdc_Void xdc_runtime_LoggerBuf_reset__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    xdc_runtime_LoggerBuf_reset__F((void*)__inst);
}

/* flush__E */
xdc_Void xdc_runtime_LoggerBuf_flush__E( xdc_runtime_LoggerBuf_Handle __inst ) 
{
    xdc_runtime_LoggerBuf_flush__F((void*)__inst);
}

/* getNextEntry__E */
xdc_Int xdc_runtime_LoggerBuf_getNextEntry__E( xdc_runtime_LoggerBuf_Handle __inst, xdc_runtime_Log_EventRec* evtRec ) 
{
    return xdc_runtime_LoggerBuf_getNextEntry__F((void*)__inst, evtRec);
}

/* Module_startup */
xdc_Int xdc_runtime_LoggerBuf_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_LoggerBuf_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Registry_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Registry_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Registry_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Registry_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Registry_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Registry_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Registry_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Registry_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Registry_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Registry_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Registry_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Registry_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Registry_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Registry_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Registry_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Registry_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Registry_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Registry_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Registry_addModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_addModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByName__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__EXIT_EVT 0x0
#define xdc_runtime_Registry_findById__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findById__EXIT_EVT 0x0
#define xdc_runtime_Registry_getMask__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getMask__EXIT_EVT 0x0
#define xdc_runtime_Registry_isMember__ENTRY_EVT 0x0
#define xdc_runtime_Registry_isMember__EXIT_EVT 0x0
#define xdc_runtime_Registry_getNextModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getNextModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleName__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleId__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleId__EXIT_EVT 0x0

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_CString modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_CString modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_CString namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_CString name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_CString xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_CString str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_CString str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vsnprintf__E */
xdc_Int xdc_runtime_System_vsnprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsnprintf__F(buf, n, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_CString pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c66.Cache */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c66_Cache_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_family_c66_Cache_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_family_c66_Cache_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_c66_Cache_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_c66_Cache_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_c66_Cache_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_family_c66_Cache_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_family_c66_Cache_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_family_c66_Cache_wait();
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c64p_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_c64p_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c64p_Hwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_c64p_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c64p_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c64p_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c64p_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_c64p_Hwi_getFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c64p_Hwi_setFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_c64p_Hwi_getHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c64p_Hwi_setHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_c64p_Hwi_getIrp((ti_sysbios_family_c64p_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.timer64.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_timers_timer64_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_timers_timer64_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_timer64_Timer_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_timers_timer64_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_timer64_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_timer64_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_timer64_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_timers_timer64_Timer_getMaxTicks((ti_sysbios_timers_timer64_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_timers_timer64_Timer_setNextTick((ti_sysbios_timers_timer64_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_start((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_stop((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_timer64_Timer_setPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_timer64_Timer_setPeriodMicroSecs((ti_sysbios_timers_timer64_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getCount((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_timers_timer64_Timer_getFreq((ti_sysbios_timers_timer64_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_timers_timer64_Timer_getFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_timer64_Timer_setFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_timer64_Timer_trigger((ti_sysbios_timers_timer64_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredCounts((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c62_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c62_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_c62_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.tci6488.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_timer64_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c64p_tci6488_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_LoggerBuf_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_c64p_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_c64p_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, (void *)src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_c64p_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_c64p_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c64p_Hwi_Object2__ s0; char c; } ti_sysbios_family_c64p_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c64p_Hwi___S1) - sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c64p_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.timers.timer64.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_timer64_Timer_Object2__ s0; char c; } ti_sysbios_timers_timer64_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_timer64_Timer___S1) - sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_timer64_Timer_Params), /* prmsSize */
};



/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (Ptr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (Ptr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c62.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c64p.EventCombiner SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_EventCombiner_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_EventCombiner_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c64p_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c64p_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c64p_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c64p_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_c64p_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32791;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_c64p_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_c64p_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_c64p_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_c64p_Hwi_Object__*)ti_sysbios_family_c64p_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c64p_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_c64p_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c64p_Hwi_Params prms;
    ti_sysbios_family_c64p_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_c64p_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, *((ti_sysbios_family_c64p_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_c64p_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c66.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c66_Cache_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c66_Cache_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c66.tci66xx.CpIntc SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32811;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32812;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Cache_CacheProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Cache_CacheProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32822;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_timer64_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_timer64_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_timer64_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_timer64_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_timer64_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_timer64_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_timer64_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_timer64_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_timer64_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_timer64_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_timers_timer64_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32818;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_timer64_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_timers_timer64_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_timers_timer64_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_timer64_Timer_Object__*)ti_sysbios_timers_timer64_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_timer64_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_timers_timer64_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_timers_timer64_Timer_Params prms;
    ti_sysbios_timers_timer64_Timer_Object* obj;
    int iStat;

    ti_sysbios_timers_timer64_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, *((ti_sysbios_timers_timer64_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_timers_timer64_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void ) 
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_LoggerBuf_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32777;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((xdc_runtime_LoggerBuf_Object__*)oa) + i;
    }

    if (xdc_runtime_LoggerBuf_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_LoggerBuf_Object__*)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_LoggerBuf___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    xdc_runtime_LoggerBuf_Params prms;
    xdc_runtime_LoggerBuf_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void xdc_runtime_LoggerBuf_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__F, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__FXNS__C, ".const:xdc_runtime_LoggerBuf_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__id__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__count__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__table__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__id__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__count__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__heap__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__sizeof__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__table__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent__C, ".const:ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_EVTMASK__C, ".const:ti_sysbios_family_c64p_EventCombiner_EVTMASK__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__id__C, ".const:ti_sysbios_family_c64p_Exception_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__count__C, ".const:ti_sysbios_family_c64p_Exception_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__heap__C, ".const:ti_sysbios_family_c64p_Exception_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Exception_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__table__C, ".const:ti_sysbios_family_c64p_Exception_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMin__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMax__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enableExternalMPC__C, ".const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enablePrint__C, ".const:ti_sysbios_family_c64p_Exception_enablePrint__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_exceptionHook__C, ".const:ti_sysbios_family_c64p_Exception_exceptionHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_internalHook__C, ".const:ti_sysbios_family_c64p_Exception_internalHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_externalHook__C, ".const:ti_sysbios_family_c64p_Exception_externalHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_nmiHook__C, ".const:ti_sysbios_family_c64p_Exception_nmiHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_returnHook__C, ".const:ti_sysbios_family_c64p_Exception_returnHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__DESC__C, ".const:ti_sysbios_family_c64p_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__id__C, ".const:ti_sysbios_family_c64p_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__count__C, ".const:ti_sysbios_family_c64p_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__heap__C, ".const:ti_sysbios_family_c64p_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__table__C, ".const:ti_sysbios_family_c64p_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LM_begin__C, ".const:ti_sysbios_family_c64p_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LD_end__C, ".const:ti_sysbios_family_c64p_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_enableException__C, ".const:ti_sysbios_family_c64p_Hwi_enableException__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiDisable__C, ".const:ti_sysbios_family_c64p_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskDisable__C, ".const:ti_sysbios_family_c64p_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_hooks__C, ".const:ti_sysbios_family_c64p_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_c66_Cache_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_c66_Cache_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_c66_Cache_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__gateObj__C, ".const:ti_sysbios_family_c66_Cache_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_c66_Cache_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__id__C, ".const:ti_sysbios_family_c66_Cache_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c66_Cache_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__count__C, ".const:ti_sysbios_family_c66_Cache_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__heap__C, ".const:ti_sysbios_family_c66_Cache_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__sizeof__C, ".const:ti_sysbios_family_c66_Cache_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__table__C, ".const:ti_sysbios_family_c66_Cache_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_initSize__C, ".const:ti_sysbios_family_c66_Cache_initSize__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_atomicBlockSize__C, ".const:ti_sysbios_family_c66_Cache_atomicBlockSize__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_marvalues__C, ".const:ti_sysbios_family_c66_Cache_marvalues__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__A");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_0__A");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId_1__A");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__A");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_eventId__A");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsEnabled__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsIncluded__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsMask__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__gateObj__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__gatePrms__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__id__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerDefined__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerObj__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn0__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn1__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn2__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn4__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn8__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Object__count__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Object__heap__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Object__sizeof__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_Object__table__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_E_unpluggedSysInt__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_E_unpluggedSysInt__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_numSysInts__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_numSysInts__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_numEvents__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_numEvents__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_numStatusRegs__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_numStatusRegs__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_sysIntToHostInt__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_hostIntToEventId__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_tci66xx_CpIntc_eventId__C, ".const:ti_sysbios_family_c66_tci66xx_CpIntc_eventId__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Cache_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Cache_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsMask__C, ".const:ti_sysbios_hal_Cache_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gateObj__C, ".const:ti_sysbios_hal_Cache_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gatePrms__C, ".const:ti_sysbios_hal_Cache_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__id__C, ".const:ti_sysbios_hal_Cache_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerDefined__C, ".const:ti_sysbios_hal_Cache_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerObj__C, ".const:ti_sysbios_hal_Cache_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Cache_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__count__C, ".const:ti_sysbios_hal_Cache_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__heap__C, ".const:ti_sysbios_hal_Cache_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__sizeof__C, ".const:ti_sysbios_hal_Cache_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__table__C, ".const:ti_sysbios_hal_Cache_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlignMask__C, ".const:ti_sysbios_heaps_HeapMem_reqAlignMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__DESC__C, ".const:ti_sysbios_timers_timer64_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__A, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__A");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__id__C, ".const:ti_sysbios_timers_timer64_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__count__C, ".const:ti_sysbios_timers_timer64_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__heap__C, ".const:ti_sysbios_timers_timer64_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__table__C, ".const:ti_sysbios_timers_timer64_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_anyMask__C, ".const:ti_sysbios_timers_timer64_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_defaultHalf__C, ".const:ti_sysbios_timers_timer64_Timer_defaultHalf__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__C, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_startupNeeded__C, ".const:ti_sysbios_timers_timer64_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_freqDivisor__C, ".const:ti_sysbios_timers_timer64_Timer_freqDivisor__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numLocalTimers__C, ".const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__DESC__C, ".const:xdc_runtime_LoggerBuf_Object__DESC__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerBuf_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerBuf_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsMask__C, ".const:xdc_runtime_LoggerBuf_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gateObj__C, ".const:xdc_runtime_LoggerBuf_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gatePrms__C, ".const:xdc_runtime_LoggerBuf_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__id__C, ".const:xdc_runtime_LoggerBuf_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerDefined__C, ".const:xdc_runtime_LoggerBuf_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerObj__C, ".const:xdc_runtime_LoggerBuf_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__startupDoneFxn__C, ".const:xdc_runtime_LoggerBuf_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__count__C, ".const:xdc_runtime_LoggerBuf_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__heap__C, ".const:xdc_runtime_LoggerBuf_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__sizeof__C, ".const:xdc_runtime_LoggerBuf_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__table__C, ".const:xdc_runtime_LoggerBuf_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_filterByLevel__C, ".const:xdc_runtime_LoggerBuf_filterByLevel__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_E_badLevel__C, ".const:xdc_runtime_LoggerBuf_E_badLevel__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_enableFlush__C, ".const:xdc_runtime_LoggerBuf_enableFlush__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_statusLogger__C, ".const:xdc_runtime_LoggerBuf_statusLogger__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level1Mask__C, ".const:xdc_runtime_LoggerBuf_level1Mask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level2Mask__C, ".const:xdc_runtime_LoggerBuf_level2Mask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level3Mask__C, ".const:xdc_runtime_LoggerBuf_level3Mask__C");
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level4Mask__C, ".const:xdc_runtime_LoggerBuf_level4Mask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
