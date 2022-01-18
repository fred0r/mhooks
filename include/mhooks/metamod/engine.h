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

#ifdef HAS_METAMOD_LIB
#include <core/delegate.h>
#include <metamod/engine_hooks.h>
#include <mhooks/common/mhook.h>
#include <mhooks/metamod/metamod_mhookchain.h>

// MessageBegin
using EngineMessageBeginMChain = mhooks::MetamodMHookChain<void(cssdk::MessageType, int, const float*, cssdk::Edict*)>;
using EngineMessageBeginMCallback = core::Delegate<void(const EngineMessageBeginMChain& chain, cssdk::MessageType type,
                                                        int id, const float* origin, cssdk::Edict* client)>;

// MessageEnd
using EngineMessageEndMChain = mhooks::MetamodMHookChain<void()>;
using EngineMessageEndMCallback = core::Delegate<void(const EngineMessageEndMChain& chain)>;

// WriteByte
using EngineWriteByteMChain = mhooks::MetamodMHookChain<void(int)>;
using EngineWriteByteMCallback = core::Delegate<void(const EngineWriteByteMChain& chain, int value)>;

// WriteChar
using EngineWriteCharMChain = mhooks::MetamodMHookChain<void(int)>;
using EngineWriteCharMCallback = core::Delegate<void(const EngineWriteCharMChain& chain, int value)>;

// WriteShort
using EngineWriteShortMChain = mhooks::MetamodMHookChain<void(int)>;
using EngineWriteShortMCallback = core::Delegate<void(const EngineWriteShortMChain& chain, int value)>;

// WriteLong
using EngineWriteLongMChain = mhooks::MetamodMHookChain<void(int)>;
using EngineWriteLongMCallback = core::Delegate<void(const EngineWriteLongMChain& chain, int value)>;

// WriteAngle
using EngineWriteAngleMChain = mhooks::MetamodMHookChain<void(float)>;
using EngineWriteAngleMCallback = core::Delegate<void(const EngineWriteAngleMChain& chain, float value)>;

// WriteCoord
using EngineWriteCoordMChain = mhooks::MetamodMHookChain<void(float)>;
using EngineWriteCoordMCallback = core::Delegate<void(const EngineWriteCoordMChain& chain, float value)>;

// WriteString
using EngineWriteStringMChain = mhooks::MetamodMHookChain<void(const char*)>;
using EngineWriteStringMCallback = core::Delegate<void(const EngineWriteStringMChain& chain, const char* value)>;

// WriteEntity
using EngineWriteEntityMChain = mhooks::MetamodMHookChain<void(int)>;
using EngineWriteEntityMCallback = core::Delegate<void(const EngineWriteEntityMChain& chain, int value)>;

// RegUserMessage
using EngineRegUserMessageMChain = mhooks::MetamodMHookChain<int(const char*, int)>;
using EngineRegUserMessageMCallback = core::Delegate<int(const EngineRegUserMessageMChain& chain, const char* name, int size)>;

// PrecacheModel
using EnginePrecacheModelMChain = mhooks::MetamodMHookChain<int(const char*)>;
using EnginePrecacheModelMCallback = core::Delegate<int(const EnginePrecacheModelMChain& chain, const char* path)>;

// PrecacheSound
using EnginePrecacheSoundMChain = mhooks::MetamodMHookChain<int(const char*)>;
using EnginePrecacheSoundMCallback = core::Delegate<int(const EnginePrecacheSoundMChain& chain, const char* path)>;

namespace mhooks
{
    /**
     * @brief Begins a new network message.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineMessageBegin(
        EngineMessageBeginMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Ends a network message.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineMessageEnd(
        EngineMessageEndMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single unsigned byte.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteByte(
        EngineWriteByteMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single character.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteChar(
        EngineWriteCharMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single unsigned short.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteShort(
        EngineWriteShortMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single unsigned integer.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteLong(
        EngineWriteLongMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single angle value.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteAngle(
        EngineWriteAngleMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single coordinate value.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteCoord(
        EngineWriteCoordMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single null terminated string.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteString(
        EngineWriteStringMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Writes a single entity index.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineWriteEntity(
        EngineWriteEntityMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Registers a user message.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEngineRegUserMessage(
        EngineRegUserMessageMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Precaches a model.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEnginePrecacheModel(
        EnginePrecacheModelMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);

    /**
     * @brief Precaches a sound.
     *
     * @param callback Hook callback function.
     * @param post Is this a post hook?
     * @param priority Hook priority.
     * @param enable Should a hook be enabled?
    */
    ATTR_MINSIZE MHook* MHookEnginePrecacheSound(
        EnginePrecacheSoundMCallback callback, bool post,
        cssdk::HookChainPriority priority = cssdk::HookChainPriority::Normal, bool enable = true);
}
#endif
