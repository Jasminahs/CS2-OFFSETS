/*
 * All offsets dumped with: https://frezzyhook.com
 * Sat, 20 Jan 2024 00:08:04 +0000
 */

#pragma once

#include <cstddef>

namespace CAnimScriptBase {
    constexpr std::ptrdiff_t m_bIsValid = 0x8; // bool
}

namespace EmptyTestScript { // CAnimScriptBase
    constexpr std::ptrdiff_t m_hTest = 0x10; // CAnimScriptParam<float>
}