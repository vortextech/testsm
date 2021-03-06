/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_INYECTORCONTROLACT_H
#define _MOCK_INYECTORCONTROLACT_H

#include "InyectorControlAct.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mock_InyectorControlAct_Init(void);
void Mock_InyectorControlAct_Destroy(void);
void Mock_InyectorControlAct_Verify(void);




#define InyectorControlAct_init_Ignore() InyectorControlAct_init_CMockIgnore()
void InyectorControlAct_init_CMockIgnore(void);
#define InyectorControlAct_init_Expect() InyectorControlAct_init_CMockExpect(__LINE__)
void InyectorControlAct_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_InyectorControlAct_init_CALLBACK)(int cmock_num_calls);
void InyectorControlAct_init_StubWithCallback(CMOCK_InyectorControlAct_init_CALLBACK Callback);
#define InyectorControlAct_onIdleSpeed_Ignore() InyectorControlAct_onIdleSpeed_CMockIgnore()
void InyectorControlAct_onIdleSpeed_CMockIgnore(void);
#define InyectorControlAct_onIdleSpeed_Expect(event) InyectorControlAct_onIdleSpeed_CMockExpect(__LINE__, event)
void InyectorControlAct_onIdleSpeed_CMockExpect(UNITY_LINE_TYPE cmock_line, Event* event);
typedef void (* CMOCK_InyectorControlAct_onIdleSpeed_CALLBACK)(Event* event, int cmock_num_calls);
void InyectorControlAct_onIdleSpeed_StubWithCallback(CMOCK_InyectorControlAct_onIdleSpeed_CALLBACK Callback);
#define InyectorControlAct_onIdleSpeed_IgnoreArg_event() InyectorControlAct_onIdleSpeed_CMockIgnoreArg_event(__LINE__)
void InyectorControlAct_onIdleSpeed_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line);
#define InyectorControlAct_onNormal_Ignore() InyectorControlAct_onNormal_CMockIgnore()
void InyectorControlAct_onNormal_CMockIgnore(void);
#define InyectorControlAct_onNormal_Expect(event) InyectorControlAct_onNormal_CMockExpect(__LINE__, event)
void InyectorControlAct_onNormal_CMockExpect(UNITY_LINE_TYPE cmock_line, Event* event);
typedef void (* CMOCK_InyectorControlAct_onNormal_CALLBACK)(Event* event, int cmock_num_calls);
void InyectorControlAct_onNormal_StubWithCallback(CMOCK_InyectorControlAct_onNormal_CALLBACK Callback);
#define InyectorControlAct_onNormal_IgnoreArg_event() InyectorControlAct_onNormal_CMockIgnoreArg_event(__LINE__)
void InyectorControlAct_onNormal_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line);
#define InyectorControlAct_isPressedThrottle_IgnoreAndReturn(cmock_retval) InyectorControlAct_isPressedThrottle_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void InyectorControlAct_isPressedThrottle_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define InyectorControlAct_isPressedThrottle_ExpectAndReturn(event, cmock_retval) InyectorControlAct_isPressedThrottle_CMockExpectAndReturn(__LINE__, event, cmock_retval)
void InyectorControlAct_isPressedThrottle_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Event* event, bool cmock_to_return);
typedef bool (* CMOCK_InyectorControlAct_isPressedThrottle_CALLBACK)(Event* event, int cmock_num_calls);
void InyectorControlAct_isPressedThrottle_StubWithCallback(CMOCK_InyectorControlAct_isPressedThrottle_CALLBACK Callback);
#define InyectorControlAct_isPressedThrottle_IgnoreArg_event() InyectorControlAct_isPressedThrottle_CMockIgnoreArg_event(__LINE__)
void InyectorControlAct_isPressedThrottle_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line);
#define InyectorControlAct_isReleasedThrottle_IgnoreAndReturn(cmock_retval) InyectorControlAct_isReleasedThrottle_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void InyectorControlAct_isReleasedThrottle_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define InyectorControlAct_isReleasedThrottle_ExpectAndReturn(event, cmock_retval) InyectorControlAct_isReleasedThrottle_CMockExpectAndReturn(__LINE__, event, cmock_retval)
void InyectorControlAct_isReleasedThrottle_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Event* event, bool cmock_to_return);
typedef bool (* CMOCK_InyectorControlAct_isReleasedThrottle_CALLBACK)(Event* event, int cmock_num_calls);
void InyectorControlAct_isReleasedThrottle_StubWithCallback(CMOCK_InyectorControlAct_isReleasedThrottle_CALLBACK Callback);
#define InyectorControlAct_isReleasedThrottle_IgnoreArg_event() InyectorControlAct_isReleasedThrottle_CMockIgnoreArg_event(__LINE__)
void InyectorControlAct_isReleasedThrottle_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line);
#define InyectorControlAct_starting_Ignore() InyectorControlAct_starting_CMockIgnore()
void InyectorControlAct_starting_CMockIgnore(void);
#define InyectorControlAct_starting_Expect(event) InyectorControlAct_starting_CMockExpect(__LINE__, event)
void InyectorControlAct_starting_CMockExpect(UNITY_LINE_TYPE cmock_line, Event* event);
typedef void (* CMOCK_InyectorControlAct_starting_CALLBACK)(Event* event, int cmock_num_calls);
void InyectorControlAct_starting_StubWithCallback(CMOCK_InyectorControlAct_starting_CALLBACK Callback);
#define InyectorControlAct_starting_IgnoreArg_event() InyectorControlAct_starting_CMockIgnoreArg_event(__LINE__)
void InyectorControlAct_starting_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line);

#endif
