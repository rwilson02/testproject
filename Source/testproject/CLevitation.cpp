// Fill out your copyright notice in the Description page of Project Settings.


#include "CLevitation.h"

// Sets default values
ACLevitation::ACLevitation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACLevitation::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogActor, Warning, TEXT("Tset mesge"));
}

// Called every frame
void ACLevitation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector finalPos = this->GetActorLocation();
	finalPos.Z += speed * DeltaTime;
	this->SetActorLocation(finalPos);
}

