#pragma once

#include "UnrealVoxelSim/Voxel/Rendering/Api/SurfaceId.h"

#include <compare>
#include <cstdint>
#include <type_traits>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{
	struct Vertex final
	{
		std::int32_t X{};
		std::int32_t Y{};
		std::int32_t Z{};
		std::int8_t NormalX{};
		std::int8_t NormalY{};
		std::int8_t NormalZ{};
		SurfaceId Surface{};

		auto operator<=>(const Vertex&) const = default;
	};

	static_assert(std::is_trivially_copyable_v<Vertex>);
} // namespace UnrealVoxelSim::Voxel::Rendering::Api
