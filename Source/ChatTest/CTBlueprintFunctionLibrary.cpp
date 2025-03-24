// Fill out your copyright notice in the Description page of Project Settings.


#include "CTBlueprintFunctionLibrary.h"

TArray<int32> UCTBlueprintFunctionLibrary::GenerateRandomNumbers()
{
	TArray<int32> RandomNumbers;

	while (RandomNumbers.Num() < 3)
	{
		int32 RandomNum = FMath::RandRange(0, 9);
		if (!RandomNumbers.Contains(RandomNum))
		{
			RandomNumbers.Add(RandomNum);
		}
	}

	return RandomNumbers;
}

void UCTBlueprintFunctionLibrary::CompareNumbers(const TArray<int32>& Answer, const TArray<int32>& Guess, int32& Strikes, int32& Balls)
{
	Strikes = 0;
	Balls = 0;

	for (int32 i = 0;i < Answer.Num();i++)
	{
		if (Guess.IsValidIndex(i))
		{
			if (Answer[i] == Guess[i])
			{
				Strikes += 1;
			}
			else if (Answer.Contains(Guess[i]))
			{
				Balls += 1;
			}
		}
	}
}
