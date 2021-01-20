


#include "RandomGenerator.h"

// Sets default values
ARandomGenerator::ARandomGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARandomGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARandomGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ARandomGenerator::RandInt(int max)
{
	return FMath::RandRange(int32(0), int32(max));
}

float ARandomGenerator::RandFloat(float max)
{
	return FMath::RandRange(float(0), max);
}

int ARandomGenerator::RandInRangeInt(int min, int max)
{
	return FMath::RandRange(int32(min), int32(max));
}

float ARandomGenerator::RandInRangeFloat(float min, float max)
{
	return FMath::RandRange(min, max);
}
