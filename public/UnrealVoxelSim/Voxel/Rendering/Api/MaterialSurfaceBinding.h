#pragma once

#include "UnrealVoxelSim/Voxel/Rendering/Api/SurfaceId.h"
#include "UnrealVoxelSim/Voxel/Solid/Api/MaterialId.h"

namespace UnrealVoxelSim::Voxel::Rendering::Api
{
	struct MaterialSurfaceBinding final
	{
		UnrealVoxelSim::Voxel::Solid::Api::MaterialId Material{};
		UnrealVoxelSim::Voxel::Rendering::Api::SurfaceId Surface{};
	};
}
