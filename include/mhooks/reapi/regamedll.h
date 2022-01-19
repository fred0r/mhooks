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

#pragma once

#if defined(HAS_CSSDK_LIB) && defined(HAS_CORE_LIB)
#include <core/delegate.h>
#include <core/regamedll_api.h>
#include <mhooks/common/mhook.h>
#include <mhooks/reapi/reapi_mhookchain.h>

// InstallGameRules
using ReGameInstallGameRulesMChain = mhooks::ReApiMHookChain<cssdk::ReHookInstallGameRules, cssdk::GameRules*()>;
using ReGameInstallGameRulesMCallback = core::Delegate<cssdk::GameRules*(const ReGameInstallGameRulesMChain& chain)>;

// PlayerBase::Spawn
using ReGamePlayerSpawnMChain = mhooks::ReApiMHookChain<cssdk::ReHookPlayerSpawn, void(cssdk::PlayerBase*)>;
using ReGamePlayerSpawnMCallback = core::Delegate<void(const ReGamePlayerSpawnMChain& chain, cssdk::PlayerBase* player)>;

// PlayerBase::PreThink
using ReGamePlayerPreThinkMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerPreThink, void(cssdk::PlayerBase*)>;

using ReGamePlayerPreThinkMCallback =
    core::Delegate<void(const ReGamePlayerPreThinkMChain& chain, cssdk::PlayerBase* player)>;

// PlayerBase::PostThink
using ReGamePlayerPostThinkMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerPostThink, void(cssdk::PlayerBase*)>;

using ReGamePlayerPostThinkMCallback =
    core::Delegate<void(const ReGamePlayerPostThinkMChain& chain, cssdk::PlayerBase* player)>;

// PlayerBase::UpdateClientData
using ReGameUpdateClientDataMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerUpdateClientData, void(cssdk::PlayerBase*)>;

using ReGameUpdateClientDataMCallback =
    core::Delegate<void(const ReGameUpdateClientDataMChain& chain, cssdk::PlayerBase* player)>;

// PlayerBase::TakeDamage
using ReGamePlayerTakeDamageMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerTakeDamage,
                            cssdk::qboolean(cssdk::PlayerBase*, cssdk::EntityVars*, cssdk::EntityVars*, float&, int)>;

using ReGamePlayerTakeDamageMCallback =
    core::Delegate<cssdk::qboolean(const ReGamePlayerTakeDamageMChain& chain, cssdk::PlayerBase* victim,
                                   cssdk::EntityVars* inflictor, cssdk::EntityVars* attacker,
                                   float& damage, int damage_type)>;

// PlayerBase::Killed
using ReGamePlayerKilledMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerKilled, void(cssdk::PlayerBase*, cssdk::EntityVars*, int)>;

using ReGamePlayerKilledMCallback =
    core::Delegate<void(const ReGamePlayerKilledMChain& chain, cssdk::PlayerBase* victim,
                        cssdk::EntityVars* attacker, int gib)>;

// PlayerBase::Observer_IsValidTarget
using ReGameObserverIsValidTargetMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerObserverIsValidTarget, cssdk::PlayerBase*(cssdk::PlayerBase*, int, bool)>;

using ReGameObserverIsValidTargetMCallback =
    core::Delegate<cssdk::PlayerBase*(const ReGameObserverIsValidTargetMChain& chain, cssdk::PlayerBase* observer,
                                      int player_index, bool same_team)>;

// PlayerBase::StartObserver
using ReGameStartObserverMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerStartObserver, void(cssdk::PlayerBase*, cssdk::Vector&, cssdk::Vector&)>;

using ReGameStartObserverMCallback =
    core::Delegate<void(const ReGameStartObserverMChain& chain, cssdk::PlayerBase* player,
                        cssdk::Vector& position, cssdk::Vector& view_angle)>;

// PlayerBase::GetIntoGame
using ReGameGetIntoGameMChain = mhooks::ReApiMHookChain<cssdk::ReHookPlayerGetIntoGame, bool(cssdk::PlayerBase*)>;
using ReGameGetIntoGameMCallback = core::Delegate<bool(const ReGameGetIntoGameMChain& chain, cssdk::PlayerBase* player)>;

// ShowMenu
using ReGameShowMenuMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookShowMenu, void(cssdk::PlayerBase*, int, int, cssdk::qboolean, char*)>;

using ReGameShowMenuMCallback =
    core::Delegate<void(const ReGameShowMenuMChain& chain, cssdk::PlayerBase* player,
                        int slots, int display_time, cssdk::qboolean need_more, char* text)>;

// ShowVGUIMenu
using ReGameShowVguiMenuMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookShowVguiMenu, void(cssdk::PlayerBase*, cssdk::VguiMenu, int, char*)>;

using ReGameShowVguiMenuMCallback =
    core::Delegate<void(const ReGameShowVguiMenuMChain& chain, cssdk::PlayerBase* player,
                        cssdk::VguiMenu menu, int mask, char* old_menu)>;

// HandleMenu_ChooseTeam
using ReGameHandleMenuChooseTeamMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookHandleMenuChooseTeam,
                            cssdk::qboolean(cssdk::PlayerBase*, cssdk::ChooseTeamMenuSlot)>;

using ReGameHandleMenuChooseTeamMCallback =
    core::Delegate<cssdk::qboolean(const ReGameHandleMenuChooseTeamMChain& chain,
                                   cssdk::PlayerBase* player, cssdk::ChooseTeamMenuSlot slot)>;

// HandleMenu_ChooseAppearance
using ReGameHandleMenuChooseAppearanceMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookHandleMenuChooseAppearance, void(cssdk::PlayerBase*, int)>;

using ReGameHandleMenuChooseAppearanceMCallback =
    core::Delegate<void(const ReGameHandleMenuChooseAppearanceMChain& chain, cssdk::PlayerBase* player, int slot)>;

