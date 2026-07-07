// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UALInteractionComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TESTCPPPROJECT_API UALInteractionComponent : public UActorComponent
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category="Interaction")
	float InteractionDistance = 350.f;
	
	TWeakObjectPtr<AActor> FocusActor;

public:
	// Sets default values for this component's properties
	UALInteractionComponent();

	void TryInteract();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:
	void UpdateFocus();
	AActor* FindInteractableActor() const;
	void SetFocusActor(AActor* NewFocusActor);
};
