
#include "FightingGame.h"
#include "2DFigfhtingGameViewportClient.h"
 
void 2DFightingGameGameViewportClient::PostInitProperties()
{
	Super::PostInitProperties();
 
	P2Keys.Add(EKeys::Up);
	P2Keys.Add(EKeys::Down);
	P2Keys.Add(EKeys::Left);
	P2Keys.Add(EKeys::Right);
}
 
bool 2DFightingGameGameViewportClient::InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	if (P2Keys.Find(Key))
	{
		ControllerId = 1;
	}
 
	return Super::InputKey(Viewport, ControllerId, Key, EventType, AmountDepressed, bGamepad);
}
