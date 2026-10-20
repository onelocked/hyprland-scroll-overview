#pragma once

#include <cstdint>
#include <hyprland/src/plugins/PluginAPI.hpp>
#include <hyprland/src/desktop/DesktopTypes.hpp>

inline HANDLE SCROLLOVERVIEW_HANDLE = nullptr;

bool ensureScrollOverviewHooks();
void disableScrollOverviewHooks();
bool consumeOverviewMouseAxisBind(uint32_t lastInputTimeMs);
bool registerOverviewEvents();
void removeOverviewEvents();
void emitOverviewOpened(PHLMONITOR monitor);
void emitOverviewClosed(PHLMONITOR monitor);
