//
// Created by Christian Curry on 2/23/16.
//

#ifndef EMULATE6502_ADDRESSINGMODES_H
#define EMULATE6502_ADDRESSINGMODES_H

//TODO: ADD THE REST
enum AddressingMode {
    NULL_ADDRESSING_MODE,
    IMMEDIATE,
    ZERO_PAGE,
    ZERO_PAGE_X,
    ABSOLUTE,
    ABSOLUTE_Z
};

#endif //EMULATE6502_ADDRESSINGMODES_H
