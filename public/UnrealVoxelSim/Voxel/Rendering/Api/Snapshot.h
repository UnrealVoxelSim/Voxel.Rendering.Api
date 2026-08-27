#pragma once

#include "UnrealVoxelSim/Voxel/Api/Region.h"
#include "UnrealVoxelSim/Voxel/Rendering/Api/SurfaceId.h"

#include <vector>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{
	struct Snapshot final
	{
		UnrealVoxelSim::Voxel::Api::Region Target{};
		UnrealVoxelSim::Voxel::Api::Region Samples{};
		std::vector<SurfaceId> Cells;
	};
} // namespace UnrealVoxelSim::Voxel::Rendering::Api
