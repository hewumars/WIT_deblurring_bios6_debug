/*
 * regs.h
 *
 *  Created on: 2014-1-3
 *      Author: Administrator
 */

#ifndef REGS_H_
#define REGS_H_

#define CONTENTS_OF(addr) \
        (*((volatile unsigned int *)(addr)))

#define REG_READ(addr) \
        (CONTENTS_OF(addr))

#define REG_WRITE(addr,val) \
        (CONTENTS_OF(addr) = (val))

#define MASK_BIT(bit) \
        (1 << (bit))

#define RESET_BIT(addr,bit) \
        (CONTENTS_OF(addr) &= (~MASK_BIT(bit)))

#define GET_BIT(addr,bit) \
        ((CONTENTS_OF(addr) & MASK_BIT(bit)) ? 1 : 0)

#define SET_BIT(addr,bit) \
        (CONTENTS_OF(addr) = (CONTENTS_OF(addr)) | (MASK_BIT(bit)))


#endif /* REGS_H_ */
