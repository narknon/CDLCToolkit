#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ELuxPlayerInfoType.h"
#include "ELuxBattleInfoType.h"
#include "LuxBattleDataProvider.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleDataProvider : public UObject {
    GENERATED_BODY()
public:
    ULuxBattleDataProvider();
    UFUNCTION(BlueprintCallable)
    static bool SetPlayerInfo(UObject* WorldContext, ELuxPlayerInfoType Type, int32 inIndex, bool inBool, int32 inInt, float inFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWaitingBattleMode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSkippableBattleMode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInitialized(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedBattle(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleDraw(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWinnerPlayerIndex(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWeaponGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSoulChargeTimeGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRoundMarker(UObject* WorldContextObject, FVector2D& outVector, int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerInfo(UObject* WorldContext, ELuxPlayerInfoType Type, int32 inIndex, bool& outBool, int32& outInt, float& outFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMatchWinner(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetHealthGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGuardGauge(UObject* WorldContextObject, FVector2D& outGauge, int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaValue(UObject* WorldContextObject, int32 inPlayerIndex, int32 inValueIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleWinner(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleResult(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleNum(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBattleInfo(UObject* WorldContext, ELuxBattleInfoType Type, bool& outBool, int32& outInt, float& outFloat);
    
};
