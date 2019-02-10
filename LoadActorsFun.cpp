#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void LoadAnimation_Level_1(GameNode* gn)
{
	SpriteList[0].TotalAnimations = 1;
	SpriteList[0].Animations = new AnimationElem[1];

	SpriteList[0].Animations[0].TotalFrames=1;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[1];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "blue.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 1;
	SpriteList[0].Animations[0].Frames[0].Width = 32;
	SpriteList[0].Animations[0].Frames[0].Height = 32;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(255,0,220);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 16;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 16;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 31,31);
	SpriteList[0].Animations[0].Frames[0].centerX = 16;
	SpriteList[0].Animations[0].Frames[0].centerY = 16;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;



	SpriteList[1].TotalAnimations = 1;
	SpriteList[1].Animations = new AnimationElem[1];

	SpriteList[1].Animations[0].TotalFrames=1;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[1];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "clear.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 1;
	SpriteList[1].Animations[0].Frames[0].Width = 200;
	SpriteList[1].Animations[0].Frames[0].Height = 200;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(240,240,240);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 59;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 59;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 199,199);
	SpriteList[1].Animations[0].Frames[0].centerX = 59;
	SpriteList[1].Animations[0].Frames[0].centerY = 59;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = false;



}

