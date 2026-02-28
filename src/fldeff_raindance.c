#include "global.h"
#include "event_data.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_weather.h"
#include "fldeff.h"
#include "palette.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "task.h"
#include "util.h"
#include "constants/battle_anim.h"
#include "constants/field_effects.h"
#include "constants/songs.h"
#include "constants/weather.h"

static void FieldCallback_RainDance(void);
static void FieldMove_RainDance(void);
static void EndRainDanceTask(u8 taskId);

bool32 SetUpFieldMove_RainDance(void)
{
    if (gWeather.currWeather == WEATHER_RAIN || gWeather.currWeather == WEATHER_RAIN_THUNDERSTORM
    || gWeather.currWeather == WEATHER_DOWNPOUR || gWeather.currWeather == WEATHER_UNDERWATER)
        return FALSE;

    gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
    gPostMenuFieldCallback = FieldCallback_RainDance;
    return TRUE;
}

static void FieldCallback_RainDance(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_UseRainDance);
}

bool8 FldEff_RainDance(void)
{
    u8 taskId = CreateFieldMoveTask();

    gTasks[taskId].data[8] = (uintptr_t)FieldMove_RainDance >> 16;
    gTasks[taskId].data[9] = (uintptr_t)FieldMove_RainDance;
    return FALSE;
}

#define tFrameCount data[0]

static void FieldMove_RainDance(void)
{
    SetWeatherScreenFadeOut();
    u32 taskId = CreateTask(EndRainDanceTask, 0);
    gTasks[taskId].tFrameCount = 0;
};

static void EndRainDanceTask(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    gTasks[taskId].tFrameCount++;

    if (gTasks[taskId].tFrameCount != 120)
        return;

    DestroyTask(taskId);
    ScriptContext_Enable();
}

#undef tFrameCount
