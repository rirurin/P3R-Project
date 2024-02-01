#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatShuffleCupArcanaRecord.h"
#include "DatShuffleCupArcanaTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatShuffleCupArcanaTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatShuffleCupArcanaRecord> Data;
    
    UDatShuffleCupArcanaTable();
};

