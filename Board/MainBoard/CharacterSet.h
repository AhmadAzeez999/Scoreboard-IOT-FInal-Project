#ifndef CHARACTER_SET_H  
#define CHARACTER_SET_H  

#include <avr/pgmspace.h>  // Needed for PROGMEM

// Function to get the index of a character in the character set
int getCharIndex(char c);

const bool charSet7x7[76][7][7] PROGMEM = 
{
    // A
    {
        {0,0,1,1,0,0},
        {0,1,0,0,1,0},
        {1,0,0,0,0,1},
        {1,1,1,1,1,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1}
    },
    // B
    {
        {1,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,1,1,1,1,0}
    },
    // C
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,0},
        {1,0,0,0,0,0},
        {1,0,0,0,0,0},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // D
    {
        {1,1,1,0,0,0},
        {1,0,0,1,0,0},
        {1,0,0,0,1,0},
        {1,0,0,0,1,},
        {1,0,0,0,1,0},
        {1,0,0,1,0,0},
        {1,1,1,0,0,0}
    },
        // E
    {
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,1}
    },
    // F
    {
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0}
    },
    // G
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,0},
        {1,0,0,1,1,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // H
    {
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,1,1,1,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1}
    },
    // I
    {
        {0,0,1,1,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,1,1,0,0}
    },
    // J
    {
        {0,1,1,1,1},
        {0,0,0,1,0},
        {0,0,0,1,0},
        {1,1,0,1,0},
        {1,0,0,1,0},
        {1,0,0,1,0},
        {0,1,1,1,0}
    },
    // K
    {
        {1,0,0,0,1},
        {1,0,0,1,0},
        {1,0,1,0,0},
        {1,1,0,0,0},
        {1,0,1,0,0},
        {1,0,0,1,0},
        {1,0,0,0,1}
    },
    // L
    {
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,1}
    },
    // M
    {
        {1,0,0,0,0,0,1},
        {1,1,0,0,0,1,1},
        {1,0,1,0,1,0,1},
        {1,0,0,1,0,0,1},
        {1,0,0,0,0,0,1},
        {1,0,0,0,0,0,1},
        {1,0,0,0,0,0,1}
    },
    // N
    {
        {1,0,0,0,0,1},
        {1,1,0,0,0,1},
        {1,0,1,0,0,1},
        {1,0,0,1,0,1},
        {1,0,0,0,1,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1}
    },
    // O
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
        // P
    {
        {1,1,1,1,0,0},
        {1,0,0,0,1,0},
        {1,0,0,0,1,0},
        {1,1,1,1,0,0},
        {1,0,0,0,0,0},
        {1,0,0,0,0,0},
        {1,0,0,0,0,0}
    },
    // Q
    {
        {0,1,1,1,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,1,0,1},
        {1,0,0,1,1},
        {0,1,1,1,1}
    },
    // R
    {
        {1,1,1,1,0,0},
        {1,0,0,0,1,0},
        {1,0,0,0,1,0},
        {1,1,1,1,0,0},
        {1,0,1,0,0,0},
        {1,0,0,1,0,0},
        {1,0,0,0,1,0}
    },
    // S
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,0},
        {0,1,1,1,1,0},
        {0,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // T
    {
        {0,1,1,1,1,1,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0}
    },
    // U
    {
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {0,1,1,1,0}
    },
    // V
    {
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {0,1,0,1,0},
        {0,0,1,0,0}
    },
    // W
    {
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,1,1,0,1},
        {1,1,0,0,1,1},
        {1,0,0,0,0,1}
    },
    // X
    {
        {1,0,0,0,0,0,1},
        {0,1,0,0,0,1,0},
        {0,0,1,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,1,0,0},
        {0,1,0,0,0,1,0},
        {1,0,0,0,0,0,1}
    },
    // Y
    {
        {0,1,0,0,0,1,0},
        {0,1,0,0,0,1,0},
        {0,0,1,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0}
    },
    // Z
    {
        {0,1,1,1,1,1,0},
        {0,0,0,0,0,1,0},
        {0,0,0,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,0,0,0},
        {0,1,0,0,0,0,0},
        {0,1,1,1,1,1,0}
    },
        // a
    {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,1,1,1,1,0},
        {1,0,0,0,1,0},
        {1,0,0,0,1,0},
        {1,0,0,0,1,0},
        {0,1,1,1,1,1}
        
    },
    // b
    {
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,1,1,1,0}
    },
    // c
    {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,1,1,1,1,0},
        {1,0,0,0,0,0},
        {1,0,0,0,0,0},
        {1,0,0,0,0,0},
        {0,1,1,1,1,0}
    },
    // d
    {
        {0,0,0,0,0,1},
        {0,0,0,0,0,1},
        {0,1,1,1,1,1},
        {0,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,1}
    },
    // e
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,1,1,1,0},
        {1,0,0,0,1},
        {1,1,1,1,1},
        {1,0,0,0,0},
        {0,1,1,1,0}
    },
    // f
    {
        {0,0,1,1,1,0,0},
        {0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0},
        {1,1,1,1,1,0,0},
        {0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0}
    },
    // g
    {
        {0,1,1,1,1,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,1},
        {0,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // h
    {
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1}
    },
    // i
    {
        {0,0,1,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,1,1,0,0,0}
    },
    // j
    {
        {0,0,0,1,1,1,0},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,1,1,1,1,0,0}
    },
    // k
    {
        {1,0,0,0,0,0},
        {1,0,0,0,1,0},
        {1,0,0,1,0,0},
        {1,1,1,0,0,0},
        {1,1,1,0,0,0},
        {1,0,0,1,0,0},
        {1,0,0,0,1,0}
    },
    // l
    {
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,0,0,0,0},
        {1,1,1,1,1}
    },
    // m
    {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,1,1,0,1,1,0},
        {1,0,0,1,0,0,1},
        {1,0,0,1,0,0,1},
        {1,0,0,1,0,0,1},
        {1,0,0,1,0,0,1}
    },
        // n
    {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,1,1,1,0,1},
        {1,0,0,0,1,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1}
    },
    // o
    {
        {0,0,0,0,0,0},
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // p
    {
        {0,0,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,0,0,0,0}
    },
    // q
    {
        {0,0,0,0,0},
        {0,1,1,1,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {0,1,1,1,1},
        {0,0,0,0,1},
        {0,0,0,0,1}
    },
    // r
    {
        {0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0},
        {1,1,1,1,1,1,0},
        {1,0,0,0,0,0,0},
        {1,0,0,0,0,0,0},
        {1,0,0,0,0,0,0},
        {1,0,0,0,0,0,0}
    },
    // s
    {
        {0,0,0,0,0,0,0},
        {0,0,1,1,1,1,0},
        {0,1,0,0,0,0,0},
        {0,0,1,1,1,0,0},
        {0,0,0,0,0,1,0},
        {0,0,0,0,0,1,0},
        {0,1,1,1,1,0,0}
    },
    // t
    {
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,1,1,1,1,1,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,1,0,0}
    },
    // u
    {
        {0,0,0,0,0,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // v
    {
        {0,0,0,0,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {0,1,0,1,0},
        {0,0,1,0,0}
    },
    // w
    {
        {0,0,0,0,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,1,0,1},
        {1,1,0,1,1},
        {1,0,0,0,1}
    },
    // x
    {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,1,0,0,0,1,0},
        {0,0,1,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,1,0,0},
        {0,1,0,0,0,1,0}
    },
    // y
    {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,1,0,0,0,1,0},
        {0,0,1,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0}
    },
    // z
    {
        {0,0,0,0,0,0,0},
        {0,1,1,1,1,1,0},
        {0,0,0,0,0,1,0},
        {0,0,0,0,1,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,0,0,0},
        {0,1,1,1,1,1,0}
    },
        // 0
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // 1
    {
        {0,0,0,1,0,0,0},
        {0,0,1,1,0,0,0},
        {0,1,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0}
    },
    // 2
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {0,0,0,0,0,1},
        {0,0,0,1,1,0},
        {0,0,1,0,0,0},
        {0,1,0,0,0,0},
        {1,1,1,1,1,1}
    },
    // 3
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {0,0,0,0,0,1},
        {0,0,1,1,1,0},
        {0,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // 4
    {
        {0,0,0,0,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,1,0,1,0,0},
        {0,1,0,0,1,0,0},
        {1,1,1,1,1,1,0},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    },
    // 5
    {
        {1,1,1,1,1,1},
        {1,0,0,0,0,0},
        {1,1,1,1,1,0},
        {0,0,0,0,0,1},
        {0,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // 6
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,0},
        {1,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // 7
    {
        {1,1,1,1,1,1},
        {0,0,0,0,0,1},
        {0,0,0,0,1,0},
        {0,0,0,1,0,0},
        {0,0,1,0,0,0},
        {0,1,0,0,0,0},
        {1,0,0,0,0,0}
    },
    // 8
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
    // 9
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,1},
        {0,0,0,0,0,1},
        {1,0,0,0,0,1},
        {0,1,1,1,1,0}
    },
        // .
    {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0}
    },
    // ,
    {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,0,1,0,0}
    },
    // :
    {
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,0,0,0,0}
    },
    // ;
    {
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,0,1,0,0}
    },
    // !
    {
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0},
        {0,0,0,1,1,0,0}
    },
    // ?
    {
        {0,1,1,1,1,0},
        {1,0,0,0,0,1},
        {0,0,0,0,0,1},
        {0,0,0,1,1,0},
        {0,0,0,0,0,0},
        {0,0,1,1,0,0},
        {0,0,1,1,0,0}
    },
    // @
    {
        {0,1,1,1,1,1,0},
        {1,0,0,0,0,0,1},
        {1,0,1,1,1,0,1},
        {1,0,1,0,1,0,1},
        {1,0,1,1,1,0,1},
        {1,0,0,0,0,1,1},
        {0,1,1,1,1,1,0}
    },
    // #
    {
        {0,0,1,0,1,0,0},
        {0,0,1,0,1,0,0},
        {1,1,1,1,1,1,1},
        {0,0,1,0,1,0,0},
        {1,1,1,1,1,1,1},
        {0,0,1,0,1,0,0},
        {0,0,1,0,1,0,0}
    },
    // $
    {
        {0,0,0,1,0,0,0},
        {0,1,1,1,1,1,0},
        {1,0,0,1,0,0,0},
        {0,1,1,1,1,1,0},
        {0,0,0,1,0,0,1},
        {1,1,1,1,1,1,0},
        {0,0,0,1,0,0,0}
    },
    // %
    {
        {0,0,0,0,0},
        {1,1,0,0,1},
        {1,1,0,1,0},
        {0,0,1,0,0},
        {0,1,0,1,1},
        {1,0,0,1,1},
        {0,0,0,0,0}
    },
    // &
    {
        {0,1,1,1,1,0,0},
        {1,0,0,0,0,1,0},
        {1,0,0,0,0,1,0},
        {0,1,1,1,1,0,0},
        {1,0,0,1,0,1,0},
        {1,0,0,0,1,1,0},
        {0,1,1,1,0,1,0}
    },
    // *
    {
        {0,0,0,0,0,0,0},
        {0,1,0,1,0,1,0},
        {0,0,1,1,1,0,0},
        {1,1,1,1,1,1,1},
        {0,0,1,1,1,0,0},
        {0,1,0,1,0,1,0},
        {0,0,0,0,0,0,0}
    },
    // -
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    },
    // +
    {
        {0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,1,1,1,1,1,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0}
    }

};

#endif // CHARACTER_SET_H