/*
 *  Copyright (C) 2020 the_hunter
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#if defined(HAS_CSSDK_LIB) && defined(HAS_CORE_LIB)
#include "createhook.h"
#include <mhooks/reapi/rehlds.h>

using namespace core;
using namespace cssdk;
using namespace rehlds_api;
using namespace mhooks::detail;

namespace mhooks
{
    MHook* MHookReHldsActivateServer(const ReHldsActivateServerMCallback callback,
                                     const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvActivateServer;
        return CreateHook<ReHldsSvActivateServer>(HookChains()->SvActivateServer(), callback, priority, enable);
    }

    MHook* MHookReHldsNotifyClientConnect(const ReHldsNotifyClientConnectMCallback callback,
                                          const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSteamNotifyClientConnect;
        return CreateHook<ReHldsSteamNotifyClientConnect>(HookChains()->SteamNotifyClientConnect(),
                                                          callback, priority, enable);
    }

    MHook* MHookReHldsNotifyBotConnect(const ReHldsNotifyBotConnectMCallback callback,
                                       const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSteamNotifyBotConnect;
        return CreateHook<ReHldsSteamNotifyBotConnect>(HookChains()->SteamNotifyBotConnect(),
                                                       callback, priority, enable);
    }

    MHook* MHookReHldsConnectClient(const ReHldsConnectClientMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvConnectClient;
        return CreateHook<ReHldsSvConnectClient>(HookChains()->SvConnectClient(), callback, priority, enable);
    }

    MHook* MHookReHldsClientConnected(const ReHldsClientConnectedMCallback callback,
                                      const HookChainPriority priority, const bool enable)
    {
        struct ReHldsClientConnected;
        return CreateHook<ReHldsClientConnected>(HookChains()->ClientConnected(), callback, priority, enable);
    }

    MHook* MHookReHldsNotifyClientDisconnect(const ReHldsNotifyClientDisconnectMCallback callback,
                                             const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSteamNotifyClientDisconnect;
        return CreateHook<ReHldsSteamNotifyClientDisconnect>(HookChains()->SteamNotifyClientDisconnect(),
                                                             callback, priority, enable);
    }

    MHook* MHookReHldsDropClient(const ReHldsDropClientMCallback callback,
                                 const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvDropClient;
        return CreateHook<ReHldsSvDropClient>(HookChains()->SvDropClient(), callback, priority, enable);
    }

    MHook* MHookReHldsFrame(const ReHldsFrameMCallback callback,
                            const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvFrame;
        return CreateHook<ReHldsSvFrame>(HookChains()->SvFrame(), callback, priority, enable);
    }

    MHook* MHookReHldsBuildSoundMsg(const ReHldsBuildSoundMsgMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReHldsPfBuildSoundMsgI;
        return CreateHook<ReHldsPfBuildSoundMsgI>(HookChains()->PfBuildSoundMsgI(), callback, priority, enable);
    }

    MHook* MHookReHldsStartSound(const ReHldsStartSoundMCallback callback,
                                 const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvStartSound;
        return CreateHook<ReHldsSvStartSound>(HookChains()->SvStartSound(), callback, priority, enable);
    }

    MHook* MHookReHldsEmitSound2(const ReHldsEmitSound2MCallback callback,
                                 const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvEmitSound2;
        return CreateHook<ReHldsSvEmitSound2>(HookChains()->SvEmitSound2(), callback, priority, enable);
    }

    MHook* MHookReHldsWriteFullClientUpdate(const ReHldsWriteFullClientUpdateMCallback callback,
                                            const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvWriteFullClientUpdate;
        return CreateHook<ReHldsSvWriteFullClientUpdate>(HookChains()->SvWriteFullClientUpdate(),
                                                         callback, priority, enable);
    }

    MHook* MHookReHldsCvarDirectSet(const ReHldsCvarDirectSetMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReHldsCvarDirectSet;
        return CreateHook<ReHldsCvarDirectSet>(HookChains()->CvarDirectSet(), callback, priority, enable);
    }

    MHook* MHookReHldsSpawn(const ReHldsSpawnMCallback callback, const HookChainPriority priority, const bool enable)
    {
        struct ReHldsSvSpawnF;
        return CreateHook<ReHldsSvSpawnF>(HookChains()->SvSpawnF(), callback, priority, enable);
    }

    MHook* MHookReHldsLoadBrushModel(const ReHldsLoadBrushModelMCallback callback,
                                     const HookChainPriority priority, const bool enable)
    {
        struct ReHldsModLoadBrushModel;
        return CreateHook<ReHldsModLoadBrushModel>(HookChains()->ModLoadBrushModel(), callback, priority, enable);
    }

    MHook* MHookReHldsLoadStudioModel(const ReHldsLoadStudioModelMCallback callback,
                                      const HookChainPriority priority, const bool enable)
    {
        struct ReHldsModLoadStudioModel;
        return CreateHook<ReHldsModLoadStudioModel>(HookChains()->ModLoadStudioModel(), callback, priority, enable);
    }

    MHook* MHookReHldsGetEntityInit(const ReHldsGetEntityInitMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReHldsGetEntityInit;
        return CreateHook<ReHldsGetEntityInit>(HookChains()->GetEntityInit(), callback, priority, enable);
    }

    MHook* MHookReHldsCreatePacketEntities(const ReHldsCreatePacketEntitiesMCallback callback,
                                           const HookChainPriority priority, const bool enable)
    {
        struct ReHldsCreatePacketEntities;
        return CreateHook<ReHldsCreatePacketEntities>(HookChains()->SvCreatePacketEntities(), callback, priority, enable);
    }
}
#endif
