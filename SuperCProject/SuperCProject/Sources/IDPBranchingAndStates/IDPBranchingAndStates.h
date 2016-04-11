//
//  IDPDivideBy15.h
//  SuperCProject
//
//  Created by Ievgen on 4/6/16.
//  Copyright © 2016 1milliondollarsstartup. All rights reserved.
//

#ifndef IDPBranchingAndStates_h
#define IDPBranchingAndStates_h

#include <stdbool.h>

char * IDPCreateStringForBoolValue(bool boolValue);

void IDPPrintMamaPapaStdBranching(int firstNum, int secondNum);

void IDPPrintMamaPapaTernaryBranching(int firstNum, int secondNum);

void IDPPrintDeputyStateForSalaryAndIncome(float salary, float income);

typedef enum {
    IDPPrintStateMama       = 1 << 0,
    IDPPrintStatePapa       = 1 << 1,
    IDPPrintStateMamaPapa   = 1 << 2,
    IDPPrintStateNone       = 0
} IDPPrintState;

IDPPrintState IDPDisplayAndGetStateForNumber(int num);

#endif /* IDPBranchingAndStates_h */