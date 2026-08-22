#include "UnrealVoxelSim/Voxel/Rendering/Api/Mesh.h"

#include <gtest/gtest.h>

namespace UnrealVoxelSim::Voxel::Rendering::Api
{

TEST(MeshTest, KeepsGeometryTileLocal)
{
    Mesh mesh;
    mesh.Bounds = {{100, -50, 8}, {116, -34, 24}};
    mesh.Vertices.push_back(Vertex{0, 0, 0, 0, 0, 1, SurfaceId{3}});
    mesh.Indices.push_back(0);

    EXPECT_EQ(mesh.Bounds.Min.X, 100);
    EXPECT_EQ(mesh.Vertices.front().X, 0);
    EXPECT_EQ(mesh.Vertices.front().Surface, SurfaceId{3});
}

} // namespace UnrealVoxelSim::Voxel::Rendering::Api
