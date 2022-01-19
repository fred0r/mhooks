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
#include <mhooks/reapi/regamedll.h>

using namespace core;
using namespace cssdk;
using namespace regamedll_api;
using namespace mhooks::detail;

namespace mhooks
{
    MHook* MHookReGameInstallGameRules(const ReGameInstallGameRulesMCallback callback,
                                       const HookChainPriority priority, const bool enable)
    {
        struct ReGameInstallGameRules;
        return CreateHook<ReGameInstallGameRules>(HookChains()->InstallGameRules(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerSpawn(const ReGamePlayerSpawnMCallback callback,
                                  const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerSpawn;
        return CreateHook<ReGamePlayerSpawn>(HookChains()->PlayerSpawn(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerPreThink(const ReGamePlayerPreThinkMCallback callback,
                                     const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerPreThink;
        return CreateHook<ReGamePlayerPreThink>(HookChains()->PlayerPreThink(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerPostThink(const ReGamePlayerPostThinkMCallback callback,
                                      const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerPostThink;
        return CreateHook<ReGamePlayerPostThink>(HookChains()->PlayerPostThink(), callback, priority, enable);
    }

    MHook* MHookReGameUpdateClientData(const ReGameUpdateClientDataMCallback callback,
                                       const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerUpdateClientData;
        return CreateHook<ReGamePlayerUpdateClientData>(HookChains()->PlayerUpdateClientData(),
                                                        callback, priority, enable);
    }

    MHook* MHookReGamePlayerTakeDamage(const ReGamePlayerTakeDamageMCallback callback,
                                       const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerTakeDamage;
        return CreateHook<ReGamePlayerTakeDamage>(HookChains()->PlayerTakeDamage(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerKilled(const ReGamePlayerKilledMCallback callback,
                                   const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerKilled;
        return CreateHook<ReGamePlayerKilled>(HookChains()->PlayerKilled(), callback, priority, enable);
    }

    MHook* MHookReGameObserverIsValidTarget(const ReGameObserverIsValidTargetMCallback callback,
                                            const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerObserverIsValidTarget;
        return CreateHook<ReGamePlayerObserverIsValidTarget>(HookChains()->PlayerObserverIsValidTarget(),
                                                             callback, priority, enable);
    }

    MHook* MHookReGameStartObserver(const ReGameStartObserverMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerStartObserver;
        return CreateHook<ReGamePlayerStartObserver>(HookChains()->PlayerStartObserver(), callback, priority, enable);
    }

    MHook* MHookReGameGetIntoGame(const ReGameGetIntoGameMCallback callback,
                                  const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerGetIntoGame;
        return CreateHook<ReGamePlayerGetIntoGame>(HookChains()->PlayerGetIntoGame(), callback, priority, enable);
    }

    MHook* MHookReGameShowMenu(const ReGameShowMenuMCallback callback,
                               const HookChainPriority priority, const bool enable)
    {
        struct ReGameShowMenu;
        return CreateHook<ReGameShowMenu>(HookChains()->ShowMenu(), callback, priority, enable);
    }

    MHook* MHookReGameShowVguiMenu(const ReGameShowVguiMenuMCallback callback,
                                   const HookChainPriority priority, const bool enable)
    {
        struct ReGameShowVguiMenu;
        return CreateHook<ReGameShowVguiMenu>(HookChains()->ShowVguiMenu(), callback, priority, enable);
    }

    MHook* MHookReGameHandleMenuChooseTeam(const ReGameHandleMenuChooseTeamMCallback callback,
                                           const HookChainPriority priority, const bool enable)
    {
        struct ReGameHandleMenuChooseTeam;
        return CreateHook<ReGameHandleMenuChooseTeam>(HookChains()->HandleMenuChooseTeam(), callback, priority, enable);
    }

    MHook* MHookReGameHandleMenuChooseAppearance(const ReGameHandleMenuChooseAppearanceMCallback callback,
                                                 const HookChainPriority priority, const bool enable)
    {
        struct ReGameHandleMenuChooseAppearance;
        return CreateHook<ReGameHandleMenuChooseAppearance>(HookChains()->HandleMenuChooseAppearance(),
                                                            callback, priority, enable);
    }

    MHook* MHookReGameGetForceCamera(const ReGameGetForceCameraMCallback callback,
                                     const HookChainPriority priority, const bool enable)
    {
        struct ReGameGetForceCamera;
        return CreateHook<ReGameGetForceCamera>(HookChains()->GetForceCamera(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerBlind(const ReGamePlayerBlindMCallback callback,
                                  const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerBlind;
        return CreateHook<ReGamePlayerBlind>(HookChains()->PlayerBlind(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerMakeBomber(const ReGamePlayerMakeBomberMCallback callback,
                                       const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerMakeBomber;
        return CreateHook<ReGamePlayerMakeBomber>(HookChains()->PlayerMakeBomber(), callback, priority, enable);
    }

    MHook* MHookReGameCanPlayerHearPlayer(const ReGameCanPlayerHearPlayerMCallback callback,
                                          const HookChainPriority priority, const bool enable)
    {
        struct ReGameCanPlayerHearPlayer;
        return CreateHook<ReGameCanPlayerHearPlayer>(HookChains()->GameRulesCanPlayerHearPlayer(), callback, priority, enable);
    }

    MHook* MHookReGameRulesRoundFreezeEnd(const ReGameRulesRoundFreezeEndMCallback callback,
                                          const HookChainPriority priority, const bool enable)
    {
        struct ReGameRulesRoundFreezeEnd;
        return CreateHook<ReGameRulesRoundFreezeEnd>(HookChains()->GameRulesOnRoundFreezeEnd(), callback, priority, enable);
    }

    MHook* MHookReGameRulesRoundEnd(const ReGameRulesRoundEndMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReGameRulesRoundEnd;
        return CreateHook<ReGameRulesRoundEnd>(HookChains()->RoundEnd(), callback, priority, enable);
    }

    MHook* MHookReGameRestartRound(const ReGameRestartRoundMCallback callback,
                                   const HookChainPriority priority, const bool enable)
    {
        struct ReGameRulesRestartRound;
        return CreateHook<ReGameRulesRestartRound>(HookChains()->GameRulesRestartRound(), callback, priority, enable);
    }

    MHook* MHookReGameResetMaxSpeed(const ReGameResetMaxSpeedMCallback callback,
                                    const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerResetMaxSpeed;
        return CreateHook<ReGamePlayerResetMaxSpeed>(HookChains()->PlayerResetMaxSpeed(), callback, priority, enable);
    }

    MHook* MHookReGamePlayerSpawnEquip(const ReGamePlayerSpawnEquipMCallback callback,
                                       const HookChainPriority priority, const bool enable)
    {
        struct ReGamePlayerSpawnEquip;
        return CreateHook<ReGamePlayerSpawnEquip>(HookChains()->PlayerOnSpawnEquip(), callback, priority, enable);
    }
}
#endif
