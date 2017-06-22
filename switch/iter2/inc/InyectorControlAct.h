/** 
 * \file InyectorControlAct.h 
 */

/* -------------------------- Development history -------------------------- */
/*
 *  2015.10.24  LeFr  v2.4.05  Initial version
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* --------------------------------- Module -------------------------------- */
#ifdef __INYECTORCONTROLACT_H__
#define __INYECTORCONTROLACT_H__
 
/* ----------------------------- Include files ----------------------------- */
#include "InyectionControl.h"

/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
/* -------------------------------- Constants ------------------------------ */
/* ------------------------------- Data types ------------------------------ */
/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
/* Init action */
void InyectorControlAct_init(void);

/* Effect actions */
/* Guard actions */
/* Entry actions */
void InyectorControlAct_starting(Event *event);
void InyectorControlAct_entryIdleSpeed(Event *event);

/* Exit actions */
 
/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */
#endif
