#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void LoadGameFile()
{
	
}

void Init_Level_1Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(640);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(640);
	gn->viewPort.ViewPortHeight(480);

	FunRect rectmain = {0,0,640,480};
	Map mmain("main","level.bmp",Map::STANDARDMAP,0,0,0,true,rectmain);
	mmain.SpeedX(0.00);
	mmain.SpeedY(0.00);
	mmain.ScrollRatioX(0.00);
	mmain.ScrollRatioY(0.00);
	mmain.UseTransparency(true);
	mmain.TransparencyColor(RGB(255,0,220));
	mmain.Visible(true);
	mmain.Unused(false);
	mmain.Pause(false);
	mmain.SpacePartitionGridSize(128);
	mmain.ShowMapCollision(false);
	gn->Add(mmain);

	Sprite scirclex8703082328496;
	scirclex8703082328496.Name("circlex");
	scirclex8703082328496.Visible(false);
	scirclex8703082328496.Unused(false);
	scirclex8703082328496.Pause(false);
	scirclex8703082328496.Reflection(false);
	scirclex8703082328496.MainCharacter(false);
	scirclex8703082328496.BelongToMap("main");
	scirclex8703082328496.ActorIndex(0);
	scirclex8703082328496.Animation(0);
	scirclex8703082328496.Frame(0);
	scirclex8703082328496.PegRegistered(false);
	scirclex8703082328496.ZOrder(0);
	scirclex8703082328496.MapPositionX(359);
	scirclex8703082328496.MapPositionY(267);
	scirclex8703082328496.CheckCollisionWithMap(false);
	scirclex8703082328496.DisplayListNumber(0);
	scirclex8703082328496.Friction(0);
	scirclex8703082328496.ActivateCollisionWithSprite(false);
	scirclex8703082328496.AddLocalVariable(LD_CIRCLELD);
	scirclex8703082328496.behavior.AddFunction(FN_CIRCLEX);
	scirclex8703082328496.VectorDirection(0,0,0);
	scirclex8703082328496.ShowVectorOfTranslation(false);
	scirclex8703082328496.CollisionType(LOOSECOLLISION);
	scirclex8703082328496.Speed((float)0.00);
	scirclex8703082328496.VariableNumber(0);
	scirclex8703082328496.ShowSpriteBoundingBox(false);
	scirclex8703082328496.ShowSpriteCollision(false);
	scirclex8703082328496.Gravity(false);
	gn->Add(scirclex8703082328496);

	Sprite scircley8703201228535;
	scircley8703201228535.Name("circley");
	scircley8703201228535.Visible(false);
	scircley8703201228535.Unused(false);
	scircley8703201228535.Pause(false);
	scircley8703201228535.Reflection(false);
	scircley8703201228535.MainCharacter(false);
	scircley8703201228535.BelongToMap("main");
	scircley8703201228535.ActorIndex(0);
	scircley8703201228535.Animation(0);
	scircley8703201228535.Frame(0);
	scircley8703201228535.PegRegistered(false);
	scircley8703201228535.ZOrder(0);
	scircley8703201228535.MapPositionX(444);
	scircley8703201228535.MapPositionY(220);
	scircley8703201228535.CheckCollisionWithMap(false);
	scircley8703201228535.DisplayListNumber(0);
	scircley8703201228535.Friction(0);
	scircley8703201228535.ActivateCollisionWithSprite(false);
	scircley8703201228535.AddLocalVariable(LD_CIRCLELD);
	scircley8703201228535.behavior.AddFunction(FN_CIRCLEY);
	scircley8703201228535.VectorDirection(0,0,0);
	scircley8703201228535.ShowVectorOfTranslation(false);
	scircley8703201228535.CollisionType(LOOSECOLLISION);
	scircley8703201228535.Speed((float)0.00);
	scircley8703201228535.VariableNumber(0);
	scircley8703201228535.ShowSpriteBoundingBox(false);
	scircley8703201228535.ShowSpriteCollision(false);
	scircley8703201228535.Gravity(false);
	gn->Add(scircley8703201228535);

	Sprite scircle8700158327542;
	scircle8700158327542.Name("circle");
	scircle8700158327542.Visible(true);
	scircle8700158327542.Unused(false);
	scircle8700158327542.Pause(false);
	scircle8700158327542.Reflection(false);
	scircle8700158327542.MainCharacter(false);
	scircle8700158327542.BelongToMap("main");
	scircle8700158327542.ActorIndex(0);
	scircle8700158327542.Animation(0);
	scircle8700158327542.Frame(0);
	scircle8700158327542.PegRegistered(false);
	scircle8700158327542.ZOrder(0);
	scircle8700158327542.MapPositionX(448);
	scircle8700158327542.MapPositionY(285);
	scircle8700158327542.CheckCollisionWithMap(false);
	scircle8700158327542.DisplayListNumber(0);
	scircle8700158327542.Friction(0);
	scircle8700158327542.ActivateCollisionWithSprite(false);
	scircle8700158327542.behavior.AddFunction(FN_LISSAGOUS);
	scircle8700158327542.VectorDirection(0,0,0);
	scircle8700158327542.ShowVectorOfTranslation(false);
	scircle8700158327542.CollisionType(LOOSECOLLISION);
	scircle8700158327542.Speed((float)0.00);
	scircle8700158327542.VariableNumber(0);
	scircle8700158327542.ShowSpriteBoundingBox(false);
	scircle8700158327542.ShowSpriteCollision(false);
	scircle8700158327542.Gravity(false);
	gn->Add(scircle8700158327542);

	Sprite sclear8699910827461;
	sclear8699910827461.Name("clear");
	sclear8699910827461.Visible(false);
	sclear8699910827461.Unused(false);
	sclear8699910827461.Pause(false);
	sclear8699910827461.Reflection(false);
	sclear8699910827461.MainCharacter(false);
	sclear8699910827461.BelongToMap("main");
	sclear8699910827461.ActorIndex(1);
	sclear8699910827461.Animation(0);
	sclear8699910827461.Frame(0);
	sclear8699910827461.PegRegistered(false);
	sclear8699910827461.ZOrder(0);
	sclear8699910827461.MapPositionX(220);
	sclear8699910827461.MapPositionY(140);
	sclear8699910827461.CheckCollisionWithMap(false);
	sclear8699910827461.DisplayListNumber(0);
	sclear8699910827461.Friction(0);
	sclear8699910827461.ActivateCollisionWithSprite(false);
	sclear8699910827461.behavior.AddFunction(FN_CLEAR);
	sclear8699910827461.behavior.AddTimer(TIMER_VISIBILECLEAR,true);
	sclear8699910827461.VectorDirection(0,0,0);
	sclear8699910827461.ShowVectorOfTranslation(false);
	sclear8699910827461.CollisionType(LOOSECOLLISION);
	sclear8699910827461.Speed((float)0.00);
	sclear8699910827461.VariableNumber(0);
	sclear8699910827461.ShowSpriteBoundingBox(false);
	sclear8699910827461.ShowSpriteCollision(false);
	sclear8699910827461.Gravity(false);
	gn->Add(sclear8699910827461);


};

void End_Level_1Function(GameNode *gn)
{
	

};

void Exit_Level_1Function(GameNode *gn)
{
};

