#include "WMCMLib/WMCMLib.hpp"

// #include <EmojiTools/EmojiTools.hpp> // yet dissabled
#include <iostream>
#include <wmcmlib/version.h>

WMCMLib::WMCMLib()
{
    std::cout << "--- WMCMLib v." << WMCMLIB_VERSION << " instantiated ---" << std::endl;
}

WMCMLib::~WMCMLib()
{
    std::cout << "--- WMCMLib uninstantiated ---" << std::endl;
}
