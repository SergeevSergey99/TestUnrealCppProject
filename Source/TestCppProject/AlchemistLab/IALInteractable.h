// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IALInteractable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UIALInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TESTCPPPROJECT_API IIALInteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanInteract(AActor* interactor) const;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(AActor* interactor);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnFocusBegin(AActor* interactor);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnFocusEnd(AActor* interactor);
};
