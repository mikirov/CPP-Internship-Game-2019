// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "Components/InputComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"

#include "DebugHelpers.h"
#include "FPSProjectile.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FPSCameraComponent->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	FPSCameraComponent->bUsePawnControlRotation = true;

	GunSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	GunSkeleton->SetupAttachment(FPSCameraComponent);
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	DebugHelpers::ScreenDebug(TEXT("FPS Character initialized!"));
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveSide", this, &AFPSCharacter::MoveSide);

	PlayerInputComponent->BindAxis("LookRight", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
}


void AFPSCharacter::MoveForward(float Value) {
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(GetController()->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}


void AFPSCharacter::MoveSide(float Value) {
	FVector Direction = FRotationMatrix(GetController()->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::StartJump()
{
	bPressedJump = true;
}

void AFPSCharacter::StopJump()
{
	bPressedJump = false;
}

void AFPSCharacter::Fire() {

	DebugHelpers::ScreenDebug(TEXT("Fire!"));
	checkf(ProjectileClass, TEXT("Character should have projectile class set!"));
	checkf(GunFirePosition, TEXT("Character should set fire position of gun!"));

	if (ProjectileClass)
	{
		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Transform MuzzleOffset from camera space to world space.
		FVector MuzzleLocation = GunFirePosition->GetComponentLocation();
		FRotator MuzzleRotation = CameraRotation;
		// Skew the aim to be slightly upwards.
		MuzzleRotation.Pitch += FireUpForce;
		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = this;
			// Spawn the projectile at the muzzle.
			AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->Fire(LaunchDirection);
			}
		}
	}
}