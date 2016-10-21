/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: MIT
    Started: 2016-10-21
    Notes:
        Entrypoint for the module, exports per the 2016 standard.
*/

#include "STDInclude.h"
#include "Servers/All.h"
#include <cstdarg>

extern "C"
{
    EXPORT_ATTR struct IServer *GetServerinstance(const char *Hostname)
    {
        /*
            Return a new instance of a derived IServer class.
        */
        return nullptr;
    }
}

#ifdef _WIN32
#include <Windows.h>
BOOLEAN WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
    switch ( nReason )
    {
    case DLL_PROCESS_ATTACH:
        // Rather not handle all thread updates.
        DisableThreadLibraryCalls(hDllHandle);

        // Clean the logfile so we only save this session.
        AYRIA::Debug::DeleteLogfile();
        break;
    }

    return TRUE;
}

#else
void __attribute__((constructor)) SOMain()
{
    // Clean the logfile so we only save this session.
    AYRIA::Debug::DeleteLogfile();
}

#endif
