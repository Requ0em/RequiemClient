/* Copyright © 2026 BestProject Team */
#ifndef GAME_CLIENT_COMPONENTS_BESTCLIENT_UI_THEME_WIDGETS_H
#define GAME_CLIENT_COMPONENTS_BESTCLIENT_UI_THEME_WIDGETS_H

#include <algorithm>

#include <base/color.h>

#include <game/client/components/bestclient/ui_theme/style.h>
#include <game/client/ui_rect.h>

class CUi;

namespace BestClientUiTheme
{

inline ColorRGBA SliderValueColor()
{
	return UiText(ColorRGBA(1.0f, 1.0f, 1.0f, 0.95f));
}

inline float SliderRounding(float Height)
{
	return std::min(3.0f, Height * 0.35f);
}

inline float CheckBoxRounding(float Size)
{
	return std::min(3.0f, Size * 0.35f);
}

inline ColorRGBA SettingsNavFromUi(float RgbScale, float Alpha)
{
	if(IsCustomUiNavTab())
		return ColorRGBA(RgbScale, RgbScale, RgbScale, Alpha);
	const ColorRGBA Gui = color_cast<ColorRGBA>(ColorHSLA(g_Config.m_UiColor, true));
	// Requiem palette: keep the menu chrome in a dark red tint.
	const ColorRGBA Tint = ColorRGBA(1.0f, 0.24f, 0.26f);
	return ColorRGBA(Gui.r * RgbScale * Tint.r, Gui.g * RgbScale * Tint.g, Gui.b * RgbScale * Tint.b, Alpha);
}

inline ColorRGBA SettingsNavGroupInactiveColor()
{
	return ColorRGBA(0.30f, 0.05f, 0.07f, 0.90f);
}

inline ColorRGBA SettingsNavGroupActiveColor()
{
	return ColorRGBA(0.55f, 0.09f, 0.12f, 0.96f);
}

inline ColorRGBA SettingsNavGroupHoverColor()
{
	return ColorRGBA(0.43f, 0.07f, 0.10f, 0.92f);
}

inline ColorRGBA SettingsNavLeafInactiveColor()
{
	return ColorRGBA(0.26f, 0.05f, 0.06f, 0.90f);
}

inline ColorRGBA SettingsNavLeafActiveColor()
{
	return ColorRGBA(0.50f, 0.08f, 0.11f, 0.95f);
}

inline ColorRGBA SettingsNavLeafHoverColor()
{
	return ColorRGBA(0.38f, 0.06f, 0.09f, 0.92f);
}

void DrawCheckBoxChecked(const CUIRect *pBox, float ColorMul);

float DoScrollbarH(CUi *pUi, const void *pId, const CUIRect *pRect, float Current, const char *pValueText);

} // namespace BestClientUiTheme

#endif
