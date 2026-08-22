#pragma once

#include <compare>
#include <cstdint>
#include <type_traits>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{

class SurfaceId final
{
  public:
    constexpr SurfaceId() noexcept = default;
    explicit constexpr SurfaceId(const std::uint32_t value) noexcept : Value_(value)
    {
    }

    [[nodiscard]] constexpr bool IsValid() const noexcept
    {
        return Value_ != 0;
    }

    [[nodiscard]] constexpr std::uint32_t Value() const noexcept
    {
        return Value_;
    }

    auto operator<=>(const SurfaceId &) const = default;

  private:
    std::uint32_t Value_{};
};

static_assert(sizeof(SurfaceId) == sizeof(std::uint32_t));
static_assert(std::is_trivially_copyable_v<SurfaceId>);

} // namespace UnrealVoxelSim::Voxel::Rendering::Api
