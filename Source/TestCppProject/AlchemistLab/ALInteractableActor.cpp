// Fill out your copyright notice in the Description page of Project Settings.


#include "ALInteractableActor.h"

// Sets default values
AALInteractableActor::AALInteractableActor()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(SceneRoot);
}
