//
//  IDPBitOutput.h
//  SuperCProject
//
//  Created by Student 104 on 4/11/16.
//  Copyright (c) 2016 Ievgen Gavrysh. All rights reserved.
//

#ifndef __SuperCProject__IDPBitOutput__
#define __SuperCProject__IDPBitOutput__

#include <stdio.h>

typedef enum {
    IDPProcessorTypeBigEndian       = 1 << 0,
    IDPProcessorTypeLittleEndian    = 0
} IDPProcessorType;

extern
void IDPPrintBitsWithValueSizeAndType(void *value, size_t size, IDPProcessorType procType);

typedef enum {
    IDPTransposeFlagTranspose = 1 << 0,
    IDPTransposeFlagDoNothing = 0 
} IDPTransposeFlag;

extern
void IDPPrintTransposedValueWithSizeAndFlag(void *value, size_t size, IDPTransposeFlag changeFlag);

#endif /* defined(__SuperCProject__IDPBitOutput__) */
