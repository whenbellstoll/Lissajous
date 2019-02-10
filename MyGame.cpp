#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void Mode()
{
	SetMode(640,480,32);
	_IsWindowed = true;
}

void SetDataPath()
{
	ArtAssetsPath = "";
	RTDPath = "";
};

void BuildLogic()
{
	FArray = NewVoidPointers(5);
	FArray[FN_CIRCLEX] = (void*)circlex;
	FArray[FN_CIRCLEY] = (void*)circley;
	FArray[FN_LISSAGOUS] = (void*)lissagous;
	FArray[FN_CLEAR] = (void*)Clear;
	FArray[FN_VISIBILECLEAR] = (void*)VisibileClear;

	maxFIndex = 4;

	TMArray = NewTimers(1);
	TMArray[TIMER_VISIBILECLEAR] = Timer(GetTimerFunction(FN_VISIBILECLEAR),100,TU_Milliseconds,true,TM_Infinite);

	maxTMIndex = 0;

	NArray = NewNodePointers(1);
	static CircleLD ld_circleld;
	NArray[LD_CIRCLELD] = (CircleLD*)&ld_circleld;
	maxNIndex = 0;

};

void OnGameStart()
{
};

void OnGameEnd(){
};

void OnSave(File& file)
{
	file.Write(xpos);
	file.Write(ypos);
	file.Write(ratiox);
	file.Write(ratioy);
	
};

void OnLoad(File& file)
{
	file.Read(xpos);
	file.Read(ypos);
	file.Read(ratiox);
	file.Read(ratioy);
	
};

void Fun()
{
	GameNode *g1;
	g1=NewGameNode();
	g1->Id(1);
	g1->Name("Level_1");
	g1->gameNodeActorsFunction = LoadAnimation_Level_1;
	g1->gameNodeLevelFunction = Init_Level_1Function;
	g1->transitionFunction = Exit_Level_1Function;
	g1->endLevelFunction = End_Level_1Function;
	myGame->Add(g1);


	myGame->Title("Lissajous Curves");
}
