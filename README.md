# UnrealVoxelSim.Voxel.Rendering.Api

Engine- and presenter-independent contracts for derived voxel surface geometry.

`Snapshot` is an owned, immutable-by-convention copy of a logical target region and its sampled halo. Each sample is an
opaque `SurfaceId`; zero means that no opaque surface occupies the cell. A domain adapter decides how authoritative
domain values map to surface identifiers.

`Mesh` contains tile-local integer vertices, cell-space UV coordinates, and triangle indices. Its logical bounds provide
the world-space origin and axis-aligned culling volume. `SurfaceId` remains a logical visual identity; presenters choose
their own GPU vertex format, shading, materials, resource lifetime, and occlusion strategy. Neither Qt nor Unreal Engine
types cross this boundary.

Meshes and snapshots are reconstructible derived state. They are not persistence formats and never become authoritative
voxel state.

Windows presets disable shared-library generation, use vcpkg's `x64-windows-static` triplet, and select the static MSVC
runtime. Interface-only internal dependencies remain header-only; linkable internal and external dependencies are static.
