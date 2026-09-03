#pragma once

#include <compare>
#include <string_view>
#include <type_traits>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{
	class TextureKey final
	{
	public:
		constexpr TextureKey() noexcept = default;

		explicit constexpr TextureKey(const std::string_view value) noexcept : m_Value(value)
		{
		}

		[[nodiscard]] constexpr bool IsValid() const noexcept
		{
			return !m_Value.empty();
		}

		[[nodiscard]] constexpr std::string_view Value() const noexcept
		{
			return m_Value;
		}

		auto operator<=>(const TextureKey&) const = default;

	private:
		std::string_view m_Value{};
	};

	static_assert(std::is_trivially_copyable_v<TextureKey>);
}
