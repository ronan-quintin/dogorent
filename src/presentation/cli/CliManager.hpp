#ifndef CLIMANAGER_HPP
#define CLIMANAGER_HPP

#include "business/TenantService.hpp"

class CliManager {
public:
    CliManager(TenantService& tenantService);

    void run(); // Boucle interactive pour gérer les commandes

private:
    TenantService& tenantService;

    void handleCommand(const std::string& command);
    void showHelp() const;
};

#endif
