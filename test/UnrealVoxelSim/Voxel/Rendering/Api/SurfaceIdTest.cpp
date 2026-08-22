#include "UnrealVoxelSim/Voxel/Rendering/Api/SurfaceId.h"

#include <gtest/gtest.h>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{

static_assert(!SurfaceId{}.IsValid());
static_assert(SurfaceId{7}.IsValid());

TEST(SurfaceIdTest, ZeroIsReservedForEmptySpace)
{
    EXPECT_FALSE(SurfaceId{}.IsValid());
    EXPECT_EQ(SurfaceId{}.Value(), 0U);
    EXPECT_EQ(SurfaceId{42}.Value(), 42U);
}

} // namespace UnrealVoxelSim::Voxel::Rendering::Api
