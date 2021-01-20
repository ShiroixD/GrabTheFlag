

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlagSpawner.generated.h"

UCLASS()
class GRABTHEFLAG_API AFlagSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlagSpawner();
	UFUNCTION(BlueprintCallable, Category = "Flag") void SpawnFlag();
	TArray<AActor> GetActors();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
