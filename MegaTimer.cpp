#include "MegaTimer.h"

void MegaTimer::initialize()
{
    const long INIT_VALUE = 1000000;
    Timer1.initialize(INIT_VALUE);
    Timer3.initialize(INIT_VALUE);
    Timer4.initialize(INIT_VALUE);
    Timer5.initialize(INIT_VALUE);
}

void MegaTimer::setPeriod(char which, long microseconds)
{
    switch(which)
    {
        case 0:
            Timer1.setPeriod(microseconds);
            break;
        case 1:
            Timer3.setPeriod(microseconds);
            break;
        case 2:
            Timer4.setPeriod(microseconds);
            break;
        case 3:
            Timer5.setPeriod(microseconds);
            break;
    }
}

void MegaTimer::setPwmDuty(char which, char pin, int duty)
{
    switch(which)
    {
        case 0:
            Timer1.setPwmDuty(pin, duty);
            break;
        case 1:
            Timer3.setPwmDuty(pin, duty);
            break;
        case 2:
            Timer4.setPwmDuty(pin, duty);
            break;
        case 3:
            Timer5.setPwmDuty(pin, duty);
            break;
    }
}

void MegaTimer::pwm(char which, char pin, int duty, long microseconds)  // expects duty cycle to be 10 bit (1024)
{
    switch(which)
    {
        case 0:
            Timer1.pwm(pin, duty, microseconds);
            break;
        case 1:
            Timer3.pwm(pin, duty, microseconds);
            break;
        case 2:
            Timer4.pwm(pin, duty, microseconds);
            break;
        case 3:
            Timer5.pwm(pin, duty, microseconds);
            break;
    }
}

void MegaTimer::disablePwm(char which, char pin)
{
    switch(which)
    {
        case 0:
            Timer1.disablePwm(pin);
            break;
        case 1:
            Timer3.disablePwm(pin);
            break;
        case 2:
            Timer4.disablePwm(pin);
            break;
        case 3:
            Timer5.disablePwm(pin);
            break;
    }
}

void MegaTimer::attachInterrupt(char which, void (*isr)(), long microseconds)
{
    switch(which)
    {
        case 0:
            Timer1.attachInterrupt(isr, microseconds);
            break;
        case 1:
            Timer3.attachInterrupt(isr, microseconds);
            break;
        case 2:
            Timer4.attachInterrupt(isr, microseconds);
            break;
        case 3:
            Timer5.attachInterrupt(isr, microseconds);
            break;
    }
}

void MegaTimer::detachInterrupt(char which)
{
    switch(which)
    {
        case 0:
            Timer1.detachInterrupt();
            break;
        case 1:
            Timer3.detachInterrupt();
            break;
        case 2:
            Timer4.detachInterrupt();
            break;
        case 3:
            Timer5.detachInterrupt();
            break;
    }
}

void MegaTimer::start(char which)
{
    switch(which)
    {
        case 0:
            Timer1.start();
            break;
        case 1:
            Timer3.start();
            break;
        case 2:
            Timer4.start();
            break;
        case 3:
            Timer5.start();
            break;
    }
}

void MegaTimer::stop(char which)
{
    switch(which)
    {
        case 0:
            Timer1.stop();
            break;
        case 1:
            Timer3.stop();
            break;
        case 2:
            Timer4.stop();
            break;
        case 3:
            Timer5.stop();
            break;
    }
}

void MegaTimer::restart(char which)
{
    switch(which)
    {
        case 0:
            Timer1.restart();
            break;
        case 1:
            Timer3.restart();
            break;
        case 2:
            Timer4.restart();
            break;
        case 3:
            Timer5.restart();
            break;
    }
}
