#pragma once

#include "UnrealVoxelSim/Voxel/Api/Region.h"
#include "UnrealVoxelSim/Voxel/Rendering/Api/Vertex.h"

#include <cstdint>
#include <vector>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{
	struct Mesh final
	{
		UnrealVoxelSim::Voxel::Api::Region Bounds{};
		std::vector<Vertex> Vertices;
		std::vector<std::uint32_t> Indices;
	};
}
