// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IALInteractable.h"
#include "GameFramework/Actor.h"
#include "ALInteractableActor.generated.h"

UCLASS()
class TESTCPPPROJECT_API AALInteractableActor : public AActor, public IIALInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AALInteractableActor();

	virtual bool CanInteract_Implementation(AActor* Interactor) const override;
	virtual void Interact_Implementation(AActor* Interactor) override;
	virtual void OnFocusBegin_Implementation(AActor* Interactor) override;
	virtual void OnFocusEnd_Implementation(AActor* Interactor) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USceneComponent> SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> MeshComponent;
};
