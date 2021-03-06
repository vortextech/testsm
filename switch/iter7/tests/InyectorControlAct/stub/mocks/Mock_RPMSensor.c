/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_RPMSensor.h"

static const char* CMockString_RPMSensor_init = "RPMSensor_init";

typedef struct _CMOCK_RPMSensor_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RPMSensor* ReturnVal;

} CMOCK_RPMSensor_init_CALL_INSTANCE;

static struct Mock_RPMSensorInstance
{
  int RPMSensor_init_IgnoreBool;
  RPMSensor* RPMSensor_init_FinalReturn;
  CMOCK_RPMSensor_init_CALLBACK RPMSensor_init_CallbackFunctionPointer;
  int RPMSensor_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE RPMSensor_init_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mock_RPMSensor_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.RPMSensor_init_IgnoreBool)
    Mock.RPMSensor_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_RPMSensor_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.RPMSensor_init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.RPMSensor_init_CallbackFunctionPointer != NULL)
    Mock.RPMSensor_init_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_RPMSensor_Init(void)
{
  Mock_RPMSensor_Destroy();
}

void Mock_RPMSensor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.RPMSensor_init_CallbackFunctionPointer = NULL;
  Mock.RPMSensor_init_CallbackCalls = 0;
}

RPMSensor* RPMSensor_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_RPMSensor_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_RPMSensor_init);
  cmock_call_instance = (CMOCK_RPMSensor_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.RPMSensor_init_CallInstance);
  Mock.RPMSensor_init_CallInstance = CMock_Guts_MemNext(Mock.RPMSensor_init_CallInstance);
  if (Mock.RPMSensor_init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.RPMSensor_init_FinalReturn;
    Mock.RPMSensor_init_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.RPMSensor_init_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.RPMSensor_init_CallbackFunctionPointer(Mock.RPMSensor_init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void RPMSensor_init_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, RPMSensor* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_RPMSensor_init_CALL_INSTANCE));
  CMOCK_RPMSensor_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_RPMSensor_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.RPMSensor_init_CallInstance = CMock_Guts_MemChain(Mock.RPMSensor_init_CallInstance, cmock_guts_index);
  Mock.RPMSensor_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.RPMSensor_init_IgnoreBool = (int)1;
}

void RPMSensor_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RPMSensor* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_RPMSensor_init_CALL_INSTANCE));
  CMOCK_RPMSensor_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_RPMSensor_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.RPMSensor_init_CallInstance = CMock_Guts_MemChain(Mock.RPMSensor_init_CallInstance, cmock_guts_index);
  Mock.RPMSensor_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void RPMSensor_init_StubWithCallback(CMOCK_RPMSensor_init_CALLBACK Callback)
{
  Mock.RPMSensor_init_IgnoreBool = (int)0;
  Mock.RPMSensor_init_CallbackFunctionPointer = Callback;
}

