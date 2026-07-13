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

bool AALInteractableActor::CanInteract_Implementation(AActor* Interactor) const
{
	return IIALInteractable::CanInteract_Implementation(Interactor);
}

void AALInteractableActor::Interact_Implementation(AActor* Interactor)
{
	IIALInteractable::Interact_Implementation(Interactor);
}

void AALInteractableActor::OnFocusBegin_Implementation(AActor* Interactor)
{
	MeshComponent->SetRenderCustomDepth(true);
}

void AALInteractableActor::OnFocusEnd_Implementation(AActor* Interactor)
{
	MeshComponent->SetRenderCustomDepth(false);
}