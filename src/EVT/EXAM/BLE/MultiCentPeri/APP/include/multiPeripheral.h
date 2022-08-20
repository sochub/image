/********************************** (C) COPYRIGHT *******************************
* File Name          : peripheral.h
* Author             : WCH
* Version            : V1.0
* Date               : 2018/12/11
* Description        : 
            
*******************************************************************************/

#ifndef PERIPHERAL_H
#define PERIPHERAL_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */

/*********************************************************************
 * CONSTANTS
 */

// Peripheral Task Events
#define SBP_START_DEVICE_EVT                              0x0001
#define SBP_PERIODIC_EVT                                  0x0002
#define SBP_READ_RSSI_EVT                                 0x0004
#define SBP_PARAM_UPDATE_EVT                              0x0008
#define SBP_PHY_UPDATE_EVT                                0x0010

#define CONNECT0_ITEM                                 0
#define CONNECT1_ITEM                                 1
#define CONNECT2_ITEM                                 2

/*********************************************************************
 * MACROS
 */
  typedef struct
  {
    uint8_t taskID;
    uint16_t connHandle;           // Connection handle of current connection
    uint16_t connInterval;
    uint16_t connSlaveLatency;
    uint16_t connTimeout;
  } peripheralConnItem_t;


/*********************************************************************
 * FUNCTIONS
 */

/*
 * Task Initialization for the BLE Application
 */
extern void Peripheral_Init( void );

/*
 * Task Event Processor for the BLE Application
 */
extern uint16_t Peripheral_ProcessEvent( uint8_t task_id, uint16_t events );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif 
