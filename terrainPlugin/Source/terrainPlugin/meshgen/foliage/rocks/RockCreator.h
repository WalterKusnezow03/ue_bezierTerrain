// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "terrainPlugin/meshgen/foliage/helper/FVectorShape.h"
#include "GameCore/MeshGenBase/MeshData/MeshData.h"
/**
 * 
 */
class TERRAINPLUGIN_API RockCreator
{
public:
	RockCreator();
	RockCreator(int maxSize);

	~RockCreator();

	MeshData createMesh();
	MeshData createMesh(int sizeX, int sizeY, int detailStep, int layers, int heightStep);

private:
	
	int rockMaxSize = 2000;

	FVectorShape createShape(int detailStep, int sizeX, int sizeY);
	FVectorShape createRandomShape(int detailStep);

	void addVertecies(
		FVectorShape &shape,
		FVector &directionWithDistance,
		FVector &offset,
		int count
	);

	//new
	void createShapes(std::vector<FVectorShape> &shapes, int layers, int detailStep);
};
