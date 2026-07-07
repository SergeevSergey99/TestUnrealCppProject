// Fill out your copyright notice in the Description page of Project Settings.


#include "UALInteractionComponent.h"

#include "IALInteractable.h"


// Sets default values for this component's properties
UALInteractionComponent::UALInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UALInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UALInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UALInteractionComponent::SetFocusActor(AActor* NewFocusActor)
{
	if (FocusActor.Get() == NewFocusActor) return;
	auto OldFocusActor = FocusActor.Get();
	
	if (OldFocusActor != nullptr && OldFocusActor->Implements<UIALInteractable>())
	{
		IIALInteractable::Execute_OnFocusEnd(OldFocusActor, GetOwner());
	}
	
	FocusActor = NewFocusActor;
	
	if (FocusActor.Get() != nullptr && FocusActor->Implements<UIALInteractable>())
	{
		IIALInteractable::Execute_OnFocusBegin(FocusActor.Get(), GetOwner());
	}
}

