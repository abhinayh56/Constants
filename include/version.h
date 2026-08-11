/**
 * @file constants_version.h
 * @brief Version information for the Constants library.
 */

#ifndef CONSTANTS_VERSION_H
#define CONSTANTS_VERSION_H

/** @brief Major version number. */
#define CONSTANTS_VERSION_MAJOR 1

/** @brief Minor version number. */
#define CONSTANTS_VERSION_MINOR 0

/** @brief Patch version number. */
#define CONSTANTS_VERSION_PATCH 0

/** @brief Numeric library version in MAJOR * 10000 + MINOR * 100 + PATCH format. */
#define CONSTANTS_VERSION (CONSTANTS_VERSION_MAJOR * 10000 + CONSTANTS_VERSION_MINOR * 100 + CONSTANTS_VERSION_PATCH)

#define STRINGIFY_HELPER(x) #x
#define STRINGIFY(x) STRINGIFY_HELPER(x)

/** @brief Library version as a semantic version string. */
#define CONSTANTS_VERSION_STRING STRINGIFY(CONSTANTS_VERSION_MAJOR) "." STRINGIFY(CONSTANTS_VERSION_MINOR) "." STRINGIFY(CONSTANTS_VERSION_PATCH)

/** @brief Constants library version information. */
namespace CONSTANTS
{
    inline constexpr int version_major = CONSTANTS_VERSION_MAJOR;
    inline constexpr int version_minor = CONSTANTS_VERSION_MINOR;
    inline constexpr int version_patch = CONSTANTS_VERSION_PATCH;
    inline constexpr int version = CONSTANTS_VERSION;
    inline constexpr const char *version_string = CONSTANTS_VERSION_STRING;
}

#endif