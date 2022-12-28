/*****************************************/
/*	Author : Mahmoud Moheb				 */
/*	Date   : 31-10-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : CAN_Interface.h             */
/*****************************************/

#ifndef _CAN_INTERFACE_H_
#define _CAN_INTERFACE_H_

void CAN_Init(void);
u8 CAN_Read(void);
void CAN_Write(u8);

#endif