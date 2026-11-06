/* Copyright В© 2026 BestProject Team */
#ifndef GAME_CLIENT_COMPONENTS_BESTCLIENT_CAMERA_DEMOS_H
#define GAME_CLIENT_COMPONENTS_BESTCLIENT_CAMERA_DEMOS_H

#include <base/vmath.h>

class CGameClient;
class IInput;

class CCameraDemos
{
	static vec2 s_FreeviewVelocity;

public:
	static void Reset();
	static void ApplyFreeviewNumpad(IInput *pInput, float FrameTime, bool &ForceFreeview, vec2 &ForceFreeviewPos, vec2 &Center);
};

#endif
