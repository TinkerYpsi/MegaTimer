/*
 *  Interrupt and PWM utilities for 16 bit Timer3 and on ATmega168/328/2560
 *  Original code by Jesse Tane for http://labs.ideo.com August 2008
 *  Modified March 2009 by Jérôme Despatis and Jesse Tane for ATmega328 support
 *  Modified June 2009 by Michael Polli and Jesse Tane to fix a bug in setPeriod() which caused the timer to stop
 *  Modified Oct 2009 by Dan Clemens to work with timer3 of the ATMega1280 or Arduino Mega
 *  Modified Feb 2014 by Davide "Deid" Ferrero to port the code from Timer3 to Timer4 on ATMega2560
 *
 *  This is free software. You can redistribute it and/or modify it under
 *  the terms of Creative Commons Attribution 3.0 United States License.
 *  To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/us/
 *  or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 *
 */
#ifndef MEGA_TIMER_H
#define MEGA_TIMER_H

#ifndef __AVR_ATmega2560__   // Mega
#error Library is only valid for Mega2560
#endif

#include "TimerOne.h"
#include "TimerThree.h"
#include "TimerFour.h"
#include "TimerFive.h"

class MegaTimer
{
    public:

        // methods
        void initialize();
        void start(char which);
        void stop(char which);
        void restart(char which);
        void pwm(char which, char pin, int duty, long microseconds=-1);
        void disablePwm(char which, char pin);
        void attachInterrupt(char which, void (*isr)(), long microseconds=-1);
        void detachInterrupt(char which);
        void setPeriod(char which, long microseconds);
        void setPwmDuty(char which, char pin, int duty);

    private:

        void validate(char which);
};

extern MegaTimer MTimer;

#endif
