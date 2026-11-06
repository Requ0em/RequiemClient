/* Copyright В© 2026 BestProject Team */
#include "camera_demos.h"

#include <base/math.h>

#include <engine/input.h>
#include <engine/keys.h>
#include <engine/shared/config.h>
#include <engine/shared/video.h>

#include <game/client/gameclient.h>

#include <algorithm>

vec2 CCameraDemos::s_FreeviewVelocity = vec2(0.0f, 0.0f);

void CCameraDemos::Reset()
{
	s_FreeviewVelocity = vec2(0.0f, 0.0f);
}

void CCameraDemos::ApplyFreeviewNumpad(IInput *pInput, float FrameTime, bool &ForceFreeview, vec2 &ForceFreeviewPos, vec2 &Center)
{
	if(!g_Config.m_BcFreeviewNumpad)
	{
		s_FreeviewVelocity = vec2(0.0f, 0.0f);
		return;
	}

#if defined(CONF_VIDEORECORDER)
	if(IVideo::Current() && IVideo::Current()->IsRecording())
		FrameTime = 1.0f / (float)std::max(g_Config.m_ClVideoRecorderFPS, 1);
#endif

	const float SmoothFreeviewSpeed = (float)g_Config.m_BcFreeviewSpeed;
	const float SmoothFreeviewAcceleration = g_Config.m_BcFreeviewSmoothness / 10.0f;
	vec2 FreeviewMove = vec2(0.0f, 0.0f);
	if(pInput->KeyIsPressed(KEY_KP_4))
		FreeviewMove.x -= 1.0f;
	if(pInput->KeyIsPressed(KEY_KP_6))
		FreeviewMove.x += 1.0f;
	if(pInput->KeyIsPressed(KEY_KP_8))
		FreeviewMove.y -= 1.0f;
	if(pInput->KeyIsPressed(KEY_KP_2))
		FreeviewMove.y += 1.0f;

	const vec2 TargetVelocity = FreeviewMove * SmoothFreeviewSpeed;
	s_FreeviewVelocity += (TargetVelocity - s_FreeviewVelocity) * std::min(FrameTime * SmoothFreeviewAcceleration, 1.0f);
	if(absolute(s_FreeviewVelocity.x) < 0.1f && absolute(s_FreeviewVelocity.y) < 0.1f)
		s_FreeviewVelocity = vec2(0.0f, 0.0f);

	if(s_FreeviewVelocity.x != 0.0f || s_FreeviewVelocity.y != 0.0f)
	{
		ForceFreeviewPos = Center + s_FreeviewVelocity * FrameTime;
		ForceFreeview = true;
	}
}
