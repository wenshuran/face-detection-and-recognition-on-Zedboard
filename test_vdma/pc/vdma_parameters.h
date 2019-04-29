#ifndef VDMA_PARAMETERS_H_
#define VDMA_PARAMETERS_H_


#define OV7670_STREAM                           0x43C00000
#define VDMA_MM2S                               0x43000000
#define VDMA_S2MM                               0x43010000

//#define S2MM_INTERRUPT                          61
//#define MM2S_INTERRUPT                          62

#define HEIGHT                                  480
#define WIDTH                                   640

#define BUFFER_SIZE 			                0x00100000	

#define AXI_VDMA_REG_SPACE                      4096

#define OFFSET_VERSION                          0x2c
#define OFFSET_PARK_PTR_REG                     0x28
#define PARK_PTR_WRITE_FRAME_NUM                0x1f000000
#define PARK_PTR_READ_FRAME_NUM                 0x001f0000
#define PARK_PTR_WRITE_FRAME_REF                0x00001f00
#define PARK_PTR_READ_FRAME_REF                 0x0000001f


#define OFFSET_VDMA_MM2S_CONTROL_REGISTER       0x00
#define OFFSET_VDMA_MM2S_STATUS_REGISTER        0x04
#define OFFSET_VDMA_MM2S_REG_INDEX              0x14
#define OFFSET_VDMA_MM2S_VSIZE                  0x50
#define OFFSET_VDMA_MM2S_HSIZE                  0x54
#define OFFSET_VDMA_MM2S_FRMDLY_STRIDE          0x58
#define OFFSET_VDMA_MM2S_FRAMEBUFFER1           0x5c
#define OFFSET_VDMA_MM2S_FRAMEBUFFER2           0x60
#define OFFSET_VDMA_MM2S_FRAMEBUFFER3           0x64
#define OFFSET_VDMA_MM2S_FRAMEBUFFER4           0x68

#define OFFSET_VDMA_S2MM_CONTROL_REGISTER       0x30
#define OFFSET_VDMA_S2MM_STATUS_REGISTER        0x34
#define OFFSET_VDMA_S2MM_IRQ_MASK               0x3c
#define OFFSET_VDMA_S2MM_REG_INDEX              0x44
#define OFFSET_VDMA_S2MM_VSIZE                  0xa0
#define OFFSET_VDMA_S2MM_HSIZE                  0xa4
#define OFFSET_VDMA_S2MM_FRMDLY_STRIDE          0xa8
#define OFFSET_VDMA_S2MM_FRAMEBUFFER1           0xac
#define OFFSET_VDMA_S2MM_FRAMEBUFFER2           0xb0
#define OFFSET_VDMA_S2MM_FRAMEBUFFER3           0xb4
#define OFFSET_VDMA_S2MM_FRAMEBUFFER4           0xb8

/* S2MM and MM2S control register flags */
#define VDMA_CONTROL_REGISTER_START                     0x00000001
#define VDMA_CONTROL_REGISTER_CIRCULAR_PARK             0x00000002
#define VDMA_CONTROL_REGISTER_RESET                     0x00000004
#define VDMA_CONTROL_REGISTER_GENLOCK_ENABLE            0x00000008
#define VDMA_CONTROL_REGISTER_FrameCntEn                0x00000010
#define VDMA_CONTROL_REGISTER_GenlockSrc                0x00000080
#define VDMA_CONTROL_REGISTER_RWrPntr                   0x00000f00
#define VDMA_CONTROL_REGISTER_FrmCtn_IrqEn              0x00001000
#define VDMA_CONTROL_REGISTER_DlyCnt_IrqEn              0x00002000
#define VDMA_CONTROL_REGISTER_ERR_IrqEn                 0x00004000
#define VDMA_CONTROL_REGISTER_Repeat_En                 0x00008000
#define VDMA_CONTROL_REGISTER_InterruptFrameCount       0x00ff0000
#define VDMA_CONTROL_REGISTER_IRQDelayCount             0xff000000


/* S2MM and MM2S status register */
#define VDMA_STATUS_REGISTER_HALTED                     0x00000001  // Read-only
#define VDMA_STATUS_REGISTER_VDMAInternalError          0x00000010  // Read or write-clear
#define VDMA_STATUS_REGISTER_VDMASlaveError             0x00000020  // Read-only
#define VDMA_STATUS_REGISTER_VDMADecodeError            0x00000040  // Read-only
#define VDMA_STATUS_REGISTER_StartOfFrameEarlyError     0x00000080  // Read or write-clear
#define VDMA_STATUS_REGISTER_EndOfLineEarlyError        0x00000100  // Read or write-clear
#define VDMA_STATUS_REGISTER_StartOfFrameLateError      0x00000800  // Read or write-clear
#define VDMA_STATUS_REGISTER_FrameCountIRQ              0x00001000  // Read / Write
#define VDMA_STATUS_REGISTER_DelayCountIRQ              0x00002000  // Read / Write
#define VDMA_STATUS_REGISTER_ErrorIRQ                   0x00004000  // Read or write-clear
#define VDMA_STATUS_REGISTER_EndOfLineLateError         0x00008000  // Read or write-clear
#define VDMA_STATUS_REGISTER_IRQFrameCount              0x00ff0000  // Read-only
#define VDMA_STATUS_REGISTER_IRQDelayCount              0xff000000  // Read-only




#endif
// endif VDMA_PARAMETERS_H_
