#include "global.h"
#include "item_use.h"
#include "data.h"
#include "event_data.h"
#include "event_object_lock.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "fieldmap.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_skills.h"
#include "fldeff.h"
#include "item.h"
#include "item_menu.h"
#include "item_use.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "palette.h"
#include "pokemon.h"
#include "script.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "constants/event_bg.h"
#include "constants/event_objects.h"
#include "constants/item_effects.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/trainer_types.h"


// Torna itens ocultos em visíveis se estiverem ao alcance da tela
void FieldSkillReveal(void)
{
    u32 i;
    u16 itemX, itemY;
    s16 playerX, playerY, distanceX, distanceY;
    u8 objectEventId;
    const struct MapEvents *eventos = gMapHeader.events;
    PlayerGetDestCoords(&playerX, &playerY);

    for (i = 0; i < eventos->bgEventCount; i++)
    {
        // Check if there are any hidden items on the current map that haven't been picked up
        if (eventos->bgEvents[i].kind == BG_EVENT_HIDDEN_ITEM 
            && !FlagGet(eventos->bgEvents[i].bgUnion.hiddenItem.hiddenItemId + FLAG_HIDDEN_ITEMS_START))
        {
            itemX = eventos->bgEvents[i].x + MAP_OFFSET;
            itemY = eventos->bgEvents[i].y + MAP_OFFSET;
            distanceX = itemX - playerX;
            distanceY = itemY - playerY;

            // Player can see 7 metatiles on either side horizontally
            // and 5 metatiles on either side vertically
            if (distanceX >= -7 && distanceX <= 7 && distanceY >= -5 && distanceY <= 5
            && (distanceX || distanceY))
            {
                if (FlagGet(FLAG_TEMP_5))
                {
                    SpawnSpecialObjectEventParameterized(OBJ_EVENT_GFX_POKE_BALL, 
                    MOVEMENT_TYPE_LOOK_AROUND, LOCALID_NONE, (s16)itemX, (s16)itemY, ELEVATION_DEFAULT);
                }
                else
                {
                    // remove o item spawnado
                    objectEventId = GetObjectEventIdByXY(((s16)itemX), (s16)itemY);
                    RemoveObjectEvent(&gObjectEvents[objectEventId]);
                }

            }

        }
    }
}