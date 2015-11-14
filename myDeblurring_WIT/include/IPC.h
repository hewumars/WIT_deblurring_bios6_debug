#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include <c6x.h>

/************************ USER DEFINES ********************/
#define CORENUM                         4
#define IPCGR0  						(0x02620240u)
#define IPCGR1							(0x02620244u)

#define IPCAR0  						(0x02620280u)
#define IPCAR1  						(0x02620284u)


#define INTC_EVENTID_IPC_LOCAL          (90)

/************************ GLOBAL VARIABLES ********************/
						 
extern uint32_t IssueIPCInterrupt(uint32_t CoreID, uint32_t IPCValue);
extern void setupIPCInterrupt(void);
extern int IPCValue[32];
extern void IPC_ISR();
