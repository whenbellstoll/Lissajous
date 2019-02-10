#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

float xpos = 359;
float ypos = 220;
int ratiox = 1;
int ratioy = 1;
void circlex(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"circlex");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	CircleLD * s = GetCircleLD( This );
	if( s->angle == 0 )
	{
		s->angle = This->VectorAngle();
		s->initialangle = s->angle;
	}
	
	s->angle += ratiox;
	
	This->Speed( ratiox );
	
	if( pKeyboard->IsTriggered( DIK_X ) || pKeyboard->IsTriggered( DIK_Y ) )
	{
		s->angle = 90;
	}
	This->VectorAngle( s->angle % 360 );
	
	
	xpos = This->WorldPositionX();
};

void circley(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"circley");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	CircleLD * s = GetCircleLD( This );
	if( s->angle == 0 )
	{
		s->angle = This->VectorAngle();
		s->initialangle = s->angle;
	}
	
	s->angle += ratioy;
	
	This->Speed( ratioy );
	
	if( pKeyboard->IsTriggered( DIK_Y ) || pKeyboard->IsTriggered( DIK_X ))
	{
		s->angle = 90;
	}
	This->VectorAngle( s->angle % 360 );
	
	ypos = This->WorldPositionY();
};

void lissagous(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"lissagous");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	This->WorldPosition( xpos, ypos );
};

void Clear(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"Clear");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	//Controls the adjustment of the x/y circles
	SpritePTR pX ("circlex");
	SpritePTR pY ("circley");
	
	
	
	if( pKeyboard->IsTriggered( DIK_X ) )
	{
		//WorldPosition
		pX->WorldPosition(359, 267);
		pY->WorldPosition(444, 220);
	
		This->Visible( true );
		if( ratiox < 13 )
		{
			ratiox++;
		}
		else
		{
			ratiox = 1;
		}
	}
	
	if( pKeyboard->IsTriggered( DIK_Y ) )
	{
		
		//WorldPosition
		pX->WorldPosition(359, 267);
		pY->WorldPosition(444, 220);
	
		This->Visible( true );
		if( ratioy < 13 )
		{
			ratioy++;
		}
		else
		{
			ratioy = 1;
		}
	}
	
	
};

void VisibileClear(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"VisibileClear");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if( This->Visible() == true )
	{
		This->Visible( false );
	}
};

