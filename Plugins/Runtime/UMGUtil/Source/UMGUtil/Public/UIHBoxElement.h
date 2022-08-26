#pragma once
#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "UINode.h"
#include "UIDataObject.h"
#include "UIEventListenerUnit.h"
#include "UIHBoxElement.generated.h"

class UUINodeStyle;
class UUIEventListener;

UCLASS(Blueprintable)
class UMGUTIL_API UUIHBoxElement : public UHorizontalBox, public IUINode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UINodeName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UUINodeStyle*> StyleMap;
    
    UUIHBoxElement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIEventListener* AddEventListener(const FString& EventType);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool setPropertyValue(const FString& Path, const FUIDataObject& Value) override PURE_VIRTUAL(setPropertyValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    FUIDataObject getPropertyValue(const FString& Path) override PURE_VIRTUAL(getPropertyValue, return FUIDataObject{};);
    
};
