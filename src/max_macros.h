/*
 * MAX_macros.h
 *
 * Macros for opcodes used by MAX35103
 */

#ifndef MAX_MACROS
#define MAX_MACROS

/* ----- Begin Macros ----- */

// Null
#define NULL_CMD                0xA0

/* Execution Opcode Commands */
#define TOF_UP                  0x00
#define TOF_DOWN                0x01
#define TOF_DIFF                0x02
#define TEMPERATURE             0x03
#define RESET                   0x04
#define INITIALIZE              0x05
#define TX_CONFIG_FLASH         0x06
#define EVTMG1                  0x07
#define EVTMG2                  0x08
#define EVTMG3                  0x09
#define HALT                    0x0A
#define LDO_TIMED               0x0B
#define LDO_ON                  0x0C
#define LDO_OFF                 0x0D
#define CLBRT                   0x0E  // CLBRT = Calibrate

/* Register Opcode Commands */
// RTC and Watchdog Registers
#define READ_RTC_SECS           0xB0
#define WRITE_RTC_SECS          0x30
#define READ_RTC_MIN_HRS        0xB1
#define WRITE_RTC_MIN_HRS       0x31
#define READ_RTC_DAY_DATE       0xB2
#define WRITE_RTC_DAY_DATE      0x32
#define READ_RTC_M_Y            0xB3
#define WRITE_RTC_M_Y           0x33

#define READ_WD_ALARM_CNT       0xB4
#define WRITE_WD_ALARM_CNT      0x34
#define READ_ALARM              0xB5
#define WRITE_ALARM             0x35

// Configuration Registers
#define READ_TOF1               0xB8
#define WRITE_TOF1              0x38
#define READ_TOF2               0xB9
#define WRITE_TOF2              0x39
#define READ_TOF3               0xBA
#define WRITE_TOF3              0x3A
#define READ_TOF4               0xBB
#define WRITE_TOF4              0x3B
#define READ_TOF5               0xBC
#define WRITE_TOF5              0x3C
#define READ_TOF6               0xBD
#define WRITE_TOF6              0x3D
#define READ_TOF7               0xBE
#define WRITE_TOF7              0x3E

#define READ_EVT_TIMING1        0xBF
#define WRITE_EVT_TIMING1       0x3F
#define READ_EVT_TIMING2        0xC0
#define WRITE_EVT_TIMING3       0x40

#define READ_TOF_MEAS_DELAY     0xC1
#define WRITE_TOF_MEAS_DELAY    0x41

#define READ_CLBRT_CTRL         0xC2
#define WRITE_CLBRT_CTRL        0x42

#define READ_RTC                0xC3
#define WRITE_RTC               0x43

// Conversion Results Registers (Read Only)
#define WVRUP                   0xC4
#define HIT1_UP_INT             0xC5
#define HIT1_UP_FRAC            0xC6
#define HIT2_UP_INT             0xC7
#define HIT2_UP_FRAC            0xC8
#define HIT3_UP_INT             0xC9
#define HIT3_UP_FRAC            0xCA
#define HIT4_UP_INT             0xCB
#define HIT4_UP_FRAC            0xCC
#define HIT5_UP_INT             0xCD
#define HIT5_UP_FRAC            0xCE
#define HIT6_UP_INT             0xCF
#define HIT6_UP_FRAC            0xD0
#define AVG_UP_INT              0xD1
#define AVG_UP_FRAC             0xD2

#define WVRDN                   0xD3
#define HIT1_DN_INT             0xD4
#define HIT1_DN_FRAC            0xD5
#define HIT2_DN_INT             0xD6
#define HIT2_DN_FRAC            0xD7
#define HIT3_DN_INT             0xD8
#define HIT3_DN_FRAC            0xD9
#define HIT4_DN_INT             0xDA
#define HIT4_DN_FRAC            0xDB
#define HIT5_DN_INT             0xDC
#define HIT5_DN_FRAC            0xDD
#define HIT6_DN_INT             0xDE
#define HIT7_DN_FRAC            0xDF
#define AVG_DN_INT              0xE0
#define AVG_DN_FRAC             0xE1

#define TOF_DIFF_INT            0xE2
#define TOF_DIFF_FRAC           0xE3
#define TOF_CYCLE_COUNT         0xE4  // Bits 7 through 0
#define TOF_RANGE               0xE4  // Bits 15 through 8
#define TOF_DIFF_AVG_INT        0xE5
#define TOF_DIFF_AVG_FRAC       0xE6

#define T1_INT                  0xE7
#define T1_FRAC                 0xE8
#define T2_INT                  0xE9
#define T2_FRAC                 0xEA
#define T3_INT                  0xEB
#define T3_FRAC                 0xEC
#define T4_INT                  0xED
#define T4_FRAC                 0xEE
#define TEMP_CYCLE_COUNT        0xEF
#define T1_AVG_INT              0xF0
#define T1_AVG_FRAC             0xF1
#define T2_AVG_INT              0xF2
#define T2_AVG_FRAC             0xF3
#define T3_AVG_INT              0xF4
#define T3_AVG_FRAC             0xF5
#define T4_AVG_INT              0xF6
#define T4_AVG_FRAC             0xF7

#define CLBRT_INT               0xF8
#define CLBRT_FRAC              0xF9

// Status Registers
#define READ_INT_STAT_REG       0xFE
#define READ_CTRL_REG           0x7F
#define WRITE_CTRL_REG          0xFF  // Can only be written to 0

/* ----- End Macros ----- */

#endif /* MAX_MACROS */
