/*
 * Copyright (C) JumperTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x 
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _AUDIO_DRIVER_H_
#define _AUDIO_DRIVER_H_

void audioInit( void ) ;
void audioEnd( void ) ;
void audioConsumeCurrentBuffer();
#define audioDisableIrq()       __disable_irq()
#define audioEnableIrq()        __enable_irq()

void setSampleRate( uint32_t frequency ) ;

#define VOLUME_LEVEL_MAX  23
#define VOLUME_LEVEL_DEF  12

void setScaledVolume(uint8_t volume);

#endif // _AUDIO_DRIVER_H_
