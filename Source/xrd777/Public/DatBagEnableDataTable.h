#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatBagEnableDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatBagEnableDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Minor;
    
    XRD777_API FDatBagEnableDataTable();
};

