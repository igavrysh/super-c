//
//  IDPHuman.h
//  SuperCProject
//
//  Created by Student 104 on 4/14/16.
//  Copyright (c) 2016 Ievgen Gavrysh. All rights reserved.
//

#ifndef __SuperCProject__IDPHuman__
#define __SuperCProject__IDPHuman__

#include <stdbool.h>

#include "IDPObject.h"
#include "IDPString.h"

typedef enum {
    IDPHumanGenderMale,
    IDPHumanGenderFemale
} IDPHumanGender;

typedef struct IDPHuman IDPHuman;

struct IDPHuman {
    IDPObject _super;
    
    IDPString *_name;
    
    int _age;
    
    IDPHumanGender _gender;

    IDPHuman *_partner;
    
    IDPHuman *_parents;
    IDPHuman *_children[20];
};

extern
void *IDPHumanCreate();

extern
void __IDPHumanDeallocate(IDPHuman *human);

extern
void IDPHumanSetName(IDPHuman *human, IDPString *name);

extern
void IDPHumanSetAge(IDPHuman *human, int age);

extern
void IDPHumanSetGender(IDPHuman *human, IDPHumanGender gender);

extern
IDPString *IDPHumanGetName(IDPHuman *human);

extern
uint8_t IDPHumanGetAge(IDPHuman *human);

extern
IDPHumanGender IDPHumanGetGender(IDPHuman *human);

extern
void IDPHumanSetPartner(IDPHuman *human, IDPHuman *partner);

extern
bool IDPHumanIsMarried(IDPHuman *human);

extern
void IDPHumanDivorce(IDPHuman *human);

extern
void IDPHumanGetMarriedWithPartner(IDPHuman *human, IDPHuman *partner);

extern
IDPHuman* IDPHumanGiveBirthToChild(IDPHuman *object);

#endif /* defined(__SuperCProject__IDPHuman__) */
