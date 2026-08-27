/*
 * Copyright (C) 2024-2026 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <cstdint>

namespace CamX {

class HwInterface {
public:
    static HwInterface* GetInstance();
    uint32_t GetTitanVersion();
    uint32_t GetHwVersion();
};

static HwInterface sInstance;

HwInterface* HwInterface::GetInstance() {
    return &sInstance;
}

uint32_t HwInterface::GetTitanVersion() {
    return 780;
}

uint32_t HwInterface::GetHwVersion() {
    return 1;
}

} // namespace CamX
