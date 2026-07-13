#include "AALCarryableActor.h"
#include "AALCharacter.h"

AALCarryableActor::AALCarryableActor()
{
	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
}

void AALCarryableActor::Interact_Implementation(AActor* Interactor)
{
	AAALCharacter* Character = Cast<AAALCharacter>(Interactor);
	
	if (Character)
		Character->TryCarryActor(this);
}

UPrimitiveComponent* AALCarryableActor::GetCarryPrimitive() const
{
	return MeshComponent;
}
