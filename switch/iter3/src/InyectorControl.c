/**
 *  \file InyectorControl.c
 */
 
/* -------------------------- Development history -------------------------- */
/*
 *  2017.06.20  LeFr  v2.4.05  Initial version
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* ----------------------------- Include files ----------------------------- */
#include "InyectorControl.h"
#include "InyectorControlAct.h"

/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
/* ---------------------------- Local variables ---------------------------- */
static int state;

/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Global functions --------------------------- */
int 
InyectorControl_init(void)
{
    state = off; 
    InyectorControlAct_init();
    return state;
}

int
InyectorControl_dispatch(Event *event)
{
    int result;

    switch (state)
    {
        case off:
            if (event->signal == evStart)
            {
                InyectorControlAct_starting(event);
                state = starting;
                result = state;
            }
            else
            {
                result = UNHANDLED_EVENT;
            }
            break;
        case starting:
            if (event->signal == evStartTimeout)
            {
                InyectorControlAct_entryIdleSpeed(event);
                state = idleSpeed;
                result = state;
            }
            else
            {
                result = UNHANDLED_EVENT;
            }
            break;
        case idleSpeed:
            if (event->signal == evTick)
            {
                if (InyectorControlAct_isPressedThrottle(event))
                {
                    state = normal;
                }
                result = state;
            }
            else
            {
                result = UNHANDLED_EVENT;
            }
            break;
        case normal:
            if (event->signal == evTick)
            {
                if (InyectorControlAct_isReleasedThrottle(event))
                {
                    state = idleSpeed;
                }
                result = state;
            }
            else
            {
                result = UNHANDLED_EVENT;
            }
            break;
        default:
            break;
    }
    return result;
}

void 
InyectorControl_setState(int currState)
{
    state = currState;
}

int 
InyectorControl_getState(void)
{
    return state;
}

/* ------------------------------ File footer ------------------------------ */
