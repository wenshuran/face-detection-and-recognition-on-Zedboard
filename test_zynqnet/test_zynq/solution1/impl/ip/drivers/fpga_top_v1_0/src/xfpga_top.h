// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XFPGA_TOP_H
#define XFPGA_TOP_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xfpga_top_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilite_BaseAddress;
    u32 Axilites_BaseAddress;
} XFpga_top_Config;
#endif

typedef struct {
    u32 Axilite_BaseAddress;
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XFpga_top;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XFpga_top_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XFpga_top_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XFpga_top_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XFpga_top_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XFpga_top_Initialize(XFpga_top *InstancePtr, u16 DeviceId);
XFpga_top_Config* XFpga_top_LookupConfig(u16 DeviceId);
int XFpga_top_CfgInitialize(XFpga_top *InstancePtr, XFpga_top_Config *ConfigPtr);
#else
int XFpga_top_Initialize(XFpga_top *InstancePtr, const char* InstanceName);
int XFpga_top_Release(XFpga_top *InstancePtr);
#endif

void XFpga_top_Start(XFpga_top *InstancePtr);
u32 XFpga_top_IsDone(XFpga_top *InstancePtr);
u32 XFpga_top_IsIdle(XFpga_top *InstancePtr);
u32 XFpga_top_IsReady(XFpga_top *InstancePtr);
void XFpga_top_EnableAutoRestart(XFpga_top *InstancePtr);
void XFpga_top_DisableAutoRestart(XFpga_top *InstancePtr);

void XFpga_top_Set_layer_width_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_width_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_height_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_height_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_channels_in_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_channels_in_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_channels_out_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_channels_out_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_kernel_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_kernel_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_stride_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_stride_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_pad(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_pad(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_relu(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_relu(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_is_first_split_layer(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_is_first_split_layer(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_is_second_split_layer(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_is_second_split_layer(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_global_pool(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_global_pool(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_mem_addr_input_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_mem_addr_input_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_mem_addr_output_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_mem_addr_output_V(XFpga_top *InstancePtr);
void XFpga_top_Set_layer_mem_addr_weights_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_layer_mem_addr_weights_V(XFpga_top *InstancePtr);
void XFpga_top_Set_weights_offset(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_weights_offset(XFpga_top *InstancePtr);
void XFpga_top_Set_num_weights_V(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_num_weights_V(XFpga_top *InstancePtr);
void XFpga_top_Set_input_offset(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_input_offset(XFpga_top *InstancePtr);
void XFpga_top_Set_SHARED_DRAM(XFpga_top *InstancePtr, u32 Data);
u32 XFpga_top_Get_SHARED_DRAM(XFpga_top *InstancePtr);
u32 XFpga_top_Get_layer_name_BaseAddress(XFpga_top *InstancePtr);
u32 XFpga_top_Get_layer_name_HighAddress(XFpga_top *InstancePtr);
u32 XFpga_top_Get_layer_name_TotalBytes(XFpga_top *InstancePtr);
u32 XFpga_top_Get_layer_name_BitWidth(XFpga_top *InstancePtr);
u32 XFpga_top_Get_layer_name_Depth(XFpga_top *InstancePtr);
u32 XFpga_top_Write_layer_name_Words(XFpga_top *InstancePtr, int offset, int *data, int length);
u32 XFpga_top_Read_layer_name_Words(XFpga_top *InstancePtr, int offset, int *data, int length);
u32 XFpga_top_Write_layer_name_Bytes(XFpga_top *InstancePtr, int offset, char *data, int length);
u32 XFpga_top_Read_layer_name_Bytes(XFpga_top *InstancePtr, int offset, char *data, int length);

void XFpga_top_InterruptGlobalEnable(XFpga_top *InstancePtr);
void XFpga_top_InterruptGlobalDisable(XFpga_top *InstancePtr);
void XFpga_top_InterruptEnable(XFpga_top *InstancePtr, u32 Mask);
void XFpga_top_InterruptDisable(XFpga_top *InstancePtr, u32 Mask);
void XFpga_top_InterruptClear(XFpga_top *InstancePtr, u32 Mask);
u32 XFpga_top_InterruptGetEnabled(XFpga_top *InstancePtr);
u32 XFpga_top_InterruptGetStatus(XFpga_top *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
