/**********************************************************************************************
 * WARNING: THIS FILE HAS BEEN GENERATED BY REG_MAP_MANAGER TOOLS PLEASE DO NOT MODIFY IT     *
 **********************************************************************************************
 * File: ext_trigger_monitor_register_map.h                                                   *
 *                                                                                            *
 * Copyright (c) 2015-2018 Prophesee. All rights reserved.                                    *
 *                                                                                            *
 * Date:           08/10/2018 at 12h05m31s                                                    *
 * Name:           ext_trigger_monitor_register_map                                           *
 * Version:        1.0                                                                        *
 * Hash:           e73845edac06468dfbdf8a7a69939124566034ed1a39c746846111cba8d0dd58           *
 **********************************************************************************************
 * WARNING: THIS FILE HAS BEEN GENERATED BY REG_MAP_MANAGER TOOLS PLEASE DO NOT MODIFY IT     *
 *********************************************************************************************/

#ifndef METAVISION_HAL_EXT_TRIGGER_MONITOR_REGISTER_MAP_H
#define METAVISION_HAL_EXT_TRIGGER_MONITOR_REGISTER_MAP_H

//------------------------------------------------------------------------------------------------------------
// EXT_TRIGGER_MONITOR
//------------------------------------------------------------------------------------------------------------

#define EXT_TRIGGER_MONITOR_BASE_ADDR 0x00000000
#define EXT_TRIGGER_MONITOR_LAST_ADDR 0x0000000C
#define EXT_TRIGGER_MONITOR_SIZE 0x00000020

#define EXT_TRIGGER_MONITOR_ENABLE_ADDR 0x00000000
#define EXT_TRIGGER_MONITOR_ENABLE_VALUE_BIT_IDX 0
#define EXT_TRIGGER_MONITOR_ENABLE_VALUE_WIDTH 1
#define EXT_TRIGGER_MONITOR_ENABLE_VALUE_DEFAULT 0x00000000

#define EXT_TRIGGER_MONITOR_OUT_ENABLE_ADDR 0x00000004
#define EXT_TRIGGER_MONITOR_OUT_ENABLE_VALUE_BIT_IDX 0
#define EXT_TRIGGER_MONITOR_OUT_ENABLE_VALUE_WIDTH 1
#define EXT_TRIGGER_MONITOR_OUT_ENABLE_VALUE_DEFAULT 0x00000000

#define EXT_TRIGGER_MONITOR_OUT_PULSE_PERIOD_ADDR 0x00000008
#define EXT_TRIGGER_MONITOR_OUT_PULSE_PERIOD_BIT_IDX 0
#define EXT_TRIGGER_MONITOR_OUT_PULSE_PERIOD_WIDTH 32
#define EXT_TRIGGER_MONITOR_OUT_PULSE_PERIOD_DEFAULT 0x00000064

#define EXT_TRIGGER_MONITOR_OUT_PULSE_WIDTH_ADDR 0x0000000C
#define EXT_TRIGGER_MONITOR_OUT_PULSE_WIDTH_BIT_IDX 0
#define EXT_TRIGGER_MONITOR_OUT_PULSE_WIDTH_WIDTH 32
#define EXT_TRIGGER_MONITOR_OUT_PULSE_WIDTH_DEFAULT 0x00000001

#endif // METAVISION_HAL_EXT_TRIGGER_MONITOR_REGISTER_MAP_H