// GetForceCamera
using ReGameGetForceCameraMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookGetForceCamera, int(cssdk::PlayerBase*)>;

using ReGameGetForceCameraMCallback =
    core::Delegate<int(const ReGameGetForceCameraMChain& chain, cssdk::PlayerBase* observer)>;

// PlayerBlind
using ReGamePlayerBlindMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerBlind,
                            void(cssdk::PlayerBase*, cssdk::EntityVars*, cssdk::EntityVars*,
                                 float, float, int, cssdk::Vector&)>;

using ReGamePlayerBlindMCallback =
    core::Delegate<void(const ReGamePlayerBlindMChain& chain, cssdk::PlayerBase* victim, cssdk::EntityVars* inflictor,
                        cssdk::EntityVars* attacker, float fade_time, float fade_hold, int alpha, cssdk::Vector& color)>;

// PlayerMakeBomber
using ReGamePlayerMakeBomberMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookPlayerMakeBomber, bool(cssdk::PlayerBase*)>;

using ReGamePlayerMakeBomberMCallback =
    core::Delegate<bool(const ReGamePlayerMakeBomberMChain& chain, cssdk::PlayerBase* player)>;

// CanPlayerHearPlayer
using ReGameCanPlayerHearPlayerMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookGameRulesCanPlayerHearPlayer, bool(cssdk::PlayerBase*, cssdk::PlayerBase*)>;

using ReGameCanPlayerHearPlayerMCallback =
    core::Delegate<bool(const ReGameCanPlayerHearPlayerMChain& chain,
                        cssdk::PlayerBase* listener, cssdk::PlayerBase* talker)>;

// RoundFreezeEnd
using ReGameRulesRoundFreezeEndMChain = mhooks::ReApiMHookChain<cssdk::ReHookGameRulesOnRoundFreezeEnd, void()>;
using ReGameRulesRoundFreezeEndMCallback = core::Delegate<void(const ReGameRulesRoundFreezeEndMChain& chain)>;

// RoundEnd
using ReGameRulesRoundEndMChain =
    mhooks::ReApiMHookChain<cssdk::ReHookRoundEnd, bool(int, cssdk::ScenarioEventEndRound, float)>;

using ReGameRulesRoundEndMCallback =
    core::Delegate<bool(const ReGameRulesRoundEndMChain& chain, int win_status,
                        cssdk::ScenarioEventEndRound event, float delay)>;

// RestartRound
using ReGameRestartRoundMChain = mhooks::ReApiMHookChain<cssdk::ReHookGameRulesRestartRound, void()>;
using ReGameRestartRoundMCallback = core::Delegate<void(const ReGameRestartRoundMChain& chain)>;

// ResetMaxSpeed
using ReGameResetMaxSpeedMChain = mhooks::ReApiMHookChain<cssdk::ReHookPlayerResetMaxSpeed, void(cssdk::PlayerBase*)>;
using ReGameResetMaxSpeedMCallback = core::Delegate<void(const ReGameResetMaxSpeedMChain& chain, cssdk::PlayerBase* player)>;

// CBasePlayer::OnSpawnEquip
using ReGamePlayerSpawnEquipMChain = mhooks::ReApiMHookChain<cssdk::ReHookPlayerOnSpawnEquip, void(cssdk::PlayerBase*, bool, bool)>;
using ReGamePlayerSpawnEquipMCallback = core::Delegate<void(const ReGamePlayerSpawnEquipMChain& chain, cssdk::PlayerBase* player, bool add_default, bool equip_game)>;

// CBasePlayer::GiveDefaultItems
using ReGamePlayerGiveDefaultItemsMChain = mhooks::ReApiMHookChain<cssdk::ReHookPlayerGiveDefaultItems, void(cssdk::PlayerBase*)>;
using ReGamePlayerGiveDefaultItemsMCallback = core::Delegate<void(const ReGamePlayerGiveDefaultItemsMChain& chain, cssdk::PlayerBase* player)>;

namespace mhooks
{
    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameInstallGameRules(
        ReGameInstallGameRulesMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerSpawn(
        ReGamePlayerSpawnMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerPreThink(
        ReGamePlayerPreThinkMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerPostThink(
        ReGamePlayerPostThinkMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameUpdateClientData(
        ReGameUpdateClientDataMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerTakeDamage(
        ReGamePlayerTakeDamageMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerKilled(
        ReGamePlayerKilledMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameObserverIsValidTarget(
        ReGameObserverIsValidTargetMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameStartObserver(
        ReGameStartObserverMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameGetIntoGame(
        ReGameGetIntoGameMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameShowMenu(
        ReGameShowMenuMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameShowVguiMenu(
        ReGameShowVguiMenuMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameHandleMenuChooseTeam(
        ReGameHandleMenuChooseTeamMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameHandleMenuChooseAppearance(
        ReGameHandleMenuChooseAppearanceMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameGetForceCamera(
        ReGameGetForceCameraMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerBlind(
        ReGamePlayerBlindMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerMakeBomber(
        ReGamePlayerMakeBomberMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameCanPlayerHearPlayer(
        ReGameCanPlayerHearPlayerMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameRulesRoundFreezeEnd(
        ReGameRulesRoundFreezeEndMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameRulesRoundEnd(
        ReGameRulesRoundEndMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameRestartRound(
        ReGameRestartRoundMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGameResetMaxSpeed(
        ReGameResetMaxSpeedMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerSpawnEquip(
        ReGamePlayerSpawnEquipMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief N/D
     *
     * @param callback Hook callback function.
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookReGamePlayerGiveDefaultItems(
        ReGamePlayerGiveDefaultItemsMCallback callback,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);
}
#endif
