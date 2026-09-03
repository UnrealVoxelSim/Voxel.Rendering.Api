#pragma once

#include "TextureKey.h"

#include <array>
#include <cstddef>
#include <cstdint>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{
	enum class FaceDirection : std::uint8_t
	{
		NegativeX,
		PositiveX,
		NegativeY,
		PositiveY,
		NegativeZ,
		PositiveZ,
	};

	struct SurfaceAppearance final
	{
		// The order is NegativeX, PositiveX, NegativeY, PositiveY, NegativeZ, PositiveZ.
		std::array<TextureKey, 6> Textures{};

		[[nodiscard]] constexpr TextureKey For(const FaceDirection face) const noexcept
		{
			return Textures[static_cast<std::size_t>(face)];
		}
	};
}
