

#pragma once
 
#include "Engine/GameViewportClient.h"
#include "RollerGameViewportClient.generated.h"
 
UCLASS()
class 2DFightingGame_API 2DFightingGameGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
 
	virtual void PostInitProperties() override;
 
	virtual bool InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) override;
 
	TSet<FKey> P2Keys;
};
