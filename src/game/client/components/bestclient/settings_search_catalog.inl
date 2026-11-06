

	{"Chat Bubbles", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcChatBubbles, nullptr},
	{"Show chat bubbles above you", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubblesSelf, &g_Config.m_BcChatBubbles},
	{"Show chat bubbles in demo", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubblesDemo, &g_Config.m_BcChatBubbles},
	{"Chat bubble size", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleSize, &g_Config.m_BcChatBubbles},
	{"Show for", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleShowTime, &g_Config.m_BcChatBubbles},
	{"Fade in", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleFadeIn, &g_Config.m_BcChatBubbles},
	{"Fade out", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleFadeOut, &g_Config.m_BcChatBubbles},
	{"Stack animation", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleAnimation, &g_Config.m_BcChatBubbles},
	{"Corner rounding", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleRounding, &g_Config.m_BcChatBubbles},
	{"Custom colors", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Bubbles", &g_Config.m_BcChatBubbleCustomColors, &g_Config.m_BcChatBubbles},

	{"Chat Media", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcChatMediaPreview, nullptr},
	{"Show photos in chat media", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Media", &g_Config.m_BcChatMediaPhotos, &g_Config.m_BcChatMediaPreview},
	{"Show GIFs in chat media", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Media", &g_Config.m_BcChatMediaGifs, &g_Config.m_BcChatMediaPreview},
	{"Content filtering", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Media", &g_Config.m_BcChatMediaContentFilter, &g_Config.m_BcChatMediaPreview},
	{"Media preview width", SETTINGS_NAV_LEAF_BC_VISUALS, "Chat Media", &g_Config.m_BcChatMediaPreviewMaxWidth, &g_Config.m_BcChatMediaPreview},

	{"Gradient", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcNameplateGradient, nullptr},
	{"Gradient clans", SETTINGS_NAV_LEAF_BC_VISUALS, "Gradient", &g_Config.m_BcNameplateGradientClan, nullptr},
	{"Gradient skin", SETTINGS_NAV_LEAF_BC_VISUALS, "Gradient", &g_Config.m_BcNameplateGradientSkin, nullptr},
	{"Gradient everything", SETTINGS_NAV_LEAF_BC_VISUALS, "Gradient", &g_Config.m_BcNameplateGradientEverything, nullptr},
	{"Animate speed", SETTINGS_NAV_LEAF_BC_VISUALS, "Gradient", &g_Config.m_BcNameplateGradientAnimateSpeed, &g_Config.m_BcNameplateGradient},

	{"Flying Name Plates", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcFlyingNamePlates, nullptr},
	{"Hide line", SETTINGS_NAV_LEAF_BC_VISUALS, "Flying Name Plates", &g_Config.m_BcFlyingNamePlatesHideLine, &g_Config.m_BcFlyingNamePlates},
	{"Lift above player", SETTINGS_NAV_LEAF_BC_VISUALS, "Flying Name Plates", &g_Config.m_BcFlyingNamePlatesLift, &g_Config.m_BcFlyingNamePlates},
	{"Movement drag", SETTINGS_NAV_LEAF_BC_VISUALS, "Flying Name Plates", &g_Config.m_BcFlyingNamePlatesDrag, &g_Config.m_BcFlyingNamePlates},
	{"Follow speed", SETTINGS_NAV_LEAF_BC_VISUALS, "Flying Name Plates", &g_Config.m_BcFlyingNamePlatesFollow, &g_Config.m_BcFlyingNamePlates},



	{"Cursor Trail", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcCursorTrail, nullptr},
	{"Trail size", SETTINGS_NAV_LEAF_BC_VISUALS, "Cursor Trail", &g_Config.m_BcCursorTrailTrailSize, &g_Config.m_BcCursorTrail},
	{"Number of frames", SETTINGS_NAV_LEAF_BC_VISUALS, "Cursor Trail", &g_Config.m_BcCursorTrailNumberOfFrames, &g_Config.m_BcCursorTrail},
	{"Opacity", SETTINGS_NAV_LEAF_BC_VISUALS, "Cursor Trail", &g_Config.m_BcCursorTrailOpacity, &g_Config.m_BcCursorTrail},
	{"Sampling FPS", SETTINGS_NAV_LEAF_BC_VISUALS, "Cursor Trail", &g_Config.m_BcCursorTrailSamplingFps, &g_Config.m_BcCursorTrail},
	{"Disable movement", SETTINGS_NAV_LEAF_BC_VISUALS, "Cursor Trail", &g_Config.m_BcCursorTrailDisableMovement, &g_Config.m_BcCursorTrail},

	{"Motion Blur", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcMotionBlur, nullptr},
	{"Blend strength", SETTINGS_NAV_LEAF_BC_VISUALS, "Motion Blur", &g_Config.m_BcMotionBlurStrength, &g_Config.m_BcMotionBlur},

	{"Animations", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcAnimations, nullptr},
	{"Settings animation", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcModuleUiRevealAnimation, &g_Config.m_BcAnimations},
	{"Settings (ms)", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcModuleUiRevealAnimationMs, &g_Config.m_BcAnimations},
	{"Chat message animations", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcChatAnimation, &g_Config.m_BcAnimations},
	{"Chat message (ms)", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcChatAnimationMs, &g_Config.m_BcAnimations},
	{"Chat open animation", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcChatOpenAnimation, &g_Config.m_BcAnimations},
	{"Chat open (ms)", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcChatOpenAnimationMs, &g_Config.m_BcAnimations},
	{"Chat typing animation", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcChatTypingAnimation, &g_Config.m_BcAnimations},
	{"Chat typing (ms)", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcChatTypingAnimationMs, &g_Config.m_BcAnimations},
	{"Killfeed animation", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcKillfeedAnimation, &g_Config.m_BcAnimations},
	{"Killfeed (ms)", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcKillfeedAnimationMs, &g_Config.m_BcAnimations},
	{"Main menu animation", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcMainMenuAnimation, &g_Config.m_BcAnimations},
	{"Main menu speed", SETTINGS_NAV_LEAF_BC_VISUALS, "Animations", &g_Config.m_BcMainMenuAnimationSpeed, &g_Config.m_BcAnimations},

	{"Music Player", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcMusicPlayer, nullptr},
	{"Show song lyrics", SETTINGS_NAV_LEAF_BC_VISUALS, "Music Player", &g_Config.m_BcMusicPlayerShowLyrics, &g_Config.m_BcMusicPlayer},
	{"Show current time", SETTINGS_NAV_LEAF_BC_VISUALS, "Music Player", &g_Config.m_BcMusicPlayerShowCurrentTime, &g_Config.m_BcMusicPlayer},
	{"Text scale", SETTINGS_NAV_LEAF_BC_VISUALS, "Music Player", &g_Config.m_BcMusicPlayerTextScale, &g_Config.m_BcMusicPlayer},
	{"Columns", SETTINGS_NAV_LEAF_BC_VISUALS, "Music Player", &g_Config.m_BcMusicPlayerVisualizerColumns, &g_Config.m_BcMusicPlayer},
	{"Rounding", SETTINGS_NAV_LEAF_BC_VISUALS, "Music Player", &g_Config.m_BcMusicPlayerVisualizerRounding, &g_Config.m_BcMusicPlayer},

	{"Keystrokes", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcKeystrokesKeyboard, nullptr},
	{"Enable mouse", SETTINGS_NAV_LEAF_BC_VISUALS, "Keystrokes", &g_Config.m_BcKeystrokesMouse, nullptr},

	{"Aspect Ratio", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcCustomAspectRatioMode, nullptr},
	{"Cursor as without stretch", SETTINGS_NAV_LEAF_BC_VISUALS, "Aspect Ratio", &g_Config.m_BcCustomAspectRatioCursorNative, nullptr},

	{"Physic Balls", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcPhysicBallsSpawnCount, nullptr},
	{"Spawn count", SETTINGS_NAV_LEAF_BC_VISUALS, "Physic Balls", &g_Config.m_BcPhysicBallsSpawnCount, nullptr},

	{"Shotgun Glow", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcShotgunGlow, nullptr},
	{"Rocket Glow", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals", &g_Config.m_BcRocketGlow, nullptr},
	{"Enable Nuke effects", SETTINGS_NAV_LEAF_BC_VISUALS, "Rocket Glow", &g_Config.m_BcMemeNukeExplosion, &g_Config.m_BcRocketGlow},
	{"Screen shake", SETTINGS_NAV_LEAF_BC_VISUALS, "Rocket Glow", &g_Config.m_BcMemeNukeShake, &g_Config.m_BcMemeNukeExplosion},
	{"Nuke size", SETTINGS_NAV_LEAF_BC_VISUALS, "Rocket Glow", &g_Config.m_BcMemeNukeScale, &g_Config.m_BcMemeNukeExplosion},






	{"Map preview in server list", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcServerMapPreview, nullptr},
	{"Show coordinates above tees", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowTeeCoords, nullptr},
	{"Show real hitbox", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowRealHitbox, nullptr},
	{"Real hitbox dot color", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowRealHitboxColor, &g_Config.m_BcShowRealHitbox},
	{"Show player below indicator", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowhudDummyCoordIndicator, nullptr},
	{"Show current checkpoint in hud", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowCorrectCheckpoint, nullptr},
	{"Show points in tab", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowPointsInTab, nullptr},
	{"Show friend icon in scoreboard", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcScoreboardFriendMark, nullptr},
	{"Show spectator nicknames", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowSpectatorNames, nullptr},
	{"Show vote percentage", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcShowVotePercentage, nullptr},
	{"Display max FPS", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcDisplayMaxFps, nullptr},
	{"Bestclient discord rpc (restart requires)", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcDiscordRPC, nullptr},
	{"Bind/Emote wheel scale", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcWheelScale, nullptr},
	{"Scoreboard scale", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_BcScoreboardScale, nullptr},
	{"UI scale", SETTINGS_NAV_LEAF_BC_VISUALS, "Visuals QoL", &g_Config.m_UiScale, nullptr},

	{"Better UI", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiStyle, nullptr},
	{"Enable better UI", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiStyle, nullptr},
	{"Better checkbox", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiNewCheckbox, &g_Config.m_BcMenuUiStyle},
	{"Better scrollbar", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiNewScrollbar, &g_Config.m_BcMenuUiStyle},
	{"Better tab option", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiNewTabOption, &g_Config.m_BcMenuUiStyle},
	{"Left", SETTINGS_NAV_LEAF_BC_VISUALS, "Better tab option", &g_Config.m_BcMenuUiTabSide, &g_Config.m_BcMenuUiNewTabOption},
	{"Right", SETTINGS_NAV_LEAF_BC_VISUALS, "Better tab option", &g_Config.m_BcMenuUiTabSide, &g_Config.m_BcMenuUiNewTabOption},
	{"Better color picker", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiNewColorPicker, &g_Config.m_BcMenuUiStyle},
	{"Better font", SETTINGS_NAV_LEAF_BC_VISUALS, "Better UI", &g_Config.m_BcMenuUiBetterFont, &g_Config.m_BcMenuUiStyle},

	{"UI Themes", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcUiThemes, nullptr},
	{"Export", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcUiThemes, &g_Config.m_BcUiThemes},
	{"Import", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcUiThemes, &g_Config.m_BcUiThemes},
	{"Enable colorable background", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiBackground, &g_Config.m_BcUiThemes},
	{"Background color", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_UiColor, &g_Config.m_BcCustomUiBackground},
	{"Element", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcUiThemeElement, &g_Config.m_BcUiThemes},
	{"Text", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiText, &g_Config.m_BcUiThemes},
	{"Checkbox", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiCheckbox, &g_Config.m_BcUiThemes},
	{"Scrollbar", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiScrollbar, &g_Config.m_BcUiThemes},
	{"Button", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiButton, &g_Config.m_BcUiThemes},
	{"Droplist", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiDropdown, &g_Config.m_BcUiThemes},
	{"Input field", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiEditBox, &g_Config.m_BcUiThemes},
	{"Function block", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiBlock, &g_Config.m_BcUiThemes},
	{"UI background", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiMainPanel, &g_Config.m_BcUiThemes},
	{"Settings tabs", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiNavTab, &g_Config.m_BcUiThemes},
	{"Badge", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiBadge, &g_Config.m_BcUiThemes},
	{"Binds", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiBind, &g_Config.m_BcUiThemes},
	{"Gradient", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiTextGradient, &g_Config.m_BcUiThemes},
	{"Accent", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiTextUseAccent, &g_Config.m_BcUiThemes},
	{"Animate speed", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiTextAnimateSpeed, &g_Config.m_BcUiThemes},
	{"Opacity", SETTINGS_NAV_LEAF_BC_VISUALS, "UI Themes", &g_Config.m_BcCustomUiBlockOpacity, &g_Config.m_BcUiThemes},

	{"Inputs", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay", &g_Config.m_BcInputs, nullptr},
	{"Sub-Tick aiming", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Inputs", &g_Config.m_ClSubTickAiming, nullptr},
	{"Auto margin", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Inputs", &g_Config.m_BcAutoMargin, nullptr},

	{"Snap Tap", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay", &g_Config.m_BcSnapTap, nullptr},
	{"Delay", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Snap Tap", &g_Config.m_BcSnapTapDelay, &g_Config.m_BcSnapTap},

	{"Gores mode", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay", &g_Config.m_BcGoresMode, nullptr},
	{"Disable if you have shotgun, grenade or laser", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gores mode", &g_Config.m_BcGoresModeDisableIfWeapons, &g_Config.m_BcGoresMode},

	{"Optimizer", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay", &g_Config.m_BcOptimizer, nullptr},
	{"FPS fog", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Optimizer", &g_Config.m_BcOptimizerFpsFog, &g_Config.m_BcOptimizer},

	{"Fast Actions", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay", &g_Config.m_BcFastActions, nullptr},

	{"Finish Prediction", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay", &g_Config.m_BcFinishPrediction, nullptr},
	{"Show time", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Finish Prediction", &g_Config.m_BcFinishPredictionShowTime, &g_Config.m_BcFinishPrediction},
	{"Show percentage", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Finish Prediction", &g_Config.m_BcFinishPredictionShowPercentage, &g_Config.m_BcFinishPrediction},
	{"Show always", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Finish Prediction", &g_Config.m_BcFinishPredictionShowAlways, &g_Config.m_BcFinishPrediction},


	{"High DDNet Process Priority", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Performance", &g_Config.m_BcHighProcessPriority, nullptr},
	{"Lower Discords Process Priority", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Performance", &g_Config.m_BcDiscordNormalProcessPriority, nullptr},

	{"Automatic update", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcAutoUpdate, nullptr},
	{"Cinematic camera", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcCinematicCamera, nullptr},
	{"Extend zoom (0.5 steps)", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcExtendZoom, nullptr},
	{"Better spectate", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcBetterSpectate, nullptr},
	{"Notify when moved in spec", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcSpecMovedNotify, nullptr},
	{"Lock team automatically after joining", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcAutoTeamLock, nullptr},
	{"Confirm before quitting", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_BcConfirmQuit, nullptr},
	{"Moving/ego tiles prediction", SETTINGS_NAV_LEAF_BC_GAMEPLAY, "Gameplay QoL", &g_Config.m_TcEgoTilesAntiLag, nullptr},

	{"Rollback Demo", SETTINGS_NAV_LEAF_BC_OTHERS, "Others", &g_Config.m_ClReplays, nullptr},
	{"Rollback length", SETTINGS_NAV_LEAF_BC_OTHERS, "Rollback Demo", &g_Config.m_ClReplayLength, &g_Config.m_ClReplays},

	{"Focus Mode", SETTINGS_NAV_LEAF_BC_OTHERS, "Others", &g_Config.m_ClFocusMode, nullptr},


	{"Client Indicator", SETTINGS_NAV_LEAF_BC_OTHERS, "Others", &g_Config.m_BcClientIndicatorInNamePlate, nullptr},
	{"Show indicator in scoreboard", SETTINGS_NAV_LEAF_BC_OTHERS, "Client Indicator", &g_Config.m_BcClientIndicatorInScoreboard, nullptr},

	{"Save unsent messages", SETTINGS_NAV_LEAF_BC_OTHERS, "Chat QoL", &g_Config.m_ClChatReset, nullptr},
	{"Silent typing", SETTINGS_NAV_LEAF_BC_OTHERS, "Chat QoL", &g_Config.m_BcSilentTyping, nullptr},
	{"Commands in other layout", SETTINGS_NAV_LEAF_BC_OTHERS, "Chat QoL", &g_Config.m_BcChatAltCommandLayout, nullptr},
	{"Reply/copy message menu", SETTINGS_NAV_LEAF_BC_OTHERS, "Chat QoL", &g_Config.m_BcChatMessageActions, nullptr},
	{"Notify about saves on map", SETTINGS_NAV_LEAF_BC_OTHERS, "Chat QoL", &g_Config.m_BcNotifySavesOnMap, nullptr},

	{"Twitch Chat", SETTINGS_NAV_LEAF_BC_OTHERS, "Others", &g_Config.m_BcTwitchChatNick, nullptr},

	{"Browser Utils", SETTINGS_NAV_LEAF_BC_OTHERS, "Others", &g_Config.m_BcAutoServerListRefresh, nullptr},
	{"Short EGO/KoG server name", SETTINGS_NAV_LEAF_BC_OTHERS, "Browser Utils", &g_Config.m_BcUseShortKogServerName, nullptr},
	{"Show finished map on EGO", SETTINGS_NAV_LEAF_BC_OTHERS, "Browser Utils", &g_Config.m_BcShowFinishedMapOnEgo, nullptr},
	{"Use BestClient MasterServer", SETTINGS_NAV_LEAF_BC_OTHERS, "Browser Utils", &g_Config.m_BcMastersrv, nullptr},

	{"Show ping colored circle in nameplates", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcNameplatePingCircle, nullptr},
	{"Show country flags in nameplates", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcNameplateCountry, nullptr},
	{"Show skin names in nameplate", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcNameplateSkins, nullptr},
	{"Freeze stars", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_ClFreezeStars, nullptr},
	{"Colored frozen tee skins", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcColorFreeze, nullptr},
	{"Show katan on frozen players", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcFrozenKatana, nullptr},
	{"Tiny Tees", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcTinyTees, nullptr},
	{"Ingame tee scale", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcTeeScale, nullptr},
	{"White feet", SETTINGS_NAV_LEAF_TC_SETTINGS, "Visual", &g_Config.m_TcWhiteFeet, nullptr},

	{"Anti Latency Tools", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcRemoveAnti, nullptr},
	{"Dont predict other players if you are frozen", SETTINGS_NAV_LEAF_TC_SETTINGS, "Anti Latency Tools", &g_Config.m_TcUnpredOthersInFreeze, nullptr},
	{"Adjust your prediction margin while frozen", SETTINGS_NAV_LEAF_TC_SETTINGS, "Anti Latency Tools", &g_Config.m_TcPredMarginInFreeze, nullptr},

	{"Anti Ping Smoothing", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcAntiPingImproved, nullptr},

	{"Voting", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcAutoVoteWhenFar, nullptr},

	{"Auto Reply", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcAutoReplyMuted, nullptr},
	{"Auto reply when tabbed out", SETTINGS_NAV_LEAF_TC_SETTINGS, "Auto Reply", &g_Config.m_TcAutoReplyMinimized, nullptr},

	{"Player Indicator", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcPlayerIndicator, nullptr},


	{"Frozen Tee Display", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcShowFrozenHud, nullptr},

	{"Tile Outlines", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcOutline, nullptr},

	{"Ghost Tools", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcShowOthersGhosts, nullptr},


	{"Tee Trails", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcTeeTrail, nullptr},
	{"Trail width", SETTINGS_NAV_LEAF_TC_SETTINGS, "Tee Trails", &g_Config.m_TcTeeTrailWidth, &g_Config.m_TcTeeTrail},
	{"Trail length", SETTINGS_NAV_LEAF_TC_SETTINGS, "Tee Trails", &g_Config.m_TcTeeTrailLength, &g_Config.m_TcTeeTrail},
	{"Trail alpha", SETTINGS_NAV_LEAF_TC_SETTINGS, "Tee Trails", &g_Config.m_TcTeeTrailAlpha, &g_Config.m_TcTeeTrail},

	{"Finish Name", SETTINGS_NAV_LEAF_TC_SETTINGS, "Settings", &g_Config.m_TcChangeNameNearFinish, nullptr},

	{"Show mini vote HUD", SETTINGS_NAV_LEAF_TC_SETTINGS, "HUD", &g_Config.m_TcMiniVoteHud, nullptr},
	{"Show position and angle (mini debug)", SETTINGS_NAV_LEAF_TC_SETTINGS, "HUD", &g_Config.m_TcMiniDebug, nullptr},
	{"Show your cursor when in free spectate", SETTINGS_NAV_LEAF_TC_SETTINGS, "HUD", &g_Config.m_TcRenderCursorSpec, nullptr},
	{"Show when you are the last alive", SETTINGS_NAV_LEAF_TC_SETTINGS, "HUD", &g_Config.m_TcNotifyWhenLast, nullptr},
	{"Show screen center lines", SETTINGS_NAV_LEAF_TC_SETTINGS, "HUD", &g_Config.m_TcShowCenter, nullptr},

	{"Status Bar", SETTINGS_NAV_LEAF_TC_STATUS_BAR, "TClient", &g_Config.m_TcStatusBar, nullptr},
	{"Status bar height", SETTINGS_NAV_LEAF_TC_STATUS_BAR, "Status Bar", &g_Config.m_TcStatusBarHeight, nullptr},
	{"Status bar alpha", SETTINGS_NAV_LEAF_TC_STATUS_BAR, "Status Bar", &g_Config.m_TcStatusBarAlpha, nullptr},
