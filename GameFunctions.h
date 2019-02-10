#ifndef _GAMEFUNCTIONS_H_
#define _GAMEFUNCTIONS_H_

#include "GameNodeFun.h"
#include "LoadActorsFun.h"
#include "StateMachineFun.h"

#define FN_CIRCLEX	0
#define FN_CIRCLEY	1
#define FN_LISSAGOUS	2
#define FN_CLEAR	3
#define FN_VISIBILECLEAR	4
#define TIMER_VISIBILECLEAR	0



extern float xpos;
extern float ypos;
extern int ratiox;
extern int ratioy;

#define LD_CIRCLELD 0

extern void circlex(Sprite* This);
extern void circley(Sprite* This);
extern void lissagous(Sprite* This);
extern void Clear(Sprite* This);
extern void VisibileClear(Sprite* This);

#endif
