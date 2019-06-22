#include "stm32f10x.h"

#ifndef ENCODER_MODULE
#define ENCODER_MODULE

#define PEDAL_MAX 0xCC

/**
 * Initializes the encoder for the accelerator pedal
 */
void EncoderInit(void);

/**
 * Reads a value from the encoder
 */
uint16_t EncoderRead(void);

#endif
