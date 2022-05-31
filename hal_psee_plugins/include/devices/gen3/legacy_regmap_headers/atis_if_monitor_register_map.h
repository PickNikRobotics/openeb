/**********************************************************************************************
 * WARNING: THIS FILE HAS BEEN GENERATED BY REG_MAP_MANAGER TOOLS PLEASE DO NOT MODIFY IT     *
 **********************************************************************************************
 * File: atis_if_monitor_register_map.h                                                       *
 *                                                                                            *
 * Copyright (c) 2015-2018 Prophesee. All rights reserved.                                    *
 *                                                                                            *
 * Date:           08/10/2018 at 12h05m31s                                                    *
 * Name:           atis_if_monitor_register_map                                               *
 * Version:        1.0                                                                        *
 * Hash:           455384fe9988338947b8d81d0f0bd84fae5dca9f37727c1282ee68931ba0a92f           *
 **********************************************************************************************
 * WARNING: THIS FILE HAS BEEN GENERATED BY REG_MAP_MANAGER TOOLS PLEASE DO NOT MODIFY IT     *
 *********************************************************************************************/

#ifndef METAVISION_HAL_ATIS_IF_MONITOR_REGISTER_MAP_H
#define METAVISION_HAL_ATIS_IF_MONITOR_REGISTER_MAP_H

//------------------------------------------------------------------------------------------------------------
// ATIS_IF_MONITOR
//------------------------------------------------------------------------------------------------------------

#define ATIS_IF_MONITOR_BASE_ADDR 0x00000000
#define ATIS_IF_MONITOR_LAST_ADDR 0x0000000C
#define ATIS_IF_MONITOR_SIZE 0x00000020

#define ATIS_IF_MONITOR_CFG_ENABLE_ADDR \
    0x00000000 // Controls the enable/disable of individual ATIS I/F Monitor's periodic events and alarms.
#define ATIS_IF_MONITOR_CFG_ENABLE_ALL_EVT_BIT_IDX 0
#define ATIS_IF_MONITOR_CFG_ENABLE_ALL_EVT_WIDTH 1
#define ATIS_IF_MONITOR_CFG_ENABLE_ALL_EVT_DEFAULT 0x00000000
#define ATIS_IF_MONITOR_CFG_ENABLE_TD_IDLE_TIME_EVT_BIT_IDX 1
#define ATIS_IF_MONITOR_CFG_ENABLE_TD_IDLE_TIME_EVT_WIDTH 1
#define ATIS_IF_MONITOR_CFG_ENABLE_TD_IDLE_TIME_EVT_DEFAULT 0x00000000
#define ATIS_IF_MONITOR_CFG_ENABLE_TD_IDLE_TIMEOUT_EVT_BIT_IDX 2
#define ATIS_IF_MONITOR_CFG_ENABLE_TD_IDLE_TIMEOUT_EVT_WIDTH 1
#define ATIS_IF_MONITOR_CFG_ENABLE_TD_IDLE_TIMEOUT_EVT_DEFAULT 0x00000000
#define ATIS_IF_MONITOR_CFG_ENABLE_APS_IDLE_TIME_EVT_BIT_IDX 3
#define ATIS_IF_MONITOR_CFG_ENABLE_APS_IDLE_TIME_EVT_WIDTH 1
#define ATIS_IF_MONITOR_CFG_ENABLE_APS_IDLE_TIME_EVT_DEFAULT 0x00000000
#define ATIS_IF_MONITOR_CFG_ENABLE_APS_IDLE_TIMEOUT_EVT_BIT_IDX 4
#define ATIS_IF_MONITOR_CFG_ENABLE_APS_IDLE_TIMEOUT_EVT_WIDTH 1
#define ATIS_IF_MONITOR_CFG_ENABLE_APS_IDLE_TIMEOUT_EVT_DEFAULT 0x00000000
#define ATIS_IF_MONITOR_CFG_ENABLE_GLOBAL_ILLUMINATION_EVT_BIT_IDX 5
#define ATIS_IF_MONITOR_CFG_ENABLE_GLOBAL_ILLUMINATION_EVT_WIDTH 1
#define ATIS_IF_MONITOR_CFG_ENABLE_GLOBAL_ILLUMINATION_EVT_DEFAULT 0x00000000

#define ATIS_IF_MONITOR_CFG_IDLE_TIME_THR_ADDR \
    0x00000004 // Sets the threshold time value in us after which {MASTER|SLAVE}_ATIS_{TD|APS}_IDLE_TIME events are
               // sent.  These events determine the amount of time between two consecutive events in the respective
               // channel if such time is above the threshold.
#define ATIS_IF_MONITOR_CFG_IDLE_TIME_THR_VALUE_BIT_IDX 0
#define ATIS_IF_MONITOR_CFG_IDLE_TIME_THR_VALUE_WIDTH 26
#define ATIS_IF_MONITOR_CFG_IDLE_TIME_THR_VALUE_DEFAULT 0x00002710

#define ATIS_IF_MONITOR_CFG_IDLE_TIMEOUT_THR_ADDR \
    0x00000008 // Sets the threshold time value in us after which {MASTER|SLAVE}_ATIS_{TD|APS}_IDLE_TIMEOUT events are
               // sent.  These events notify the host that the monitored channel has been inactive beyond this time
               // threshold.
#define ATIS_IF_MONITOR_CFG_IDLE_TIMEOUT_THR_VALUE_BIT_IDX 0
#define ATIS_IF_MONITOR_CFG_IDLE_TIMEOUT_THR_VALUE_WIDTH 26
#define ATIS_IF_MONITOR_CFG_IDLE_TIMEOUT_THR_VALUE_DEFAULT 0x00002710

#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_ADDR 0x0000000C
#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_DATA_BIT_IDX 0
#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_DATA_WIDTH 26
#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_DATA_DEFAULT 0x00000000
#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_VALID_BIT_IDX 31
#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_VALID_WIDTH 1
#define ATIS_IF_MONITOR_STAT_GLOBAL_ILLUMINATION_VALID_DEFAULT 0x00000000

#endif // METAVISION_HAL_ATIS_IF_MONITOR_REGISTER_MAP_H