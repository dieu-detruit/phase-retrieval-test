#pragma once

#include <unit/double.hpp>

inline namespace Constant
{

using namespace Unit;

using WaveNumber = decltype(1.0 / Length{});
using PhotonFluxDensity = DimensionLessType;
using WaveAmplitude = decltype(PhotonFluxDensity{}.sqrt());

inline const WaveAmplitude amp_unit{1.0};

inline constexpr std::size_t image_pixel_num = 847;
inline constexpr std::size_t object_pixel_num = 128;
inline constexpr std::size_t oversampling_ratio = 3;
inline constexpr std::size_t detector_pixel_num = object_pixel_num * oversampling_ratio;

inline constexpr Length detector_pixel_size = 50.0_um;
inline constexpr Length detector_length = double(detector_pixel_num) * detector_pixel_size;
inline constexpr Length object_length = 100.0_nm;
inline constexpr Length object_diameter = 141.4_nm;
inline constexpr Length object_pixel_size = object_length / double(object_pixel_num);
inline constexpr Length diffraction_plane_length = object_pixel_size * double(detector_pixel_num);

constexpr Length distance = 100.0_mm;  // Distance between the object to the detector

constexpr Length lambda = 0.5_nm;
constexpr WaveNumber k = 2.0 * M_PI / lambda;

constexpr double beta = 0.85;

}  // namespace Constant
