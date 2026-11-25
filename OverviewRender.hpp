#pragma once

#include "globals.hpp"
#include <hyprland/src/helpers/math/CornerRadii.hpp>

namespace OverviewRender {

void flushPass(Render::CRenderContext& ctx, PHLMONITOR monitor);
void queueBlur(Render::CRenderContext& ctx, const CBox& box, Math::SCornerRadii rounding, float roundingPower, float alpha, bool usePrecomputedBlur);
void renderBlur(Render::CRenderContext& ctx, PHLMONITOR monitor, const CBox& box, Math::SCornerRadii rounding, float roundingPower, float alpha, bool usePrecomputedBlur);

}
