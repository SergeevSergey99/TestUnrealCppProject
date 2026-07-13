#pragma once
#include "ALInteractableActor.h"
#include "AALCarryableActor.generated.h"

UCLASS()
class AALCarryableActor : public AALInteractableActor
{
	GENERATED_BODY()
public:
    AALCarryableActor();
	
    virtual void Interact_Implementation(AActor* Interactor) override;
	
	UPrimitiveComponent* GetCarryPrimitive() const;
	
private:
	UPROPERTY(EditDefaultsOnly, Category="Carry")
	float ThrowImpulse = 800.0f;
};
