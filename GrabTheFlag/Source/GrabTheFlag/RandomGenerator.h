

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "RandomGenerator.generated.h"

UCLASS()
class GRABTHEFLAG_API ARandomGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomGenerator();
	UFUNCTION(BlueprintPure, Category = "RandomNumber")
	int RandInt(int max);
	UFUNCTION(BlueprintPure, Category = "RandomNumber")
	float RandFloat(float max);
	UFUNCTION(BlueprintPure, Category = "RandomNumber")
	int RandInRangeInt(int min, int max);
	UFUNCTION(BlueprintPure, Category = "RandomNumber")
	float RandInRangeFloat(float min, float max);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
