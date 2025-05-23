// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "terrainPlugin/meshgen/foliage/ETreeType.h"
#include "AssetPlugin/gamestart/assetEnums/materialEnum.h"
#include "GameCore/MeshGenBase/foliage/ETerrainType.h"

/**
 * 
 */
class TERRAINPLUGIN_API TreeProperties
{
public:
	TreeProperties();
	TreeProperties(const TreeProperties &other);
	TreeProperties(
		int detailstep, 
		ETreeType typeIn, 
		ETerrainType terrainTypeIn,
		int leafcountPerJointIn,
		int partsPerSubtreeIn,
		int subTreeCountIn
	);

	TreeProperties &operator=(const TreeProperties &other);

	~TreeProperties();

	int getDetailStep();
	ETreeType getTreeType();
	

	void addTerrainType(ETerrainType typeIn);
	std::vector<ETerrainType> &getTerrainTypes();

	int leafCountPerJoint();
	int partsPerSubtree();

	int subTreeCount();

	void setRecursionLevelMax(int count);
	int resursionLevelMax();

	void setTargetedMaterials(materialEnum stem, materialEnum leaf);
	materialEnum targetMaterialForStem();
	materialEnum targetMaterialForLeaf();

private:
	materialEnum leafMaterial = materialEnum::palmLeafMaterial;
	materialEnum stemMaterial = materialEnum::treeMaterial;

	
	int detailStepCm;
	ETreeType type;

	std::vector<ETerrainType> terrainTypes;

	int leafcountPerJointSaved;
	int subTreeCountSaved;

	int partsPerSubtreeSaved;

	void updateDetailStep(int detailStepIn);


	//new: recursion level
	int recursionLevelInternal = 0;
};
