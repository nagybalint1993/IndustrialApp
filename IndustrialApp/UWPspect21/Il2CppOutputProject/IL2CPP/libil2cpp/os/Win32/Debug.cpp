#include "os/c-api/il2cpp-config-platforms.h"

#if IL2CPP_TARGET_WINDOWS

#include "os/Debug.h"
#include "os/Win32/WindowsHeaders.h"

namespace il2cpp
{
namespace os
{
    bool Debug::IsDebuggerPresent()
    {
        return ::IsDebuggerPresent() != FALSE;
    }
}
}

#endif
