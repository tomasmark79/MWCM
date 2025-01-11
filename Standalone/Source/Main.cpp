
#include <WMCMLib/WMCMLib.hpp>
#include <wmcmlib/version.h>

#include <memory>
#include <chrono>
#include <iostream>
#include <thread>

int main()
{
    std::unique_ptr<WMCMLib> lib = std::make_unique<WMCMLib>(); // cpp14 +
    // std::unique_ptr<WMCMLib> lib(new WMCMLib()); // cpp11 +

    // remove me ------------------👇🏻
    std::cout << "Wait for 5 seconds please ..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "Bye bye!" << std::endl;
    // remove me ------------------👆🏻

    return 0;
}
