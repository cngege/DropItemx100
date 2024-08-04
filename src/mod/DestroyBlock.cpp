#include <mc/world/level/block/Block.h>
#include <mc/world/actor/player/Player.h>
#include <ll/api/memory/Hook.h>

namespace DestroyBlock {

LL_AUTO_TYPE_INSTANCE_HOOK(
    BlockHook,
    ll::memory::HookPriority::Normal,
    Block,
    "?playerDestroy@Block@@QEBAXAEAVPlayer@@AEBVBlockPos@@@Z",
    void,
    void* player,
    void* pos
)
{
    for (int i = 0; i < 99; i++) {
        origin(player, pos);
    }
    return origin(player,pos);
}
}